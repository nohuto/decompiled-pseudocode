/*
 * XREFs of RtlUnwindEx @ 0x180041E80
 * Callers:
 *     RtlUnwind @ 0x1800D2950 (RtlUnwind.c)
 *     __C_specific_handler @ 0x18011F8D0 (__C_specific_handler.c)
 *     KiUserCallbackDispatcherHandler @ 0x180163FD0 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     RtlGuardIsValidStackPointer @ 0x180035C40 (RtlGuardIsValidStackPointer.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180036000 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180036070 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x1800366F0 (LdrControlFlowGuardEnforced.c)
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlLookupFunctionEntry @ 0x180041B10 (RtlLookupFunctionEntry.c)
 *     RtlpxLookupFunctionTable @ 0x1800430E0 (RtlpxLookupFunctionTable.c)
 *     RtlpxVirtualUnwind @ 0x180043630 (RtlpxVirtualUnwind.c)
 *     RtlpValidateContextFlags @ 0x180044820 (RtlpValidateContextFlags.c)
 *     RtlVirtualUnwind @ 0x180045620 (RtlVirtualUnwind.c)
 *     RtlpSanitizeContext @ 0x1800457D0 (RtlpSanitizeContext.c)
 *     RtlLocateExtendedFeature @ 0x180045900 (RtlLocateExtendedFeature.c)
 *     RtlpCopyContext @ 0x180046BB0 (RtlpCopyContext.c)
 *     RtlInitializeExtendedContext2 @ 0x1800D2A60 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1800D2FE0 (RtlGetExtendedContextLength2.c)
 *     RtlpSaveX87State @ 0x1800DC190 (RtlpSaveX87State.c)
 *     RtlpGetStackLimits @ 0x1800DD990 (RtlpGetStackLimits.c)
 *     RtlCaptureContext2 @ 0x18011EF70 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x18011F080 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x18011F5F0 (RtlpGuardSynchronizeRestorePc.c)
 *     LdrpValidateUserCallTarget @ 0x18011F740 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x18011F790 (LdrpValidateUserCallTargetES.c)
 *     RtlFailFast2 @ 0x18011F8A0 (RtlFailFast2.c)
 *     bsearch @ 0x180121F70 (bsearch.c)
 *     bsearch_s @ 0x180122070 (bsearch_s.c)
 *     ZwRaiseException @ 0x180162EC0 (ZwRaiseException.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180164700 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x180164810 (RtlpExecuteHandlerForUnwind.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
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
  ULONG64 v9; // rbx
  int P1Home; // eax
  int P3Home; // edx
  unsigned int P1Home_high; // r8d
  unsigned int P3Home_high; // r9d
  int v14; // r8d
  ULONG64 v15; // r14
  NTSTATUS v16; // eax
  unsigned __int64 v17; // rcx
  int v18; // esi
  ULONG v19; // edi
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
  ULONG v32; // eax
  ULONG64 v33; // r14
  int v34; // esi
  __int64 ContextFlags; // rcx
  int v36; // eax
  struct _CONTEXT *v37; // rax
  struct _EXCEPTION_RECORD *v38; // rsi
  int ExceptionCode; // eax
  ULONG_PTR CfgBitMap; // rdx
  unsigned __int64 v41; // rbx
  void *v42; // rdi
  int v43; // ebx
  __int64 Config; // rax
  rsize_t v45; // r8
  void *v46; // rdi
  int v47; // eax
  unsigned __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rdx
  rsize_t v51; // r8
  unsigned int v52; // eax
  unsigned __int64 v53; // rbx
  int v54; // eax
  ULONG64 v55; // rsi
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v56; // rdi
  PEXCEPTION_ROUTINE v57; // rax
  ULONG v58; // edi
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rcx
  void *v61; // rsp
  void *v62; // rsp
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  void *v65; // rsp
  void *v66; // rsp
  __int64 v67; // rbx
  _QWORD *v68; // rax
  ULONG Key; // [rsp+60h] [rbp+0h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+68h] [rbp+8h] BYREF
  int v71; // [rsp+70h] [rbp+10h] BYREF
  ULONG64 v72; // [rsp+78h] [rbp+18h] BYREF
  PEXCEPTION_ROUTINE v73; // [rsp+80h] [rbp+20h] BYREF
  PVOID HandlerData; // [rsp+88h] [rbp+28h] BYREF
  __int128 v75; // [rsp+90h] [rbp+30h] BYREF
  __int64 v76; // [rsp+A0h] [rbp+40h]
  PUNWIND_HISTORY_TABLE v77; // [rsp+A8h] [rbp+48h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+B0h] [rbp+50h]
  PCONTEXT_EX ContextEx; // [rsp+B8h] [rbp+58h] BYREF
  unsigned __int64 ImageBase; // [rsp+C0h] [rbp+60h] BYREF
  PCONTEXT v81; // [rsp+C8h] [rbp+68h]
  unsigned __int64 v82; // [rsp+D0h] [rbp+70h] BYREF
  PCONTEXT v83; // [rsp+D8h] [rbp+78h]
  PVOID v84; // [rsp+E0h] [rbp+80h]
  PVOID v85; // [rsp+E8h] [rbp+88h]
  ULONG64 ControlPc; // [rsp+F0h] [rbp+90h] BYREF
  ULONG64 v87; // [rsp+F8h] [rbp+98h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+100h] [rbp+A0h]
  unsigned __int64 v89; // [rsp+108h] [rbp+A8h]
  PVOID v90; // [rsp+110h] [rbp+B0h]
  struct _CONTEXT *v91; // [rsp+118h] [rbp+B8h]
  EXCEPTION_DISPOSITION (__cdecl *v92)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+120h] [rbp+C0h]
  PVOID v93; // [rsp+128h] [rbp+C8h]
  struct _UNWIND_HISTORY_TABLE *v94; // [rsp+130h] [rbp+D0h]
  int v95; // [rsp+138h] [rbp+D8h]
  int v96; // [rsp+140h] [rbp+E0h] BYREF
  __int64 v97; // [rsp+148h] [rbp+E8h]
  DWORD64 Rip; // [rsp+150h] [rbp+F0h]
  int v99; // [rsp+158h] [rbp+F8h]

  p_Key = ContextRecord;
  v85 = TargetIp;
  ExceptionRecorda = ExceptionRecord;
  v84 = ReturnValue;
  v81 = ContextRecord;
  v77 = HistoryTable;
  memset_thunk_772440563353939046(&ControlPc, 0, 0x50uLL);
  memset_thunk_772440563353939046(&v96, 0, 0x98uLL);
  v9 = 0LL;
  v73 = 0LL;
  HandlerData = 0LL;
  v72 = 0LL;
  ImageBase = 0LL;
  Key = 0;
  v82 = 0LL;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v82, &v72) )
LABEL_2:
    RtlRaiseStatus(-1073741784);
  RtlpSanitizeContext(ContextRecord);
  v58 = 1048587;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) == 1 )
  {
    v58 = 1048651;
    if ( (ContextRecord->ContextFlags & 0x100040) == 0x100040
      && RtlLocateExtendedFeature((PCONTEXT_EX)&ContextRecord[1], 0xBu, 0LL) )
    {
      v9 = 2048LL;
    }
    else
    {
      v9 = 2048LL;
      RtlGetExtendedContextLength2(0x10004Bu, &Key, 0x800uLL);
      v63 = Key + 15LL;
      if ( v63 <= Key )
        v63 = 0xFFFFFFFFFFFFFF0LL;
      v64 = v63 & 0xFFFFFFFFFFFFFFF0uLL;
      v65 = alloca(v64);
      v66 = alloca(v64);
      p_Key = (PCONTEXT)&Key;
      v81 = (PCONTEXT)&Key;
      RtlInitializeExtendedContext2((PCONTEXT)&Key, 0x10004Bu, &ContextEx, 0x800uLL);
    }
  }
  RtlGetExtendedContextLength2(v58, &Key, v9);
  v59 = Key + 15LL;
  if ( v59 <= Key )
    v59 = 0xFFFFFFFFFFFFFF0LL;
  v60 = v59 & 0xFFFFFFFFFFFFFFF0uLL;
  v61 = alloca(v60);
  v62 = alloca(v60);
  v83 = (PCONTEXT)&Key;
  RtlInitializeExtendedContext2((PCONTEXT)&Key, v58, &ContextEx, v9);
  v26 = p_Key;
  v27 = (PCONTEXT)&Key;
  RtlCaptureContext2(p_Key);
  v30 = v77;
  if ( v77 )
    v77->Search = 1;
  if ( !ExceptionRecord )
  {
    v96 = -1073741785;
    v97 = 0LL;
    Rip = p_Key->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v96;
    v99 = 0;
  }
  v31 = v72;
  v29 = v82;
  v32 = 2;
  EstablisherFrame = 0LL;
  if ( !TargetFrame )
    v32 = 6;
  Key = v32;
  while ( 1 )
  {
    v33 = v26->Rip;
    v72 = v33;
    ContextEx = (PCONTEXT_EX)RtlLookupFunctionEntry(v33, &ImageBase, v30);
    v34 = (int)ContextEx;
    RtlpCopyContext(v27, v26);
    ContextFlags = v27->ContextFlags;
    v76 = 0LL;
    v75 = 0LL;
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
    v76 = 0LL;
    v75 = 0LL;
    v16 = RtlpxVirtualUnwind(
            2,
            ImageBase,
            v14,
            v34,
            (__int64)v27,
            0LL,
            (__int64)&HandlerData,
            (__int64)&EstablisherFrame,
            (__int64)&v73,
            (__int64)&v75,
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
    if ( v73 )
    {
      v18 = 0;
      v19 = Key;
      v90 = v85;
      do
      {
        if ( TargetFrame == (PVOID)v17 )
        {
          v19 |= 0x20u;
          Key = v19;
        }
        v20 = ExceptionRecorda;
        v21 = (DWORD64)v84;
        ExceptionRecorda->ExceptionFlags = v19;
        v26->Rax = v21;
        ControlPc = v72;
        FunctionEntry = (PRUNTIME_FUNCTION)ContextEx;
        v92 = v73;
        v93 = HandlerData;
        v94 = v77;
        v87 = v15;
        v89 = EstablisherFrame;
        v91 = v26;
        v95 = v18;
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
          v55 = ControlPc;
          v15 = v87;
          v56 = FunctionEntry;
          v72 = ControlPc;
          ImageBase = v87;
          ContextEx = (PCONTEXT_EX)FunctionEntry;
          RtlpCopyContext(v81, v91);
          v26 = v81;
          v27 = v83;
          RtlpCopyContext(v83, v81);
          v57 = RtlVirtualUnwind(2u, v15, v55, v56, v27, &HandlerData, &EstablisherFrame, 0LL);
          v73 = v57;
          if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
          {
            if ( v57 != v92 || (v17 = EstablisherFrame, EstablisherFrame != v89) || HandlerData != v93 )
              __fastfail(0x27u);
          }
          else
          {
            v17 = v89;
            v73 = v92;
            HandlerData = v93;
            EstablisherFrame = v89;
          }
          v19 = Key | 0x40;
          v18 = v95;
          Key |= 0x40u;
          v77 = v94;
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
          v71 = v28;
          v26->MxCsr = v28;
          v26->FltSave.MxCsr = v28;
          if ( v26->FltSave.ControlWord != 639 || (v26->FltSave.StatusWord & 0xB880) != 0 || v26->FltSave.TagWord )
            RtlpSaveX87State(v26);
          v17 = EstablisherFrame;
        }
      }
      while ( (v19 & 0x40) != 0 );
      v29 = v82;
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
    v30 = v77;
  }
  if ( (PVOID)v17 == TargetFrame )
  {
LABEL_51:
    v38 = ExceptionRecorda;
    v26->Rax = (DWORD64)v84;
    if ( v38->ExceptionCode != -2147483607 )
    {
      v26->Rip = (DWORD64)v85;
      if ( v38->ExceptionCode != -2147483610 )
        v38->ExceptionCode = -1073741785;
    }
    RtlpGuardSynchronizeRestorePc(&v26->Rip);
    ExceptionCode = v38->ExceptionCode;
    if ( v38->ExceptionCode == -2147483610 )
    {
      CfgBitMap = LdrSystemDllInitBlock.CfgBitMap;
      v41 = v38->ExceptionInformation[0];
      if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        if ( RtlGuardIsValidStackPointer(*(_QWORD *)(v41 + 16)) )
        {
          CfgBitMap = LdrSystemDllInitBlock.CfgBitMap;
          goto LABEL_59;
        }
LABEL_103:
        __fastfail(0xDu);
      }
LABEL_59:
      if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
      {
        v42 = *(void **)(v41 + 80);
        Key = 0;
        if ( CfgBitMap )
        {
          if ( (LdrSystemDllInitBlock.Flags & 1) == 0 )
          {
            v76 = 0LL;
            v75 = 0LL;
            if ( (unsigned __int64)v42 < *((_QWORD *)&xmmword_1801E6440 + 1)
              || (unsigned __int64)v42 >= *((_QWORD *)&xmmword_1801E6440 + 1)
                                        + (unsigned __int64)(unsigned int)qword_1801E6450 )
            {
              RtlpxLookupFunctionTable(v42);
            }
            else
            {
              v75 = xmmword_1801E6440;
            }
            v43 = DWORD2(v75);
            if ( *((_QWORD *)&v75 + 1) )
            {
              Config = LdrImageDirectoryEntryToLoadConfig(*((void **)&v75 + 1));
              if ( Config )
              {
                if ( *(_DWORD *)Config >= 0xC0u && (*(_DWORD *)(Config + 144) & 0x10000) != 0 )
                {
                  Key = (_DWORD)v42 - v43;
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
              v68 = bsearch(
                      &unk_18017A140,
                      RtlpProtectedPolicies,
                      (unsigned int)RtlpProtectedPoliciesActiveCount,
                      0x18uLL,
                      RtlpCompareProtectedPolicyEntry);
              if ( !v68 )
              {
                RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
                goto LABEL_113;
              }
              v67 = v68[2];
              RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
              if ( !v67 )
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
          v53 = v38->ExceptionInformation[0];
          LOBYTE(v54) = LdrControlFlowGuardEnforced();
          if ( v54 )
          {
            if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
              LdrpValidateUserCallTargetES(v53);
            else
              LdrpValidateUserCallTarget(v53);
          }
        }
      }
      else if ( ExceptionCode == -1073741785 )
      {
        if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
        {
          v46 = (void *)v26->Rip;
          LOBYTE(v47) = LdrControlFlowGuardEnforced();
          if ( v47 )
          {
            v76 = 0LL;
            v75 = 0LL;
            if ( (unsigned __int64)v46 < *((_QWORD *)&xmmword_1801E6440 + 1)
              || (unsigned __int64)v46 >= *((_QWORD *)&xmmword_1801E6440 + 1)
                                        + (unsigned __int64)(unsigned int)qword_1801E6450 )
            {
              RtlpxLookupFunctionTable(v46);
            }
            else
            {
              v75 = xmmword_1801E6440;
            }
            v48 = *((_QWORD *)&v75 + 1);
            if ( *((_QWORD *)&v75 + 1) )
            {
              v49 = LdrImageDirectoryEntryToLoadConfig(*((void **)&v75 + 1));
              v50 = v49;
              if ( v49 )
              {
                if ( *(_DWORD *)v49 >= 0x118u
                  && (*(_DWORD *)(v49 + 144) & 0x400000) != 0
                  && *(_QWORD *)(v49 + 264) > v48 )
                {
                  v71 = (_DWORD)v46 - v48;
                  v51 = *(_QWORD *)(v49 + 272);
                  v52 = (*(_DWORD *)(v49 + 144) >> 28) + 4;
                  if ( !v51 || !bsearch_s(&v71, *(const void **)(v50 + 264), v51, v52, RtlpTargetCompare, 0LL) )
                    RtlFailFast2(38LL, v46);
                }
              }
            }
          }
        }
        goto LABEL_95;
      }
      if ( LdrSystemDllInitBlock.CfgBitMap
        && (LdrSystemDllInitBlock.Flags & 1) == 0
        && !RtlGuardIsValidStackPointer(v26->Rsp) )
      {
        goto LABEL_103;
      }
    }
LABEL_95:
    RtlRestoreContext(v26, v38);
  }
  else
  {
    if ( v72 == v26->Rip )
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecorda, v26, 0);
  }
}
