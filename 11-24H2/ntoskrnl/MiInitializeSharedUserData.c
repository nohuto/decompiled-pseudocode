/*
 * XREFs of MiInitializeSharedUserData @ 0x140C50724
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     KasanTrackAddress @ 0x14044E740 (KasanTrackAddress.c)
 *     HvlGetSharedPageVa @ 0x140491C00 (HvlGetSharedPageVa.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiInitializeSharedUserData(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 SharedPageVa; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 Pool; // r14
  unsigned __int64 i; // rsi
  _QWORD *v14; // rcx
  __int64 v15; // r15
  ULONG_PTR ValidPte; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG_PTR v20; // rbx
  ULONG_PTR v21; // rcx
  ULONG_PTR *v22; // rax
  _QWORD *v23; // rbx
  unsigned __int8 v24; // dl
  __int64 v25; // rdi
  __int64 v26; // rbx
  int v27; // edx
  _QWORD v29[7]; // [rsp+20h] [rbp-38h]

  v2 = 1LL;
  v29[0] = 0xFFFFF78000000000uLL;
  SharedPageVa = (unsigned __int64)HvlGetSharedPageVa(a1, a2);
  v29[1] = SharedPageVa;
  if ( SharedPageVa )
  {
    v7 = *(_QWORD *)(((SharedPageVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v7 & 1) != 0 )
    {
      v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
      if ( v8 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        v2 = 2LL;
        v9 = ExGenRandom(1, v4, v5, v6);
        v10 = 15LL;
        v11 = v9 & 0xF;
        if ( v11 )
          v10 = v11;
        qword_140E2DBB8 = (v10 + 524256) << 12;
      }
    }
  }
  Pool = MiAllocatePool(0x112uLL, 8 * v2, 1951624525);
  if ( !Pool )
    return 0LL;
  for ( i = 0LL; i < v2; ++i )
  {
    v14 = (_QWORD *)(((v29[i] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v15 = (*v14 >> 12) & 0xFFFFFFFFFFLL;
    ValidPte = MiMakeValidPte((unsigned __int64)v14, v15, 536870913);
    v20 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) )
    {
      if ( (ValidPte & 0x20) == 0 )
      {
        v21 = Pool + 8 * i;
        v17 = 0x4000000000LL;
        if ( v21 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v21, ValidPte, 128LL);
      }
    }
    v22 = (ULONG_PTR *)(Pool + 8 * i);
    *v22 = v20;
    qword_140E2DBA8[i] = (__int64)v22;
    v23 = (_QWORD *)(48 * v15 - 0x220000000000LL);
    MiLockPageInline((__int64)v23, v17, v18, v19);
    v23[2] = MiMakeDemandZeroPte(4);
    v23[5] |= 0x8000000000000000uLL;
    v23[1] = Pool + 8 * i;
    MiUnlockPage((__int64)v23, v24);
  }
  v25 = v2 << 12;
  if ( (int)KasanTrackAddress(0xFFFFF78000000000uLL, v25, 0LL) < 0 )
    return 0LL;
  if ( byte_140FCECA8 )
  {
    v26 = KasaniShadow + 0xEF000000000LL;
    memset_0((void *)(KasaniShadow + 0xEF000000000LL), 0, 0x150uLL);
    LOBYTE(v27) = -123;
    memset_0((void *)(v26 + 336), v27, (unsigned __int64)(v25 - 2688) >> 3);
  }
  return 1LL;
}
