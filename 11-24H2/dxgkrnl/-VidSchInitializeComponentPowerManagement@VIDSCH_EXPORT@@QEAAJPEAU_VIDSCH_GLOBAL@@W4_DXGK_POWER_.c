/*
 * XREFs of ?VidSchInitializeComponentPowerManagement@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_DXGK_POWER_COMPONENT_TYPE@@IIIPEAE@Z @ 0x14006825C
 * Callers:
 *     ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x14019F180 (-InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchInitializeComponentPowerManagement(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int8 *a7)
{
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *))(*((_QWORD *)this + 1) + 808LL))(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
