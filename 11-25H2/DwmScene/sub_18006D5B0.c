/*
 * XREFs of sub_18006D5B0 @ 0x18006D5B0
 * Callers:
 *     sub_180033070 @ 0x180033070 (sub_180033070.c)
 *     sub_180035B30 @ 0x180035B30 (sub_180035B30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006D5B0(__int64 a1)
{
  while ( _InterlockedExchange((volatile __int32 *)(a1 + 48), 1) )
    ;
  *(_DWORD *)(a1 + 48) = 0;
  return a1;
}
