/*
 * XREFs of ?IsValid@CLegacySwapChain@@UEBAJXZ @ 0x1801D7620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::IsValid(CLegacySwapChain *this)
{
  if ( *((_QWORD *)this + 33) )
    return *(_DWORD *)(*((_QWORD *)this + 5) + 1112LL) != 0 ? 0x8898008D : 0;
  else
    return 2291662989LL;
}
