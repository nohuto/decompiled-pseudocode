/*
 * XREFs of MiBuildDynamicRegion @ 0x14067936C
 * Callers:
 *     MiInitializeNonPagedPool @ 0x140C53CA4 (MiInitializeNonPagedPool.c)
 *     MiInitializeDynamicRegion @ 0x140C54EFC (MiInitializeDynamicRegion.c)
 * Callees:
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     MiInitializeDynamicBitmap @ 0x1406794B8 (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiBuildDynamicRegion(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rax

  if ( a1 == &qword_140E2EF80 )
    qword_140E2EDC8 = a3;
  a1[4] = a2;
  v4 = a3 >> 21;
  v5 = ExGenRandom(1) & 0x7FFF;
  a1[3] = v5;
  if ( a1 == (__int64 *)&unk_140E2EE60 )
    a1[3] = v5 & 0xFFF;
  a1[2] = v4;
  if ( a1 == (__int64 *)&unk_140E2EE60 && (v7 = a1[1]) != 0 )
  {
    v8 = 0LL;
    v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v6 = 8 * ((v4 >> 6) + ((v4 & 0x3F) != 0));
    result = MiReservePtes((__int64)&qword_140E37568, (unsigned int)(v6 >> 12) + ((v6 & 0xFFF) != 0));
    v9 = result;
    if ( !result )
      return result;
    v8 = 1LL;
  }
  MiInitializeDynamicBitmap(a1, v9 << 25 >> 16, v4, v8);
  *a1 = 0LL;
  v11 = ExGenRandom(1) & 0x7FFF;
  a1[3] = v11;
  if ( a1 == (__int64 *)&unk_140E2EE60 )
    a1[3] = v11 & 0xFFF;
  return 1LL;
}
