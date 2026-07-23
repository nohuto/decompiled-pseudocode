/*
 * XREFs of MiInitializePteInfo @ 0x140C5BF50
 * Callers:
 *     MiInitializeSystemSpaceMap @ 0x140C562B8 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeKernelStacks @ 0x140C595E8 (MiInitializeKernelStacks.c)
 *     MiInitializeNonCachedMappingRegion @ 0x140C5BEA8 (MiInitializeNonCachedMappingRegion.c)
 *     MiInitializeSystemPtes @ 0x140C5C108 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x14067A698 (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiInitializePteInfo(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned __int64 v8; // rsi
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rdi
  __int64 v13; // rbp
  int v14; // r14d

  v8 = a3;
  v11 = (a7 + (a6 >> 12) - 1) / a7;
  v12 = ((((v11 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL) >> 12;
  v13 = 0LL;
  v14 = (dword_140FC51FC & 2) != 0 ? 3 : 1;
  if ( !a3 )
  {
    if ( (dword_140FC51FC & 2) != 0 )
    {
      v13 = MiReservePtes((__int64)&qword_140E376A8, (int)v12 * v14);
      if ( v13 )
      {
LABEL_6:
        v8 = v13 << 25 >> 16;
        goto LABEL_7;
      }
      v14 = 1;
    }
    v13 = MiReservePtes((__int64)&qword_140E376A8, v12);
    if ( !v13 )
      return 0LL;
    goto LABEL_6;
  }
LABEL_7:
  if ( !(unsigned int)MiInitializeDynamicBitmap(a1, v8, v11, a4) )
  {
    if ( v13 )
      MiReleasePtes((__int64)&qword_140E376A8, (_QWORD *)v13, v12);
    return 0LL;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( a7 == 16 )
    *(_DWORD *)(a1 + 40) = 1;
  *(_DWORD *)(a1 + 44) = a2;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = a8;
  *(_QWORD *)(a1 + 32) = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)a1 = 0LL;
  if ( v14 != 1
    && (unsigned int)MiInitializeDynamicBitmap(
                       a1 + 16,
                       v8 + ((((v11 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL),
                       2 * v11,
                       4) )
  {
    *(_DWORD *)(a1 + 40) |= 4u;
  }
  return 1LL;
}
