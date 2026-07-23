/*
 * XREFs of MiZeroThreadContextSetExiting @ 0x140331384
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 *     MiBackgroundZeroNodePages @ 0x140412BA0 (MiBackgroundZeroNodePages.c)
 * Callees:
 *     MiSetZeroPageThreadPriority @ 0x140331968 (MiSetZeroPageThreadPriority.c)
 */

__int64 __fastcall MiZeroThreadContextSetExiting(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 384) |= 4u;
  MiSetZeroPageThreadPriority(a1, 12LL, 1LL);
  result = *(_DWORD *)(a1 + 384) | 8u;
  *(_DWORD *)(a1 + 384) = result;
  return result;
}
