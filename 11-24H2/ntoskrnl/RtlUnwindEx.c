/*
 * XREFs of RtlUnwindEx @ 0x1402322B0
 * Callers:
 *     RtlUnwind @ 0x140230F50 (RtlUnwind.c)
 *     __C_specific_handler @ 0x1404F9000 (__C_specific_handler.c)
 *     KiSystemServiceHandler @ 0x1406BEBC0 (KiSystemServiceHandler.c)
 * Callees:
 *     RtlpCopyContext @ 0x140231070 (RtlpCopyContext.c)
 *     RtlGuardCheckExceptionHandler @ 0x1402312A8 (RtlGuardCheckExceptionHandler.c)
 *     RtlLookupFunctionEntry @ 0x140232930 (RtlLookupFunctionEntry.c)
 *     RtlpxVirtualUnwind @ 0x1402345C0 (RtlpxVirtualUnwind.c)
 *     RtlInitializeExtendedContext2 @ 0x140235240 (RtlInitializeExtendedContext2.c)
 *     RtlpGetStackLimits @ 0x140235480 (RtlpGetStackLimits.c)
 *     RtlGetExtendedContextLength2 @ 0x1402354D0 (RtlGetExtendedContextLength2.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KeQueryCurrentStackInformationEx @ 0x14028A1E0 (KeQueryCurrentStackInformationEx.c)
 *     RtlInitializeExtendedContext @ 0x1403D4E10 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403D4E90 (RtlGetExtendedContextLength.c)
 *     RtlpGetStackLimitsEx @ 0x14044B300 (RtlpGetStackLimitsEx.c)
 *     RtlVirtualUnwind @ 0x14046B960 (RtlVirtualUnwind.c)
 *     RtlCaptureContext2 @ 0x1404FA2C0 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x1404FA460 (RtlRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405EE1EC (RtlGuardCheckLongJumpTarget.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1406AA230 (ZwRaiseException.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1406B52E0 (RtlpExecuteHandlerForUnwind.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __cdecl RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  _CONTEXT *v7; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentStackPointer; // rax
  char v12; // bl
  ULONG_PTR v13; // r15
  ULONG_PTR v14; // r12
  unsigned int v15; // r13d
  int v16; // r9d
  NTSTATUS v17; // eax
  unsigned int ContextFlags; // edx
  BOOL *v19; // r8
  ULONG_PTR v20; // r10
  int v21; // r14d
  unsigned __int64 v22; // rax
  _EXCEPTION_RECORD *v23; // rcx
  int v24; // eax
  int v25; // ecx
  int v26; // ecx
  _CONTEXT *v27; // rax
  _CONTEXT *v28; // rsi
  int v29; // et0
  ULONG *v30; // r14
  char v31; // al
  _UNWIND_HISTORY_TABLE *v32; // rcx
  ULONG *v33; // rax
  _EXCEPTION_RECORD *v34; // r15
  int ExceptionCode; // eax
  _CONTEXT *v36; // r14
  PRUNTIME_FUNCTION v37; // r9
  DWORD64 v38; // r10
  DWORD64 v39; // r11
  ULONG v40; // esi
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  void *v43; // rsp
  void *v44; // rsp
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  void *v47; // rsp
  void *v48; // rsp
  ULONG ContextLength[2]; // [rsp+60h] [rbp+0h] BYREF
  int v50; // [rsp+68h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp+10h] BYREF
  ULONG_PTR v52; // [rsp+78h] [rbp+18h] BYREF
  ULONG_PTR v53; // [rsp+80h] [rbp+20h] BYREF
  unsigned __int64 ImageBase; // [rsp+88h] [rbp+28h] BYREF
  PEXCEPTION_ROUTINE v55; // [rsp+90h] [rbp+30h] BYREF
  PVOID HandlerData; // [rsp+98h] [rbp+38h] BYREF
  PUNWIND_HISTORY_TABLE v57; // [rsp+A0h] [rbp+40h]
  DWORD64 v58; // [rsp+A8h] [rbp+48h]
  _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+B0h] [rbp+50h]
  PCONTEXT_EX ContextEx; // [rsp+B8h] [rbp+58h] BYREF
  _CONTEXT *v61; // [rsp+C0h] [rbp+60h]
  PCONTEXT v62; // [rsp+C8h] [rbp+68h]
  PVOID v63; // [rsp+D0h] [rbp+70h]
  PVOID v64; // [rsp+D8h] [rbp+78h]
  DWORD64 v65; // [rsp+E0h] [rbp+80h] BYREF
  unsigned __int64 v66; // [rsp+E8h] [rbp+88h]
  _CONTEXT_EX *v67; // [rsp+F0h] [rbp+90h]
  ULONG_PTR v68; // [rsp+F8h] [rbp+98h]
  PVOID v69; // [rsp+100h] [rbp+A0h]
  _CONTEXT *v70; // [rsp+108h] [rbp+A8h]
  EXCEPTION_DISPOSITION (__cdecl *v71)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+110h] [rbp+B0h]
  PVOID v72; // [rsp+118h] [rbp+B8h]
  _UNWIND_HISTORY_TABLE *v73; // [rsp+120h] [rbp+C0h]
  int v74; // [rsp+128h] [rbp+C8h]
  __int128 v75; // [rsp+130h] [rbp+D0h] BYREF
  __int64 v76; // [rsp+140h] [rbp+E0h]
  int v77; // [rsp+150h] [rbp+F0h] BYREF
  __int64 v78; // [rsp+158h] [rbp+F8h]
  unsigned __int64 Rip; // [rsp+160h] [rbp+100h]
  int v80; // [rsp+168h] [rbp+108h]

  v7 = ContextRecord;
  v64 = TargetIp;
  ExceptionRecorda = ExceptionRecord;
  v63 = ReturnValue;
  v61 = ContextRecord;
  v57 = HistoryTable;
  memset_0(&v65, 0, 0x50uLL);
  memset_0(&v77, 0, 0x98uLL);
  v55 = 0LL;
  HandlerData = 0LL;
  v52 = 0LL;
  ImageBase = 0LL;
  ContextLength[0] = 0;
  v53 = 0LL;
  v50 = 0;
  CurrentStackPointer = KeGetCurrentStackPointer(v10, v9);
  KeQueryCurrentStackInformationEx(CurrentStackPointer, &v50, &v53, &v52);
  v12 = v50 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v53, &v52) )
LABEL_2:
    RtlRaiseStatus(-1073741784);
  v40 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v40 = 1048715;
    if ( (ContextRecord->ContextFlags & 0x100080) != 0x100080 )
    {
      RtlGetExtendedContextLength(0x10008Bu, ContextLength);
      v41 = ContextLength[0] + 15LL;
      if ( v41 <= ContextLength[0] )
        v41 = 0xFFFFFFFFFFFFFF0LL;
      v42 = v41 & 0xFFFFFFFFFFFFFFF0uLL;
      v43 = alloca(v42);
      v44 = alloca(v42);
      v7 = (_CONTEXT *)ContextLength;
      v61 = (_CONTEXT *)ContextLength;
      RtlInitializeExtendedContext((PCONTEXT)ContextLength, 0x10008Bu, &ContextEx);
    }
  }
  RtlGetExtendedContextLength2(v40, ContextLength, 0LL);
  v45 = ContextLength[0] + 15LL;
  if ( v45 <= ContextLength[0] )
    v45 = 0xFFFFFFFFFFFFFF0LL;
  v46 = v45 & 0xFFFFFFFFFFFFFFF0uLL;
  v47 = alloca(v46);
  v48 = alloca(v46);
  v30 = ContextLength;
  v62 = (PCONTEXT)ContextLength;
  RtlInitializeExtendedContext2((PCONTEXT)ContextLength, v40, &ContextEx, 0LL);
  *(_QWORD *)ContextLength = ContextLength;
  v28 = v7;
  RtlCaptureContext2(v7);
  v32 = v57;
  if ( v57 )
    v57->Search = 1;
  if ( !ExceptionRecord )
  {
    v77 = -1073741785;
    v78 = 0LL;
    Rip = v7->Rip;
    ExceptionRecorda = (_EXCEPTION_RECORD *)&v77;
    v80 = 0;
  }
  v13 = v52;
  BugCheckParameter1 = 0LL;
  v14 = v53;
  v15 = 2;
  if ( !TargetFrame )
    v15 = 6;
  while ( 1 )
  {
    v58 = v28->Rip;
    ContextEx = (PCONTEXT_EX)RtlLookupFunctionEntry(v58, &ImageBase, v32);
    RtlpCopyContext((__int64)v30, (__int64)v28);
    v76 = 0LL;
    v75 = 0LL;
    v17 = RtlpxVirtualUnwind(
            2,
            ImageBase,
            v58,
            v16,
            (__int64)v30,
            0LL,
            (__int64)&HandlerData,
            (__int64)&BugCheckParameter1,
            (__int64)&v55,
            (__int64)&v75);
    if ( v17 < 0 )
      RtlRaiseStatus(v17);
    v20 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 < v14 || BugCheckParameter1 >= v13 )
    {
      if ( v12 != 1 )
        goto LABEL_2;
      v12 = 2;
      if ( !(unsigned __int8)RtlpGetStackLimitsEx(BugCheckParameter1, 0LL) )
        goto LABEL_2;
      v20 = BugCheckParameter1;
      v13 = v52;
      v14 = v53;
    }
    if ( TargetFrame && !v12 && (unsigned __int64)TargetFrame < v20 )
      goto LABEL_2;
    if ( v55 )
    {
      v21 = 0;
      v69 = v64;
      while ( 1 )
      {
        if ( TargetFrame == (PVOID)v20 )
          v15 |= 0x20u;
        v22 = (unsigned __int64)v63;
        v23 = ExceptionRecorda;
        ExceptionRecorda->ExceptionFlags = v15;
        v28->Rax = v22;
        v65 = v58;
        v66 = ImageBase;
        v67 = ContextEx;
        v71 = v55;
        v72 = HandlerData;
        v73 = v57;
        v68 = BugCheckParameter1;
        v70 = v28;
        v74 = v21;
        if ( (v28->ContextFlags & 0x100040) == 0x100040 )
        {
          v25 = RtlpExecuteHandlerForUnwind(v23, BugCheckParameter1, v28, &v65);
        }
        else
        {
          v24 = RtlpExecuteHandlerForUnwind(v23, BugCheckParameter1, v28, &v65);
          ContextFlags = v28->ContextFlags;
          v25 = v24;
          if ( (ContextFlags & 0x100040) == 0x100040 )
          {
            ContextFlags &= ~0x40u;
            v28->ContextFlags = ContextFlags;
          }
        }
        v15 &= 0xFFFFFF9F;
        v26 = v25 - 1;
        if ( v26 )
        {
          if ( v26 != 2 )
            RtlRaiseStatus(-1073741786);
          v36 = v61;
          v58 = v65;
          ImageBase = v66;
          ContextEx = v67;
          RtlpCopyContext((__int64)v61, (__int64)v70);
          *(_QWORD *)ContextLength = v62;
          v28 = v36;
          RtlpCopyContext((__int64)v62, (__int64)v36);
          v55 = RtlVirtualUnwind(2u, v38, v39, v37, v62, &HandlerData, &BugCheckParameter1, 0LL);
          if ( v55 != v71 || (v20 = BugCheckParameter1, BugCheckParameter1 != v68) || HandlerData != v72 )
            __fastfail(0x27u);
          v15 |= 0x40u;
          v21 = v74;
          v57 = v73;
          if ( (BugCheckParameter1 & 7) == 0 && BugCheckParameter1 < v13 && BugCheckParameter1 >= v14 || v12 != 1 )
            goto LABEL_24;
          v12 = 2;
          RtlpGetStackLimitsEx(BugCheckParameter1, 0LL);
          v13 = v52;
          v14 = v53;
        }
        else
        {
          if ( (PVOID)BugCheckParameter1 != TargetFrame )
          {
            v27 = v28;
            v28 = *(_CONTEXT **)ContextLength;
            *(_QWORD *)ContextLength = v27;
          }
          v29 = _mm_getcsr();
          v50 = v29;
          v28->MxCsr = v29;
          v28->FltSave.MxCsr = v29;
        }
        v20 = BugCheckParameter1;
LABEL_24:
        if ( (v15 & 0x40) == 0 )
        {
          v30 = *(ULONG **)ContextLength;
          goto LABEL_26;
        }
      }
    }
    if ( (PVOID)v20 != TargetFrame )
    {
      v33 = (ULONG *)v28;
      v28 = (_CONTEXT *)v30;
      v30 = v33;
      *(_QWORD *)ContextLength = v33;
    }
LABEL_26:
    v31 = 0;
    if ( v12 != 2 )
      v31 = v12;
    if ( (v20 & 7) != 0 || v20 >= v13 || v20 < v14 )
      break;
    if ( (PVOID)v20 == TargetFrame )
      goto LABEL_36;
    v32 = v57;
    v12 = v31;
  }
  if ( (PVOID)v20 == TargetFrame )
  {
LABEL_36:
    v34 = ExceptionRecorda;
    v28->Rax = (unsigned __int64)v63;
    ExceptionCode = v34->ExceptionCode;
    if ( v34->ExceptionCode == -2147483607
      || (v28->Rip = (unsigned __int64)v64, ExceptionCode = v34->ExceptionCode, v34->ExceptionCode == -2147483610) )
    {
      if ( ExceptionCode == -1073741785 )
        goto LABEL_40;
      if ( ExceptionCode == -2147483610 && !(_BYTE)KiKernelCetEnabled )
        RtlGuardCheckLongJumpTarget(*(PVOID *)(v34->ExceptionInformation[0] + 80), ContextFlags, v19);
    }
    else
    {
      v34->ExceptionCode = -1073741785;
LABEL_40:
      if ( !(_BYTE)KiKernelCetEnabled )
        RtlGuardCheckExceptionHandler(v28->Rip, ContextFlags);
    }
    RtlRestoreContext(v28, v34);
  }
  else
  {
    if ( v58 == v28->Rip )
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecorda, v28, 0);
  }
}
