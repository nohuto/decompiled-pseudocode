/*
 * XREFs of ?vCleanupBrushes@@YAXK@Z @ 0x1400147BC
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x140015750 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     HmgNextOwned @ 0x14001F530 (HmgNextOwned.c)
 */

void __fastcall vCleanupBrushes(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 i; // rcx
  unsigned int v4; // ebx
  HBRUSH v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = a1;
  for ( i = 0LL; ; i = v4 )
  {
    v4 = HmgNextOwned(i, v2, &v5);
    if ( !v4 )
      break;
    if ( (BYTE2(v5) & 0x1F) == 0x10 )
      bDeleteBrush(v5);
    v2 = a1;
  }
}
