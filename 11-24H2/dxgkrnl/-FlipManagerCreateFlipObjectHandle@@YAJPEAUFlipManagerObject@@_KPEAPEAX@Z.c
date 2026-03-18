/*
 * XREFs of ?FlipManagerCreateFlipObjectHandle@@YAJPEAUFlipManagerObject@@_KPEAPEAX@Z @ 0x14009E430
 * Callers:
 *     ?GetInfo@CCompositionSwapchainBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1400A17D0 (-GetInfo@CCompositionSwapchainBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z.c)
 * Callees:
 *     ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x140054264 (-CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     DxgkGetSessionFlipManagerRegistry @ 0x1400707CC (DxgkGetSessionFlipManagerRegistry.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x1400792CC (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall FlipManagerCreateFlipObjectHandle(struct FlipManagerObject *this, __int64 a2, void **a3)
{
  __int64 v6; // r8
  NTSTATUS SessionFlipManagerRegistry; // ebx
  __int64 v8; // r8
  struct IFlipManagerRegistry *v10; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( !(unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() )
    return DxgkCompositionObject::CreateHandle(this, 0x10000000u, v6, 0, a3);
  *a3 = 0LL;
  v10 = 0LL;
  SessionFlipManagerRegistry = DxgkGetSessionFlipManagerRegistry(&v10);
  if ( SessionFlipManagerRegistry >= 0 )
  {
    Object = 0LL;
    (*(void (__fastcall **)(struct IFlipManagerRegistry *, __int64, PVOID *))(*(_QWORD *)v10 + 16LL))(v10, a2, &Object);
    if ( Object )
    {
      SessionFlipManagerRegistry = DxgkCompositionObject::CreateHandle(
                                     (DxgkCompositionObject *)Object,
                                     0x10000000u,
                                     v8,
                                     0,
                                     a3);
      ObfDereferenceObject(Object);
    }
  }
  return SessionFlipManagerRegistry;
}
