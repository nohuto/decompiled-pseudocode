/*
 * XREFs of NvmeControllerIsDisableDfx @ 0x140132280
 * Callers:
 *     NvmeRegisterForRuntimePowerManagement @ 0x140136338 (NvmeRegisterForRuntimePowerManagement.c)
 * Callees:
 *     <none>
 */

bool __fastcall NvmeControllerIsDisableDfx(__int64 a1)
{
  return !DFxEnabled || *(int *)(*(_QWORD *)(a1 + 1048) + 24LL) < 0;
}
