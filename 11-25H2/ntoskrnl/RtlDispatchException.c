/*
 * XREFs of RtlDispatchException @ 0x14025CE90
 * Callers:
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     RtlRaiseNoncontinuableException @ 0x1404FA8F0 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseException @ 0x1405DC840 (RtlRaiseException.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402571F0 (KeQueryCurrentStackInformationEx.c)
 *     RtlInitializeExtendedContext2 @ 0x140258C20 (RtlInitializeExtendedContext2.c)
 *     RtlpxVirtualUnwind @ 0x140259250 (RtlpxVirtualUnwind.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     RtlLookupFunctionEntry @ 0x14025C9D0 (RtlLookupFunctionEntry.c)
 *     RtlpCopyContext @ 0x14025D610 (RtlpCopyContext.c)
 *     RtlGetExtendedContextLength2 @ 0x14025D850 (RtlGetExtendedContextLength2.c)
 *     RtlpIsFrameInBounds @ 0x140432BB0 (RtlpIsFrameInBounds.c)
 *     RtlpGetStackLimitsEx @ 0x140456190 (RtlpGetStackLimitsEx.c)
 *     RtlVirtualUnwind @ 0x140472BC0 (RtlVirtualUnwind.c)
 *     RtlpLogExceptionDispatch @ 0x1405DAF08 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x1405DB0C0 (RtlpLogExceptionHandler.c)
 *     RtlLookupExceptionHandler @ 0x1405DC788 (RtlLookupExceptionHandler.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x1406A8FF0 (RtlpExecuteHandlerForException.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  DWORD64 Rip; // r15
  _UNWIND_HISTORY_TABLE *p_HistoryTable; // rax
  int v14; // r12d
  ULONG_PTR v15; // rbx
  PEXCEPTION_ROUTINE v16; // r9
  PVOID v17; // rax
  __int64 v18; // r14
  ULONG_PTR v19; // rdx
  ULONG_PTR v20; // rbx
  int v21; // edx
  __int64 v22; // r8
  int v23; // ecx
  ULONG_PTR v24; // rcx
  int v26; // edx
  char v27; // al
  char v28; // r14
  bool v29; // zf
  __int64 v30; // rax
  int v31; // edx
  PRUNTIME_FUNCTION v32; // r9
  DWORD64 v33; // r10
  _CONTEXT_EX *v34; // rax
  int v35; // r9d
  ULONG_PTR v36; // r14
  char IsFrameInBounds; // al
  _BYTE v38[4]; // [rsp+60h] [rbp+0h] BYREF
  int v39; // [rsp+64h] [rbp+4h] BYREF
  char v40; // [rsp+68h] [rbp+8h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp+10h] BYREF
  ULONG_PTR v42; // [rsp+78h] [rbp+18h] BYREF
  char *v43; // [rsp+80h] [rbp+20h] BYREF
  ULONG ContextLength[2]; // [rsp+88h] [rbp+28h] BYREF
  unsigned __int64 ImageBase; // [rsp+90h] [rbp+30h] BYREF
  PEXCEPTION_ROUTINE v46; // [rsp+98h] [rbp+38h] BYREF
  PVOID HandlerData; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR v48; // [rsp+A8h] [rbp+48h]
  ULONG_PTR v49; // [rsp+B0h] [rbp+50h]
  PCONTEXT_EX ContextEx; // [rsp+B8h] [rbp+58h] BYREF
  DWORD64 ControlPc; // [rsp+C0h] [rbp+60h] BYREF
  unsigned __int64 v52; // [rsp+C8h] [rbp+68h]
  PCONTEXT_EX v53; // [rsp+D0h] [rbp+70h]
  ULONG_PTR v54; // [rsp+D8h] [rbp+78h]
  _BYTE *v55; // [rsp+E8h] [rbp+88h]
  EXCEPTION_DISPOSITION (__cdecl *v56)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+F0h] [rbp+90h]
  ULONG_PTR v57; // [rsp+F8h] [rbp+98h]
  _UNWIND_HISTORY_TABLE *v58; // [rsp+100h] [rbp+A0h]
  int v59; // [rsp+108h] [rbp+A8h]
  __int128 v60; // [rsp+110h] [rbp+B0h] BYREF
  __int64 v61; // [rsp+120h] [rbp+C0h]
  _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+130h] [rbp+D0h] BYREF

  v49 = (ULONG_PTR)ExceptionRecord;
  ContextLength[0] = 0;
  v3 = (ULONG_PTR)ExceptionRecord;
  v4 = 0;
  memset_0(&ControlPc, 0, 0x50uLL);
  v40 = 0;
  BugCheckParameter1 = 0LL;
  v46 = 0LL;
  HandlerData = 0LL;
  v42 = 0LL;
  ImageBase = 0LL;
  v43 = 0LL;
  v39 = 0;
  memset_0(HistoryTable.Entry, 0, sizeof(HistoryTable.Entry));
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v40 = 1;
    RtlpLogExceptionDispatch(v3, ContextRecord);
  }
  v5 = *(_DWORD *)(v3 + 4) & 0x81;
  KeQueryCurrentStackInformationEx(ContextRecord->Rsp, &v39, &v43, &v42);
  Rsp = ContextRecord->Rsp;
  v39 = v39 == 10;
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
  RtlInitializeExtendedContext2((PCONTEXT)v38, v7, &ContextEx, 0LL);
  RtlpCopyContext(v38, ContextRecord, v10, v11);
  Rip = ContextRecord->Rip;
  p_HistoryTable = &HistoryTable;
  v14 = 0;
  *(_QWORD *)ContextLength = &HistoryTable;
  v48 = 0LL;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  while ( 1 )
  {
    ContextEx = (PCONTEXT_EX)RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v61 = 0LL;
    v60 = 0LL;
    if ( (int)RtlpxVirtualUnwind(
                1,
                ImageBase,
                Rip,
                (unsigned int *)ContextEx,
                (__int64)v38,
                0LL,
                &HandlerData,
                &BugCheckParameter1,
                &v46,
                (__int64)&v60) < 0 )
      goto LABEL_18;
    v15 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 < (unsigned __int64)v43 || BugCheckParameter1 >= v42 )
    {
      if ( (_BYTE)v39 == 1 )
      {
        LOBYTE(v39) = 2;
        RtlpGetStackLimitsEx(BugCheckParameter1, v3);
        v15 = BugCheckParameter1;
      }
      else if ( !(_BYTE)v39 )
      {
        v5 |= 8u;
LABEL_18:
        v4 = 0;
LABEL_35:
        *(_DWORD *)(v3 + 4) = v5;
        return v4;
      }
    }
    if ( v46 )
      break;
LABEL_14:
    Rip = HistoryTable.Entry[1].ImageBase;
    if ( (v57 & 7) == 0 && v57 >= (unsigned __int64)v43 )
    {
      p_HistoryTable = *(_UNWIND_HISTORY_TABLE **)ContextLength;
      if ( v57 < v42 )
        continue;
    }
    if ( (_BYTE)v39 != 1 )
      goto LABEL_18;
    LOBYTE(v39) = 0;
    if ( !(unsigned __int8)RtlpGetStackLimitsEx(v57, v3) )
      goto LABEL_18;
    p_HistoryTable = *(_UNWIND_HISTORY_TABLE **)ContextLength;
  }
  while ( 1 )
  {
    v16 = v46;
    v52 = ImageBase;
    v53 = ContextEx;
    v17 = HandlerData;
    *(_DWORD *)(v3 + 4) = v5;
    v18 = 0LL;
    v57 = (ULONG_PTR)v17;
    v58 = *(_UNWIND_HISTORY_TABLE **)ContextLength;
    v38[0] = 0;
    ControlPc = Rip;
    v54 = v15;
    v55 = v38;
    v56 = v16;
    v59 = v14;
    if ( v40 )
    {
      v30 = RtlpLogExceptionHandler(v49, v38, Rip);
      v15 = BugCheckParameter1;
      v18 = v30;
    }
    v19 = v15;
    v20 = v49;
    v21 = RtlpExecuteHandlerForException(v49, v19, ContextRecord, &ControlPc);
    if ( v18 )
      *(_DWORD *)(v18 + 1396) = v21;
    v23 = *(_DWORD *)(v20 + 4);
    v15 = BugCheckParameter1;
    v5 |= v23 & 1;
    v24 = v48;
    if ( v48 == BugCheckParameter1 )
    {
      v5 &= ~0x10u;
      v24 = 0LL;
      v48 = 0LL;
    }
    if ( !v21 )
      break;
    v26 = v21 - 1;
    if ( !v26 )
      goto LABEL_30;
    v31 = v26 - 1;
    if ( !v31 )
    {
      v36 = v54;
      v5 |= 0x10u;
      IsFrameInBounds = 1;
      if ( (_BYTE)v39 )
      {
        IsFrameInBounds = RtlpIsFrameInBounds(&v43, v54, &v42);
        v24 = v48;
      }
      if ( v36 > v24 || !IsFrameInBounds )
        v48 = v36;
LABEL_30:
      v27 = v39;
      v28 = v38[0];
      goto LABEL_31;
    }
    if ( v31 != 1 )
      RtlRaiseStatus(-1073741786);
    Rip = ControlPc;
    ImageBase = v52;
    RtlpCopyContext(v38, v55, v22, v53);
    v46 = RtlVirtualUnwind(1u, v33, Rip, v32, (PCONTEXT)v38, &HandlerData, &BugCheckParameter1, 0LL);
    BugCheckParameter1 = v54;
    v34 = (_CONTEXT_EX *)RtlLookupFunctionEntry(Rip, &ImageBase, *(PUNWIND_HISTORY_TABLE *)ContextLength);
    ContextEx = v34;
    if ( v34 != v53
      || (int)RtlLookupExceptionHandler((_DWORD)v34, ImageBase, 2, v35, (__int64)&v46, (__int64)&HandlerData) < 0
      || v46 != v56
      || HandlerData != (PVOID)v57 )
    {
      __fastfail(0x27u);
    }
    v15 = BugCheckParameter1;
    v14 = v59;
    *(_QWORD *)ContextLength = v58;
    v28 = 1;
    v29 = (unsigned __int8)RtlpIsFrameInBounds(&v43, BugCheckParameter1, &v42) == 0;
    v27 = v39;
    if ( v29 && (_BYTE)v39 == 1 )
    {
      RtlpGetStackLimitsEx(v15, v49);
      v15 = BugCheckParameter1;
LABEL_42:
      LOBYTE(v39) = 0;
      goto LABEL_32;
    }
LABEL_31:
    if ( v27 == 2 )
      goto LABEL_42;
LABEL_32:
    v29 = v28 == 0;
    v3 = v49;
    if ( v29 )
    {
      v14 = 0;
      goto LABEL_14;
    }
  }
  if ( (v5 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  return 1;
}
