/*
 * XREFs of ?InitializeAdapterPowerManagement@VIDMM_GLOBAL@@QEAAXPEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x140094CD8
 * Callers:
 *     VidMmInitializeAdapterPowerManagement @ 0x14004C650 (VidMmInitializeAdapterPowerManagement.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::InitializeAdapterPowerManagement(
        VIDMM_GLOBAL *this,
        const struct _DXGMMS_INIT_POWER_MANAGEMENT *a2)
{
  *((_OWORD *)this + 2501) = *(_OWORD *)a2;
  *((_OWORD *)this + 2502) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2503) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 2504) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 2505) = *((_OWORD *)a2 + 4);
}
