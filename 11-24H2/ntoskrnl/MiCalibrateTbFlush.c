/*
 * XREFs of MiCalibrateTbFlush @ 0x14068FEB4
 * Callers:
 *     MiInitializeTbFlush @ 0x140C5C78C (MiInitializeTbFlush.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall MiCalibrateTbFlush(unsigned __int64 a1, unsigned int a2, int a3, _QWORD *a4)
{
  __int64 v5; // rbp
  char *AnyMultiplexedVm; // rax
  unsigned int i; // edi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned int j; // r8d
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned int k; // r8d
  unsigned __int64 v17; // r9
  unsigned int m; // edx
  __int64 v19; // rcx
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r11
  unsigned __int64 result; // rax
  signed __int32 v23[8]; // [rsp+0h] [rbp-1C8h] BYREF
  _BYTE v24[208]; // [rsp+30h] [rbp-198h] BYREF
  _OWORD Base[8]; // [rsp+100h] [rbp-C8h] BYREF

  v5 = a2;
  memset_0(v24, 0, 0xC8uLL);
  *a4 = 0LL;
  a4[1] = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  MiInitializeTbFlushList((__int64)v24, (__int64)AnyMultiplexedVm, 20, 8, 128);
  for ( i = 0; i < 8; ++i )
  {
    v10 = __rdtsc();
    _InterlockedOr(v23, 0);
    if ( (_DWORD)v5 )
    {
      MiInsertTbFlushEntry((__int64)v24, a1, v5, 0);
      MiFlushTbList((__int64)v24);
    }
    else
    {
      KeFlushTb(0LL, 2u);
    }
    _InterlockedOr(v23, 0);
    v11 = __rdtsc() - v10;
    *a4 += v11;
    *(_QWORD *)&Base[i] = v11;
    v12 = __rdtsc();
    _InterlockedOr(v23, 0);
    for ( j = 0; j < (unsigned int)(a3 - v5) >> 1; ++j )
      ;
    _InterlockedOr(v23, 0);
    v14 = __rdtsc();
    v15 = (((unsigned __int64)HIDWORD(v14) << 32) | (unsigned int)v14) - v12;
    a4[1] += v15;
    *((_QWORD *)&Base[i] + 1) = v15;
    if ( i >= 2 )
    {
      qsort(Base, i, 0x10uLL, MiTbFlushCostSort);
      for ( k = 0; k <= i - 2; ++k )
      {
        v17 = 0LL;
        for ( m = 0; m < 3; ++m )
        {
          v19 = k + m;
          v17 += *(_QWORD *)&Base[v19] + *((_QWORD *)&Base[v19] + 1);
        }
        v20 = v17 / 3;
        v21 = *(_QWORD *)&Base[k] + *((_QWORD *)&Base[k] + 1);
        if ( v21 >= 9 * (v17 / 3) / 0xA )
        {
          result = 0xCCCCCCCCCCCCCCCFuLL * v20;
          if ( v21 <= 11 * v20 / 0xA )
          {
            *(_OWORD *)a4 = Base[k];
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
