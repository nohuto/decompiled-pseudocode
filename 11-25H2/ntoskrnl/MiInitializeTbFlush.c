/*
 * XREFs of MiInitializeTbFlush @ 0x140C492CC
 * Callers:
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiCalibrateTbFlush @ 0x1406834F4 (MiCalibrateTbFlush.c)
 */

char __fastcall MiInitializeTbFlush(unsigned int a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r15
  int v4; // ebp
  ULONG_PTR ValidPte; // rbx
  __int64 v6; // r12
  ULONG_PTR *v7; // r14
  __int64 v8; // r13
  unsigned int v9; // r14d
  unsigned __int64 v10; // r12
  signed int v11; // ebx
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v2 = MiReservePtes((__int64)&qword_140E37328, a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = 1;
    ValidPte = MiMakeValidPte(v2, qword_140E37138, 1);
    v6 = (__int64)(v3 << 25) >> 16;
    if ( a1 )
    {
      v7 = (ULONG_PTR *)v3;
      v8 = a1;
      do
      {
        if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v7 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v7, ValidPte, 128);
        *v7++ = ValidPte;
        v6 += 4096LL;
        --v8;
      }
      while ( v8 );
    }
    MiCalibrateTbFlush((__int64)(v3 << 25) >> 16, 0, a1, &v13);
    v9 = a1 - 1;
    if ( (int)(a1 - 1) > 2 )
    {
      v10 = v13 + *((_QWORD *)&v13 + 1);
      do
      {
        v11 = (int)(v9 + v4) >> 1;
        MiCalibrateTbFlush((__int64)(v3 << 25) >> 16, v11, a1, &v14);
        if ( (_QWORD)v14 + *((_QWORD *)&v14 + 1) <= v10 )
        {
          v4 = (int)(v9 + v4) >> 1;
          v11 = v9;
        }
        v9 = v11;
      }
      while ( v11 > v4 + 1 );
    }
    qword_140E2D990 = v4;
    LOBYTE(v2) = MiReleasePtes((__int64)&qword_140E37328, (unsigned __int64 *)v3, a1);
  }
  return v2;
}
