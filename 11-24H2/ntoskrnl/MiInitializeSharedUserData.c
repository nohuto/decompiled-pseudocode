/*
 * XREFs of MiInitializeSharedUserData @ 0x140C4E594
 * Callers:
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     KasanTrackAddress @ 0x140459A10 (KasanTrackAddress.c)
 *     HvlGetSharedPageVa @ 0x140497270 (HvlGetSharedPageVa.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiInitializeSharedUserData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 SharedPageVa; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 Pool; // r14
  unsigned __int64 i; // rsi
  _QWORD *v13; // rcx
  __int64 v14; // r15
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v16; // rbx
  ULONG_PTR v17; // rcx
  ULONG_PTR *v18; // rax
  _QWORD *v19; // rbx
  unsigned __int8 v20; // dl
  __int64 v21; // rdi
  __int64 v22; // rbx
  int v23; // edx
  _QWORD v25[7]; // [rsp+20h] [rbp-38h]

  v4 = 1LL;
  v25[0] = 0xFFFFF78000000000uLL;
  SharedPageVa = (unsigned __int64)HvlGetSharedPageVa(a1, a2, a3, a4);
  v25[1] = SharedPageVa;
  if ( SharedPageVa )
  {
    v6 = *(_QWORD *)(((SharedPageVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v6 & 1) != 0 )
    {
      v7 = (v6 >> 12) & 0xFFFFFFFFFFLL;
      if ( v7 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v7 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        v4 = 2LL;
        v8 = ExGenRandom(1);
        v9 = 15LL;
        v10 = v8 & 0xF;
        if ( v10 )
          v9 = v10;
        qword_140E2DA78 = (v9 + 524256) << 12;
      }
    }
  }
  Pool = MiAllocatePool(0x112uLL, 8 * v4, 1951624525);
  if ( !Pool )
    return 0LL;
  for ( i = 0LL; i < v4; ++i )
  {
    v13 = (_QWORD *)(((v25[i] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v14 = (*v13 >> 12) & 0xFFFFFFFFFFLL;
    ValidPte = MiMakeValidPte((unsigned __int64)v13, v14, 536870913);
    v16 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) )
    {
      if ( (ValidPte & 0x20) == 0 )
      {
        v17 = Pool + 8 * i;
        if ( v17 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v17, ValidPte, 128);
      }
    }
    v18 = (ULONG_PTR *)(Pool + 8 * i);
    *v18 = v16;
    qword_140E2DA68[i] = (__int64)v18;
    v19 = (_QWORD *)(48 * v14 - 0x220000000000LL);
    MiLockPageInline((__int64)v19);
    v19[2] = MiMakeDemandZeroPte(4);
    v19[5] |= 0x8000000000000000uLL;
    v19[1] = Pool + 8 * i;
    MiUnlockPage((__int64)v19, v20);
  }
  v21 = v4 << 12;
  if ( (int)KasanTrackAddress(0xFFFFF78000000000uLL, v21, 0LL) < 0 )
    return 0LL;
  if ( byte_140FCDC28 )
  {
    v22 = KasaniShadow + 0xEF000000000LL;
    memset_0((void *)(KasaniShadow + 0xEF000000000LL), 0, 0x150uLL);
    LOBYTE(v23) = -123;
    memset_0((void *)(v22 + 336), v23, (unsigned __int64)(v21 - 2688) >> 3);
  }
  return 1LL;
}
