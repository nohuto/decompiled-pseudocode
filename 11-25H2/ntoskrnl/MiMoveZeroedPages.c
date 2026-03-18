/*
 * XREFs of MiMoveZeroedPages @ 0x14020FE3C
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiPageFreeToZero @ 0x1403478B0 (MiPageFreeToZero.c)
 *     MiHugeRangeFreeToZero @ 0x1404ED414 (MiHugeRangeFreeToZero.c)
 */

__int64 __fastcall MiMoveZeroedPages(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 i; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v3 = *(_QWORD *)(a1 + 64);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 280); i = (unsigned int)(i + 1) )
    {
      v5 = *(_QWORD *)(v3 + 8 * i + 24);
      if ( (v5 & 0x40) != 0 )
      {
        v6 = *(_QWORD *)(a1 + 56);
        if ( v6 && *(_BYTE *)(v6 + 324) )
        {
          result = MiHugeRangeFreeToZero((v5 >> 12) & 0x3FFFFF, qword_140E2FD80 + 8 * ((v5 >> 12) & 0x3FFFFF));
        }
        else
        {
          result = MiPageFreeToZero((v5 >> 12) & 0x3FFFFFFFFFLL);
          if ( (result & 0x400) != 0 )
          {
            result = *(_QWORD *)(v3 + 8 * i + 24) | 0x80LL;
            *(_QWORD *)(v3 + 8 * i + 24) = result;
          }
        }
      }
    }
  }
  return result;
}
