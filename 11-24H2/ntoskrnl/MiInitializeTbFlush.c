/*
 * XREFs of MiInitializeTbFlush @ 0x140C5C78C
 * Callers:
 *     MiInitializeTbFlushing @ 0x140C5C90C (MiInitializeTbFlushing.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiCalibrateTbFlush @ 0x14068FEB4 (MiCalibrateTbFlush.c)
 */

__int64 __fastcall MiInitializeTbFlush(unsigned int a1)
{
  __int64 result; // rax
  __int64 v3; // r15
  int v4; // ebp
  ULONG_PTR ValidPte; // rbx
  __int64 v6; // r12
  ULONG_PTR *v7; // r14
  __int64 v8; // r13
  unsigned int v9; // r14d
  unsigned __int64 v10; // r12
  signed int v11; // ebx
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  result = MiReservePtes((__int64)&qword_140E376A8, a1);
  v3 = result;
  if ( result )
  {
    v4 = 1;
    ValidPte = MiMakeValidPte(result, qword_140E374B8, 1);
    v6 = v3 << 25 >> 16;
    if ( a1 )
    {
      v7 = (ULONG_PTR *)v3;
      v8 = a1;
      do
      {
        if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v7 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v7, ValidPte, 128LL);
        *v7++ = ValidPte;
        v6 += 4096LL;
        --v8;
      }
      while ( v8 );
    }
    MiCalibrateTbFlush(v3 << 25 >> 16, 0, a1, &v12);
    v9 = a1 - 1;
    if ( (int)(a1 - 1) > 2 )
    {
      v10 = v12 + *((_QWORD *)&v12 + 1);
      do
      {
        v11 = (int)(v9 + v4) >> 1;
        MiCalibrateTbFlush(v3 << 25 >> 16, v11, a1, &v13);
        if ( (_QWORD)v13 + *((_QWORD *)&v13 + 1) <= v10 )
        {
          v4 = (int)(v9 + v4) >> 1;
          v11 = v9;
        }
        v9 = v11;
      }
      while ( v11 > v4 + 1 );
    }
    qword_140E2DD10 = v4;
    return MiReleasePtes((__int64)&qword_140E376A8, (_QWORD *)v3, a1);
  }
  return result;
}
