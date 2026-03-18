/*
 * XREFs of ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18018BD14
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x18018B7A0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180040744 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??1?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@QEAA@XZ @ 0x1800436F4 (--1-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCachedBitmap@CD2DBitmapCache.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180043744 (--$_Emplace_reallocate@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCachedB.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DA620 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802C5FAC (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmapCache::CreateAndCacheBitmap(
        __int64 this,
        struct _LUID a2,
        struct CSecondaryD2DBitmap **a3)
{
  int Device; // eax
  unsigned int v7; // ebx
  char **v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rsi
  struct CSecondaryD2DBitmap *v11; // rcx
  __int64 *v12; // rdx
  struct CSecondaryD2DBitmap *v13; // rax
  unsigned int v15; // [rsp+20h] [rbp-20h]
  __int64 v16[2]; // [rsp+30h] [rbp-10h] BYREF
  struct CSecondaryD2DBitmap *v17; // [rsp+80h] [rbp+40h] BYREF
  struct CD3DDevice *v18; // [rsp+88h] [rbp+48h] BYREF

  v17 = 0LL;
  v16[0] = 0LL;
  *a3 = 0LL;
  v18 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v18);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, a2, &v18);
  v7 = Device;
  if ( Device < 0 )
  {
    v15 = 257;
    goto LABEL_17;
  }
  if ( v17 )
    (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v17 + 16LL))(v17);
  v8 = &off_180318A78;
  if ( !*(_QWORD *)(this + 32) )
    v8 = &off_180318A88;
  Device = CD3DDevice::CreateSecondaryD2DBitmap(
             v18,
             (const struct CResourceTag *)v8,
             *(struct ID2DBitmapCacheSource **)(this + 24),
             &v17);
  v7 = Device;
  if ( Device < 0 )
  {
    v15 = 261;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, v15, 0LL);
    goto LABEL_18;
  }
  v9 = MIDL_user_allocate(0x10uLL);
  v10 = (__int64)v9;
  if ( v9 )
  {
    v11 = v17;
    *v9 = (this + 16) & -(__int64)(this != 0);
    v9[1] = v11;
    if ( v11 )
      (*(void (__fastcall **)(struct CSecondaryD2DBitmap *, __int64))(*(_QWORD *)v11 + 8LL))(v11, -this);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v10 + 8) + 72LL))(
      *(_QWORD *)(v10 + 8),
      (this + 16) & -(__int64)(this != 0));
    v12 = *(__int64 **)(this + 56);
    v16[0] = v10;
    if ( v12 == *(__int64 **)(this + 64) )
    {
      std::vector<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>::_Emplace_reallocate<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>(
        (__int64 *)(this + 48),
        (__int64)v12,
        v16);
    }
    else
    {
      v16[0] = 0LL;
      *v12 = v10;
      *(_QWORD *)(this + 56) += 8LL;
    }
    v13 = v17;
    v17 = 0LL;
    *a3 = v13;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x108u, 0LL);
  }
LABEL_18:
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v18);
  std::unique_ptr<CD2DBitmapCache::CCachedBitmap>::~unique_ptr<CD2DBitmapCache::CCachedBitmap>(v16);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  return v7;
}
