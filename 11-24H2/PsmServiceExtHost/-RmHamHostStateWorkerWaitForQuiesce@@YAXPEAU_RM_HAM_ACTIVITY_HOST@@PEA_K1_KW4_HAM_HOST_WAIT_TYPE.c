/*
 * XREFs of ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x18008515C
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B244 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x180024340 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025210 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180026DF0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AF80 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B028 (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180036B70 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180036E00 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA04 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003C47C (-RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x180046330 (CempLockSleepConditionVariableExclusive.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005A180 (-RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$?0PEAXUprocess_heap_deleter@wil@@@?$__compressed_pair@PEAXUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAPEAX$$QEAUprocess_heap_deleter@wil@@@Z @ 0x18005A880 (--$-0PEAXUprocess_heap_deleter@wil@@@-$__compressed_pair@PEAXUprocess_heap_deleter@wil@@@wistd@@.c)
 *     ??0?$_tlgWrapperByVal@$00@@QEAA@PEBX@Z @ 0x18005E728 (--0-$_tlgWrapperByVal@$00@@QEAA@PEBX@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@544@Z @ 0x18005F878 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U2@U2@@-$_tlgWrit.c)
 *     ?RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180060970 (-RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180060F50 (-HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z @ 0x1800653A4 (-RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z.c)
 *     ??0?$_tlgWrapSz@G@@QEAA@PEBG@Z @ 0x18006671C (--0-$_tlgWrapSz@G@@QEAA@PEBG@Z.c)
 *     ?HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800688D0 (-HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@K@Z @ 0x18006A18C (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REAS.c)
 *     ?RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006A65C (-RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemSetHostWmClosingForTest@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180076F20 (-HampSystemSetHostWmClosingForTest@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostTryWaitForGenerationRevision@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K1@Z @ 0x18007E6A8 (-HampHostTryWaitForGenerationRevision@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wil@@QEAA_NXZ @ 0x18007EFD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wi.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wil@@QEAA_NXZ @ 0x18007F138 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@de.c)
 */

