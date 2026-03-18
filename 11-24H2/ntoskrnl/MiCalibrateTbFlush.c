/*
 * XREFs of MiCalibrateTbFlush @ 0x14068EDD8
 * Callers:
 *     MiInitializeTbFlush @ 0x140C5A5FC (MiInitializeTbFlush.c)
 * Callees:
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     KeFlushTb @ 0x1403AFDF0 (KeFlushTb.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

unsigned __int64 __fastcall MiCalibrateTbFlush(unsigned __int64 a1, unsigned int a2, int a3, _QWORD *a4)
{
  __int64 v5; // rbp
  char *AnyMultiplexedVm; // rax
  __int64 j; // r8
  __int64 v10; // r9
  unsigned int i; // edi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r9
  unsigned int k; // edx
  __int64 v19; // rcx
  unsigned __int64 v20; // kr00_8
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r11
  unsigned __int64 result; // rax
  signed __int32 v24[8]; // [rsp+0h] [rbp-1C8h] BYREF
  _BYTE v25[208]; // [rsp+30h] [rbp-198h] BYREF
  _OWORD Base[8]; // [rsp+100h] [rbp-C8h] BYREF

  v5 = a2;
  memset_0(v25, 0, 0xC8uLL);
  *a4 = 0LL;
  a4[1] = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  MiInitializeTbFlushList((__int64)v25, (__int64)AnyMultiplexedVm, 20, 8, 128);
  for ( i = 0; i < 8; ++i )
  {
    v12 = __rdtsc();
    _InterlockedOr(v24, 0);
    if ( (_DWORD)v5 )
    {
      MiInsertTbFlushEntry((__int64)v25, a1, v5, 0);
      MiFlushTbList((__int64)v25);
    }
    else
    {
      KeFlushTb(0LL, 2u, j, v10);
    }
    _InterlockedOr(v24, 0);
    v13 = __rdtsc() - v12;
    *a4 += v13;
    v10 = (unsigned int)(a3 - v5);
    *(_QWORD *)&Base[i] = v13;
    v14 = __rdtsc();
    _InterlockedOr(v24, 0);
    for ( j = 0LL; (unsigned int)j < (unsigned int)(a3 - v5) >> 1; j = (unsigned int)(j + 1) )
      ;
    _InterlockedOr(v24, 0);
    v15 = __rdtsc();
    v16 = (((unsigned __int64)HIDWORD(v15) << 32) | (unsigned int)v15) - v14;
    a4[1] += v16;
    *((_QWORD *)&Base[i] + 1) = v16;
    if ( i >= 2 )
    {
      qsort(Base, i, 0x10uLL, MiTbFlushCostSort);
      for ( j = 0LL; (unsigned int)j <= i - 2; j = (unsigned int)(j + 1) )
      {
        v17 = 0LL;
        for ( k = 0; k < 3; ++k )
        {
          v19 = (unsigned int)j + k;
          v17 += *(_QWORD *)&Base[v19] + *((_QWORD *)&Base[v19] + 1);
        }
        v20 = v17;
        v10 = 2LL * (unsigned int)j;
        v21 = v20 / 3;
        v22 = *(_QWORD *)&Base[(unsigned int)j] + *((_QWORD *)&Base[(unsigned int)j] + 1);
        if ( v22 >= 9 * (v20 / 3) / 0xA )
        {
          result = 0xCCCCCCCCCCCCCCCFuLL * v21;
          if ( v22 <= 11 * v21 / 0xA )
          {
            *(_OWORD *)a4 = Base[(unsigned int)j];
            return result;
          }
        }
      }
    }
  }
  *a4 /= (unsigned __int64)i;
  result = a4[1] / (unsigned __int64)i;
  a4[1] = result;
  return result;
}
