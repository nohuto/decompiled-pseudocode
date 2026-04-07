/*
 * XREFs of ??4?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSpriteVisual@@@Z @ 0x1800E4EFC
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180010468 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CBaseObject **__fastcall Microsoft::WRL::ComPtr<CSpriteVisual>::operator=(
        CBaseObject **a1,
        volatile signed __int32 *a2)
{
  CBaseObject *v3; // rax
  CBaseObject *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != (CBaseObject *)a2 )
  {
    if ( a2 )
      _InterlockedIncrement(a2 + 2);
    v3 = *a1;
    *a1 = (CBaseObject *)a2;
    v5 = v3;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v5);
  }
  return a1;
}
