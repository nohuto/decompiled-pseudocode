/*
 * XREFs of ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1400354D0
 * Callers:
 *     ?OnNotify@CAPOEndpointNotificationsDelegator@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x140035360 (-OnNotify@CAPOEndpointNotificationsDelegator@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 *     ?OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@U_tagpropertykey@@@Z @ 0x140035410 (-OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsDelegator@@UEAAJW4__MIDL___MIDL.c)
 *     wistd::__function::__func__lambda_6d485ab87584f259c6e1e7241a6db9e9__void___cdecl(WNF_AUDIO_ORIENTATION_STATE_const_&)_::operator() @ 0x14005C3F0 (wistd--__function--__func__lambda_6d485ab87584f259c6e1e7241a6db9e9__void___cdecl(WNF_AUDIO_ORIEN.c)
 *     wistd::__function::__func__lambda_caf7c74c5b7d6377d228a627064e296e__void___cdecl(_CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_const_&)_::operator() @ 0x14005F8D0 (wistd--__function--__func__lambda_caf7c74c5b7d6377d228a627064e296e__void___cdecl(_CAPOEnvironmen.c)
 *     ?OnNotify@CMicBoostNotificationsDelegator@@UEAAJKPEBU_GUID@@@Z @ 0x140060350 (-OnNotify@CMicBoostNotificationsDelegator@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::weak_query_policy::query(struct IWeakReference *a1, const struct _GUID *a2, void **a3)
{
  struct IWeakReferenceVtbl *lpVtbl; // rax
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  lpVtbl = a1->lpVtbl;
  v8 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IWeakReference *, GUID *, __int64 *))lpVtbl->Resolve)(
         a1,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v8);
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( v8 )
  {
    v6 = (**(__int64 (__fastcall ***)(__int64, const struct _GUID *, void **))v8)(v8, a2, a3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    return (unsigned int)v6;
  }
  return 2147943568LL;
}
