/*
 * XREFs of MiZeroThreadContextSetExiting @ 0x140209DA4
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 *     MiBackgroundZeroNodePages @ 0x1403C6F60 (MiBackgroundZeroNodePages.c)
 * Callees:
 *     MiSetZeroPageThreadPriority @ 0x14020A388 (MiSetZeroPageThreadPriority.c)
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
