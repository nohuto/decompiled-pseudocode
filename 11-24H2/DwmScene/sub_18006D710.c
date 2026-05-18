/*
 * XREFs of sub_18006D710 @ 0x18006D710
 * Callers:
 *     sub_1800331D0 @ 0x1800331D0 (sub_1800331D0.c)
 *     sub_180035C90 @ 0x180035C90 (sub_180035C90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006D710(__int64 a1)
{
  while ( _InterlockedExchange((volatile __int32 *)(a1 + 48), 1) )
    ;
  *(_DWORD *)(a1 + 48) = 0;
  return a1;
}
