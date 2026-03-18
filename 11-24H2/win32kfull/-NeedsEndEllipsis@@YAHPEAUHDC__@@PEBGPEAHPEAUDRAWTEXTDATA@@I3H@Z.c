/*
 * XREFs of ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x14007DA3C
 * Callers:
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x14007DD88 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x14007C284 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     GreGetTextExtentW @ 0x14007E5DC (GreGetTextExtentW.c)
 *     ?DT_AdjustBreakForSurrogatesAndVariationSelectors@@YAHPEBGHH@Z @ 0x14007E6B8 (-DT_AdjustBreakForSurrogatesAndVariationSelectors@@YAHPEBGHH@Z.c)
 */

__int64 __fastcall NeedsEndEllipsis(
        HDC a1,
        const unsigned __int16 *a2,
        int *a3,
        struct DRAWTEXTDATA *a4,
        unsigned int a5,
        struct DRAWTEXTDATA *a6)
{
  int v6; // ebp
  int v7; // edi
  int v11; // esi
  int v12; // ebx
  int v13; // esi
  int v14; // ebx
  int ExtentMinusPrefixes; // eax
  int v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+20h] [rbp-48h]

  v6 = *a3;
  v7 = 0;
  if ( !*a3 )
    return 0LL;
  v11 = *((_DWORD *)a4 + 8);
  v12 = *((_DWORD *)a4 + 14);
  if ( (int)DT_GetExtentMinusPrefixes(a1, a2, v6, a5, v17, a6, -1) <= v11 || !(unsigned int)GreGetTextExtentW(a1) )
    return 0LL;
  v13 = v12 + v11;
  v14 = 1;
  if ( v13 > 0 )
  {
    v14 = v6;
    while ( v7 < v14 )
    {
      ExtentMinusPrefixes = DT_GetExtentMinusPrefixes(a1, a2, (v14 + v7 + 1) / 2, a5, v18, a6, -1);
      if ( ExtentMinusPrefixes >= v13 )
      {
        if ( ExtentMinusPrefixes <= v13 )
        {
          v14 = (v14 + v7 + 1) / 2;
          break;
        }
        v14 = (v14 + v7 + 1) / 2 - 1;
      }
      else
      {
        v7 = (v14 + v7 + 1) / 2;
      }
    }
    if ( v14 < 1 )
      v14 = 1;
  }
  *a3 = DT_AdjustBreakForSurrogatesAndVariationSelectors(a2, v14, v6);
  return 1LL;
}
