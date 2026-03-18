/*
 * XREFs of ?FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x180144790
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x1800DDD70 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801470F0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x180145C30 (-IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?GetAdapterLuid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA?AU_LUID@@XZ @ 0x180147010 (-GetAdapterLuid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA-AU_LUID@@XZ.c)
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802D6E70 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CCachedVisualImage::CCachedTarget *__fastcall CCachedVisualImage::FindExistingCachedTarget(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  char v5; // r15
  __int64 v6; // r14
  void (__fastcall *v7)(__int64, _DWORD *); // rax
  bool IsHardwareProtected; // dl
  __int64 v9; // rax
  __int64 v10; // rdx
  bool (__fastcall *v11)(CDeviceTextureTarget *); // rdx
  char v12; // al
  char IsProtected; // al
  _DWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  int v16; // [rsp+28h] [rbp-50h]
  int v17; // [rsp+2Ch] [rbp-4Ch]
  float v18; // [rsp+30h] [rbp-48h]
  bool v19; // [rsp+34h] [rbp-44h]
  __int16 v20; // [rsp+35h] [rbp-43h]
  char v21; // [rsp+37h] [rbp-41h]

  v2 = *((_QWORD *)this + 23);
  v3 = *((_QWORD *)this + 24);
  v5 = *((_BYTE *)g_pComposition + 6490);
  while ( v2 != v3 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 144LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL))
       + 16;
    v7 = *(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v6 + 120LL);
    if ( (char *)v7 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
    {
      IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetAdapterLuid(v6 - 256, v15);
      v16 = *(_DWORD *)(v6 - 28);
      v17 = *(_DWORD *)(v6 + 24);
      v18 = *(float *)(v6 + 28);
      IsHardwareProtected = CDeviceTextureTarget::IsHardwareProtected((CDeviceTextureTarget *)(v6 - 256));
      v19 = IsHardwareProtected;
      v20 = 0;
      v21 = 0;
    }
    else
    {
      v7(v6, v15);
      IsHardwareProtected = v19;
    }
    if ( v15[0] == *(_DWORD *)a2
      && v15[1] == *((_DWORD *)a2 + 1)
      && (v16 == -1 || v16 == *((_DWORD *)a2 + 2) || *((_DWORD *)a2 + 2) == -3)
      && (v18 != 0.0) == (*((float *)a2 + 4) != 0.0)
      && (!IsHardwareProtected || *((_BYTE *)a2 + 20)) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 144LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
      v10 = *(_QWORD *)v9;
      if ( v5 )
      {
        if ( *(__int64 (__fastcall **)(_QWORD))(v10 + 160) == CDeviceTextureTarget::IsProtected )
          IsProtected = CDeviceTextureTarget::IsProtected(v9);
        else
          IsProtected = (*(__int64 (__fastcall **)(__int64))(v10 + 160))(v9);
        if ( !IsProtected )
          return *(struct CCachedVisualImage::CCachedTarget **)v2;
      }
      else
      {
        v11 = *(bool (__fastcall **)(CDeviceTextureTarget *))(v10 + 176);
        if ( v11 == CDeviceTextureTarget::IsBlackedOutForReadback )
          v12 = *(_BYTE *)(v9 + 51);
        else
          v12 = v11((CDeviceTextureTarget *)v9);
        if ( !v12 )
          return *(struct CCachedVisualImage::CCachedTarget **)v2;
      }
    }
    v2 += 8LL;
  }
  return 0LL;
}
