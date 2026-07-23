/*
 * XREFs of RtlLookupFunctionEntry @ 0x180041B10
 * Callers:
 *     InitSpecialMachineFrames @ 0x18002C2A4 (InitSpecialMachineFrames.c)
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x180045A60 (RtlDispatchException.c)
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     RtlpSameFunction @ 0x1800E8AEC (RtlpSameFunction.c)
 *     RtlInitializeHistoryTable @ 0x1800ECACC (RtlInitializeHistoryTable.c)
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x18011EAE0 (__report_gsfailure.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1800430E0 (RtlpxLookupFunctionTable.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x1800E00D0 (RtlpLookupDynamicFunctionEntry.c)
 */

PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry(
        ULONG64 ControlPc,
        PULONG64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  __int64 v6; // r8
  unsigned int v7; // r10d
  ULONG64 v8; // rbx
  ULONG64 v9; // rdx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v10; // r9
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v11; // rax
  int v12; // r11d
  int k; // r14d
  int v14; // r10d
  PRUNTIME_FUNCTION FunctionEntry; // rcx
  __int64 v16; // rdx
  PRUNTIME_FUNCTION result; // rax
  DWORD j; // edx
  DWORD64 v19; // r8
  __int64 UnwindInfoAddress; // rax
  __int64 Count; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  BYTE GlobalHint; // cl
  unsigned int i; // r9d
  unsigned int *v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int128 v29; // [rsp+20h] [rbp-28h]
  unsigned int v30; // [rsp+34h] [rbp-14h]

  if ( !HistoryTable )
    goto LABEL_2;
  if ( !HistoryTable->Once
    || (HistoryTable->Once = 0,
        v28 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_1801E6355 + 6],
        (result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_1801E6355 + 8]) == 0LL)
    || ControlPc < v28 + result->BeginAddress
    || ControlPc >= v28 + result->EndAddress )
  {
    if ( HistoryTable->Search )
    {
      if ( ControlPc >= qword_1801E6358 && ControlPc < qword_1801E6360 )
      {
        GlobalHint = HistoryTable->GlobalHint;
        for ( i = GlobalHint; i < RtlpUnwindHistoryTable[0]; ++i )
        {
          v26 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * i + 8];
          v27 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * i + 6];
          if ( ControlPc >= v27 + *v26 && ControlPc < v27 + v26[1] )
          {
            result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * i + 8];
            HistoryTable->GlobalHint = GlobalHint + 1;
            *ImageBase = v27;
            return result;
          }
        }
      }
      if ( ControlPc >= HistoryTable->LowAddress && ControlPc < HistoryTable->HighAddress )
      {
        for ( j = HistoryTable->LocalHint; j < HistoryTable->Count; ++j )
        {
          v19 = HistoryTable->Entry[j].ImageBase;
          FunctionEntry = HistoryTable->Entry[j].FunctionEntry;
          if ( ControlPc >= v19 + FunctionEntry->BeginAddress && ControlPc < v19 + FunctionEntry->EndAddress )
          {
            ++HistoryTable->LocalHint;
            *ImageBase = v19;
            UnwindInfoAddress = FunctionEntry->UnwindInfoAddress;
            if ( (UnwindInfoAddress & 1) == 0 )
              return FunctionEntry;
            return (PRUNTIME_FUNCTION)(v19 + UnwindInfoAddress - 1);
          }
        }
      }
    }
LABEL_2:
    v30 = 0;
    v29 = 0LL;
    if ( ControlPc < *((_QWORD *)&xmmword_1801E6440 + 1)
      || ControlPc >= *((_QWORD *)&xmmword_1801E6440 + 1) + (unsigned __int64)(unsigned int)qword_1801E6450 )
    {
      v6 = RtlpxLookupFunctionTable((PVOID)ControlPc);
    }
    else
    {
      *((_QWORD *)&v29 + 1) = *((_QWORD *)&xmmword_1801E6440 + 1);
      v6 = xmmword_1801E6440;
      v30 = HIDWORD(qword_1801E6450);
    }
    if ( v6 )
    {
      *ImageBase = *((_QWORD *)&v29 + 1);
      v7 = v30 / 0xC;
      if ( v30 / 0xC )
      {
        v8 = ControlPc - *ImageBase;
        v9 = *(unsigned int *)(v6 + 12LL * (v7 - 1));
        v10 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + 12LL * (v7 - 1));
        v11 = 0LL;
        if ( v8 < v9 )
        {
          v12 = v7 - 2;
          for ( k = 0; v12 >= k; LODWORD(v9) = *(_DWORD *)(v6 + 12LL * v14) )
          {
            v14 = (k + v12) >> 1;
            v10 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + 12LL * v14);
            if ( v8 < v10->BeginAddress )
            {
              v12 = v14 - 1;
            }
            else
            {
              LODWORD(v9) = *(_DWORD *)(v6 + 12LL * v14);
              if ( v8 < v10[1].BeginAddress )
                break;
              k = v14 + 1;
            }
          }
        }
        if ( v8 >= (unsigned int)v9 && v8 < v10->EndAddress )
          v11 = v10;
      }
      else
      {
        v11 = 0LL;
      }
    }
    else
    {
      v11 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlpLookupDynamicFunctionEntry(ControlPc, ImageBase);
    }
    if ( !v11 )
      goto LABEL_17;
    if ( !HistoryTable )
      goto LABEL_17;
    if ( HistoryTable->Search )
      goto LABEL_17;
    Count = HistoryTable->Count;
    if ( (unsigned int)Count >= 0xC )
      goto LABEL_17;
    HistoryTable->Count = Count + 1;
    HistoryTable->Entry[Count].ImageBase = *ImageBase;
    HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v11;
    v22 = *ImageBase + v11->BeginAddress;
    v23 = *ImageBase + v11->EndAddress;
    if ( v22 < HistoryTable->LowAddress )
      HistoryTable->LowAddress = v22;
    if ( v23 > HistoryTable->HighAddress )
    {
      HistoryTable->HighAddress = v23;
      FunctionEntry = v11;
    }
    else
    {
LABEL_17:
      FunctionEntry = v11;
      if ( !v11 )
        return FunctionEntry;
    }
    v16 = v11->UnwindInfoAddress;
    if ( (v16 & 1) != 0 )
      return (PRUNTIME_FUNCTION)(v16 + *ImageBase - 1);
    return FunctionEntry;
  }
  *ImageBase = v28;
  return result;
}
