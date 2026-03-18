/*
 * XREFs of GreGetAspectRatioFilter @ 0x140303D00
 * Callers:
 *     <none>
 * Callees:
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x1401608B4 (-ulLogPixelsX@PDEVOBJ@@QEBAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x140163224 (-ulLogPixelsY@PDEVOBJ@@QEBAKXZ.c)
 */

__int64 __fastcall GreGetAspectRatioFilter(HDC a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD v5[11]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
  {
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v5, a1);
    if ( v5[0] )
    {
      v6 = *(_QWORD *)(v5[0] + 48LL);
      if ( (*(_DWORD *)(*(_QWORD *)(v5[0] + 976LL) + 236LL) & 1) != 0 )
      {
        *a2 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v6);
        v2 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v6);
      }
      else
      {
        *a2 = 0;
      }
      a2[1] = v2;
      v2 = 1;
    }
    else
    {
      EngSetLastError(6u);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v5);
    return v2;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
