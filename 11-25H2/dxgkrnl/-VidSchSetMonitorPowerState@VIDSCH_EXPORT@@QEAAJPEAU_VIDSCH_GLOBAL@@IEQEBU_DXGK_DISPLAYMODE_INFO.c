/*
 * XREFs of ?VidSchSetMonitorPowerState@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IEQEBU_DXGK_DISPLAYMODE_INFO@@PEAT_DXGK_MONITORLINKINFO_CAPABILITIES@@@Z @ 0x140055564
 * Callers:
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140198804 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchSetMonitorPowerState(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        __int64 a3,
        char a4,
        const struct _DXGK_DISPLAYMODE_INFO *a5,
        union _DXGK_MONITORLINKINFO_CAPABILITIES *a6)
{
  unsigned int v6; // r11d

  v6 = a3;
  LOBYTE(a3) = a4;
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, _QWORD, __int64, const struct _DXGK_DISPLAYMODE_INFO *, union _DXGK_MONITORLINKINFO_CAPABILITIES *))(*((_QWORD *)this + 1) + 528LL))(
           a2,
           v6,
           a3,
           a5,
           a6);
}
