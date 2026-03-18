/*
 * XREFs of ?GrepTransformPoints@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@1HH@Z @ 0x14009565C
 * Callers:
 *     GreLPtoDP @ 0x1400953BC (GreLPtoDP.c)
 *     GreDPtoLP @ 0x140095424 (GreDPtoLP.c)
 *     NtGdiTransformPoints @ 0x140095490 (NtGdiTransformPoints.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GrepTransformPoints(
        struct XDCOBJ *a1,
        const struct _POINTL *a2,
        struct _POINTFIX *a3,
        int a4,
        int a5)
{
  unsigned __int64 v5; // rsi
  unsigned int v6; // edi
  int v9; // ebx
  __int64 v10; // r8
  int v11; // ebx
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a4;
  v6 = 0;
  if ( a4 <= 0 )
  {
    return 1;
  }
  else
  {
    v9 = a5 & 0x7FFFFFFF;
    v10 = (a5 & 0x7FFFFFFF) != 0 ? 516 : 1026;
    LODWORD(v10) = v10 | 0x80000000;
    if ( a5 < 0 )
      v10 = (a5 & 0x7FFFFFFF) != 0 ? 516 : 1026;
    DC::QuickInitXform(*(_QWORD *)a1, v14, v10);
    if ( v14[0] )
    {
      if ( v9 && (v11 = v9 - 1) != 0 )
      {
        if ( v11 != 1 )
          return v6;
        return EXFORMOBJ::bXform((EXFORMOBJ *)v14, a2, a3, v5);
      }
      else
      {
        return EXFORMOBJ::bXform((EXFORMOBJ *)v14, a2, (struct _POINTL *)a3, v5);
      }
    }
  }
  return v6;
}
