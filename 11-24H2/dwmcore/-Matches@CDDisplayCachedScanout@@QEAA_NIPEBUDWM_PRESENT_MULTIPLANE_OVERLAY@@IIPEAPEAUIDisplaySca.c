/*
 * XREFs of ?Matches@CDDisplayCachedScanout@@QEAA_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1800677D0
 * Callers:
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180066644 (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4Sc.c)
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1800675D8 (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags@@@details@wil@@QEAA_NXZ @ 0x1802CE0FC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags@@@detai.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CDDisplayCachedScanout::Matches(
        CDDisplayCachedScanout *this,
        __int64 a2,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a3,
        int a4,
        unsigned int a5,
        struct Windows::Devices::Display::Core::IDisplayScanout **a6)
{
  char v7; // bp
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  __int64 v10; // rbx
  _DWORD *v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  bool v16; // zf
  struct Windows::Devices::Display::Core::IDisplayScanout *v17; // rbx
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+78h] [rbp+20h] BYREF

  v20 = a4;
  v7 = 1;
  v8 = a2;
  if ( (unsigned int)a2 != 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3)
    || *((_DWORD *)this + 8) != 1
    || *((_DWORD *)this + 9) )
  {
LABEL_40:
    v7 = 0;
LABEL_41:
    LOBYTE(v15) = v7;
    return v15;
  }
  v9 = 0;
  if ( !(_DWORD)a2 )
  {
LABEL_37:
    v17 = (struct Windows::Devices::Display::Core::IDisplayScanout *)*((_QWORD *)this + 3);
    if ( v17 )
      (*(void (__fastcall **)(_QWORD, __int64, const struct DWM_PRESENT_MULTIPLANE_OVERLAY *))(*(_QWORD *)v17 + 8LL))(
        *((_QWORD *)this + 3),
        a2,
        a3);
    v19 = 0LL;
    *a6 = v17;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
    goto LABEL_41;
  }
  v10 = 0LL;
  v11 = (_DWORD *)((char *)a3 + 68);
  while ( 1 )
  {
    v20 = 0;
    v12 = 0LL;
    v13 = *(_QWORD *)(v11 - 15);
    v14 = *(_QWORD *)this;
    if ( v13 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 48LL))(v13, &v20);
      v12 = v15;
      if ( !v15 )
        return v15;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DDisplayScanoutCacheFlags>::GetImpl'::`2'::impl) )
    {
      if ( *(_QWORD *)(v10 + v14 + 8) != v12
        || *(_DWORD *)(v10 + v14) != *(v11 - 17)
        || *(_BYTE *)(v10 + v14 + 4) != (*((_BYTE *)v11 - 64) != 0)
        || *(_DWORD *)(v10 + v14 + 16) != v20
        || *(_QWORD *)(v10 + v14 + 20) != *((_QWORD *)v11 - 6)
        || *(_QWORD *)(v10 + v14 + 28) != *((_QWORD *)v11 - 5)
        || *(_QWORD *)(v10 + v14 + 36) != *((_QWORD *)v11 - 4)
        || *(_QWORD *)(v10 + v14 + 44) != *((_QWORD *)v11 - 3)
        || *(_QWORD *)(v10 + v14 + 52) != *((_QWORD *)v11 - 2)
        || *(_QWORD *)(v10 + v14 + 60) != *((_QWORD *)v11 - 1)
        || *(_DWORD *)(v10 + v14 + 68) != v11[1]
        || *(_DWORD *)(v10 + v14 + 72) != v11[6]
        || *(_DWORD *)(v10 + v14 + 76) != *v11 )
      {
        goto LABEL_40;
      }
      v16 = *(_DWORD *)(v10 + v14 + 80) == *(v11 - 13);
    }
    else
    {
      if ( *(_QWORD *)(v10 + v14 + 8) != v12
        || *(_DWORD *)(v10 + v14) != *(v11 - 17)
        || *(_BYTE *)(v10 + v14 + 4) != (*((_BYTE *)v11 - 64) != 0)
        || *(_DWORD *)(v10 + v14 + 16) != v20
        || *(_DWORD *)(v10 + v14 + 68) != v11[1]
        || *(_DWORD *)(v10 + v14 + 72) != v11[6]
        || *(_QWORD *)(v10 + v14 + 20) != *((_QWORD *)v11 - 6)
        || *(_QWORD *)(v10 + v14 + 28) != *((_QWORD *)v11 - 5)
        || *(_QWORD *)(v10 + v14 + 36) != *((_QWORD *)v11 - 4)
        || *(_QWORD *)(v10 + v14 + 44) != *((_QWORD *)v11 - 3)
        || *(_QWORD *)(v10 + v14 + 52) != *((_QWORD *)v11 - 2) )
      {
        goto LABEL_40;
      }
      v16 = *(_QWORD *)(v10 + v14 + 60) == *((_QWORD *)v11 - 1);
    }
    if ( !v16 )
      goto LABEL_40;
    ++v9;
    v10 += 88LL;
    v11 += 32;
    if ( v9 >= v8 )
      goto LABEL_37;
  }
}
