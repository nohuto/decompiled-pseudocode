/*
 * XREFs of ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x180084C9C
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B2C4 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800243C0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025290 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180026E70 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B000 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B0A8 (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180036BF0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180036E80 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA84 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003C4FC (-RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x1800463B0 (CempLockSleepConditionVariableExclusive.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005A200 (-RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$?0PEAXUprocess_heap_deleter@wil@@@?$__compressed_pair@PEAXUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAPEAX$$QEAUprocess_heap_deleter@wil@@@Z @ 0x18005A900 (--$-0PEAXUprocess_heap_deleter@wil@@@-$__compressed_pair@PEAXUprocess_heap_deleter@wil@@@wistd@@.c)
 *     ??0?$_tlgWrapperByVal@$00@@QEAA@PEBX@Z @ 0x18005E7A8 (--0-$_tlgWrapperByVal@$00@@QEAA@PEBX@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@544@Z @ 0x18005F8F8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U2@U2@@-$_tlgWrit.c)
 *     ?RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800609F0 (-RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180060FD0 (-HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z @ 0x180065424 (-RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z.c)
 *     ??0?$_tlgWrapSz@G@@QEAA@PEBG@Z @ 0x18006679C (--0-$_tlgWrapSz@G@@QEAA@PEBG@Z.c)
 *     ?HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180068A50 (-HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@K@Z @ 0x18006A30C (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REAS.c)
 *     ?RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006A7DC (-RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemSetHostWmClosingForTest@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180076EC0 (-HampSystemSetHostWmClosingForTest@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostTryWaitForGenerationRevision@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K1@Z @ 0x18007E328 (-HampHostTryWaitForGenerationRevision@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wil@@QEAA_NXZ @ 0x18007EB88 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wi.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wil@@QEAA_NXZ @ 0x18007EC78 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@de.c)
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
  int v21; // [rsp+7Ch] [rbp-8Ch]
  int v22; // [rsp+80h] [rbp-88h]
  BOOL v23; // [rsp+84h] [rbp-84h]
  int v24; // [rsp+88h] [rbp-80h]
  int *v25; // [rsp+90h] [rbp-78h]
  unsigned __int64 v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 Id; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *v32; // [rsp+C8h] [rbp-40h]
  __int64 *v33; // [rsp+D0h] [rbp-38h]
  char *v34; // [rsp+D8h] [rbp-30h]
  _BYTE *v35; // [rsp+E0h] [rbp-28h]
  __int64 *v36; // [rsp+E8h] [rbp-20h]
  const wchar_t **v37; // [rsp+F0h] [rbp-18h]
  __int64 v38; // [rsp+F8h] [rbp-10h] BYREF

  v17 = 0;
  memset(v18, 0, sizeof(v18));
  IsSuspendWaiter = 0;
  v16 = 0;
  v15 = 0;
  v26 = 0LL;
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
        v26 = *a2 - *a3;
        HampHostTryWaitForGenerationRevision((struct _RM_HAM_ACTIVITY_HOST *)a1, a4, v26);
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
  v21 = 1;
  v22 = 1;
  v23 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::GetImpl'::`2'::impl) != 0;
  if ( v23 && *(_BYTE *)(a1 + 592) == 1 )
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
  v24 = 1;
  HampHostRevokeQuiesceExtension(a1, v16, 1 << v15);
LABEL_23:
  v25 = HamTlgProvider;
  if ( (unsigned int)*HamTlgProvider > 4 && tlgKeywordOn((__int64)v25, 0x400000000008LL) )
  {
    v27 = 0x1000000LL;
    wistd::__compressed_pair<void *,wil::process_heap_deleter>::__compressed_pair<void *,wil::process_heap_deleter>(
      &v28,
      &v27);
    v32 = &v28;
    wistd::__compressed_pair<void *,wil::process_heap_deleter>::__compressed_pair<void *,wil::process_heap_deleter>(
      &v29,
      a3);
    v33 = &v29;
    v9 = v17;
    _tlgWrapperByVal<1>::_tlgWrapperByVal<1>(&v10, &v9);
    v34 = &v10;
    v11 = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 664)) >> 5;
    _tlgWrapperByVal<1>::_tlgWrapperByVal<1>(v12, &v11);
    v35 = v12;
    Id = RmHamHostGetId((struct _RM_HAM_ACTIVITY_HOST *)a1);
    wistd::__compressed_pair<void *,wil::process_heap_deleter>::__compressed_pair<void *,wil::process_heap_deleter>(
      &v31,
      &Id);
    v36 = &v31;
    PsmKey = RmHamHostGetPsmKey((struct _RM_HAM_ACTIVITY_HOST *)a1);
    v37 = (const wchar_t **)_tlgWrapSz<unsigned short>::_tlgWrapSz<unsigned short>(&v38, (__int64)PsmKey);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)v25,
      byte_1800D6646,
      0LL,
      0LL,
      v37,
      (__int64)v36,
      (__int64)v35,
      (__int64)v34,
      (__int64)v33,
      (__int64)v32);
  }
  return 0LL;
}
