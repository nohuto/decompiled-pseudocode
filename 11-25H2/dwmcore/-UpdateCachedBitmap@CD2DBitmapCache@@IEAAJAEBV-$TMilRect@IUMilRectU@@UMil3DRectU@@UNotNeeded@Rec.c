/*
 * XREFs of ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18018BB40
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x18018B7A0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800435E0 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18009E960 (-IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x180188F34 (-UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x1801D56A8 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x180236770 (-ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@QEAA_NXZ @ 0x1802C47C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@detail.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmapCache::UpdateCachedBitmap(CD2DBitmapCache *this, int *a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int updated; // eax
  int v11; // eax
  volatile signed __int32 *v12; // rcx
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0;
  v14 = 0LL;
  if ( !(unsigned __int8)CSecondaryBitmap::IsRegionValid(a3 + 60, a2, (__int64)&v14) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 80LL))(*((_QWORD *)this + 3)) )
    {
      v7 = (*(__int64 (__fastcall **)(_DWORD *, __int128 *, _QWORD))(*(_QWORD *)a3 + 128LL))(
             a3,
             &v14,
             *((_QWORD *)this + 3));
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x139u, 0LL);
    }
    else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::GetImpl'::`2'::impl)
           && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 88LL))(
                *((_QWORD *)this + 3),
                0LL) )
    {
      v8 = (*(__int64 (__fastcall **)(_DWORD *, __int128 *, _QWORD))(*(_QWORD *)a3 + 128LL))(
             a3,
             &v14,
             *((_QWORD *)this + 3));
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x13Eu, 0LL);
    }
    else
    {
      v9 = CD2DBitmapCache::EnsureSysmemBitmap(this);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x142u, 0LL);
      }
      else if ( (unsigned __int8)CSecondaryBitmap::IsRegionValid((_DWORD *)(*((_QWORD *)this + 5) + 24LL), a2, 0LL)
             || (updated = CD2DBitmapCache::UpdateSysmemBitmap(this), v6 = updated, updated >= 0) )
      {
        v11 = (*(__int64 (__fastcall **)(_DWORD *, __int128 *, _QWORD))(*(_QWORD *)a3 + 128LL))(
                a3,
                &v14,
                *((_QWORD *)this + 5));
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x14Au, 0LL);
        }
        else if ( *((_BYTE *)this + 72) )
        {
          ReleaseDecoderCopyBuffers(*((struct IUnknown **)this + 3));
          v12 = (volatile signed __int32 *)*((_QWORD *)this + 5);
          *((_QWORD *)this + 5) = 0LL;
          if ( v12 )
            CMILRefCountBaseT<ID2DBitmapCacheSource,CMilObjectDeleter>::InternalRelease(v12);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x146u, 0LL);
      }
    }
  }
  return v6;
}
