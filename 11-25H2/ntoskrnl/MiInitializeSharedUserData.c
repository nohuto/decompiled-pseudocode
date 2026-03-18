/*
 * XREFs of MiInitializeSharedUserData @ 0x140C3D30C
 * Callers:
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     KasanTrackAddress @ 0x140414470 (KasanTrackAddress.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     HvlGetSharedPageVa @ 0x1404977A0 (HvlGetSharedPageVa.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiInitializeSharedUserData(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 SharedPageVa; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 Pool; // r14
  unsigned __int64 i; // rsi
  _QWORD *v11; // rcx
  __int64 v12; // r15
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v14; // rbx
  ULONG_PTR v15; // rcx
  ULONG_PTR *v16; // rax
  _QWORD *v17; // rbx
  unsigned __int8 v18; // dl
  __int64 v19; // rdi
  __int64 v20; // rbx
  int v21; // edx
  _QWORD v23[7]; // [rsp+20h] [rbp-38h]

  v2 = 1LL;
  v23[0] = 0xFFFFF78000000000uLL;
  SharedPageVa = (unsigned __int64)HvlGetSharedPageVa(a1, a2);
  v23[1] = SharedPageVa;
  if ( SharedPageVa )
  {
    v4 = *(_QWORD *)(((SharedPageVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v4 & 1) != 0 )
    {
      v5 = (v4 >> 12) & 0xFFFFFFFFFFLL;
      if ( v5 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v5 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        v2 = 2LL;
        v6 = ExGenRandom(1);
        v7 = 15LL;
        v8 = v6 & 0xF;
        if ( v8 )
          v7 = v8;
        qword_140E2D838 = (v7 + 524256) << 12;
      }
    }
  }
  Pool = MiAllocatePool(0x112uLL, 8 * v2, 1951624525);
  if ( !Pool )
    return 0LL;
  for ( i = 0LL; i < v2; ++i )
  {
    v11 = (_QWORD *)(((v23[i] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v12 = (*v11 >> 12) & 0xFFFFFFFFFFLL;
    ValidPte = MiMakeValidPte((unsigned __int64)v11, v12, 536870913);
    v14 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) )
    {
      if ( (ValidPte & 0x20) == 0 )
      {
        v15 = Pool + 8 * i;
        if ( v15 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v15, ValidPte, 128);
      }
    }
    v16 = (ULONG_PTR *)(Pool + 8 * i);
    *v16 = v14;
    qword_140E2D828[i] = (__int64)v16;
    v17 = (_QWORD *)(48 * v12 - 0x220000000000LL);
    MiLockPageInline((__int64)v17);
    v17[2] = MiMakeDemandZeroPte(4);
    v17[5] |= 0x8000000000000000uLL;
    v17[1] = Pool + 8 * i;
    MiUnlockPage((__int64)v17, v18);
  }
  v19 = v2 << 12;
  if ( (int)KasanTrackAddress(0xFFFFF78000000000uLL, v19, 0) < 0 )
    return 0LL;
  if ( byte_140FCDC68 )
  {
    v20 = KasaniShadow + 0xEF000000000LL;
    memset_0((void *)(KasaniShadow + 0xEF000000000LL), 0, 0x150uLL);
    LOBYTE(v21) = -123;
    memset_0((void *)(v20 + 336), v21, (unsigned __int64)(v19 - 2688) >> 3);
  }
  return 1LL;
}