__int64 __fastcall RmHamHostStateWorkerWaitForQuiesce(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4,
        int a5)
{
  int v5; // r8d
  int v6; // r9d
  const unsigned __int16 *PsmKey; // rax
  char v9; // [rsp+50h] [rbp-B8h] BYREF
  char v10; // [rsp+51h] [rbp-B7h] BYREF
  char v11; // [rsp+52h] [rbp-B6h] BYREF
  _BYTE v12[5]; // [rsp+53h] [rbp-B5h] BYREF
  struct _RM_ACTIVITY_HOST *v13; // [rsp+58h] [rbp-B0h]
  int v14; // [rsp+60h] [rbp-A8h]
  int v15; // [rsp+64h] [rbp-A4h]
  unsigned int v16; // [rsp+68h] [rbp-A0h]
  int v17; // [rsp+6Ch] [rbp-9Ch]
  _BYTE v18[4]; // [rsp+70h] [rbp-98h] BYREF
  unsigned int IsSuspendWaiter; // [rsp+74h] [rbp-94h]
  int v20; // [rsp+78h] [rbp-90h]
  BOOL v21; // [rsp+7Ch] [rbp-8Ch]
  int v22; // [rsp+80h] [rbp-88h]
  int *v23; // [rsp+88h] [rbp-80h]
  unsigned __int64 v24; // [rsp+90h] [rbp-78h]
  __int64 v25; // [rsp+98h] [rbp-70h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 Id; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v30; // [rsp+C0h] [rbp-48h]
  __int64 *v31; // [rsp+C8h] [rbp-40h]
  char *v32; // [rsp+D0h] [rbp-38h]
  _BYTE *v33; // [rsp+D8h] [rbp-30h]
  __int64 *v34; // [rsp+E0h] [rbp-28h]
  const wchar_t **v35; // [rsp+E8h] [rbp-20h]
  _QWORD v36[3]; // [rsp+F0h] [rbp-18h] BYREF

  v17 = 0;
  memset(v18, 0, sizeof(v18));
  IsSuspendWaiter = 0;
  v16 = 0;
  v15 = 0;
  v24 = 0LL;
  v13 = RmHostFromHamHost((struct _RM_HAM_ACTIVITY_HOST *)a1);
  memset(v18, 0, sizeof(v18));
  RmAcquireEnforcementLocks(v13);
  while ( 1 )
  {
    HampHostUpdateQuiesceState((struct _RM_HAM_ACTIVITY_HOST *)a1, a2, a3);
    if ( (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 664)) >> 5 == 5LL )
      break;
    if ( (unsigned int)HampHostIsQuiesceInterrupted((struct _RM_HAM_ACTIVITY_HOST *)a1) )
    {
      RmReleaseEnforcementLocks(v13);
      RmpSystemResourceTimerReset((struct _RM_HAM_ACTIVITY_HOST *)a1, *(void **)(a1 + 808), 0);
      RmAcquireEnforcementLocks(v13);
      v17 = 1;
      goto LABEL_23;
    }
    if ( (unsigned int)HampHostCheckUpdateEnforcementSettings(
                         (struct _RM_HAM_ACTIVITY_HOST *)a1,
                         (struct _HAM_ENFORCEMENT_SETTINGS_CONTEXT *)v18) )
    {
      HampHostCheckStartPendingActivities((struct _RM_HAM_ACTIVITY_HOST *)a1);
    }
    else
    {
      RmpReleaseGlobalLock();
      v14 = a5;
      if ( a5 )
      {
        if ( v14 == 1 )
          goto LABEL_12;
        if ( v14 != 2 && v14 != 3 )
        {
          if ( v14 != 4 )
            goto LABEL_15;
LABEL_12:
          CempLockSleepConditionVariableExclusive(a1, a1 + 696, 0LL);
          goto LABEL_15;
        }
        v24 = *a2 - *a3;
        HampHostTryWaitForGenerationRevision((struct _RM_HAM_ACTIVITY_HOST *)a1, a4, v24);
      }
      else
      {
        *(_QWORD *)(a1 + 664) |= 0x400000000000uLL;
      }
LABEL_15:
      HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)a1);
      RtlWakeAllConditionVariable(a1 + 696);
      RmAcquireEnforcementLocks(v13);
    }
  }
  *(_DWORD *)(a1 + 684) = 0;
  IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)a1);
  *((_DWORD *)v13 + 317) |= 0x80u;
  *((_DWORD *)v13 + 318) &= ~0x80u;
  HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a1, IsSuspendWaiter, v5, v6);
  RmReleaseEnforcementLocks(v13);
  RmpSystemSetApplicationQuiesceCompleteEvents(v13);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::__private_IsEnabledPreCheck();
  v20 = 1;
  v21 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::GetImpl'::`2'::impl) != 0;
  if ( v21 && *(_BYTE *)(a1 + 592) == 1 )
    HampSystemSetHostWmClosingForTest((struct _RM_HAM_ACTIVITY_HOST *)a1);
  RmpSystemResourceTimerReset((struct _RM_HAM_ACTIVITY_HOST *)a1, *(void **)(a1 + 808), 0);
  v17 = 0;
  RmAcquireEnforcementLocks(v13);
  if ( HampHostIsTerminateQueued((struct _RM_HAM_ACTIVITY_HOST *)a1) )
  {
    v16 = 5;
    v15 = 10;
  }
  else
  {
    v16 = 3;
    v15 = 8;
  }
  v22 = 1;
  HampHostRevokeQuiesceExtension(a1, v16, 1 << v15);
LABEL_23:
  v23 = HamTlgProvider;
  if ( (unsigned int)*HamTlgProvider > 4 && tlgKeywordOn((__int64)v23, 0x400000000008LL) )
  {
    v25 = 0x1000000LL;
    wistd::__compressed_pair<void *,wil::process_heap_deleter>::__compressed_pair<void *,wil::process_heap_deleter>(
      &v26,
      &v25);
    v30 = &v26;
    wistd::__compressed_pair<void *,wil::process_heap_deleter>::__compressed_pair<void *,wil::process_heap_deleter>(
      &v27,
      a3);
    v31 = &v27;
    v9 = v17;
    _tlgWrapperByVal<1>::_tlgWrapperByVal<1>(&v10, &v9);
    v32 = &v10;
    v11 = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 664)) >> 5;
    _tlgWrapperByVal<1>::_tlgWrapperByVal<1>(v12, &v11);
    v33 = v12;
    Id = RmHamHostGetId((struct _RM_HAM_ACTIVITY_HOST *)a1);
    wistd::__compressed_pair<void *,wil::process_heap_deleter>::__compressed_pair<void *,wil::process_heap_deleter>(
      &v29,
      &Id);
    v34 = &v29;
    PsmKey = RmHamHostGetPsmKey((struct _RM_HAM_ACTIVITY_HOST *)a1);
    v35 = (const wchar_t **)_tlgWrapSz<unsigned short>::_tlgWrapSz<unsigned short>(v36, (__int64)PsmKey);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)v23,
      byte_1800D7646,
      0LL,
      0LL,
      v35,
      (__int64)v34,
      (__int64)v33,
      (__int64)v32,
      (__int64)v31,
      (__int64)v30);
  }
  return 0LL;
}
