/*
 * XREFs of ?InternalRelease@?$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180097780
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18004F884 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ??1?$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x18009C5EC (--1-$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180035CE0 (-Release@InputContext@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<GameInputProcessor>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return InputContext::Release((InputContext *)(v2 + 8));
  }
  return result;
}
