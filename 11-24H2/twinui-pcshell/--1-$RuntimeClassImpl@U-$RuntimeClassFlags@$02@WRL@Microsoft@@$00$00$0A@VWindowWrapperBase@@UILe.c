/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18043161C
 * Callers:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VWindowWrapperBase@@UILegacyViewWrapper@@@WRL@Microsoft@@UEAA@XZ @ 0x180431610 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VWindowWrapperBase@@UILegacyViewWrappe.c)
 *     ??1LegacyWindowWrapper@@UEAA@XZ @ 0x180431654 (--1LegacyWindowWrapper@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VWindowWrapperBase@@UILegacyViewWrapper@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180431770 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VWindowWrapperBase@@UILegacyViewWrapp.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180148540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,ILegacyViewWrapper>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,ILegacyViewWrapper>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 584);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)(2 * v2));
  WindowWrapperBase::~WindowWrapperBase((WindowWrapperBase *)(a1 + 8));
}
