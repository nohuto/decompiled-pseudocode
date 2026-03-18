/*
 * XREFs of ?NotifyOnChanged@CVisualCapture@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180189AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddToRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x180189C54 (-AddToRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 *     ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x18018AAE4 (-SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CVisualCapture::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  CRenderTarget::SetRootVisual((CRenderTarget *)a1, *(struct CVisual **)(a1 + 2744));
  if ( !*(_DWORD *)(a1 + 2784) && *(_QWORD *)(a1 + 112) )
  {
    *(_DWORD *)(a1 + 2784) = 1;
    CRenderTarget::AddToRenderTargetManager((CRenderTarget *)a1);
  }
  return CResource::NotifyOnChanged((_DWORD *)a1, a2, a3);
}
