/*
 * XREFs of _lambda_d3d8473ab69012044bcca3ea676e23db_::operator() @ 0x140032554
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_::_Do_call @ 0x1400430B0 (std--_Func_impl_no_alloc__lambda_d3d8473ab69012044bcca3ea676e23db__void_--_Do_call.c)
 * Callees:
 *     ??$query_dispatch@UIAudioProcessingObjectNotifications@@@weak_query_policy@details@wil@@CAJPEAUIWeakReference@@U?$integral_constant@_N$0A@@wistd@@PEAPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400325EC (--$query_dispatch@UIAudioProcessingObjectNotifications@@@weak_query_policy@details@wil@@CAJPEAUI.c)
 *     ?CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z @ 0x140032670 (-CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z.c)
 *     ?CopyNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x140032764 (-CopyNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_d3d8473ab69012044bcca3ea676e23db_::operator()(__int64 a1)
{
  __int64 v2; // rdx
  _BYTE v3[88]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v4; // [rsp+80h] [rbp+8h] BYREF

  memset_0(v3, 0, 0x48uLL);
  if ( CopyNotification((struct APO_NOTIFICATION *)v3, *(struct APO_NOTIFICATION **)a1) >= 0 )
  {
    v4 = 0LL;
    wil::details::weak_query_policy::query_dispatch<IAudioProcessingObjectNotifications>(*(_QWORD *)(a1 + 16), v2, &v4);
    if ( v4 )
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 32LL))(v4, v3);
    CleanupApoNotification((struct APO_NOTIFICATION *)v3);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
