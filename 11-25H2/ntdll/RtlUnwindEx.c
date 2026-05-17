/*
 * XREFs of RtlUnwindEx @ 0x180077090
 * Callers:
 *     RtlUnwind @ 0x180075300 (RtlUnwind.c)
 *     __C_specific_handler @ 0x180123180 (__C_specific_handler.c)
 *     KiUserCallbackDispatcherHandler @ 0x1801671A0 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     RtlGuardIsValidStackPointer @ 0x180022A60 (RtlGuardIsValidStackPointer.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180022E20 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180022E90 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x180023510 (LdrControlFlowGuardEnforced.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlGetExtendedContextLength2 @ 0x180074C40 (RtlGetExtendedContextLength2.c)
 *     RtlpGetEntireXStateAreaLength @ 0x180075A00 (RtlpGetEntireXStateAreaLength.c)
 *     RtlpSaveX87State @ 0x180075AA0 (RtlpSaveX87State.c)
 *     RtlpGetStackLimits @ 0x180075F20 (RtlpGetStackLimits.c)
 *     RtlpSanitizeContext @ 0x180076770 (RtlpSanitizeContext.c)
 *     RtlInitializeExtendedContext2 @ 0x1800768C0 (RtlInitializeExtendedContext2.c)
 *     RtlLookupFunctionEntry @ 0x180076C90 (RtlLookupFunctionEntry.c)
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 *     RtlpxVirtualUnwind @ 0x180078D20 (RtlpxVirtualUnwind.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     RtlpCopyContext @ 0x1800CB2D0 (RtlpCopyContext.c)
 *     RtlVirtualUnwind @ 0x1800D5260 (RtlVirtualUnwind.c)
 *     RtlpLocateXStateChunk @ 0x1800DD6A0 (RtlpLocateXStateChunk.c)
 *     RtlCaptureContext2 @ 0x180122820 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x180122930 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x180122EA0 (RtlpGuardSynchronizeRestorePc.c)
 *     LdrpValidateUserCallTarget @ 0x180122FF0 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x180123040 (LdrpValidateUserCallTargetES.c)
 *     RtlFailFast2 @ 0x180123150 (RtlFailFast2.c)
 *     bsearch @ 0x180125820 (bsearch.c)
 *     bsearch_s @ 0x180125920 (bsearch_s.c)
 *     ZwRaiseException @ 0x180166090 (ZwRaiseException.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1801678D0 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1801679E0 (RtlpExecuteHandlerForUnwind.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  PCONTEXT p_Key; // r14
  unsigned int v9; // ebx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdi
  int v12; // eax
  void *v13; // r14
  int v14; // esi
  DWORD ContextFlags; // r9d
  bool v16; // cl
  int P1Home; // eax
  int P3Home; // edx
  unsigned int P1Home_high; // r8d
  unsigned int P3Home_high; // r9d
  int v21; // r8d
  ULONG64 v22; // r14
  int v23; // eax
  unsigned __int64 v24; // rcx
  int v25; // esi
  unsigned int v26; // edi
  struct _EXCEPTION_RECORD *v27; // rcx
  DWORD64 v28; // rax
  DWORD v29; // edi
  int v30; // edx
  int v31; // edx
  struct _CONTEXT *v32; // rax
  struct _CONTEXT *v33; // r13
  PCONTEXT v34; // rbx
  int v35; // et0
  struct _UNWIND_HISTORY_TABLE *v36; // rcx
  struct _CONTEXT *v37; // rax
  struct _EXCEPTION_RECORD *v38; // rsi
  int ExceptionCode; // eax
  __int64 v40; // rdx
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rdi
  int v43; // ebx
  __int64 Config; // rax
  rsize_t v45; // r8
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdx
  rsize_t v50; // r8
  unsigned int v51; // eax
  unsigned __int64 v52; // rbx
  ULONG64 v53; // rsi
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v54; // rdi
  PEXCEPTION_ROUTINE v55; // rax
  char v56; // bl
  int v57; // eax
  int v58; // edi
  __int64 v59; // r8
  bool v60; // zf
  int v61; // ebx
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rcx
  void *v64; // rsp
  void *v65; // rsp
  __int64 v66; // rsi
  __int64 XStateChunk; // rax
  char v68; // r11
  __int64 v69; // r10
  __int64 v70; // rdx
  unsigned int v71; // ecx
  __int64 v72; // rax
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  void *v75; // rsp
  void *v76; // rsp
  __int64 v77; // rbx
  _QWORD *v78; // rax
  unsigned int Key; // [rsp+60h] [rbp+0h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+68h] [rbp+8h] BYREF
  PCONTEXT v81; // [rsp+70h] [rbp+10h]
  int v82; // [rsp+78h] [rbp+18h] BYREF
  void *v83; // [rsp+80h] [rbp+20h] BYREF
  PEXCEPTION_ROUTINE v84; // [rsp+88h] [rbp+28h] BYREF
  PVOID HandlerData; // [rsp+90h] [rbp+30h] BYREF
  PUNWIND_HISTORY_TABLE v86; // [rsp+98h] [rbp+38h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+A0h] [rbp+40h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v88; // [rsp+A8h] [rbp+48h] BYREF
  __int128 v89; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v90; // [rsp+C0h] [rbp+60h]
  unsigned __int64 ImageBase; // [rsp+C8h] [rbp+68h] BYREF
  unsigned __int64 v92; // [rsp+D0h] [rbp+70h] BYREF
  PCONTEXT v93; // [rsp+D8h] [rbp+78h]
  PVOID v94; // [rsp+E0h] [rbp+80h]
  PVOID v95; // [rsp+E8h] [rbp+88h]
  ULONG64 ControlPc; // [rsp+F0h] [rbp+90h] BYREF
  ULONG64 v97; // [rsp+F8h] [rbp+98h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+100h] [rbp+A0h]
  unsigned __int64 v99; // [rsp+108h] [rbp+A8h]
  PVOID v100; // [rsp+110h] [rbp+B0h]
  struct _CONTEXT *v101; // [rsp+118h] [rbp+B8h]
  EXCEPTION_ROUTINE *v102; // [rsp+120h] [rbp+C0h]
  PVOID v103; // [rsp+128h] [rbp+C8h]
  struct _UNWIND_HISTORY_TABLE *v104; // [rsp+130h] [rbp+D0h]
  int v105; // [rsp+138h] [rbp+D8h]
  int v106; // [rsp+140h] [rbp+E0h] BYREF
  __int64 v107; // [rsp+148h] [rbp+E8h]
  DWORD64 Rip; // [rsp+150h] [rbp+F0h]
  int v109; // [rsp+158h] [rbp+F8h]

  p_Key = ContextRecord;
  v95 = TargetIp;
  ExceptionRecorda = ExceptionRecord;
  v94 = ReturnValue;
  v81 = ContextRecord;
  v86 = HistoryTable;
  memset_thunk_772440563353939046(&ControlPc, 0, 0x50uLL);
  memset_thunk_772440563353939046(&v106, 0, 0x98uLL);
  v9 = 0;
  v84 = 0LL;
  Key = 0;
  HandlerData = 0LL;
  v83 = 0LL;
  ImageBase = 0LL;
  v92 = 0LL;
  if ( !RtlpGetStackLimits(&v92, &v83) )
LABEL_2:
    RtlRaiseStatus(3221225512LL);
  RtlpSanitizeContext(ContextRecord);
  if ( ((*((_QWORD *)&xmmword_1801EC4E0 + 1) >> 60) & 3) != 1 )
  {
    v56 = 1;
    v57 = 1264;
    v58 = 1048587;
    v59 = 0LL;
LABEL_121:
    v60 = (v56 & 4) == 0;
    v81 = p_Key;
    v61 = v57 + 32;
    if ( v60 )
      v61 = v57;
    v9 = v61 + 15;
    goto LABEL_124;
  }
  v58 = 1048651;
  v66 = 2048LL;
  if ( (ContextRecord->ContextFlags & 0x100040) == 0x100040
    && ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800LL) != 0
    && (MEMORY[0x7FFE03EC] & 0xFFFFFFF8) == 0 )
  {
    XStateChunk = RtlpLocateXStateChunk(&ContextRecord[1]);
    v69 = XStateChunk;
    if ( XStateChunk )
    {
      if ( (v68 & 2) == 0 )
      {
        v72 = MEMORY[0x7FFE0448];
        goto LABEL_173;
      }
      v70 = *(_QWORD *)(XStateChunk + 8);
      if ( (v70 & 0x800) != 0 )
      {
        v71 = 576;
        if ( (v70 & 4) != 0 )
          v71 = MEMORY[0x7FFE060C] + 576;
        if ( (v70 & 8) != 0 )
        {
          if ( (MEMORY[0x7FFE05F8] & 8) != 0 )
            v71 = (v71 + 63) & 0xFFFFFFC0;
          v71 += MEMORY[0x7FFE0610];
        }
        if ( (v70 & 0x10) != 0 )
        {
          if ( (MEMORY[0x7FFE05F8] & 0x10) != 0 )
            v71 = (v71 + 63) & 0xFFFFFFC0;
          v71 += MEMORY[0x7FFE0614];
        }
        if ( (v70 & 0x20) != 0 )
        {
          if ( (MEMORY[0x7FFE05F8] & 0x20) != 0 )
            v71 = (v71 + 63) & 0xFFFFFFC0;
          v71 += MEMORY[0x7FFE0618];
        }
        if ( (v70 & 0x40) != 0 )
        {
          if ( (MEMORY[0x7FFE05F8] & 0x40) != 0 )
            v71 = (v71 + 63) & 0xFFFFFFC0;
          v71 += MEMORY[0x7FFE061C];
        }
        if ( (v70 & 0x80u) != 0LL )
        {
          if ( MEMORY[0x7FFE05F8] < 0 )
            v71 = (v71 + 63) & 0xFFFFFFC0;
          v71 += MEMORY[0x7FFE0620];
        }
        if ( (v70 & 0x100) != 0 )
        {
          if ( (MEMORY[0x7FFE05F8] & 0x100) != 0 )
            v71 = (v71 + 63) & 0xFFFFFFC0;
          v71 += MEMORY[0x7FFE0624];
        }
        if ( (v70 & 0x200) != 0 )
        {
          if ( (MEMORY[0x7FFE05F8] & 0x200) != 0 )
            v71 = (v71 + 63) & 0xFFFFFFC0;
          v71 += MEMORY[0x7FFE0628];
        }
        if ( (v70 & 0x400) != 0 )
        {
          if ( (MEMORY[0x7FFE05F8] & 0x400) != 0 )
            v71 = (v71 + 63) & 0xFFFFFFC0;
          v71 += MEMORY[0x7FFE062C];
        }
        if ( (MEMORY[0x7FFE05F8] & 0x800) != 0 )
          v71 = (v71 + 63) & 0xFFFFFFC0;
        v72 = v71;
LABEL_173:
        if ( v69 + v72 != 512 )
          goto LABEL_177;
      }
    }
  }
  RtlGetExtendedContextLength2(1048651, &Key, 2048LL);
  v9 = Key;
  v73 = Key + 15LL;
  if ( v73 <= Key )
    v73 = 0xFFFFFFFFFFFFFF0LL;
  v74 = v73 & 0xFFFFFFFFFFFFFFF0uLL;
  v75 = alloca(v74);
  v76 = alloca(v74);
  p_Key = (PCONTEXT)&Key;
  v81 = (PCONTEXT)&Key;
  RtlInitializeExtendedContext2((__int64)&Key, 1048651, &v88, 2048LL);
LABEL_177:
  v59 = 2048LL;
  if ( MEMORY[0x7FFE03D8] )
  {
    v56 = 3;
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      v66 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800LL;
    v57 = RtlpGetEntireXStateAreaLength(v66) + 800;
    goto LABEL_121;
  }
LABEL_124:
  v62 = v9 + 15LL;
  if ( v62 <= v9 )
    v62 = 0xFFFFFFFFFFFFFF0LL;
  v63 = v62 & 0xFFFFFFFFFFFFFFF0uLL;
  v64 = alloca(v63);
  v65 = alloca(v63);
  v34 = (PCONTEXT)&Key;
  v93 = (PCONTEXT)&Key;
  RtlInitializeExtendedContext2((__int64)&Key, v58, &v88, v59);
  v33 = p_Key;
  RtlCaptureContext2(p_Key);
  v36 = v86;
  if ( v86 )
    v86->Search = 1;
  if ( !ExceptionRecord )
  {
    v106 = -1073741785;
    v107 = 0LL;
    Rip = p_Key->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v106;
    v109 = 0;
    v81 = p_Key;
  }
  v10 = (unsigned __int64)v83;
  v11 = v92;
  v12 = 2;
  EstablisherFrame = 0LL;
  if ( !TargetFrame )
    v12 = 6;
  Key = v12;
  while ( 1 )
  {
    v13 = (void *)v33->Rip;
    v83 = v13;
    v88 = RtlLookupFunctionEntry((ULONG64)v13, &ImageBase, v36);
    v14 = (int)v88;
    RtlpCopyContext(v34, v33);
    ContextFlags = v34->ContextFlags;
    v90 = 0LL;
    v89 = 0LL;
    if ( (ContextFlags & 0x27FFFF80) != 0x10000
      && (ContextFlags & 0x7FFFF20) != 0x100000
      && (ContextFlags & 0x7FFFFF0) != 0x200000
      && (ContextFlags & 0x7FFFFC0) != 0x400000 )
    {
      goto LABEL_51;
    }
    v16 = 0;
    if ( (ContextFlags & 0x400020) != 0x400020 )
      v16 = (ContextFlags & 0x10040) != 65600 && (ContextFlags & 0x100040) != 1048640;
    if ( !v16 && !MEMORY[0x7FFE03D8] || (ContextFlags & 0x100080) == 0x100080 )
    {
      v34->ContextFlags = 1048587;
      goto LABEL_20;
    }
    if ( (ContextFlags & 0x100000) == 0 )
LABEL_51:
      v34->ContextFlags = ContextFlags & 0xF800001F | 0x100000;
    if ( (v34->ContextFlags & 0x100040) == 0x100040 )
    {
      P1Home = v34[1].P1Home;
      P3Home = v34[1].P3Home;
      if ( P1Home > P3Home
        || (P1Home_high = HIDWORD(v34[1].P1Home), P3Home_high = HIDWORD(v34[1].P3Home), P1Home_high < 0x530)
        || (int)(P1Home_high + P1Home) < (int)(P3Home_high + P3Home)
        || HIDWORD(v34[1].P2Home) != 1232
        || P3Home_high < 0x40
        || (struct _CONTEXT *)((char *)&v34[1] + SLODWORD(v34[1].P2Home)) != v34 )
      {
        v34->ContextFlags &= ~0x40u;
      }
    }
LABEL_20:
    v21 = (int)v13;
    v22 = ImageBase;
    v23 = RtlpxVirtualUnwind(
            2,
            ImageBase,
            v21,
            v14,
            (__int64)v34,
            0LL,
            (__int64)&HandlerData,
            (__int64)&EstablisherFrame,
            (__int64)&v84,
            (__int64)&v89,
            0);
    if ( v23 < 0 )
      RtlRaiseStatus((unsigned int)v23);
    v24 = EstablisherFrame;
    if ( (EstablisherFrame & 7) != 0
      || EstablisherFrame >= v10
      || EstablisherFrame < v11
      || TargetFrame && (unsigned __int64)TargetFrame < EstablisherFrame )
    {
      goto LABEL_2;
    }
    if ( v84 )
    {
      v25 = 0;
      v26 = Key;
      v100 = v95;
      do
      {
        if ( TargetFrame == (PVOID)v24 )
        {
          v26 |= 0x20u;
          Key = v26;
        }
        v27 = ExceptionRecorda;
        v28 = (DWORD64)v94;
        ExceptionRecorda->ExceptionFlags = v26;
        v33->Rax = v28;
        ControlPc = (ULONG64)v83;
        FunctionEntry = v88;
        v102 = v84;
        v103 = HandlerData;
        v104 = v86;
        v97 = v22;
        v99 = EstablisherFrame;
        v101 = v33;
        v105 = v25;
        v29 = v33->ContextFlags;
        v30 = RtlpExecuteHandlerForUnwind(v27, EstablisherFrame, v33, &ControlPc);
        if ( (v29 & 0x100040) != 0x100040 && (v33->ContextFlags & 0x100040) == 0x100040 )
          v33->ContextFlags &= ~0x40u;
        v26 = Key & 0xFFFFFF9F;
        Key &= 0xFFFFFF9F;
        v31 = v30 - 1;
        if ( v31 )
        {
          if ( v31 != 2 )
            RtlRaiseStatus(3221225510LL);
          v53 = ControlPc;
          v22 = v97;
          v54 = FunctionEntry;
          v83 = (void *)ControlPc;
          ImageBase = v97;
          v88 = FunctionEntry;
          RtlpCopyContext(v81, v101);
          v33 = v81;
          v34 = v93;
          RtlpCopyContext(v93, v81);
          v55 = RtlVirtualUnwind(2u, v22, v53, v54, v34, &HandlerData, &EstablisherFrame, 0LL);
          v84 = v55;
          if ( ((*((_QWORD *)&xmmword_1801EC4E0 + 1) >> 12) & 3) == 1 )
          {
            if ( v55 != v102 || (v24 = EstablisherFrame, EstablisherFrame != v99) || HandlerData != v103 )
              __fastfail(0x27u);
          }
          else
          {
            v24 = v99;
            v84 = v102;
            HandlerData = v103;
            EstablisherFrame = v99;
          }
          v26 = Key | 0x40;
          v25 = v105;
          Key |= 0x40u;
          v86 = v104;
        }
        else
        {
          if ( (PVOID)EstablisherFrame != TargetFrame )
          {
            v32 = v33;
            v33 = v34;
            v34 = v32;
          }
          v35 = _mm_getcsr();
          v82 = v35;
          v33->MxCsr = v35;
          v33->FltSave.MxCsr = v35;
          if ( v33->FltSave.ControlWord != 639 || (v33->FltSave.StatusWord & 0xB880) != 0 || v33->FltSave.TagWord )
            RtlpSaveX87State((__int64)v33);
          v24 = EstablisherFrame;
        }
      }
      while ( (v26 & 0x40) != 0 );
      v11 = v92;
    }
    else if ( (PVOID)EstablisherFrame != TargetFrame )
    {
      v37 = v33;
      v33 = v34;
      v34 = v37;
    }
    if ( (v24 & 7) != 0 || v24 >= v10 || v24 < v11 )
      break;
    if ( (PVOID)v24 == TargetFrame )
      goto LABEL_57;
    v36 = v86;
  }
  if ( (PVOID)v24 == TargetFrame )
  {
LABEL_57:
    v38 = ExceptionRecorda;
    v33->Rax = (DWORD64)v94;
    if ( v38->ExceptionCode != -2147483607 )
    {
      v33->Rip = (DWORD64)v95;
      if ( v38->ExceptionCode != -2147483610 )
        v38->ExceptionCode = -1073741785;
    }
    RtlpGuardSynchronizeRestorePc(&v33->Rip);
    ExceptionCode = v38->ExceptionCode;
    if ( v38->ExceptionCode == -2147483610 )
    {
      v40 = qword_1801EC4F8;
      v41 = v38->ExceptionInformation[0];
      if ( qword_1801EC4F8 && (dword_1801EC4DC & 1) == 0 )
      {
        if ( RtlGuardIsValidStackPointer(*(_QWORD *)(v41 + 16)) )
        {
          v40 = qword_1801EC4F8;
          goto LABEL_65;
        }
LABEL_108:
        __fastfail(0xDu);
      }
LABEL_65:
      if ( ((*((_QWORD *)&xmmword_1801EC4E0 + 1) >> 60) & 3) != 1 )
      {
        v42 = *(_QWORD *)(v41 + 80);
        Key = 0;
        if ( v40 )
        {
          if ( (dword_1801EC4DC & 1) == 0 )
          {
            v90 = 0LL;
            v89 = 0LL;
            if ( v42 < *((_QWORD *)&xmmword_1801E9430 + 1)
              || v42 >= *((_QWORD *)&xmmword_1801E9430 + 1) + (unsigned __int64)(unsigned int)qword_1801E9440 )
            {
              RtlpxLookupFunctionTable(v42, &v89);
            }
            else
            {
              v89 = xmmword_1801E9430;
            }
            v43 = DWORD2(v89);
            if ( *((_QWORD *)&v89 + 1) )
            {
              Config = LdrImageDirectoryEntryToLoadConfig(*((__int64 *)&v89 + 1));
              if ( Config )
              {
                if ( *(_DWORD *)Config >= 0xC0u && (*(_DWORD *)(Config + 144) & 0x10000) != 0 )
                {
                  Key = v42 - v43;
                  v45 = *(_QWORD *)(Config + 184);
                  if ( !v45
                    || !bsearch_s(
                          &Key,
                          *(const void **)(Config + 176),
                          v45,
                          (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
                          RtlpTargetCompare,
                          0LL) )
                  {
                    goto LABEL_118;
                  }
                }
              }
            }
            else
            {
              if ( !RtlpProtectedPolicies )
                goto LABEL_118;
              RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
              v78 = bsearch(
                      &unk_18017B5F8,
                      RtlpProtectedPolicies,
                      (unsigned int)RtlpProtectedPoliciesActiveCount,
                      0x18uLL,
                      RtlpCompareProtectedPolicyEntry);
              if ( !v78 )
              {
                RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
                goto LABEL_118;
              }
              v77 = v78[2];
              RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
              if ( !v77 )
LABEL_118:
                RtlFailFast2(38LL, v42);
            }
          }
        }
      }
    }
    else
    {
      if ( ExceptionCode == -2147483607 )
      {
        if ( v38->NumberParameters )
        {
          v52 = v38->ExceptionInformation[0];
          if ( LdrControlFlowGuardEnforced() )
          {
            if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
              LdrpValidateUserCallTargetES(v52);
            else
              LdrpValidateUserCallTarget(v52);
          }
        }
      }
      else if ( ExceptionCode == -1073741785 )
      {
        if ( ((*((_QWORD *)&xmmword_1801EC4E0 + 1) >> 60) & 3) != 1 )
        {
          v46 = v33->Rip;
          if ( LdrControlFlowGuardEnforced() )
          {
            v90 = 0LL;
            v89 = 0LL;
            if ( v46 < *((_QWORD *)&xmmword_1801E9430 + 1)
              || v46 >= *((_QWORD *)&xmmword_1801E9430 + 1) + (unsigned __int64)(unsigned int)qword_1801E9440 )
            {
              RtlpxLookupFunctionTable(v46, &v89);
            }
            else
            {
              v89 = xmmword_1801E9430;
            }
            v47 = *((_QWORD *)&v89 + 1);
            if ( *((_QWORD *)&v89 + 1) )
            {
              v48 = LdrImageDirectoryEntryToLoadConfig(*((__int64 *)&v89 + 1));
              v49 = v48;
              if ( v48 )
              {
                if ( *(_DWORD *)v48 >= 0x118u
                  && (*(_DWORD *)(v48 + 144) & 0x400000) != 0
                  && *(_QWORD *)(v48 + 264) > v47 )
                {
                  v82 = v46 - v47;
                  v50 = *(_QWORD *)(v48 + 272);
                  v51 = (*(_DWORD *)(v48 + 144) >> 28) + 4;
                  if ( !v50 || !bsearch_s(&v82, *(const void **)(v49 + 264), v50, v51, RtlpTargetCompare, 0LL) )
                    RtlFailFast2(38LL, v46);
                }
              }
            }
          }
        }
        goto LABEL_100;
      }
      if ( qword_1801EC4F8 && (dword_1801EC4DC & 1) == 0 && !RtlGuardIsValidStackPointer(v33->Rsp) )
        goto LABEL_108;
    }
LABEL_100:
    RtlRestoreContext(v33, v38);
  }
  else
  {
    if ( v83 == (void *)v33->Rip )
      RtlRaiseStatus(3221225727LL);
    ZwRaiseException(ExceptionRecorda, v33, 0LL);
  }
}
