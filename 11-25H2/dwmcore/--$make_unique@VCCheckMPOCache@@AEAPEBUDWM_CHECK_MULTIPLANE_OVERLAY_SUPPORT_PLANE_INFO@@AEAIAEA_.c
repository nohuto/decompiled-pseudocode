/*
 * XREFs of ??$make_unique@VCCheckMPOCache@@AEAPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@AEAIAEA_N$0A@@std@@YA?AV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@AEAPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@AEAIAEA_N@Z @ 0x1801FF030
 * Callers:
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x1801730FC (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ??0CCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x1801FF098 (--0CCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z.c)
 */

CCheckMPOCache **__fastcall std::make_unique<CCheckMPOCache,DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO const * &,unsigned int &,bool &,0>(
        CCheckMPOCache **a1,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO **a2,
        unsigned int *a3,
        bool *a4)
{
  CCheckMPOCache *v8; // rcx
  CCheckMPOCache *v9; // rax

  v8 = (CCheckMPOCache *)operator new(0x3E8uLL);
  v9 = 0LL;
  if ( v8 )
    v9 = CCheckMPOCache::CCheckMPOCache(v8, *a2, *a3, *a4);
  *a1 = v9;
  return a1;
}
