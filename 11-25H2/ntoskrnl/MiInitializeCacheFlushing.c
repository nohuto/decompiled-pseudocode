/*
 * XREFs of MiInitializeCacheFlushing @ 0x140C48FA8
 * Callers:
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiFinalizePageAttribute @ 0x14024DDE0 (MiFinalizePageAttribute.c)
 *     MiFlushCacheForAttributeChange @ 0x14026F3B4 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026F550 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x14026F5F0 (KeInvalidateAllCaches.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeCacheFlushing()
{
  unsigned __int32 v0; // eax
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdi
  int v5; // edx
  __int64 CurrentIrql; // r12
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned __int8 v9; // r12
  unsigned int v10; // eax
  ULONG_PTR v11; // r13
  void *Pool; // r15
  LARGE_INTEGER v13; // rbx
  LARGE_INTEGER v14; // rax
  LARGE_INTEGER v15; // rcx
  signed __int32 v16[8]; // [rsp+8h] [rbp-59h] BYREF
  int v17; // [rsp+28h] [rbp-39h]
  unsigned __int64 v18; // [rsp+30h] [rbp-31h] BYREF
  int v19; // [rsp+38h] [rbp-29h] BYREF
  int v20; // [rsp+3Ch] [rbp-25h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-21h] BYREF
  LARGE_INTEGER v22; // [rsp+48h] [rbp-19h] BYREF
  __int64 v23; // [rsp+50h] [rbp-11h]
  __int128 v24; // [rsp+58h] [rbp-9h] BYREF
  _OWORD SystemInformation[2]; // [rsp+68h] [rbp+7h] BYREF

  v24 = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( ZwQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL) >= 0
    && (BYTE8(SystemInformation[0]) & 1) != 0 )
  {
    byte_140E2D900 = 1;
  }
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v24);
  v0 = _InterlockedExchangeAdd((volatile signed __int32 *)v24, 1u);
  result = MiGetPage(
             (__int64)&MiSystemPartition,
             DWORD2(v24) ^ (unsigned int)(unsigned __int8)(BYTE8(v24) ^ (v0
                                                                       % dword_140E2D980[(*((_QWORD *)&v24 + 1) >> 16) & 3LL])),
             0);
  v2 = result;
  if ( result != -1 )
  {
    v18 = 0LL;
    v3 = 0LL;
    v4 = 48 * result - 0x220000000000LL;
    MiFinalizePageAttribute(v4, 1LL, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    v23 = CurrentIrql;
    v7 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v5);
    }
    v8 = 4LL;
    do
    {
      MiZeroPhysicalPage(0LL, v2, 2, 0);
      v19 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v19);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      v17 = *(_DWORD *)(v4 + 32);
      BYTE2(v17) &= 0x3Fu;
      *(_DWORD *)(v4 + 32) = v17;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushCacheForAttributeChange(v2, 1LL, 0, &v18);
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v20);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      v17 = *(_DWORD *)(v4 + 32);
      BYTE2(v17) = BYTE2(v17) & 0x3F | 0x40;
      *(_DWORD *)(v4 + 32) = v17;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushEntireTbDueToAttributeChange();
      --v8;
    }
    while ( v8 );
    v9 = v23;
    v18 >>= 2;
    if ( v18 )
    {
      v10 = dword_140E2D8F0;
      if ( !dword_140E2D8F0 )
        v10 = 256;
      v11 = 3 * (v10 >> 2);
      Pool = (void *)MiAllocatePool(0x40uLL, v11, 538996045);
      if ( Pool )
      {
        do
        {
          memset_0(Pool, 0, v11);
          PerformanceFrequency.QuadPart = 0LL;
          v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
          if ( PerformanceFrequency.QuadPart != 10000000 )
            v13.QuadPart = 10000000 * v13.QuadPart / PerformanceFrequency.QuadPart;
          _InterlockedOr(v16, 0);
          ++dword_140E2D914;
          KeInvalidateAllCaches();
          _InterlockedOr(v16, 0);
          v22.QuadPart = 0LL;
          v14 = KeQueryPerformanceCounter(&v22);
          if ( v22.QuadPart != 10000000 )
            v14.QuadPart = 10000000 * v14.QuadPart / v22.QuadPart;
          _InterlockedOr(v16, 0);
          v15 = v13;
          if ( v14.QuadPart >= (unsigned __int64)v13.QuadPart )
            v15 = v14;
          v3 += v15.QuadPart - v13.QuadPart;
          --v7;
        }
        while ( v7 );
        ExFreePoolWithTag(Pool, 0);
        dword_140E2D91C = (v3 & 0xFFFFFFFFFFFFFFFEuLL) / v18;
      }
    }
    MiReleaseFreshPageAtDpc(v4);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    result = v9;
    __writecr8(v9);
  }
  return result;
}
