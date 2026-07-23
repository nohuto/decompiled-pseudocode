/*
 * XREFs of RtlUnwindEx @ 0x14025C330
 * Callers:
 *     RtlUnwind @ 0x14025DB00 (RtlUnwind.c)
 *     __C_specific_handler @ 0x1404F9030 (__C_specific_handler.c)
 *     KiSystemServiceHandler @ 0x1406B29C0 (KiSystemServiceHandler.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402571F0 (KeQueryCurrentStackInformationEx.c)
 *     RtlInitializeExtendedContext2 @ 0x140258C20 (RtlInitializeExtendedContext2.c)
 *     RtlpGetStackLimits @ 0x140258FB0 (RtlpGetStackLimits.c)
 *     RtlpxVirtualUnwind @ 0x140259250 (RtlpxVirtualUnwind.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     RtlLookupFunctionEntry @ 0x14025C9D0 (RtlLookupFunctionEntry.c)
 *     RtlGuardCheckExceptionHandler @ 0x14025D464 (RtlGuardCheckExceptionHandler.c)
 *     RtlpCopyContext @ 0x14025D610 (RtlpCopyContext.c)
 *     RtlGetExtendedContextLength @ 0x140261030 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140262930 (RtlInitializeExtendedContext.c)
 *     RtlpGetStackLimitsEx @ 0x140456190 (RtlpGetStackLimitsEx.c)
 *     RtlVirtualUnwind @ 0x140472BC0 (RtlVirtualUnwind.c)
 *     RtlCaptureContext2 @ 0x1404FA280 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x1404FA420 (RtlRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405E4858 (RtlGuardCheckLongJumpTarget.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x14069DFC0 (ZwRaiseException.c)
 *     KeGetCurrentStackPointer @ 0x14069F0C0 (KeGetCurrentStackPointer.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1406A9070 (RtlpExecuteHandlerForUnwind.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __cdecl RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  PCONTEXT v7; // r15
  ULONG v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 CurrentStackPointer; // rax
  char v13; // bl
  ULONG_PTR v14; // r12
  int v15; // eax
  char *v16; // r13
  __int64 v17; // r8
  unsigned int *v18; // r9
  __int64 v19; // r10
  NTSTATUS v20; // eax
  unsigned int ContextFlags; // edx
  BOOL *v22; // r8
  ULONG_PTR v23; // r10
  int v24; // esi
  bool v25; // zf
  unsigned int v26; // r10d
  unsigned __int64 v27; // rax
  _EXCEPTION_RECORD *v28; // rcx
  int v29; // eax
  int v30; // ecx
  int v31; // ecx
  _CONTEXT *v32; // rax
  _CONTEXT *v33; // r14
  ULONG v34; // et0
  char v35; // al
  char v36; // al
  _UNWIND_HISTORY_TABLE *v37; // rcx
  _CONTEXT *v38; // rax
  _EXCEPTION_RECORD *v39; // r12
  int ExceptionCode; // eax
  _CONTEXT *v41; // rsi
  __int64 v42; // r8
  __int64 v43; // r9
  PRUNTIME_FUNCTION v44; // r9
  DWORD64 v45; // r10
  DWORD64 v46; // r11
  ULONG v47; // r14d
  int v48; // esi
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  void *v51; // rsp
  void *v52; // rsp
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rcx
  void *v55; // rsp
  void *v56; // rsp
  unsigned int v57; // [rsp+60h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+64h] [rbp+4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp+8h] BYREF
  ULONG_PTR v60; // [rsp+70h] [rbp+10h] BYREF
  char *v61; // [rsp+78h] [rbp+18h] BYREF
  PCONTEXT v62; // [rsp+80h] [rbp+20h]
  unsigned __int64 ImageBase; // [rsp+88h] [rbp+28h] BYREF
  PEXCEPTION_ROUTINE v64; // [rsp+90h] [rbp+30h] BYREF
  PVOID HandlerData; // [rsp+98h] [rbp+38h] BYREF
  PUNWIND_HISTORY_TABLE v66; // [rsp+A0h] [rbp+40h]
  DWORD64 v67; // [rsp+A8h] [rbp+48h]
  _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+B0h] [rbp+50h]
  PCONTEXT_EX ContextEx; // [rsp+B8h] [rbp+58h] BYREF
  PVOID v70; // [rsp+C0h] [rbp+60h]
  PVOID v71; // [rsp+C8h] [rbp+68h]
  DWORD64 v72; // [rsp+D0h] [rbp+70h] BYREF
  unsigned __int64 v73; // [rsp+D8h] [rbp+78h]
  _CONTEXT_EX *v74; // [rsp+E0h] [rbp+80h]
  ULONG_PTR v75; // [rsp+E8h] [rbp+88h]
  PVOID v76; // [rsp+F0h] [rbp+90h]
  _CONTEXT *v77; // [rsp+F8h] [rbp+98h]
  EXCEPTION_DISPOSITION (__cdecl *v78)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+100h] [rbp+A0h]
  PVOID v79; // [rsp+108h] [rbp+A8h]
  _UNWIND_HISTORY_TABLE *v80; // [rsp+110h] [rbp+B0h]
  int v81; // [rsp+118h] [rbp+B8h]
  PCONTEXT v82; // [rsp+120h] [rbp+C0h]
  __int128 v83; // [rsp+128h] [rbp+C8h] BYREF
  __int64 v84; // [rsp+138h] [rbp+D8h]
  int v85; // [rsp+140h] [rbp+E0h] BYREF
  __int64 v86; // [rsp+148h] [rbp+E8h]
  unsigned __int64 Rip; // [rsp+150h] [rbp+F0h]
  int v88; // [rsp+158h] [rbp+F8h]

  v7 = ContextRecord;
  v71 = TargetIp;
  ExceptionRecorda = ExceptionRecord;
  v70 = ReturnValue;
  v66 = HistoryTable;
  memset_0(&v72, 0, 0x50uLL);
  memset_0(&v85, 0, 0x98uLL);
  v64 = 0LL;
  v9 = 0;
  HandlerData = 0LL;
  v60 = 0LL;
  ImageBase = 0LL;
  ContextLength = 0;
  v61 = 0LL;
  v57 = 0;
  CurrentStackPointer = KeGetCurrentStackPointer(v11, v10);
  KeQueryCurrentStackInformationEx(CurrentStackPointer, &v57, &v61, &v60);
  v13 = v57 == 10;
  if ( !RtlpGetStackLimits(&v61, &v60) )
LABEL_2:
    RtlRaiseStatus(-1073741784);
  v47 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v47 = 1048715;
    if ( (ContextRecord->ContextFlags & 0x100080) != 0x100080 )
    {
      RtlGetExtendedContextLength(0x10008Bu, &ContextLength);
      v9 = ContextLength;
      v53 = ContextLength + 15LL;
      if ( v53 <= ContextLength )
        v53 = 0xFFFFFFFFFFFFFF0LL;
      v54 = v53 & 0xFFFFFFFFFFFFFFF0uLL;
      v55 = alloca(v54);
      v56 = alloca(v54);
      v7 = (PCONTEXT)&v57;
      RtlInitializeExtendedContext((PCONTEXT)&v57, 0x10008Bu, &ContextEx);
    }
    if ( !(_BYTE)KiKernelCetEnabled )
      goto LABEL_58;
    v48 = 1296;
  }
  else
  {
    v48 = 1264;
  }
  v9 = v48 + 15;
LABEL_58:
  v49 = v9 + 15LL;
  if ( v49 <= v9 )
    v49 = 0xFFFFFFFFFFFFFF0LL;
  v50 = v49 & 0xFFFFFFFFFFFFFFF0uLL;
  v51 = alloca(v50);
  v52 = alloca(v50);
  v82 = (PCONTEXT)&v57;
  RtlInitializeExtendedContext2((PCONTEXT)&v57, v47, &ContextEx, 0LL);
  v62 = (PCONTEXT)&v57;
  v33 = v7;
  RtlCaptureContext2(v7);
  v37 = v66;
  if ( v66 )
    v66->Search = 1;
  if ( !ExceptionRecord )
  {
    v85 = -1073741785;
    v86 = 0LL;
    Rip = v7->Rip;
    ExceptionRecorda = (_EXCEPTION_RECORD *)&v85;
    v88 = 0;
  }
  v14 = v60;
  v15 = 2;
  BugCheckParameter1 = 0LL;
  v16 = v61;
  if ( !TargetFrame )
    v15 = 6;
  v57 = v15;
  while ( 1 )
  {
    v67 = v33->Rip;
    ContextEx = (PCONTEXT_EX)RtlLookupFunctionEntry(v67, &ImageBase, v37);
    RtlpCopyContext(v62, v33, v17, ContextEx);
    v84 = 0LL;
    v83 = 0LL;
    v20 = RtlpxVirtualUnwind(2, ImageBase, v67, v18, v19, 0LL, &HandlerData, &BugCheckParameter1, &v64, (__int64)&v83);
    if ( v20 < 0 )
      RtlRaiseStatus(v20);
    v23 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 < (unsigned __int64)v16 || BugCheckParameter1 >= v14 )
    {
      if ( v13 != 1 )
        goto LABEL_2;
      v13 = 2;
      if ( !(unsigned __int8)RtlpGetStackLimitsEx(BugCheckParameter1, 0LL) )
        goto LABEL_2;
      v23 = BugCheckParameter1;
      v14 = v60;
      v16 = v61;
    }
    if ( TargetFrame && !v13 && (unsigned __int64)TargetFrame < v23 )
      goto LABEL_2;
    if ( v64 )
    {
      v24 = 0;
      v76 = v71;
      while ( 1 )
      {
        v25 = TargetFrame == (PVOID)v23;
        v26 = v57;
        if ( v25 )
        {
          v26 = v57 | 0x20;
          v57 |= 0x20u;
        }
        v27 = (unsigned __int64)v70;
        v28 = ExceptionRecorda;
        ExceptionRecorda->ExceptionFlags = v26;
        v33->Rax = v27;
        v72 = v67;
        v73 = ImageBase;
        v74 = ContextEx;
        v78 = v64;
        v79 = HandlerData;
        v80 = v66;
        v75 = BugCheckParameter1;
        v77 = v33;
        v81 = v24;
        if ( (v33->ContextFlags & 0x100040) == 0x100040 )
        {
          v30 = RtlpExecuteHandlerForUnwind(v28, BugCheckParameter1, v33, &v72);
        }
        else
        {
          v29 = RtlpExecuteHandlerForUnwind(v28, BugCheckParameter1, v33, &v72);
          ContextFlags = v33->ContextFlags;
          v30 = v29;
          if ( (ContextFlags & 0x100040) == 0x100040 )
          {
            ContextFlags &= ~0x40u;
            v33->ContextFlags = ContextFlags;
          }
        }
        v57 &= 0xFFFFFF9F;
        v31 = v30 - 1;
        if ( v31 )
        {
          if ( v31 != 2 )
            RtlRaiseStatus(-1073741786);
          v67 = v72;
          ImageBase = v73;
          ContextEx = v74;
          RtlpCopyContext(v7, v77, v22, v74);
          v41 = v82;
          v62 = v82;
          v33 = v7;
          RtlpCopyContext(v82, v7, v42, v43);
          v64 = RtlVirtualUnwind(2u, v45, v46, v44, v41, &HandlerData, &BugCheckParameter1, 0LL);
          if ( v64 != v78 || (v23 = BugCheckParameter1, BugCheckParameter1 != v75) || HandlerData != v79 )
            __fastfail(0x27u);
          v24 = v81;
          v66 = v80;
          v35 = v57 | 0x40;
          v57 |= 0x40u;
          if ( (BugCheckParameter1 & 7) == 0 && BugCheckParameter1 < v14 && BugCheckParameter1 >= (unsigned __int64)v16
            || v13 != 1 )
          {
            goto LABEL_25;
          }
          v13 = 2;
          RtlpGetStackLimitsEx(BugCheckParameter1, 0LL);
          v14 = v60;
          v16 = v61;
        }
        else
        {
          if ( (PVOID)BugCheckParameter1 != TargetFrame )
          {
            v32 = v33;
            v33 = v62;
            v62 = v32;
          }
          v34 = _mm_getcsr();
          ContextLength = v34;
          v33->MxCsr = v34;
          v33->FltSave.MxCsr = v34;
        }
        v35 = v57;
        v23 = BugCheckParameter1;
LABEL_25:
        if ( (v35 & 0x40) == 0 )
          goto LABEL_26;
      }
    }
    if ( (PVOID)v23 != TargetFrame )
    {
      v38 = v33;
      v33 = v62;
      v62 = v38;
    }
LABEL_26:
    v36 = 0;
    if ( v13 != 2 )
      v36 = v13;
    if ( (v23 & 7) != 0 || v23 >= v14 || v23 < (unsigned __int64)v16 )
      break;
    if ( (PVOID)v23 == TargetFrame )
      goto LABEL_36;
    v37 = v66;
    v13 = v36;
  }
  if ( (PVOID)v23 == TargetFrame )
  {
LABEL_36:
    v39 = ExceptionRecorda;
    v33->Rax = (unsigned __int64)v70;
    ExceptionCode = v39->ExceptionCode;
    if ( v39->ExceptionCode == -2147483607
      || (v33->Rip = (unsigned __int64)v71, ExceptionCode = v39->ExceptionCode, v39->ExceptionCode == -2147483610) )
    {
      if ( ExceptionCode == -2147483610 && !(_BYTE)KiKernelCetEnabled )
        RtlGuardCheckLongJumpTarget(*(PVOID *)(v39->ExceptionInformation[0] + 80), ContextFlags, v22);
    }
    else
    {
      v39->ExceptionCode = -1073741785;
      if ( !(_BYTE)KiKernelCetEnabled )
        RtlGuardCheckExceptionHandler(v33->Rip);
    }
    RtlRestoreContext(v33, v39);
  }
  else
  {
    if ( v67 == v33->Rip )
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecorda, v33, 0);
  }
}
