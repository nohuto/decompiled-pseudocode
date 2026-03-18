/*
 * XREFs of MiInitializeCacheFlushing @ 0x140C5A2D8
 * Callers:
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x14021EC40 (MiZeroPhysicalPage.c)
 *     MiFinalizePageAttribute @ 0x14021F4F0 (MiFinalizePageAttribute.c)
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     MiFlushCacheForAttributeChange @ 0x1403AE6F8 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1403AE894 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x1403AEA80 (KeInvalidateAllCaches.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A6AD0 (ZwQuerySystemInformation.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeCacheFlushing()
{
  unsigned __int32 v0; // eax
  __int64 result; // rax
  _QWORD *v2; // rbx
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
  unsigned int v19; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v20; // [rsp+3Ch] [rbp-25h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-21h] BYREF
  LARGE_INTEGER v22; // [rsp+48h] [rbp-19h] BYREF
  __int64 v23; // [rsp+50h] [rbp-11h]
  __int128 v24; // [rsp+58h] [rbp-9h] BYREF
  _OWORD v25[2]; // [rsp+68h] [rbp+7h] BYREF

  v24 = 0LL;
  memset(v25, 0, sizeof(v25));
  if ( (int)ZwQuerySystemInformation(192LL, (__int64)v25) >= 0 && (BYTE8(v25[0]) & 1) != 0 )
    byte_140E2DB40 = 1;
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v24);
  v0 = _InterlockedExchangeAdd((volatile signed __int32 *)v24, 1u);
  result = MiGetPage(
             (__int64)&MiSystemPartition,
             DWORD2(v24) ^ (unsigned int)(unsigned __int8)(BYTE8(v24) ^ (v0
                                                                       % dword_140E2DBC0[(*((_QWORD *)&v24 + 1) >> 16) & 3LL])),
             0);
  v2 = (_QWORD *)result;
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
      MiZeroPhysicalPage(0LL, (__int64)v2, 2, 0LL);
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
      MiFlushCacheForAttributeChange(v2, 1LL, 0LL, &v18);
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
      v10 = dword_140E2DB30;
      if ( !dword_140E2DB30 )
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
          ++dword_140E2DB54;
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
        dword_140E2DB5C = (v3 & 0xFFFFFFFFFFFFFFFEuLL) / v18;
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
