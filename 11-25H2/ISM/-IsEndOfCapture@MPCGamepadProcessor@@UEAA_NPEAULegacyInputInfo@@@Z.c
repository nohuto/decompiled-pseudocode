/*
 * XREFs of ?IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1801B78F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x1801B7230 (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 */

bool __fastcall MPCGamepadProcessor::IsEndOfCapture(
        MPCGamepadProcessor *this,
        struct LegacyInputInfo *a2,
        __int64 a3,
        const char *a4)
{
  return MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)((char *)this - 32), (__int64)a2, a3, a4) ^ 1;
}
