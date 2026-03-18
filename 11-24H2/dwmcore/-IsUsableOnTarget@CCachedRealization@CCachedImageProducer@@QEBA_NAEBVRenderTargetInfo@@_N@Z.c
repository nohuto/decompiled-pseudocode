/*
 * XREFs of ?IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x1801C81A0
 * Callers:
 *     ?FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo@@@Z @ 0x1801C7F48 (-FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo.c)
 *     ?HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1801C7FF0 (-HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x1801C80CC (-HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z.c)
 * Callees:
 *     ?GetRenderTargetInfo@CRenderTargetBitmap@@UEBA?AVRenderTargetInfo@@XZ @ 0x18001E3F0 (-GetRenderTargetInfo@CRenderTargetBitmap@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?IsBlackedOutForReadback@CDeviceTextureTarget@@UEBA_NXZ @ 0x18001E4A0 (-IsBlackedOutForReadback@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802CDC00 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCachedImageProducer::CCachedRealization::IsUsableOnTarget(
        CCachedImageProducer::CCachedRealization *this,
        const struct RenderTargetInfo *a2,
        char a3)
{
  __int64 v5; // rcx
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  float *RenderTargetInfo; // rax
  float *v9; // r8
  int v10; // eax
  char v11; // bl
  CDeviceTextureTarget *v12; // rax
  __int64 v13; // rdx
  bool (__fastcall *v14)(CDeviceTextureTarget *); // rdx
  CDeviceTextureTarget *v15; // rcx
  char IsProtected; // al
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)this;
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 88LL);
  if ( v7 == CRenderTargetBitmap::GetRenderTargetInfo )
    RenderTargetInfo = (float *)CRenderTargetBitmap::GetRenderTargetInfo(v5, (__int64)v18);
  else
    RenderTargetInfo = (float *)v7(v5, (__int64)v18);
  v9 = RenderTargetInfo;
  if ( *(_DWORD *)RenderTargetInfo != *(_DWORD *)a2 )
    return 0;
  if ( *((_DWORD *)RenderTargetInfo + 1) != *((_DWORD *)a2 + 1) )
    return 0;
  v10 = *((_DWORD *)RenderTargetInfo + 2);
  if ( v10 != -1 && v10 != *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 2) != -3 )
    return 0;
  v11 = 0;
  if ( (v9[4] != 0.0) != (*((float *)a2 + 4) != 0.0) || *((_BYTE *)v9 + 20) && !*((_BYTE *)a2 + 20) )
    return 0;
  v12 = (CDeviceTextureTarget *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 144LL))(*(_QWORD *)this);
  v13 = *(_QWORD *)v12;
  if ( a3 )
  {
    v14 = *(bool (__fastcall **)(CDeviceTextureTarget *))(v13 + 160);
    v15 = v12;
    if ( (char *)v14 == (char *)CDeviceTextureTarget::IsProtected )
    {
      IsProtected = CDeviceTextureTarget::IsProtected(v12);
      goto LABEL_11;
    }
LABEL_22:
    IsProtected = v14(v15);
    goto LABEL_11;
  }
  v14 = *(bool (__fastcall **)(CDeviceTextureTarget *))(v13 + 176);
  v15 = v12;
  if ( v14 != CDeviceTextureTarget::IsBlackedOutForReadback )
    goto LABEL_22;
  IsProtected = CDeviceTextureTarget::IsBlackedOutForReadback(v12);
LABEL_11:
  if ( !IsProtected )
    return 1;
  return v11;
}
