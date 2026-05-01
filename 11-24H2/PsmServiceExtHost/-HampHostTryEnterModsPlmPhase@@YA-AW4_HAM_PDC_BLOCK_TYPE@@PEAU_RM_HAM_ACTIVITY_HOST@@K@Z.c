/*
 * XREFs of ?HampHostTryEnterModsPlmPhase@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18007E25C
 * Callers:
 *     ?HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x18003B748 (-HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@433@Z @ 0x180001CF0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007744 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800090C0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009D50 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800363B8 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180036B70 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x1800373E0 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA04 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180056624 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wil@@QEAA_NXZ @ 0x18007EFD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wi.c)
 */

char __fastcall HampHostTryEnterModsPlmPhase(__int64 a1, unsigned int a2)
{
  char v4; // di
  unsigned __int64 v5; // r14
  int v6; // r14d
  struct _HAM_ACTIVITY *FirstActivity; // rsi
  bool i; // zf
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  const wchar_t *v14; // [rsp+50h] [rbp-20h] BYREF
  const wchar_t *v15; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+48h] BYREF

  LODWORD(v17) = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::GetImpl'::`2'::impl)
    && *(_BYTE *)(a1 + 592)
    || (int)HampHostQueryIsDebugEnabled((struct _RM_HAM_ACTIVITY_HOST *)a1, (unsigned int *)&v17) >= 0 && (_DWORD)v17 )
  {
    return 0;
  }
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  v5 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 792) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                             + 120)
                 + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (unsigned int)HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)a1) )
  {
    v4 = 1;
    goto LABEL_8;
  }
  v4 = 0;
  if ( (*(_QWORD *)(a1 + 664) & 0x800000000LL) == 0 )
  {
    FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
    for ( i = FirstActivity == 0LL; !i; i = v10 == 96 )
    {
      if ( (*((_BYTE *)FirstActivity + 552) & 0x48) == 0 && (unsigned __int8)(*((_BYTE *)FirstActivity + 562) - 2) <= 1u )
      {
        if ( (*((_DWORD *)FirstActivity + 28) & 0x4000) != 0 )
        {
          v4 = 2;
          if ( (*(_BYTE *)(a1 + 672) & 4) == 0 && a2 >= *(_DWORD *)(v5 + 272) )
          {
            LODWORD(v17) = 0;
            HampHostQueueTerminateEx(a1, 3, 0x800u, 0LL, 1, 0, 0LL, (unsigned int *)&v17);
            v6 = v17;
            if ( (unsigned int)dword_1800E82B0 > 4 && tlgKeywordOn((__int64)&dword_1800E82B0, 0x400000000008LL) )
            {
              v17 = 0x1000000LL;
              v13 = 32LL;
              if ( a1 )
                v13 = a1 - 32;
              v18 = *(_QWORD *)v13;
              v14 = (const wchar_t *)(a1 + 24);
              v15 = (const wchar_t *)((char *)FirstActivity + 124);
              v16 = *((_QWORD *)FirstActivity + 5);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                v13,
                (__int64)&unk_1800D3750,
                v11,
                v12,
                (__int64)&v16,
                &v15,
                &v14,
                (__int64)&v18,
                (__int64)&v17);
            }
            goto LABEL_9;
          }
        }
        if ( (*((_BYTE *)FirstActivity + 120) & 4) != 0 )
        {
          v4 = 3;
LABEL_24:
          HampActRequestStopEx(
            (__int64)FirstActivity,
            3u,
            4LL,
            0LL,
            6912,
            (*((_DWORD *)FirstActivity + 28) & 0x800) != 0 ? 8 : 4,
            0LL);
          goto LABEL_25;
        }
        if ( (*((_BYTE *)FirstActivity + 120) & 8) != 0 )
        {
          v4 = 4;
          if ( a2 >= *(_DWORD *)(v5 + 268) )
            goto LABEL_24;
        }
      }
LABEL_25:
      v10 = *((_QWORD *)FirstActivity + 12);
      if ( v10 == *((_QWORD *)FirstActivity + 10) + 608LL )
        break;
      FirstActivity = (struct _HAM_ACTIVITY *)(v10 - 96);
    }
  }
LABEL_8:
  v6 = 0;
LABEL_9:
  HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)a1);
  if ( v6 )
    HampDepGroupRunStateChangeWorker(*(struct _HAM_DEPENDENCY_GROUP **)(a1 + 704));
  return v4;
}
