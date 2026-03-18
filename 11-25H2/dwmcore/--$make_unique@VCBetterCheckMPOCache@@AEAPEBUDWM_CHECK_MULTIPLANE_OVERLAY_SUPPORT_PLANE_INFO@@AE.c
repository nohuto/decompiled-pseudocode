/*
 * XREFs of ??$make_unique@VCBetterCheckMPOCache@@AEAPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@AEAIAEA_NAEA_K$0A@@std@@YA?AV?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@0@AEAPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@AEAIAEA_NAEA_K@Z @ 0x1802C1A18
 * Callers:
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x1801730FC (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ??0CBetterCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N_K@Z @ 0x1802C1F98 (--0CBetterCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N_K@Z.c)
 */

CBetterCheckMPOCache **__fastcall std::make_unique<CBetterCheckMPOCache,DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO const * &,unsigned int &,bool &,unsigned __int64 &,0>(
        CBetterCheckMPOCache **a1,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO **a2,
        unsigned int *a3,
        bool *a4,
        unsigned __int64 *a5)
{
  CBetterCheckMPOCache *v9; // rcx
  CBetterCheckMPOCache *v10; // rax

  v9 = (CBetterCheckMPOCache *)operator new(0x1F0uLL);
  v10 = 0LL;
  if ( v9 )
    v10 = CBetterCheckMPOCache::CBetterCheckMPOCache(v9, *a2, *a3, *a4, *a5);
  *a1 = v10;
  return a1;
}
