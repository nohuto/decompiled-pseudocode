/*
 * XREFs of MiBuildDynamicRegion @ 0x14067A54C
 * Callers:
 *     MiInitializeNonPagedPool @ 0x140C55E34 (MiInitializeNonPagedPool.c)
 *     MiInitializeDynamicRegion @ 0x140C5708C (MiInitializeDynamicRegion.c)
 * Callees:
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     MiInitializeDynamicBitmap @ 0x14067A698 (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiBuildDynamicRegion(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax

  if ( a1 == &qword_140E2F0C0 )
    qword_140E2EF08 = a3;
  a1[4] = a2;
  v5 = a3 >> 21;
  v6 = ExGenRandom(1, a2, a3, a4) & 0x7FFF;
  a1[3] = v6;
  if ( a1 == (__int64 *)&unk_140E2EFA0 )
    a1[3] = v6 & 0xFFF;
  a1[2] = v5;
  if ( a1 == (__int64 *)&unk_140E2EFA0 && (v8 = a1[1]) != 0 )
  {
    v9 = 0LL;
    v10 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v7 = 8 * ((v5 >> 6) + ((v5 & 0x3F) != 0));
    result = MiReservePtes((__int64)&qword_140E376A8, (unsigned int)(v7 >> 12) + ((v7 & 0xFFF) != 0));
    v10 = result;
    if ( !result )
      return result;
    v9 = 1LL;
  }
  MiInitializeDynamicBitmap(a1, v10 << 25 >> 16, v5, v9);
  *a1 = 0LL;
  v15 = ExGenRandom(1, v12, v13, v14) & 0x7FFF;
  a1[3] = v15;
  if ( a1 == (__int64 *)&unk_140E2EFA0 )
    a1[3] = v15 & 0xFFF;
  return 1LL;
}
