/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VGamingOverlayTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180361280
 * Callers:
 *     ??1?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803475C4 (--1-$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??4?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803487B0 (--4-$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Destroy@?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18034C5E0 (-Destroy@-$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0Is.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ??1?$ActivityData@VGamingOverlayTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180347634 (--1-$ActivityData@VGamingOverlayTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBa.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingOverlayTelemetry,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rdi

  v2 = *a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *a1;
      if ( *a1 )
      {
        wil::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<GamingOverlayTelemetry,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<GamingOverlayTelemetry,_TlgReflectorTag_Param0IsProviderType>((__int64)(v3 + 2));
        operator delete((void *)v3);
      }
    }
    *a1 = 0LL;
  }
}
