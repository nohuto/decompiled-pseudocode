/*
 * XREFs of ??$read@E@?$umptr_r@E@@QEBA_NPEAE_K_J@Z @ 0x1401775DC
 * Callers:
 *     ?GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x140018544 (-GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@.c)
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x140176F30 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 * Callees:
 *     memmove @ 0x140340480 (memmove.c)
 */

char __fastcall umptr_r<unsigned char>::read<unsigned char>(
        __int64 a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v6; // r10
  size_t v7; // r8
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // r10
  char v13; // al

  v6 = *(_QWORD *)(a1 + 16);
  if ( a4 )
  {
    v10 = 0LL;
    if ( v6 <= 0x7FFFFFFFFFFFFFFFLL
      && ((v11 = v6 + a4, v12 = v6 >> 63, (_DWORD)v12 != a4 >> 63)
       || (_DWORD)v12 == (unsigned __int64)v11 > 0x7FFFFFFFFFFFFFFFLL)
      && v11 >= 0 )
    {
      v10 = v11;
      v13 = 1;
    }
    else
    {
      v13 = 0;
    }
    if ( !v13 || v10 > *(_QWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 24) = 1;
    v6 = v10;
  }
  v7 = 0LL;
  if ( a3 > *(_QWORD *)(a1 + 8) - v6 )
    goto LABEL_19;
  v7 = a3;
  if ( !is_mul_ok(a3, 1uLL) )
  {
    v7 = -1LL;
LABEL_19:
    *(_BYTE *)(a1 + 24) = 1;
  }
  if ( *(_BYTE *)(a1 + 25) || *(_BYTE *)(a1 + 24) )
    return 0;
  memmove(a2, (const void *)(v6 + *(_QWORD *)a1), v7);
  return 1;
}
