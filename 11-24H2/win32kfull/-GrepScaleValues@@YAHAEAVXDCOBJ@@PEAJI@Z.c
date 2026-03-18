/*
 * XREFs of ?GrepScaleValues@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1400E8B38
 * Callers:
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x140202788 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     NtGdiScaleValues @ 0x1403383B0 (NtGdiScaleValues.c)
 * Callees:
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 */

__int64 __fastcall GrepScaleValues(struct XDCOBJ *a1, int *a2, unsigned int a3)
{
  int v5; // r9d
  int v7; // eax
  __int64 i; // rbx

  v5 = *(_DWORD *)(*(_QWORD *)a1 + 520LL);
  if ( (v5 & 1) != 0 && (v5 & 2) == 0 )
  {
    for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
    {
      bFToL(a1, &a2[i], 6LL);
      if ( !v7 )
        return 0LL;
    }
  }
  return 1LL;
}
