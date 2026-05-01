/*
 * XREFs of ??1Shutdown@SharedVisualHostProvider@@QEAA@XZ @ 0x180608D7C
 * Callers:
 *     ?Shutdown@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z @ 0x18060AB18 (-Shutdown@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180609A0C (-Destroy@-$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall SharedVisualHostProvider::Shutdown::~Shutdown(SharedVisualHostProvider::Shutdown *this)
{
  *(_QWORD *)this = &SharedVisualHostProvider::Shutdown::`vftable';
  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
