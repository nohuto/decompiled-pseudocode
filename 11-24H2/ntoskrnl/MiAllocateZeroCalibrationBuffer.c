/*
 * XREFs of MiAllocateZeroCalibrationBuffer @ 0x140694104
 * Callers:
 *     MiZeroPageCalibrate @ 0x140694F5C (MiZeroPageCalibrate.c)
 * Callees:
 *     MiUpdateProtectionMask @ 0x140248CFC (MiUpdateProtectionMask.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     MiAllocatePagesForMdl @ 0x14039469C (MiAllocatePagesForMdl.c)
 *     MiFreeZeroCalibrationBuffer @ 0x140694704 (MiFreeZeroCalibrationBuffer.c)
 */

__int64 __fastcall MiAllocateZeroCalibrationBuffer(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  int v7; // r10d
  __int64 result; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rbp
  __int64 v11; // r14
  _QWORD *v12; // rsi
  __int64 v13; // r12
  _QWORD *PagesForMdl; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  ULONG_PTR v17; // r14
  _QWORD *i; // r8
  _QWORD *v19; // r12
  unsigned __int64 v20; // rbp
  __int64 v21; // [rsp+50h] [rbp-38h] BYREF
  unsigned int updated; // [rsp+A8h] [rbp+20h]

  LODWORD(v21) = 0;
  updated = MiUpdateProtectionMask(4u, a5);
  result = 0x100000000LL;
  v10 = (v9 >> 12) + ((v9 & 0xFFF) != 0);
  if ( v10 < 0x100000000LL )
  {
    v11 = 0LL;
    v12 = 0LL;
    while ( v11 != v10 )
    {
      v13 = v10 - v11;
      if ( v10 - v11 > 0xFFFFF )
        v13 = 0xFFFFFLL;
      PagesForMdl = MiAllocatePagesForMdl(
                      v7,
                      0,
                      -1,
                      0LL,
                      v13 << 12,
                      a5,
                      a3,
                      7,
                      (__int64)KeGetCurrentThread()->ApcState.Process,
                      0LL);
      if ( !PagesForMdl )
        return MiFreeZeroCalibrationBuffer(a1);
      v7 = a2;
      v11 += v13;
      *PagesForMdl = v12;
      v12 = PagesForMdl;
    }
    v15 = MiReservePtes((__int64)&qword_140E376A8, v10);
    v16 = v15;
    if ( !v15 )
      return MiFreeZeroCalibrationBuffer(a1);
    v17 = v15;
    for ( i = v12; i; i = v19 )
    {
      v19 = (_QWORD *)*i;
      v20 = (unsigned __int64)*((unsigned int *)i + 10) >> 12;
      if ( (int)MiFillSystemPtes(v17, v20, (__int64)(i + 6), updated, 0, &v21) < 0 )
        return MiFreeZeroCalibrationBuffer(a1);
      v17 += 8 * v20;
    }
    *(_QWORD *)(a1 + 288) = v12;
    result = 0LL;
    *(_QWORD *)(a1 + 272) = v16 << 25 >> 16;
  }
  return result;
}
