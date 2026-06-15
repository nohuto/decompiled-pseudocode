/*
 * XREFs of ?OnNotify@CAPOEndpointNotificationsDelegator@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x140035660
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1400357D0 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOEndpointNotificationsDelegator::OnNotify(
        struct IWeakReference **this,
        struct AUDIO_VOLUME_NOTIFICATION_BLOCK *a2)
{
  void *v3; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  wil::details::weak_query_policy::query(this[2], &GUID_b46be134_9ede_4863_85c3_0df45cb0a1b1, &v8);
  v3 = v8;
  if ( !v8 )
  {
LABEL_2:
    if ( v3 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
    return 0LL;
  }
  v5 = (*(__int64 (__fastcall **)(void *, struct AUDIO_VOLUME_NOTIFICATION_BLOCK *))(*(_QWORD *)v8 + 24LL))(v8, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v3 = v8;
    goto LABEL_2;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
    (const char *)(unsigned int)v5);
  if ( v8 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  return v6;
}
