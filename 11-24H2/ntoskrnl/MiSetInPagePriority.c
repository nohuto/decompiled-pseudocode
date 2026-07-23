/*
 * XREFs of MiSetInPagePriority @ 0x14046393C
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiSetInPagePrefetchPriority @ 0x14046390C (MiSetInPagePrefetchPriority.c)
 *     MiPfAllocateMdls @ 0x14093A89C (MiPfAllocateMdls.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetInPagePriority(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 192);
  if ( a3 >= 5 || a2 <= a3 )
    v4 = v3 & 0xFFEFFFFF;
  else
    v4 = v3 | 0x100000;
  result = v4 & 0xFFFE07FF;
  *(_DWORD *)(a1 + 192) = result | ((a3 & 7 | (8 * (a3 & 7))) << 11);
  return result;
}
