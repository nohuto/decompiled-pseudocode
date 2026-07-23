/*
 * XREFs of MiInitializeCacheFlushing @ 0x140C5C468
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiFinalizePageAttribute @ 0x14024C240 (MiFinalizePageAttribute.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     MiFlushCacheForAttributeChange @ 0x14039CF08 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x14039D290 (KeInvalidateAllCaches.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v12; // r12
  unsigned int v13; // eax
  ULONG_PTR v14; // r13
  void *Pool; // r15
  LARGE_INTEGER v16; // rbx
  LARGE_INTEGER v17; // rax
  LARGE_INTEGER v18; // rcx
  unsigned __int64 v19; // rsi
  signed __int32 v20[8]; // [rsp+8h] [rbp-59h] BYREF
  int v21; // [rsp+28h] [rbp-39h]
  unsigned __int64 v22; // [rsp+30h] [rbp-31h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-25h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-21h] BYREF
  LARGE_INTEGER v26; // [rsp+48h] [rbp-19h] BYREF
  __int64 v27; // [rsp+50h] [rbp-11h]
  __int128 v28; // [rsp+58h] [rbp-9h] BYREF
  _OWORD SystemInformation[2]; // [rsp+68h] [rbp+7h] BYREF

  v28 = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( ZwQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL) >= 0
    && (BYTE8(SystemInformation[0]) & 1) != 0 )
  {
    byte_140E2DC80 = 1;
  }
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v28);
  v0 = _InterlockedExchangeAdd((volatile signed __int32 *)v28, 1u);
  result = MiGetPage(
             (__int64)&MiSystemPartition,
             DWORD2(v28) ^ (unsigned int)(unsigned __int8)(BYTE8(v28) ^ (v0
                                                                       % dword_140E2DD00[(*((_QWORD *)&v28 + 1) >> 16) & 3LL])),
             0);
  v2 = (_QWORD *)result;
  if ( result != -1 )
  {
    v22 = 0LL;
    v3 = 0LL;
    v4 = 48 * result - 0x220000000000LL;
    MiFinalizePageAttribute(v4, 1LL, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    v27 = CurrentIrql;
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
      MiZeroPhysicalPage(0LL, (__int64)v2, 2, 0);
      v23 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v23);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      v21 = *(_DWORD *)(v4 + 32);
      BYTE2(v21) &= 0x3Fu;
      *(_DWORD *)(v4 + 32) = v21;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushCacheForAttributeChange(v2, 1LL, 0LL, &v22);
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v24);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      v21 = *(_DWORD *)(v4 + 32);
      BYTE2(v21) = BYTE2(v21) & 0x3F | 0x40;
      *(_DWORD *)(v4 + 32) = v21;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushEntireTbDueToAttributeChange();
      --v8;
    }
    while ( v8 );
    v12 = v27;
    v22 >>= 2;
    if ( v22 )
    {
      v13 = dword_140E2DC70;
      if ( !dword_140E2DC70 )
        v13 = 256;
      v14 = 3 * (v13 >> 2);
      Pool = (void *)MiAllocatePool(0x40uLL, v14, 538996045);
      if ( Pool )
      {
        do
        {
          memset_0(Pool, 0, v14);
          PerformanceFrequency.QuadPart = 0LL;
          v16 = KeQueryPerformanceCounter(&PerformanceFrequency);
          if ( PerformanceFrequency.QuadPart != 10000000 )
            v16.QuadPart = 10000000 * v16.QuadPart / PerformanceFrequency.QuadPart;
          _InterlockedOr(v20, 0);
          ++dword_140E2DC94;
          KeInvalidateAllCaches();
          _InterlockedOr(v20, 0);
          v26.QuadPart = 0LL;
          v17 = KeQueryPerformanceCounter(&v26);
          if ( v26.QuadPart != 10000000 )
            v17.QuadPart = 10000000 * v17.QuadPart / v26.QuadPart;
          _InterlockedOr(v20, 0);
          v18 = v16;
          if ( v17.QuadPart >= (unsigned __int64)v16.QuadPart )
            v18 = v17;
          v3 += v18.QuadPart - v16.QuadPart;
          --v7;
        }
        while ( v7 );
        ExFreePoolWithTag(Pool, 0);
        v19 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
        v9 = v19 % v22;
        dword_140E2DC9C = v19 / v22;
      }
    }
    MiReleaseFreshPageAtDpc(v4, v9, v10, v11);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    result = v12;
    __writecr8(v12);
  }
  return result;
}
