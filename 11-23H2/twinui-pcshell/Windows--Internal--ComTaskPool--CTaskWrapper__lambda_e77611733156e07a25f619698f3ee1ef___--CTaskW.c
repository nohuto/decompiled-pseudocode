/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef_____lambda_e77611733156e07a25f619698f3ee1ef___ @ 0x180023B70
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e77611733156e07a25f619698f3ee1ef___ @ 0x1800239C0 (Windows--Internal--ComTaskPool--QueueTask__lambda_e77611733156e07a25f619698f3ee1ef___.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180023C08 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflecto_ea_180023C08.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef_____lambda_e77611733156e07a25f619698f3ee1ef___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
  *(_BYTE *)(a1 + 36) = *(_BYTE *)(a2 + 20);
  *(_BYTE *)(a1 + 37) = *(_BYTE *)(a2 + 21);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 48));
  *(_QWORD *)(a1 + 48) = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  *(_QWORD *)a1 = off_1807A4C70;
  return a1;
}
