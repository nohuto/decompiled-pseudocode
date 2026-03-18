/*
 * XREFs of ??$UnRegisterNotifier@VCVisualGroup@@@CResource@@QEAAXAEAV?$com_ptr_t@VCVisualGroup@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802838E4
 * Callers:
 *     ?ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST@@@Z @ 0x1802125B8 (-ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRE.c)
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x1802839B8 (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNotifier<CVisualGroup>(CResource *a1, struct CResource **a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  CCachedVisualImage *v5; // rcx

  CResource::UnRegisterNotifierInternal(a1, *a2);
  v5 = *a2;
  *a2 = 0LL;
  if ( v5 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v5, v3, v4);
}
