/*
 * XREFs of ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1802B2728
 * Callers:
 *     ??1CVisualCapture@@UEAA@XZ @ 0x1802B20F0 (--1CVisualCapture@@UEAA@XZ.c)
 *     ?CheckForRenderCompleted@CVisualCapture@@IEAAXXZ @ 0x1802B21AC (-CheckForRenderCompleted@CVisualCapture@@IEAAXXZ.c)
 *     ?RenderTargetDirty@CVisualCapture@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802B26B0 (-RenderTargetDirty@CVisualCapture@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18003DBB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x180225DB0 (-RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisualCapture::SendCaptureCompleted(CVisualCapture *this)
{
  __int64 v2; // rax
  int ChannelCallbackId; // eax
  __int16 v4; // dx
  __int64 v5; // r10
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+40h] [rbp-8h]

  if ( *((_DWORD *)this + 696) != 3 )
  {
    v2 = *((_QWORD *)this + 3);
    *((_DWORD *)this + 696) = 3;
    if ( (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 6416) + 72LL))(*(_QWORD *)(v2 + 6416), 13LL) )
    {
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
      CoreUICallSend(v5, &v6, 2LL, 13LL, v4, &unk_180336E53, ChannelCallbackId, *((unsigned int *)this + 18), v7);
    }
    CRenderTarget::RemoveFromRenderTargetManager(this);
  }
}
