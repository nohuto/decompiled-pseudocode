/*
 * XREFs of MiMoveZeroedPages @ 0x14020B140
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiPageFreeToZero @ 0x14026ABD0 (MiPageFreeToZero.c)
 *     MiHugeRangeFreeToZero @ 0x1404F0BF0 (MiHugeRangeFreeToZero.c)
 */

void __fastcall MiMoveZeroedPages(__int64 a1)
{
  __int64 v2; // rsi
  __int64 i; // rdi
  unsigned __int64 v4; // rdx
  __int64 v5; // rax

  if ( *(_DWORD *)(a1 + 8) )
  {
    v2 = *(_QWORD *)(a1 + 64);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v2 + 280); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(v2 + 8 * i + 24);
      if ( (v4 & 0x40) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 56);
        if ( v5 && *(_BYTE *)(v5 + 324) )
        {
          MiHugeRangeFreeToZero((v4 >> 12) & 0x3FFFFF);
        }
        else if ( (MiPageFreeToZero((v4 >> 12) & 0x3FFFFFFFFFLL) & 0x400) != 0 )
        {
          *(_QWORD *)(v2 + 8 * i + 24) |= 0x80uLL;
        }
      }
    }
  }
}
