/*
 * XREFs of ?SetHardwareProtection@CDDisplaySwapChain@@UEAAJ_N@Z @ 0x18028A9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::SetHardwareProtection(CDDisplaySwapChain *this, char a2)
{
  if ( *((_BYTE *)this + 100) != a2 )
  {
    *((_BYTE *)this + 100) = a2;
    *((_BYTE *)this + 640) = 1;
  }
  return 0LL;
}
