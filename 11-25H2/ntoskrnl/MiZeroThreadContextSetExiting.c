/*
 * XREFs of MiZeroThreadContextSetExiting @ 0x140440974
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 *     MiBackgroundZeroNodePages @ 0x1404407D0 (MiBackgroundZeroNodePages.c)
 * Callees:
 *     MiSetZeroPageThreadPriority @ 0x14020EE0C (MiSetZeroPageThreadPriority.c)
 */

__int64 __fastcall MiZeroThreadContextSetExiting(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 384) |= 4u;
  MiSetZeroPageThreadPriority(a1, 12LL, 1);
  result = *(_DWORD *)(a1 + 384) | 8u;
  *(_DWORD *)(a1 + 384) = result;
  return result;
}
