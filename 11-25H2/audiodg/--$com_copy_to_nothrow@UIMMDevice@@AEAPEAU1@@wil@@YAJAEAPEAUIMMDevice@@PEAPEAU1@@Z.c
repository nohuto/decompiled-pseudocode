/*
 * XREFs of ??$com_copy_to_nothrow@UIMMDevice@@AEAPEAU1@@wil@@YAJAEAPEAUIMMDevice@@PEAPEAU1@@Z @ 0x1400497FC
 * Callers:
 *     ?QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140013774 (-QueueInitialEnhancementsEnabledNotification@@YAJAEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICA.c)
 *     ?QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140062ACC (-QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_copy_to_nothrow<IMMDevice,IMMDevice * &>(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    *a2 = 0LL;
  }
  return 0LL;
}
