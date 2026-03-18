/*
 * XREFs of CddEngGetRgnData @ 0x1401CF4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z @ 0x1401CF260 (--$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z.c)
 */

__int64 __fastcall CddEngGetRgnData(Win32kRS *a1, unsigned int a2, __int64 a3)
{
  Win32kRS *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  return GrepGetRegionData<0,RGNCOREOBJ>(&v4, a2, a3);
}
