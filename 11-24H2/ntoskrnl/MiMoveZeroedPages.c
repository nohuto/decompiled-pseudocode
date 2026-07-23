/*
 * XREFs of MiMoveZeroedPages @ 0x140332F20
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiPageFreeToZero @ 0x140220160 (MiPageFreeToZero.c)
 *     MiHugeRangeFreeToZero @ 0x1404EE690 (MiHugeRangeFreeToZero.c)
 */

void __fastcall MiMoveZeroedPages(__int64 a1)
{
  int v2; // ebp
  __int64 v3; // rsi
  __int64 i; // rdi
  unsigned __int64 v5; // rdx
  __int64 v6; // rax

  if ( *(_DWORD *)(a1 + 8) )
  {
    v2 = *(unsigned __int8 *)(a1 + 4);
    v3 = *(_QWORD *)(a1 + 64);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 280); i = (unsigned int)(i + 1) )
    {
      v5 = *(_QWORD *)(v3 + 8 * i + 24);
      if ( (v5 & 0x40) != 0 )
      {
        v6 = *(_QWORD *)(a1 + 56);
        if ( v6 && *(_BYTE *)(v6 + 324) )
        {
          MiHugeRangeFreeToZero((v5 >> 12) & 0x3FFFFF);
        }
        else if ( (MiPageFreeToZero((v5 >> 12) & 0x3FFFFFFFFFLL, v5, v2) & 0x400) != 0 )
        {
          *(_QWORD *)(v3 + 8 * i + 24) |= 0x80uLL;
        }
      }
    }
  }
}
