/*
 * XREFs of VfDriverInitSuccess @ 0x140B8C494
 * Callers:
 *     MiIssueDllInitializeCall @ 0x1407E7C54 (MiIssueDllInitializeCall.c)
 *     PnpInitializeBootStartDriver @ 0x140C68294 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ViDriverReApplyVerifierForAll @ 0x140B8C8E4 (ViDriverReApplyVerifierForAll.c)
 */

__int64 __fastcall VfDriverInitSuccess(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll();
  return result;
}
