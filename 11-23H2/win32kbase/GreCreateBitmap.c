/*
 * XREFs of GreCreateBitmap @ 0x1C005EAE0
 * Callers:
 *     ?GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ @ 0x1C00D2930 (-GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ.c)
 *     bInitBRUSHOBJ @ 0x1C02DB1F8 (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C02DE010 (bInitBMOBJ.c)
 * Callees:
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x1C005EB50 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 */

__int64 __fastcall GreCreateBitmap(int a1, int a2, int a3, int a4, __int64 a5)
{
  _QWORD v6[3]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v7; // [rsp+48h] [rbp-10h]

  if ( a2 * (unsigned __int64)(((unsigned int)(a4 * a3 * a1 + 15) >> 3) & 0x1FFFFFFE) > 0xFFFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v6[2] = 0LL;
    v6[0] = a5;
    v6[1] = a2 * (unsigned __int64)(((unsigned int)(a4 * a3 * a1 + 15) >> 3) & 0x1FFFFFFE);
    v7 = 0;
    return GreCreateBitmapInternal(a1, a2, a3, a4, (__int64)v6);
  }
}
