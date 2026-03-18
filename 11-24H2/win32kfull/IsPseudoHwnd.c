/*
 * XREFs of IsPseudoHwnd @ 0x1401C2E54
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserSetWindowBand @ 0x140246BB0 (NtUserSetWindowBand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPseudoHwnd(unsigned __int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 == 0xFFFF || a1 <= 1 || a1 >= 0xFFFFFFFFFFFFFFFDuLL )
    return 1LL;
  return result;
}
