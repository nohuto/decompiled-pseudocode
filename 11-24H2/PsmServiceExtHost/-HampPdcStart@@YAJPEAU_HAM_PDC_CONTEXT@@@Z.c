/*
 * XREFs of ?HampPdcStart@@YAJPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180083830
 * Callers:
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081898 (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wil@@QEAA_NXZ @ 0x18007EFD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wi.c)
 *     ?HampSlsStart@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180084E24 (-HampSlsStart@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ?HampSystemNotificationClientRegister@@YAJW4PDCCLIENTID@@PEAU_PDC_NOTIFICATIONCLIENT_REGISTRATION@@PEAXPEAPEAX@Z @ 0x1800905CC (-HampSystemNotificationClientRegister@@YAJW4PDCCLIENTID@@PEAU_PDC_NOTIFICATIONCLIENT_REGISTRATIO.c)
 */

__int64 __fastcall HampPdcStart(struct _HAM_PDC_CONTEXT *a1)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-40h] BYREF
  int v4; // [rsp+24h] [rbp-3Ch]
  __int64 (__fastcall *v5)(struct _HOST_ACTIVITY_MANAGER **, int); // [rsp+28h] [rbp-38h]
  __int64 v6; // [rsp+30h] [rbp-30h]
  __int64 (__fastcall *v7)(struct _HOST_ACTIVITY_MANAGER **, int); // [rsp+38h] [rbp-28h]
  _DWORD v8[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 (__fastcall *v9)(struct _HOST_ACTIVITY_MANAGER **, int); // [rsp+48h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp-10h]
  __int64 (__fastcall *v11)(struct _HAM_PDC_CONTEXT *, int); // [rsp+58h] [rbp-8h]

  v4 = 0;
  v6 = 0LL;
  HampSlsStart((struct _HAM_PDC_CONTEXT *)((char *)a1 + 32));
  v8[1] = 0;
  v10 = 0LL;
  v11 = HampPdcPlmControlCallback;
  v8[0] = 1;
  v9 = HampPdcPlmPhaseNotificationCallback;
  result = HampSystemNotificationClientRegister(1LL, v8, a1, (char *)a1 + 8);
  if ( (int)result >= 0 )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::GetImpl'::`2'::impl) )
      return 0LL;
    v4 = 0;
    v6 = 0LL;
    v7 = HampPdcDamControlCallback;
    v3 = 1;
    v5 = HampPdcDamPhaseNotificationCallback;
    result = HampSystemNotificationClientRegister(100LL, &v3, a1, (char *)a1 + 16);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
