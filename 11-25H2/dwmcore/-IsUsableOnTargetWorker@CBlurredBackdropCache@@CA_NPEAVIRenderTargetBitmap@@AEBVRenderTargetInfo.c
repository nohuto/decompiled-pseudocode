/*
 * XREFs of ?IsUsableOnTargetWorker@CBlurredBackdropCache@@CA_NPEAVIRenderTargetBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x180040058
 * Callers:
 *     ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@_N@Z @ 0x18003FC5C (-InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInf.c)
 *     ?IsUsableOnTargetWithHDRBoost@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x1802032F8 (-IsUsableOnTargetWithHDRBoost@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetIn.c)
 *     ?IsUsableOnTarget@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x1802358EC (-IsUsableOnTarget@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetInfo@@_N@Z.c)
 * Callees:
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180040190 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?IsBlackedOutForReadback@CDeviceTextureTarget@@UEBA_NXZ @ 0x1800B1620 (-IsBlackedOutForReadback@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?GetRenderTargetInfo@CRenderTargetBitmap@@UEBA?AVRenderTargetInfo@@XZ @ 0x1800B1630 (-GetRenderTargetInfo@CRenderTargetBitmap@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802D6E70 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBlurredBackdropCache::IsUsableOnTargetWorker(
        struct IRenderTargetBitmap *a1,
        const struct RenderTargetInfo *a2,
        char a3)
{
  __int64 (__fastcall *v6)(struct IRenderTargetBitmap *, _BYTE *); // rax
  RenderTargetInfo *RenderTargetInfo; // rax
  RenderTargetInfo *v8; // r9
  char v9; // bl
  int v10; // eax
  char IsHDR; // al
  __int64 v12; // r9
  char v13; // dl
  CDeviceTextureTarget *v14; // rax
  __int64 v15; // rdx
  bool (__fastcall *v16)(CDeviceTextureTarget *__hidden); // rdx
  CDeviceTextureTarget *v17; // rcx
  char IsProtected; // al
  _BYTE v20[40]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *(__int64 (__fastcall **)(struct IRenderTargetBitmap *, _BYTE *))(*(_QWORD *)a1 + 88LL);
  if ( (char *)v6 == (char *)CRenderTargetBitmap::GetRenderTargetInfo )
    RenderTargetInfo = (RenderTargetInfo *)CRenderTargetBitmap::GetRenderTargetInfo(a1, v20);
  else
    RenderTargetInfo = (RenderTargetInfo *)v6(a1, v20);
  v8 = RenderTargetInfo;
  v9 = 0;
  if ( *(_DWORD *)RenderTargetInfo == *(_DWORD *)a2 && *((_DWORD *)RenderTargetInfo + 1) == *((_DWORD *)a2 + 1) )
  {
    v10 = *((_DWORD *)RenderTargetInfo + 2);
    if ( v10 == -1 || v10 == *((_DWORD *)a2 + 2) || *((_DWORD *)a2 + 2) == -3 )
    {
      RenderTargetInfo::IsHDR(v8);
      IsHDR = RenderTargetInfo::IsHDR(a2);
      if ( v13 == IsHDR && (!*(_BYTE *)(v12 + 20) || *((_BYTE *)a2 + 20)) )
      {
        v14 = (CDeviceTextureTarget *)(*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)a1 + 144LL))(a1);
        v15 = *(_QWORD *)v14;
        if ( a3 )
        {
          v16 = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(v15 + 160);
          v17 = v14;
          if ( (char *)v16 == (char *)CDeviceTextureTarget::IsProtected )
          {
            IsProtected = CDeviceTextureTarget::IsProtected(v14);
            goto LABEL_11;
          }
        }
        else
        {
          v16 = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(v15 + 176);
          v17 = v14;
          if ( v16 == CDeviceTextureTarget::IsBlackedOutForReadback )
          {
            IsProtected = CDeviceTextureTarget::IsBlackedOutForReadback(v14);
            goto LABEL_11;
          }
        }
        IsProtected = v16(v17);
LABEL_11:
        if ( !IsProtected )
          return 1;
      }
    }
  }
  return v9;
}
