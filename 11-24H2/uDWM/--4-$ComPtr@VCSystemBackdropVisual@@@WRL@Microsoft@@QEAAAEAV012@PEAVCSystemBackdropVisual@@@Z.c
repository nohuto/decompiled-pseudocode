/*
 * XREFs of ??4?$ComPtr@VCSystemBackdropVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSystemBackdropVisual@@@Z @ 0x180075A98
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180031104 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject **__fastcall Microsoft::WRL::ComPtr<CSystemBackdropVisual>::operator=(
        CBaseObject **a1,
        CMILRefCountBase *a2)
{
  CBaseObject *v3; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      CMILRefCountBase::AddRef(a2);
    v3 = *a1;
    *a1 = a2;
    if ( v3 )
      CBaseObject::Release(v3);
  }
  return a1;
}
