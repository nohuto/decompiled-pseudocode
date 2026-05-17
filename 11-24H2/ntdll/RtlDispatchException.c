/*
 * XREFs of RtlDispatchException @ 0x180019060
 * Callers:
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x1801213D0 (RtlRaiseNoncontinuableException.c)
 *     KiUserExceptionDispatcher @ 0x180165CF0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlLookupFunctionEntry @ 0x180015110 (RtlLookupFunctionEntry.c)
 *     RtlpxVirtualUnwind @ 0x180016C30 (RtlpxVirtualUnwind.c)
 *     RtlVirtualUnwind @ 0x180018C20 (RtlVirtualUnwind.c)
 *     RtlpSanitizeContext @ 0x180018DD0 (RtlpSanitizeContext.c)
 *     RtlpCallVectoredHandlers @ 0x180019DC0 (RtlpCallVectoredHandlers.c)
 *     RtlpCopyContext @ 0x18001A1B0 (RtlpCopyContext.c)
 *     RtlInitializeExtendedContext2 @ 0x1800D76F0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1800D7C70 (RtlGetExtendedContextLength2.c)
 *     RtlpGetStackLimits @ 0x1800E23C0 (RtlpGetStackLimits.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1800ED864 (RtlpLookupPrimaryFunctionEntry.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180166340 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x1801663D0 (RtlpExecuteHandlerForException.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlDispatchException(__int64 a1, __int64 a2)
{
  unsigned int v4; // r8d
  int v5; // ett
  signed __int32 v6; // r9d
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rdx
  __int128 *v10; // rcx
  __int128 *v11; // rax
  __int64 v12; // r8
  __int128 v13; // xmm0
  unsigned __int8 v14; // di
  int v16; // edi
  int v17; // r12d
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  void *v21; // rsp
  void *v22; // rsp
  char *v23; // r12
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rax
  PRUNTIME_FUNCTION v25; // r13
  ULONG64 v26; // rsi
  unsigned __int64 v27; // rcx
  ULONG64 v28; // r8
  _BYTE *v29; // rax
  int i; // edx
  __int64 v31; // rsi
  PUNWIND_HISTORY_TABLE v32; // rax
  int v33; // eax
  unsigned __int64 v34; // rdx
  unsigned int v35; // r9d
  int v36; // ett
  signed __int32 v37; // r10d
  __int64 v38; // rsi
  __int128 *v39; // rax
  __int128 *v40; // rcx
  __int64 v41; // rdx
  __int128 v42; // xmm0
  __int128 v43; // xmm0
  PEXCEPTION_ROUTINE v44; // rax
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v45; // rax
  _BYTE *v46; // r8
  int v47; // ecx
  unsigned int v48; // eax
  __int64 v49; // rdx
  int ContextRecord; // [rsp+60h] [rbp+0h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+68h] [rbp+8h] BYREF
  PEXCEPTION_ROUTINE v52; // [rsp+70h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+78h] [rbp+18h] BYREF
  unsigned int v54; // [rsp+80h] [rbp+20h] BYREF
  unsigned __int64 ImageBase; // [rsp+88h] [rbp+28h] BYREF
  PUNWIND_HISTORY_TABLE v56; // [rsp+90h] [rbp+30h]
  unsigned __int64 v57; // [rsp+98h] [rbp+38h]
  unsigned __int64 v58; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v59; // [rsp+A8h] [rbp+48h] BYREF
  ULONG64 ControlPc; // [rsp+B0h] [rbp+50h] BYREF
  ULONG64 v61; // [rsp+B8h] [rbp+58h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+C0h] [rbp+60h]
  unsigned __int64 v63; // [rsp+C8h] [rbp+68h]
  int *p_ContextRecord; // [rsp+D8h] [rbp+78h]
  EXCEPTION_ROUTINE *v65; // [rsp+E0h] [rbp+80h]
  _BYTE *v66; // [rsp+E8h] [rbp+88h]
  struct _UNWIND_HISTORY_TABLE *v67; // [rsp+F0h] [rbp+90h]
  unsigned __int64 v68; // [rsp+F8h] [rbp+98h]
  char v69[8]; // [rsp+100h] [rbp+A0h] BYREF
  __int128 v70; // [rsp+108h] [rbp+A8h] BYREF
  __int64 v71; // [rsp+118h] [rbp+B8h]
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+120h] [rbp+C0h] BYREF

  v54 = 0;
  memset_thunk_772440563353939046(&ControlPc, 0, 0x50uLL);
  LOBYTE(ContextRecord) = 0;
  EstablisherFrame = 0LL;
  v52 = 0LL;
  HandlerData = 0LL;
  v59 = 0LL;
  ImageBase = 0LL;
  v58 = 0LL;
  memset_thunk_772440563353939046(&HistoryTable, 0, 0xD8uLL);
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800000) != 0 )
  {
    LOBYTE(ContextRecord) = 1;
    if ( RtlpExceptionLog2 )
    {
      v4 = RtlpExceptionLogCount;
      v5 = RtlpExceptionLogCount;
      v6 = _InterlockedCompareExchange(
             &RtlpExceptionLogCount,
             (RtlpExceptionLogCount + 1) % 0x32u,
             RtlpExceptionLogCount);
      if ( v5 != v6 )
      {
        do
        {
          v4 = v6;
          v6 = _InterlockedCompareExchange(&RtlpExceptionLogCount, (v6 + 1) % 0x32u, v6);
        }
        while ( v6 != v4 );
      }
      v7 = 1424LL * v4;
      v8 = RtlpExceptionLog2 + v7 == 0;
      v9 = RtlpExceptionLog2 + v7;
      *(_QWORD *)(v9 + 1400) = NtCurrentTeb()->ClientId.UniqueThread;
      if ( !v8 )
      {
        *(_DWORD *)(v9 + 1392) = 1;
        v10 = (__int128 *)(v9 + 160);
        v11 = (__int128 *)a2;
        v12 = 9LL;
        *(_OWORD *)v9 = *(_OWORD *)a1;
        *(_OWORD *)(v9 + 16) = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v9 + 32) = *(_OWORD *)(a1 + 32);
        *(_OWORD *)(v9 + 48) = *(_OWORD *)(a1 + 48);
        *(_OWORD *)(v9 + 64) = *(_OWORD *)(a1 + 64);
        *(_OWORD *)(v9 + 80) = *(_OWORD *)(a1 + 80);
        *(_OWORD *)(v9 + 96) = *(_OWORD *)(a1 + 96);
        *(_OWORD *)(v9 + 112) = *(_OWORD *)(a1 + 112);
        *(_OWORD *)(v9 + 128) = *(_OWORD *)(a1 + 128);
        *(_QWORD *)(v9 + 144) = *(_QWORD *)(a1 + 144);
        do
        {
          v10 += 8;
          v13 = *v11;
          v11 += 8;
          *(v10 - 8) = v13;
          *(v10 - 7) = *(v11 - 7);
          *(v10 - 6) = *(v11 - 6);
          *(v10 - 5) = *(v11 - 5);
          *(v10 - 4) = *(v11 - 4);
          *(v10 - 3) = *(v11 - 3);
          *(v10 - 2) = *(v11 - 2);
          *(v10 - 1) = *(v11 - 1);
          --v12;
        }
        while ( v12 );
        *v10 = *v11;
        v10[1] = v11[1];
        v10[2] = v11[2];
        v10[3] = v11[3];
        v10[4] = v11[4];
        *(_DWORD *)(v9 + 208) &= 0x10001Fu;
      }
    }
  }
  if ( (unsigned __int8)RtlpCallVectoredHandlers(a1, a2, 0LL) )
  {
LABEL_9:
    v14 = 1;
  }
  else
  {
    v16 = *(_DWORD *)(a1 + 4) & 0x81;
    if ( (unsigned __int8)RtlpGetStackLimits(&v58, &v59) )
    {
      RtlpSanitizeContext((_DWORD *)a2);
      v17 = 0;
      v18 = 0LL;
      if ( ((*((_QWORD *)&xmmword_1801EA4F0 + 1) >> 60) & 3) == 1 )
      {
        v17 = 64;
        v18 = 2048LL;
      }
      RtlGetExtendedContextLength2((unsigned int)(v17 + 1048587), &v54, v18);
      v19 = v54 + 15LL;
      if ( v19 <= v54 )
        v19 = 0xFFFFFFFFFFFFFF0LL;
      v20 = v19 & 0xFFFFFFFFFFFFFFF0uLL;
      v21 = alloca(v20);
      v22 = alloca(v20);
      RtlInitializeExtendedContext2(&ContextRecord, (unsigned int)(v17 + 1048587), v69, v18);
      RtlpCopyContext(&ContextRecord, a2);
      v23 = *(char **)(a2 + 248);
      p_HistoryTable = &HistoryTable;
      v56 = &HistoryTable;
      v57 = 0LL;
      HistoryTable.HighAddress = 0LL;
      HistoryTable.Once = 1;
      HistoryTable.LowAddress = -1LL;
      while ( 1 )
      {
        v25 = RtlLookupFunctionEntry((ULONG64)v23, &ImageBase, p_HistoryTable);
        RtlpSanitizeContext(&ContextRecord);
        v71 = 0LL;
        v26 = ImageBase;
        v70 = 0LL;
        if ( (int)RtlpxVirtualUnwind(
                    1,
                    ImageBase,
                    v23,
                    &v25->BeginAddress,
                    (__int64)&ContextRecord,
                    0LL,
                    &HandlerData,
                    (char ***)&EstablisherFrame,
                    &v52,
                    (__int64)&v70,
                    0) < 0 )
          break;
        v27 = EstablisherFrame;
        if ( (EstablisherFrame & 7) != 0 || EstablisherFrame < v58 || EstablisherFrame >= v59 )
          goto LABEL_33;
        v28 = (ULONG64)v52;
        if ( v52 )
        {
          v29 = HandlerData;
          for ( i = 0; ; i = v68 )
          {
            v61 = v26;
            v31 = 0LL;
            v8 = RtlpExceptionLog2 == 0;
            v66 = v29;
            v32 = v56;
            *(_DWORD *)(a1 + 4) = v16;
            ControlPc = (ULONG64)v23;
            FunctionEntry = v25;
            v63 = v27;
            p_ContextRecord = &ContextRecord;
            v65 = (EXCEPTION_ROUTINE *)v28;
            v67 = v32;
            LODWORD(v68) = i;
            if ( !v8 && (_BYTE)ContextRecord )
            {
              v35 = RtlpExceptionLogCount;
              v36 = RtlpExceptionLogCount;
              v37 = _InterlockedCompareExchange(
                      &RtlpExceptionLogCount,
                      (RtlpExceptionLogCount + 1) % 0x32u,
                      RtlpExceptionLogCount);
              if ( v36 != v37 )
              {
                do
                {
                  v35 = v37;
                  v37 = _InterlockedCompareExchange(&RtlpExceptionLogCount, (v37 + 1) % 0x32u, v37);
                }
                while ( v37 != v35 );
              }
              v38 = 1424LL * v35;
              v8 = RtlpExceptionLog2 + v38 == 0;
              v31 = RtlpExceptionLog2 + v38;
              *(_QWORD *)(v31 + 1400) = NtCurrentTeb()->ClientId.UniqueThread;
              if ( !v8 )
              {
                *(_DWORD *)(v31 + 1392) = 2;
                v39 = (__int128 *)(v31 + 160);
                *(_DWORD *)(v31 + 1396) = -1;
                v40 = (__int128 *)&ContextRecord;
                v41 = 9LL;
                *(_OWORD *)v31 = *(_OWORD *)a1;
                *(_OWORD *)(v31 + 16) = *(_OWORD *)(a1 + 16);
                *(_OWORD *)(v31 + 32) = *(_OWORD *)(a1 + 32);
                *(_OWORD *)(v31 + 48) = *(_OWORD *)(a1 + 48);
                *(_OWORD *)(v31 + 64) = *(_OWORD *)(a1 + 64);
                *(_OWORD *)(v31 + 80) = *(_OWORD *)(a1 + 80);
                *(_OWORD *)(v31 + 96) = *(_OWORD *)(a1 + 96);
                *(_OWORD *)(v31 + 112) = *(_OWORD *)(a1 + 112);
                *(_OWORD *)(v31 + 128) = *(_OWORD *)(a1 + 128);
                *(_QWORD *)(v31 + 144) = *(_QWORD *)(a1 + 144);
                do
                {
                  v39 += 8;
                  v42 = *v40;
                  v40 += 8;
                  *(v39 - 8) = v42;
                  *(v39 - 7) = *(v40 - 7);
                  *(v39 - 6) = *(v40 - 6);
                  *(v39 - 5) = *(v40 - 5);
                  *(v39 - 4) = *(v40 - 4);
                  *(v39 - 3) = *(v40 - 3);
                  *(v39 - 2) = *(v40 - 2);
                  *(v39 - 1) = *(v40 - 1);
                  --v41;
                }
                while ( v41 );
                *v39 = *v40;
                v39[1] = v40[1];
                v39[2] = v40[2];
                v39[3] = v40[3];
                v43 = v40[4];
                *(_QWORD *)(v31 + 1408) = v23;
                *(_QWORD *)(v31 + 1416) = v28;
                v39[4] = v43;
                *(_DWORD *)(v31 + 208) &= 0x10001Fu;
              }
              v27 = EstablisherFrame;
            }
            v33 = RtlpExecuteHandlerForException(a1, v27, a2, &ControlPc);
            if ( v31 )
              *(_DWORD *)(v31 + 1396) = v33;
            v34 = v57;
            v16 |= *(_DWORD *)(a1 + 4) & 1;
            if ( v57 == EstablisherFrame )
            {
              v16 &= ~0x10u;
              v34 = 0LL;
              v57 = 0LL;
            }
            if ( v33 == 1 )
              break;
            if ( !v33 )
            {
              if ( (v16 & 1) != 0 )
                RtlRaiseStatus(-1073741787);
              goto LABEL_9;
            }
            if ( v33 == 2 )
            {
              v16 |= 0x10u;
              if ( v63 > v34 )
                v57 = v63;
              break;
            }
            if ( v33 != 3 )
              RtlRaiseStatus(-1073741786);
            v26 = v61;
            v23 = (char *)ControlPc;
            v25 = FunctionEntry;
            ImageBase = v61;
            RtlpCopyContext(&ContextRecord, p_ContextRecord);
            v44 = RtlVirtualUnwind(
                    1u,
                    v26,
                    (ULONG64)v23,
                    v25,
                    (PCONTEXT)&ContextRecord,
                    &HandlerData,
                    &EstablisherFrame,
                    0LL);
            v27 = v63;
            v52 = v44;
            EstablisherFrame = v63;
            if ( ((*((_QWORD *)&xmmword_1801EA4F0 + 1) >> 12) & 3) == 1 )
            {
              v45 = RtlLookupFunctionEntry((ULONG64)v23, &ImageBase, v56);
              v25 = v45;
              if ( v45 != FunctionEntry )
                goto LABEL_58;
              v26 = ImageBase;
              v46 = (_BYTE *)(v26 + *(unsigned int *)(RtlpLookupPrimaryFunctionEntry(v45, ImageBase) + 8));
              if ( (*v46 & 0x10) != 0 )
              {
                v47 = (unsigned __int8)v46[2];
                v48 = v47 + 1;
                if ( (v47 & 1) == 0 )
                  v48 = (unsigned __int8)v46[2];
                v49 = v48;
                v29 = &v46[2 * v48 + 8];
                HandlerData = v29;
                v28 = v26 + *(unsigned int *)&v46[2 * v49 + 4];
                v52 = (PEXCEPTION_ROUTINE)v28;
              }
              else
              {
                v28 = (ULONG64)v52;
                v29 = HandlerData;
              }
              if ( v29 != v66 || (EXCEPTION_ROUTINE *)v28 != v65 )
LABEL_58:
                __fastfail(0x27u);
              v27 = EstablisherFrame;
            }
            else
            {
              v28 = (ULONG64)v65;
              v29 = v66;
              v52 = v65;
              HandlerData = v66;
            }
            v56 = v67;
          }
        }
        v23 = (char *)HistoryTable.Entry[2].ImageBase;
        if ( (v68 & 7) != 0 || v68 >= v59 || v68 < v58 )
          break;
        p_HistoryTable = v56;
      }
    }
    else
    {
LABEL_33:
      v16 |= 8u;
    }
    *(_DWORD *)(a1 + 4) = v16;
    v14 = 0;
  }
  RtlpCallVectoredHandlers(a1, a2, 1LL);
  return v14;
}
