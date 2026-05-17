/*
 * XREFs of RtlUnwindEx @ 0x180015480
 * Callers:
 *     RtlUnwind @ 0x1800D75E0 (RtlUnwind.c)
 *     __C_specific_handler @ 0x1801216A0 (__C_specific_handler.c)
 *     KiUserCallbackDispatcherHandler @ 0x180165C10 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     RtlGuardIsValidStackPointer @ 0x180009240 (RtlGuardIsValidStackPointer.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180009600 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009670 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlLookupFunctionEntry @ 0x180015110 (RtlLookupFunctionEntry.c)
 *     RtlpxLookupFunctionTable @ 0x1800166E0 (RtlpxLookupFunctionTable.c)
 *     RtlpxVirtualUnwind @ 0x180016C30 (RtlpxVirtualUnwind.c)
 *     RtlpValidateContextFlags @ 0x180017E20 (RtlpValidateContextFlags.c)
 *     RtlVirtualUnwind @ 0x180018C20 (RtlVirtualUnwind.c)
 *     RtlpSanitizeContext @ 0x180018DD0 (RtlpSanitizeContext.c)
 *     RtlLocateExtendedFeature @ 0x180018F00 (RtlLocateExtendedFeature.c)
 *     RtlpCopyContext @ 0x18001A1B0 (RtlpCopyContext.c)
 *     RtlInitializeExtendedContext2 @ 0x1800D76F0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1800D7C70 (RtlGetExtendedContextLength2.c)
 *     RtlpSaveX87State @ 0x1800E0C40 (RtlpSaveX87State.c)
 *     RtlpGetStackLimits @ 0x1800E23C0 (RtlpGetStackLimits.c)
 *     RtlCaptureContext2 @ 0x180120D40 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x180120E50 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1801213C0 (RtlpGuardSynchronizeRestorePc.c)
 *     LdrpValidateUserCallTarget @ 0x180121510 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x180121560 (LdrpValidateUserCallTargetES.c)
 *     RtlFailFast2 @ 0x180121670 (RtlFailFast2.c)
 *     bsearch @ 0x180123D40 (bsearch.c)
 *     bsearch_s @ 0x180123E40 (bsearch_s.c)
 *     ZwRaiseException @ 0x180164B00 (ZwRaiseException.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180166340 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x180166450 (RtlpExecuteHandlerForUnwind.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
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
  __int64 v9; // rbx
  int P1Home; // eax
  int P3Home; // edx
  unsigned int P1Home_high; // r8d
  unsigned int P3Home_high; // r9d
  int v14; // r8d
  ULONG64 v15; // r14
  int v16; // eax
  unsigned __int64 v17; // rcx
  int v18; // esi
  unsigned int v19; // edi
  struct _EXCEPTION_RECORD *v20; // rcx
  DWORD64 v21; // rax
  DWORD v22; // edi
  int v23; // edx
  int v24; // edx
  struct _CONTEXT *v25; // rax
  struct _CONTEXT *v26; // r15
  PCONTEXT v27; // rbx
  int v28; // et0
  unsigned __int64 v29; // rdi
  struct _UNWIND_HISTORY_TABLE *v30; // rcx
  unsigned __int64 v31; // r13
  int v32; // eax
  ULONG64 v33; // r14
  int v34; // esi
  __int64 ContextFlags; // rcx
  int v36; // eax
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
  unsigned int v56; // edi
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  void *v59; // rsp
  void *v60; // rsp
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rcx
  void *v63; // rsp
  void *v64; // rsp
  __int64 v65; // rbx
  _QWORD *v66; // rax
  unsigned int Key; // [rsp+60h] [rbp+0h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+68h] [rbp+8h] BYREF
  int v69; // [rsp+70h] [rbp+10h] BYREF
  ULONG64 v70; // [rsp+78h] [rbp+18h] BYREF
  PEXCEPTION_ROUTINE v71; // [rsp+80h] [rbp+20h] BYREF
  PVOID HandlerData; // [rsp+88h] [rbp+28h] BYREF
  __int128 v73; // [rsp+90h] [rbp+30h] BYREF
  __int64 v74; // [rsp+A0h] [rbp+40h]
  PUNWIND_HISTORY_TABLE v75; // [rsp+A8h] [rbp+48h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+B0h] [rbp+50h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v77; // [rsp+B8h] [rbp+58h] BYREF
  unsigned __int64 ImageBase; // [rsp+C0h] [rbp+60h] BYREF
  PCONTEXT v79; // [rsp+C8h] [rbp+68h]
  unsigned __int64 v80; // [rsp+D0h] [rbp+70h] BYREF
  PCONTEXT v81; // [rsp+D8h] [rbp+78h]
  PVOID v82; // [rsp+E0h] [rbp+80h]
  PVOID v83; // [rsp+E8h] [rbp+88h]
  ULONG64 ControlPc; // [rsp+F0h] [rbp+90h] BYREF
  ULONG64 v85; // [rsp+F8h] [rbp+98h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+100h] [rbp+A0h]
  unsigned __int64 v87; // [rsp+108h] [rbp+A8h]
  PVOID v88; // [rsp+110h] [rbp+B0h]
  struct _CONTEXT *v89; // [rsp+118h] [rbp+B8h]
  EXCEPTION_ROUTINE *v90; // [rsp+120h] [rbp+C0h]
  PVOID v91; // [rsp+128h] [rbp+C8h]
  struct _UNWIND_HISTORY_TABLE *v92; // [rsp+130h] [rbp+D0h]
  int v93; // [rsp+138h] [rbp+D8h]
  int v94; // [rsp+140h] [rbp+E0h] BYREF
  __int64 v95; // [rsp+148h] [rbp+E8h]
  DWORD64 Rip; // [rsp+150h] [rbp+F0h]
  int v97; // [rsp+158h] [rbp+F8h]

  p_Key = ContextRecord;
  v83 = TargetIp;
  ExceptionRecorda = ExceptionRecord;
  v82 = ReturnValue;
  v79 = ContextRecord;
  v75 = HistoryTable;
  memset_thunk_772440563353939046(&ControlPc, 0, 0x50uLL);
  memset_thunk_772440563353939046(&v94, 0, 0x98uLL);
  v9 = 0LL;
  v71 = 0LL;
  HandlerData = 0LL;
  v70 = 0LL;
  ImageBase = 0LL;
  Key = 0;
  v80 = 0LL;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v80, &v70) )
LABEL_2:
    RtlRaiseStatus(-1073741784);
  RtlpSanitizeContext(ContextRecord);
  v56 = 1048587;
  if ( ((*((_QWORD *)&xmmword_1801EA4F0 + 1) >> 60) & 3) == 1 )
  {
    v56 = 1048651;
    if ( (ContextRecord->ContextFlags & 0x100040) == 0x100040 && RtlLocateExtendedFeature(&ContextRecord[1], 11LL) )
    {
      v9 = 2048LL;
    }
    else
    {
      v9 = 2048LL;
      RtlGetExtendedContextLength2(1048651LL, &Key, 2048LL);
      v61 = Key + 15LL;
      if ( v61 <= Key )
        v61 = 0xFFFFFFFFFFFFFF0LL;
      v62 = v61 & 0xFFFFFFFFFFFFFFF0uLL;
      v63 = alloca(v62);
      v64 = alloca(v62);
      p_Key = (PCONTEXT)&Key;
      v79 = (PCONTEXT)&Key;
      RtlInitializeExtendedContext2(&Key, 1048651LL, &v77, 2048LL);
    }
  }
  RtlGetExtendedContextLength2(v56, &Key, v9);
  v57 = Key + 15LL;
  if ( v57 <= Key )
    v57 = 0xFFFFFFFFFFFFFF0LL;
  v58 = v57 & 0xFFFFFFFFFFFFFFF0uLL;
  v59 = alloca(v58);
  v60 = alloca(v58);
  v81 = (PCONTEXT)&Key;
  RtlInitializeExtendedContext2(&Key, v56, &v77, v9);
  v26 = p_Key;
  v27 = (PCONTEXT)&Key;
  RtlCaptureContext2(p_Key);
  v30 = v75;
  if ( v75 )
    v75->Search = 1;
  if ( !ExceptionRecord )
  {
    v94 = -1073741785;
    v95 = 0LL;
    Rip = p_Key->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v94;
    v97 = 0;
  }
  v31 = v70;
  v29 = v80;
  v32 = 2;
  EstablisherFrame = 0LL;
  if ( !TargetFrame )
    v32 = 6;
  Key = v32;
  while ( 1 )
  {
    v33 = v26->Rip;
    v70 = v33;
    v77 = RtlLookupFunctionEntry(v33, &ImageBase, v30);
    v34 = (int)v77;
    RtlpCopyContext(v27, v26);
    ContextFlags = v27->ContextFlags;
    v74 = 0LL;
    v73 = 0LL;
    v36 = RtlpValidateContextFlags(ContextFlags, 0LL);
    if ( v36 < 0 )
    {
      if ( v36 == -1073741811 )
        goto LABEL_44;
    }
    else if ( (v27->ContextFlags & 0x100000) == 0 )
    {
LABEL_44:
      v27->ContextFlags = v27->ContextFlags & 0xF800001F | 0x100000;
      goto LABEL_5;
    }
    if ( v36 < 0 )
    {
      v27->ContextFlags = 1048587;
      goto LABEL_12;
    }
LABEL_5:
    if ( (v27->ContextFlags & 0x100040) == 0x100040 )
    {
      P1Home = v27[1].P1Home;
      P3Home = v27[1].P3Home;
      if ( P1Home > P3Home
        || (P1Home_high = HIDWORD(v27[1].P1Home), P3Home_high = HIDWORD(v27[1].P3Home), P1Home_high < 0x530)
        || (int)(P1Home_high + P1Home) < (int)(P3Home_high + P3Home)
        || HIDWORD(v27[1].P2Home) != 1232
        || P3Home_high < 0x40
        || (struct _CONTEXT *)((char *)&v27[1] + SLODWORD(v27[1].P2Home)) != v27 )
      {
        v27->ContextFlags &= ~0x40u;
      }
    }
LABEL_12:
    v14 = v33;
    v15 = ImageBase;
    v74 = 0LL;
    v73 = 0LL;
    v16 = RtlpxVirtualUnwind(
            2,
            ImageBase,
            v14,
            v34,
            (__int64)v27,
            0LL,
            (__int64)&HandlerData,
            (__int64)&EstablisherFrame,
            (__int64)&v71,
            (__int64)&v73,
            0);
    if ( v16 < 0 )
      RtlRaiseStatus(v16);
    v17 = EstablisherFrame;
    if ( (EstablisherFrame & 7) != 0
      || EstablisherFrame >= v31
      || EstablisherFrame < v29
      || TargetFrame && (unsigned __int64)TargetFrame < EstablisherFrame )
    {
      goto LABEL_2;
    }
    if ( v71 )
    {
      v18 = 0;
      v19 = Key;
      v88 = v83;
      do
      {
        if ( TargetFrame == (PVOID)v17 )
        {
          v19 |= 0x20u;
          Key = v19;
        }
        v20 = ExceptionRecorda;
        v21 = (DWORD64)v82;
        ExceptionRecorda->ExceptionFlags = v19;
        v26->Rax = v21;
        ControlPc = v70;
        FunctionEntry = v77;
        v90 = v71;
        v91 = HandlerData;
        v92 = v75;
        v85 = v15;
        v87 = EstablisherFrame;
        v89 = v26;
        v93 = v18;
        v22 = v26->ContextFlags;
        v23 = RtlpExecuteHandlerForUnwind(v20, EstablisherFrame, v26, &ControlPc);
        if ( (v22 & 0x100040) != 0x100040 && (v26->ContextFlags & 0x100040) == 0x100040 )
          v26->ContextFlags &= ~0x40u;
        v19 = Key & 0xFFFFFF9F;
        Key &= 0xFFFFFF9F;
        v24 = v23 - 1;
        if ( v24 )
        {
          if ( v24 != 2 )
            RtlRaiseStatus(-1073741786);
          v53 = ControlPc;
          v15 = v85;
          v54 = FunctionEntry;
          v70 = ControlPc;
          ImageBase = v85;
          v77 = FunctionEntry;
          RtlpCopyContext(v79, v89);
          v26 = v79;
          v27 = v81;
          RtlpCopyContext(v81, v79);
          v55 = RtlVirtualUnwind(2u, v15, v53, v54, v27, &HandlerData, &EstablisherFrame, 0LL);
          v71 = v55;
          if ( ((*((_QWORD *)&xmmword_1801EA4F0 + 1) >> 12) & 3) == 1 )
          {
            if ( v55 != v90 || (v17 = EstablisherFrame, EstablisherFrame != v87) || HandlerData != v91 )
              __fastfail(0x27u);
          }
          else
          {
            v17 = v87;
            v71 = v90;
            HandlerData = v91;
            EstablisherFrame = v87;
          }
          v19 = Key | 0x40;
          v18 = v93;
          Key |= 0x40u;
          v75 = v92;
        }
        else
        {
          if ( (PVOID)EstablisherFrame != TargetFrame )
          {
            v25 = v26;
            v26 = v27;
            v27 = v25;
          }
          v28 = _mm_getcsr();
          v69 = v28;
          v26->MxCsr = v28;
          v26->FltSave.MxCsr = v28;
          if ( v26->FltSave.ControlWord != 639 || (v26->FltSave.StatusWord & 0xB880) != 0 || v26->FltSave.TagWord )
            RtlpSaveX87State(v26);
          v17 = EstablisherFrame;
        }
      }
      while ( (v19 & 0x40) != 0 );
      v29 = v80;
    }
    else if ( (PVOID)EstablisherFrame != TargetFrame )
    {
      v37 = v26;
      v26 = v27;
      v27 = v37;
    }
    if ( (v17 & 7) != 0 || v17 >= v31 || v17 < v29 )
      break;
    if ( (PVOID)v17 == TargetFrame )
      goto LABEL_51;
    v30 = v75;
  }
  if ( (PVOID)v17 == TargetFrame )
  {
LABEL_51:
    v38 = ExceptionRecorda;
    v26->Rax = (DWORD64)v82;
    if ( v38->ExceptionCode != -2147483607 )
    {
      v26->Rip = (DWORD64)v83;
      if ( v38->ExceptionCode != -2147483610 )
        v38->ExceptionCode = -1073741785;
    }
    RtlpGuardSynchronizeRestorePc(&v26->Rip);
    ExceptionCode = v38->ExceptionCode;
    if ( v38->ExceptionCode == -2147483610 )
    {
      v40 = qword_1801EA508;
      v41 = v38->ExceptionInformation[0];
      if ( qword_1801EA508 && (dword_1801EA4EC & 1) == 0 )
      {
        if ( RtlGuardIsValidStackPointer(*(_QWORD *)(v41 + 16)) )
        {
          v40 = qword_1801EA508;
          goto LABEL_59;
        }
LABEL_103:
        __fastfail(0xDu);
      }
LABEL_59:
      if ( ((*((_QWORD *)&xmmword_1801EA4F0 + 1) >> 60) & 3) != 1 )
      {
        v42 = *(_QWORD *)(v41 + 80);
        Key = 0;
        if ( v40 )
        {
          if ( (dword_1801EA4EC & 1) == 0 )
          {
            v74 = 0LL;
            v73 = 0LL;
            if ( v42 < *((_QWORD *)&xmmword_1801E7440 + 1)
              || v42 >= *((_QWORD *)&xmmword_1801E7440 + 1) + (unsigned __int64)(unsigned int)qword_1801E7450 )
            {
              RtlpxLookupFunctionTable(v42, &v73);
            }
            else
            {
              v73 = xmmword_1801E7440;
            }
            v43 = DWORD2(v73);
            if ( *((_QWORD *)&v73 + 1) )
            {
              Config = LdrImageDirectoryEntryToLoadConfig(*((__int64 *)&v73 + 1));
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
                    goto LABEL_113;
                  }
                }
              }
            }
            else
            {
              if ( !RtlpProtectedPolicies )
                goto LABEL_113;
              RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
              v66 = bsearch(
                      &unk_180179B78,
                      RtlpProtectedPolicies,
                      (unsigned int)RtlpProtectedPoliciesActiveCount,
                      0x18uLL,
                      RtlpCompareProtectedPolicyEntry);
              if ( !v66 )
              {
                RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
                goto LABEL_113;
              }
              v65 = v66[2];
              RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
              if ( !v65 )
LABEL_113:
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
        if ( ((*((_QWORD *)&xmmword_1801EA4F0 + 1) >> 60) & 3) != 1 )
        {
          v46 = v26->Rip;
          if ( LdrControlFlowGuardEnforced() )
          {
            v74 = 0LL;
            v73 = 0LL;
            if ( v46 < *((_QWORD *)&xmmword_1801E7440 + 1)
              || v46 >= *((_QWORD *)&xmmword_1801E7440 + 1) + (unsigned __int64)(unsigned int)qword_1801E7450 )
            {
              RtlpxLookupFunctionTable(v46, &v73);
            }
            else
            {
              v73 = xmmword_1801E7440;
            }
            v47 = *((_QWORD *)&v73 + 1);
            if ( *((_QWORD *)&v73 + 1) )
            {
              v48 = LdrImageDirectoryEntryToLoadConfig(*((__int64 *)&v73 + 1));
              v49 = v48;
              if ( v48 )
              {
                if ( *(_DWORD *)v48 >= 0x118u
                  && (*(_DWORD *)(v48 + 144) & 0x400000) != 0
                  && *(_QWORD *)(v48 + 264) > v47 )
                {
                  v69 = v46 - v47;
                  v50 = *(_QWORD *)(v48 + 272);
                  v51 = (*(_DWORD *)(v48 + 144) >> 28) + 4;
                  if ( !v50 || !bsearch_s(&v69, *(const void **)(v49 + 264), v50, v51, RtlpTargetCompare, 0LL) )
                    RtlFailFast2(38LL, v46);
                }
              }
            }
          }
        }
        goto LABEL_95;
      }
      if ( qword_1801EA508 && (dword_1801EA4EC & 1) == 0 && !RtlGuardIsValidStackPointer(v26->Rsp) )
        goto LABEL_103;
    }
LABEL_95:
    RtlRestoreContext(v26, v38);
  }
  else
  {
    if ( v70 == v26->Rip )
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecorda, v26, 0LL);
  }
}
