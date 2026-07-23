/*
 * XREFs of BapdpProcessWmdResults @ 0x140C417A8
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140BE052C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140C4198C (BapdpQueryData.c)
 *     BapdpRegisterWmdResult @ 0x140C422A4 (BapdpRegisterWmdResult.c)
 */

void BapdpProcessWmdResults()
{
  unsigned __int64 v0; // rcx
  __int64 Pool2; // rdi
  unsigned __int64 v2; // r14
  unsigned int v3; // ebx
  unsigned int v4; // r15d
  unsigned __int64 v5; // rsi
  char v6; // r12
  __m128i v7; // xmm1
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // xmm0_8
  _DWORD v11[4]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+40h] [rbp-30h]
  _DWORD v13[4]; // [rsp+50h] [rbp-20h] BYREF

  v13[0] = 1421354843;
  v13[1] = 1195365425;
  v13[2] = 921041836;
  v13[3] = -1550547808;
  v12 = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL, 0x10000uLL, 0x64506142uLL);
  if ( Pool2 )
  {
    v2 = *((_QWORD *)&v12 + 1);
    v3 = 0;
    v4 = 0;
    v11[0] = 0x10000;
    v5 = v12;
    v6 = 0;
    while ( (int)BapdpQueryData(v0, v13, v3, Pool2, v11, 0LL) >= 0 )
    {
      if ( v6 )
      {
        v7 = *(__m128i *)(Pool2 + 28);
        v8 = *(_QWORD *)(Pool2 + 28);
        if ( (__int16)v8 > (__int16)v5
          || (__int16)v8 >= (__int16)v5
          && ((v0 = v8 >> 16, SWORD1(v8) > SWORD1(v5))
           || SWORD1(v8) >= SWORD1(v5)
           && ((v0 = HIDWORD(v8), SWORD2(v8) > SWORD2(v5))
            || SWORD2(v8) >= SWORD2(v5)
            && ((v9 = HIWORD(v8), v0 = HIWORD(v5), (__int16)v9 > SHIWORD(v5))
             || (__int16)v9 >= SHIWORD(v5)
             && ((v10 = _mm_srli_si128(v7, 8).m128i_u64[0], (__int16)v10 > (__int16)v2)
              || (__int16)v10 >= (__int16)v2
              && ((v0 = v10 >> 16, SWORD1(v10) > SWORD1(v2))
               || SWORD1(v10) >= SWORD1(v2) && (v0 = HIDWORD(v2), SWORD2(v10) > SWORD2(v2))))))) )
        {
          v4 = v3++;
          v2 = _mm_srli_si128(v7, 8).m128i_u64[0];
          v5 = *(_QWORD *)(Pool2 + 28);
        }
        else
        {
          ++v3;
        }
      }
      else
      {
        v2 = *(_QWORD *)(Pool2 + 36);
        v4 = v3;
        v5 = *(_QWORD *)(Pool2 + 28);
        ++v3;
        v6 = 1;
      }
    }
    if ( v6 == 1 && (v4 == v3 || (int)BapdpQueryData(v0, v13, v4, Pool2, v11, 0LL) >= 0) )
      BapdpRegisterWmdResult((PVOID)Pool2);
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
}
