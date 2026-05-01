/*
 * XREFs of ?ShouldSwitchToDesktop@DelayedTileActivationCallSite@@UEAAJXZ @ 0x1804EA4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DelayedTileActivationCallSite::ShouldSwitchToDesktop(DelayedTileActivationCallSite *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_BYTE *)this + 37) || !*((_BYTE *)this + 36) )
    return 1LL;
  return result;
}
