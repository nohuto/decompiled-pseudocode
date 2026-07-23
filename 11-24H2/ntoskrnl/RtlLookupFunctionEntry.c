/*
 * XREFs of RtlLookupFunctionEntry @ 0x140232930
 * Callers:
 *     RtlDispatchException @ 0x140231750 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402322B0 (RtlUnwindEx.c)
 *     RtlpSameFunction @ 0x14047EF18 (RtlpSameFunction.c)
 *     RtlRaiseException @ 0x1405E5EE0 (RtlRaiseException.c)
 *     MmWriteSystemImageTracepoint @ 0x14067EDF0 (MmWriteSystemImageTracepoint.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x14073BC00 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 *     KiInitDynamicTraceSupport @ 0x140C2C3C0 (KiInitDynamicTraceSupport.c)
 *     RtlpInitMachineFrameEntries @ 0x140C38F00 (RtlpInitMachineFrameEntries.c)
 *     RtlInitializeHistoryTable @ 0x140C38F50 (RtlInitializeHistoryTable.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x140233240 (RtlpxLookupFunctionTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

PRUNTIME_FUNCTION __cdecl RtlLookupFunctionEntry(
        DWORD64 ControlPc,
        PDWORD64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  __int64 v6; // rsi
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v7; // r9
  __int64 v8; // r8
  unsigned __int128 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r10
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v13; // rdi
  int v14; // r8d
  int i; // r11d
  int v16; // edx
  unsigned __int64 v17; // rdx
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v18; // rcx
  __int64 UnwindInfoAddress; // rax
  PRUNTIME_FUNCTION result; // rax
  unsigned int k; // ecx
  unsigned int *v22; // r10
  unsigned __int64 v23; // r9
  __int64 Count; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  DWORD j; // r8d
  ULONG_PTR v28; // r11
  PRUNTIME_FUNCTION FunctionEntry; // r10
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int128 v32; // [rsp+20h] [rbp-28h] BYREF
  __int64 v33; // [rsp+30h] [rbp-18h]

  if ( !HistoryTable )
  {
LABEL_2:
    v33 = 0LL;
    v32 = 0LL;
    if ( ControlPc < *((_QWORD *)&xmmword_141200030 + 1)
      || ControlPc >= *((_QWORD *)&xmmword_141200030 + 1) + (unsigned __int64)(unsigned int)qword_141200040 )
    {
      v6 = RtlpxLookupFunctionTable(ControlPc, &v32);
    }
    else
    {
      v6 = xmmword_141200030;
      v32 = xmmword_141200030;
      v33 = qword_141200040;
    }
    v7 = 0LL;
    if ( !v6 )
      return 0LL;
    v8 = *((_QWORD *)&v32 + 1);
    v9 = HIDWORD(v33) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
    *ImageBase = *((_QWORD *)&v32 + 1);
    v10 = *((_QWORD *)&v9 + 1) >> 3;
    if ( (_DWORD)v10 )
    {
      v11 = ControlPc - v8;
      v12 = *(unsigned int *)(v6 + 12LL * (unsigned int)(v10 - 1));
      v13 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + 12LL * (unsigned int)(v10 - 1));
      if ( v11 < v12 )
      {
        v14 = v10 - 2;
        for ( i = 0; v14 >= i; LODWORD(v12) = v13->BeginAddress )
        {
          v16 = (i + v14) >> 1;
          v13 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + 12LL * v16);
          if ( v11 < v13->BeginAddress )
          {
            v14 = v16 - 1;
          }
          else
          {
            LODWORD(v12) = v13->BeginAddress;
            if ( v11 < v13[1].BeginAddress )
              break;
            i = v16 + 1;
          }
        }
      }
      if ( v11 >= (unsigned int)v12 && v11 < v13->EndAddress )
        v7 = v13;
    }
    if ( v7 )
    {
      if ( HistoryTable )
      {
        if ( !HistoryTable->Search )
        {
          Count = HistoryTable->Count;
          if ( (unsigned int)Count < 0xC )
          {
            HistoryTable->Count = Count + 1;
            HistoryTable->Entry[Count].ImageBase = *ImageBase;
            HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v7;
            v25 = *ImageBase + v7->BeginAddress;
            v26 = *ImageBase + v7->EndAddress;
            if ( v25 < HistoryTable->LowAddress )
              HistoryTable->LowAddress = v25;
            if ( v26 > HistoryTable->HighAddress )
            {
              HistoryTable->HighAddress = v26;
              v18 = v7;
              v17 = *ImageBase;
              goto LABEL_19;
            }
          }
        }
      }
    }
    v17 = *ImageBase;
    v18 = v7;
    if ( v7 )
    {
LABEL_19:
      UnwindInfoAddress = v7->UnwindInfoAddress;
      if ( (UnwindInfoAddress & 1) != 0 )
      {
        v18 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)(v17 + UnwindInfoAddress - 1);
        if ( v17 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v18 & 3) != 0 )
          goto LABEL_54;
      }
    }
    return v18;
  }
  if ( HistoryTable->Once
    && (HistoryTable->Once = 0,
        v31 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_141201945 + 6],
        (result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_141201945 + 8]) != 0LL)
    && ControlPc >= v31 + result->BeginAddress
    && ControlPc < v31 + result->EndAddress )
  {
    *ImageBase = v31;
  }
  else
  {
    if ( !HistoryTable->Search )
      goto LABEL_2;
    if ( ControlPc >= qword_141201950 || ControlPc < qword_141201948 )
    {
LABEL_38:
      if ( ControlPc < HistoryTable->LowAddress || ControlPc >= HistoryTable->HighAddress )
        goto LABEL_2;
      for ( j = HistoryTable->LocalHint; ; ++j )
      {
        if ( j >= HistoryTable->Count )
          goto LABEL_2;
        v28 = HistoryTable->Entry[j].ImageBase;
        FunctionEntry = HistoryTable->Entry[j].FunctionEntry;
        if ( ControlPc >= v28 + FunctionEntry->BeginAddress && ControlPc < v28 + FunctionEntry->EndAddress )
          break;
      }
      ++HistoryTable->LocalHint;
      *ImageBase = v28;
      v30 = FunctionEntry->UnwindInfoAddress;
      if ( (v30 & 1) != 0 )
      {
        FunctionEntry = (PRUNTIME_FUNCTION)(v28 + v30 - 1);
        if ( v28 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)FunctionEntry & 3) != 0 )
LABEL_54:
          ExRaiseDatatypeMisalignment();
      }
      return FunctionEntry;
    }
    else
    {
      for ( k = HistoryTable->GlobalHint; ; ++k )
      {
        if ( k >= RtlpUnwindHistoryTable[0] )
          goto LABEL_38;
        v22 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * k + 8];
        v23 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * k + 6];
        if ( ControlPc >= v23 + *v22 && ControlPc < v23 + v22[1] )
          break;
      }
      result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * k + 8];
      ++HistoryTable->GlobalHint;
      *ImageBase = v23;
    }
  }
  return result;
}
