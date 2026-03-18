/*
 * XREFs of VfDriverInitSuccess @ 0x140B8A494
 * Callers:
 *     MiIssueDllInitializeCall @ 0x1407E7684 (MiIssueDllInitializeCall.c)
 *     PnpInitializeBootStartDriver @ 0x140C66118 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ViDriverReApplyVerifierForAll @ 0x140B8A8E4 (ViDriverReApplyVerifierForAll.c)
 */

__int64 __fastcall VfDriverInitSuccess(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll();
  return result;
}
