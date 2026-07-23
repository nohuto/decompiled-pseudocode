/*
 * XREFs of RtlDispatchException @ 0x140231750
 * Callers:
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 *     RtlRaiseNoncontinuableException @ 0x1404FA930 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseException @ 0x1405E5EE0 (RtlRaiseException.c)
 * Callees:
 *     RtlpCopyContext @ 0x140231070 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x140232930 (RtlLookupFunctionEntry.c)
 *     RtlpxVirtualUnwind @ 0x1402345C0 (RtlpxVirtualUnwind.c)
 *     RtlInitializeExtendedContext2 @ 0x140235240 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1402354D0 (RtlGetExtendedContextLength2.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KeQueryCurrentStackInformationEx @ 0x14028A1E0 (KeQueryCurrentStackInformationEx.c)
 *     RtlpIsFrameInBounds @ 0x14041F360 (RtlpIsFrameInBounds.c)
 *     RtlpGetStackLimitsEx @ 0x14044B300 (RtlpGetStackLimitsEx.c)
 *     RtlVirtualUnwind @ 0x14046B960 (RtlVirtualUnwind.c)
 *     RtlpLogExceptionDispatch @ 0x1405E45FC (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x1405E47B0 (RtlpLogExceptionHandler.c)
 *     RtlLookupExceptionHandler @ 0x1405E5E28 (RtlLookupExceptionHandler.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x1406B5260 (RtlpExecuteHandlerForException.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

BOOLEAN __cdecl RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  ULONG_PTR v3; // r14
  BOOLEAN v4; // r12
  int v5; // esi
  ULONG_PTR Rsp; // rcx
  ULONG v7; // ebx
  unsigned __int64 v8; // rax
  void *v9; // rsp
  DWORD64 Rip; // r15
  _UNWIND_HISTORY_TABLE *p_HistoryTable; // rax
  int v12; // r12d
  ULONG_PTR v13; // rbx
  PEXCEPTION_ROUTINE v14; // r9
  PVOID v15; // rax
  __int64 v16; // r14
  ULONG_PTR v17; // rdx
  ULONG_PTR v18; // rbx
  int v19; // edx
  int v20; // ecx
  ULONG_PTR v21; // rcx
  int v23; // edx
  char v24; // al
  char v25; // r14
  bool v26; // zf
  __int64 v27; // rax
  int v28; // edx
  PRUNTIME_FUNCTION v29; // r9
  DWORD64 v30; // r10
  _CONTEXT_EX *v31; // rax
  int v32; // r9d
  ULONG_PTR v33; // r14
  char IsFrameInBounds; // al
  _BYTE v35[4]; // [rsp+60h] [rbp+0h] BYREF
  int v36; // [rsp+64h] [rbp+4h] BYREF
  char v37; // [rsp+68h] [rbp+8h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp+10h] BYREF
  ULONG_PTR v39; // [rsp+78h] [rbp+18h] BYREF
  ULONG_PTR v40; // [rsp+80h] [rbp+20h] BYREF
  ULONG ContextLength[2]; // [rsp+88h] [rbp+28h] BYREF
  unsigned __int64 ImageBase; // [rsp+90h] [rbp+30h] BYREF
  PEXCEPTION_ROUTINE v43; // [rsp+98h] [rbp+38h] BYREF
  PVOID HandlerData; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR v45; // [rsp+A8h] [rbp+48h]
  ULONG_PTR v46; // [rsp+B0h] [rbp+50h]
  PCONTEXT_EX ContextEx; // [rsp+B8h] [rbp+58h] BYREF
  DWORD64 ControlPc; // [rsp+C0h] [rbp+60h] BYREF
  unsigned __int64 v49; // [rsp+C8h] [rbp+68h]
  PCONTEXT_EX v50; // [rsp+D0h] [rbp+70h]
  ULONG_PTR v51; // [rsp+D8h] [rbp+78h]
  _BYTE *v52; // [rsp+E8h] [rbp+88h]
  EXCEPTION_DISPOSITION (__cdecl *v53)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+F0h] [rbp+90h]
  ULONG_PTR v54; // [rsp+F8h] [rbp+98h]
  _UNWIND_HISTORY_TABLE *v55; // [rsp+100h] [rbp+A0h]
  int v56; // [rsp+108h] [rbp+A8h]
  __int128 v57; // [rsp+110h] [rbp+B0h] BYREF
  __int64 v58; // [rsp+120h] [rbp+C0h]
  _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+130h] [rbp+D0h] BYREF

  v46 = (ULONG_PTR)ExceptionRecord;
  ContextLength[0] = 0;
  v3 = (ULONG_PTR)ExceptionRecord;
  v4 = 0;
  memset_0(&ControlPc, 0, 0x50uLL);
  v37 = 0;
  BugCheckParameter1 = 0LL;
  v43 = 0LL;
  HandlerData = 0LL;
  v39 = 0LL;
  ImageBase = 0LL;
  v40 = 0LL;
  v36 = 0;
  memset_0(HistoryTable.Entry, 0, sizeof(HistoryTable.Entry));
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v37 = 1;
    RtlpLogExceptionDispatch(v3, ContextRecord);
  }
  v5 = *(_DWORD *)(v3 + 4) & 0x81;
  KeQueryCurrentStackInformationEx(ContextRecord->Rsp, &v36, &v40, &v39);
  Rsp = ContextRecord->Rsp;
  v36 = v36 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimitsEx(Rsp, v3) )
  {
    v5 |= 8u;
    goto LABEL_35;
  }
  v7 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
    v7 = 1048715;
  RtlGetExtendedContextLength2(v7, ContextLength, 0LL);
  v8 = ContextLength[0] + 15LL;
  if ( v8 <= ContextLength[0] )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2((PCONTEXT)v35, v7, &ContextEx, 0LL);
  RtlpCopyContext((__int64)v35, (__int64)ContextRecord);
  Rip = ContextRecord->Rip;
  p_HistoryTable = &HistoryTable;
  v12 = 0;
  *(_QWORD *)ContextLength = &HistoryTable;
  v45 = 0LL;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  while ( 1 )
  {
    ContextEx = (PCONTEXT_EX)RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v58 = 0LL;
    v57 = 0LL;
    if ( (int)RtlpxVirtualUnwind(
                1,
                ImageBase,
                Rip,
                (_DWORD)ContextEx,
                (__int64)v35,
                0LL,
                (__int64)&HandlerData,
                (__int64)&BugCheckParameter1,
                (__int64)&v43,
                (__int64)&v57) < 0 )
      goto LABEL_18;
    v13 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 < v40 || BugCheckParameter1 >= v39 )
    {
      if ( (_BYTE)v36 == 1 )
      {
        LOBYTE(v36) = 2;
        RtlpGetStackLimitsEx(BugCheckParameter1, v3);
        v13 = BugCheckParameter1;
      }
      else if ( !(_BYTE)v36 )
      {
        v5 |= 8u;
LABEL_18:
        v4 = 0;
LABEL_35:
        *(_DWORD *)(v3 + 4) = v5;
        return v4;
      }
    }
    if ( v43 )
      break;
LABEL_14:
    Rip = HistoryTable.Entry[1].ImageBase;
    if ( (v54 & 7) == 0 && v54 >= v40 )
    {
      p_HistoryTable = *(_UNWIND_HISTORY_TABLE **)ContextLength;
      if ( v54 < v39 )
        continue;
    }
    if ( (_BYTE)v36 != 1 )
      goto LABEL_18;
    LOBYTE(v36) = 0;
    if ( !(unsigned __int8)RtlpGetStackLimitsEx(v54, v3) )
      goto LABEL_18;
    p_HistoryTable = *(_UNWIND_HISTORY_TABLE **)ContextLength;
  }
  while ( 1 )
  {
    v14 = v43;
    v49 = ImageBase;
    v50 = ContextEx;
    v15 = HandlerData;
    *(_DWORD *)(v3 + 4) = v5;
    v16 = 0LL;
    v54 = (ULONG_PTR)v15;
    v55 = *(_UNWIND_HISTORY_TABLE **)ContextLength;
    v35[0] = 0;
    ControlPc = Rip;
    v51 = v13;
    v52 = v35;
    v53 = v14;
    v56 = v12;
    if ( v37 )
    {
      v27 = RtlpLogExceptionHandler(v46, v35, Rip);
      v13 = BugCheckParameter1;
      v16 = v27;
    }
    v17 = v13;
    v18 = v46;
    v19 = RtlpExecuteHandlerForException(v46, v17, ContextRecord, &ControlPc);
    if ( v16 )
      *(_DWORD *)(v16 + 1396) = v19;
    v20 = *(_DWORD *)(v18 + 4);
    v13 = BugCheckParameter1;
    v5 |= v20 & 1;
    v21 = v45;
    if ( v45 == BugCheckParameter1 )
    {
      v5 &= ~0x10u;
      v21 = 0LL;
      v45 = 0LL;
    }
    if ( !v19 )
      break;
    v23 = v19 - 1;
    if ( !v23 )
      goto LABEL_30;
    v28 = v23 - 1;
    if ( !v28 )
    {
      v33 = v51;
      v5 |= 0x10u;
      IsFrameInBounds = 1;
      if ( (_BYTE)v36 )
      {
        IsFrameInBounds = RtlpIsFrameInBounds(&v40, v51, &v39);
        v21 = v45;
      }
      if ( v33 > v21 || !IsFrameInBounds )
        v45 = v33;
LABEL_30:
      v24 = v36;
      v25 = v35[0];
      goto LABEL_31;
    }
    if ( v28 != 1 )
      RtlRaiseStatus(-1073741786);
    Rip = ControlPc;
    ImageBase = v49;
    RtlpCopyContext((__int64)v35, (__int64)v52);
    v43 = RtlVirtualUnwind(1u, v30, Rip, v29, (PCONTEXT)v35, &HandlerData, &BugCheckParameter1, 0LL);
    BugCheckParameter1 = v51;
    v31 = (_CONTEXT_EX *)RtlLookupFunctionEntry(Rip, &ImageBase, *(PUNWIND_HISTORY_TABLE *)ContextLength);
    ContextEx = v31;
    if ( v31 != v50
      || (int)RtlLookupExceptionHandler((_DWORD)v31, ImageBase, 2, v32, (__int64)&v43, (__int64)&HandlerData) < 0
      || v43 != v53
      || HandlerData != (PVOID)v54 )
    {
      __fastfail(0x27u);
    }
    v13 = BugCheckParameter1;
    v12 = v56;
    *(_QWORD *)ContextLength = v55;
    v25 = 1;
    v26 = (unsigned __int8)RtlpIsFrameInBounds(&v40, BugCheckParameter1, &v39) == 0;
    v24 = v36;
    if ( v26 && (_BYTE)v36 == 1 )
    {
      RtlpGetStackLimitsEx(v13, v46);
      v13 = BugCheckParameter1;
LABEL_42:
      LOBYTE(v36) = 0;
      goto LABEL_32;
    }
LABEL_31:
    if ( v24 == 2 )
      goto LABEL_42;
LABEL_32:
    v26 = v25 == 0;
    v3 = v46;
    if ( v26 )
    {
      v12 = 0;
      goto LABEL_14;
    }
  }
  if ( (v5 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  return 1;
}
