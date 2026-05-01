/*
 * XREFs of ??1Hide@SharedVisualHostProvider@@QEAA@XZ @ 0x180608CCC
 * Callers:
 *     ?Hide@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x180609ECC (-Hide@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 *     _SharedDesktopBackgroundVisualHost::Hide_::_1_::dtor$0 @ 0x1806FF519 (_SharedDesktopBackgroundVisualHost--Hide_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180609AAC (-Destroy@-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall SharedVisualHostProvider::Hide::~Hide(SharedVisualHostProvider::Hide *this)
{
  *(_QWORD *)this = &SharedVisualHostProvider::Hide::`vftable';
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
