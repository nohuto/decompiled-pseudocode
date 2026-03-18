/*
 * XREFs of ?IsScreenReadBackCompatible@@YA_N_NPEAVIDeviceTextureTarget@@@Z @ 0x1801C8700
 * Callers:
 *     ?IsUsableOnTargetWithHDRBoost@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x1801F8848 (-IsUsableOnTargetWithHDRBoost@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetIn.c)
 * Callees:
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802CDC00 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall IsScreenReadBackCompatible(char a1, struct IDeviceTextureTarget *a2)
{
  __int64 v2; // rax
  bool (__fastcall *v3)(CDeviceTextureTarget *); // rax
  char v4; // al
  __int64 (__fastcall *v6)(struct IDeviceTextureTarget *); // rax
  char IsProtected; // al

  v2 = *(_QWORD *)a2;
  if ( a1 )
  {
    v6 = *(__int64 (__fastcall **)(struct IDeviceTextureTarget *))(v2 + 160);
    if ( (char *)v6 == (char *)CDeviceTextureTarget::IsProtected )
      IsProtected = CDeviceTextureTarget::IsProtected(a2);
    else
      IsProtected = v6(a2);
    return IsProtected == 0;
  }
  else
  {
    v3 = *(bool (__fastcall **)(CDeviceTextureTarget *))(v2 + 176);
    if ( v3 == CDeviceTextureTarget::IsBlackedOutForReadback )
      v4 = *((_BYTE *)a2 + 51);
    else
      v4 = v3(a2);
    return v4 == 0;
  }
}
