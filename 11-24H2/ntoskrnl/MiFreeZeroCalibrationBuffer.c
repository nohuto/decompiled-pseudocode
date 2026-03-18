/*
 * XREFs of MiFreeZeroCalibrationBuffer @ 0x140693634
 * Callers:
 *     MiAllocateZeroCalibrationBuffer @ 0x140693034 (MiAllocateZeroCalibrationBuffer.c)
 *     MiZeroPageCalibrate @ 0x140693E8C (MiZeroPageCalibrate.c)
 * Callees:
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeZeroCalibrationBuffer(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx

  v1 = a1[34];
  if ( v1 )
    MiReleasePtes(
      (__int64)&qword_140E37568,
      (_QWORD *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
      (a1[35] >> 12) + ((a1[35] & 0xFFFLL) != 0));
  v3 = (_QWORD *)a1[36];
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      MiFreePagesFromMdl((ULONG_PTR)v3, 0, 0, 0);
      ExFreePoolWithTag(v3, 0);
      v3 = v4;
    }
    while ( v4 );
  }
  a1[34] = 0LL;
  a1[36] = 0LL;
}
