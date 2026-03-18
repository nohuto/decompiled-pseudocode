/*
 * XREFs of MiGetBackgroundHugePageToZero @ 0x14041C6E0
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiGetSinglePageToZero @ 0x140210180 (MiGetSinglePageToZero.c)
 *     MiPreparePageAccessor @ 0x140210400 (MiPreparePageAccessor.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAllocatePoolMm @ 0x1402DA890 (ExAllocatePoolMm.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiGetUltraHugeAlreadyActive @ 0x14041C8B0 (MiGetUltraHugeAlreadyActive.c)
 *     MiGetSingleHugeRangeToZero @ 0x14041CAF8 (MiGetSingleHugeRangeToZero.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     MiDereferenceHugeContext @ 0x1404CFC80 (MiDereferenceHugeContext.c)
 *     MiInitializeNewUltraHugeContext @ 0x1406841C4 (MiInitializeNewUltraHugeContext.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetBackgroundHugePageToZero(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r13
  __int64 v8; // rcx
  KIRQL v9; // r14
  ULONG_PTR v10; // r9
  __int64 PoolMm; // rax
  __int64 v12; // r15
  volatile signed __int32 *v13; // r12
  unsigned __int64 SingleHugeRangeToZero; // rax
  __int64 SinglePageToZero; // rax
  __int64 v16; // r8
  unsigned __int8 i; // dl
  int v19; // r15d

  v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 336) + 176LL) + 56LL);
  v4 = 0;
  do
  {
    MiPreparePageAccessor(a2);
    v7 = v6 + *(_QWORD *)(v5 + 16);
    if ( !*(_QWORD *)(a2 + 584) )
    {
      v8 = *(_QWORD *)(a2 + 336);
      if ( *(_QWORD *)(*(_QWORD *)(v8 + 176) + 32LL) == *(_QWORD *)(v8 + 176) + 32LL )
      {
        v16 = *(_QWORD *)(v8 + 208);
        if ( !*(_QWORD *)(v16 + 16) )
        {
          if ( *(_QWORD *)(v5 + 16664) )
          {
            for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; ++i )
            {
              if ( *(_QWORD *)(v16 + 8LL * i + 15016) )
                goto LABEL_4;
            }
          }
          return 0LL;
        }
      }
    }
LABEL_4:
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 15224));
    if ( MiGetUltraHugeAlreadyActive(a2) )
    {
      MiReleaseSpinLockExclusive((_DWORD *)(v7 + 15224), v9);
      return 1LL;
    }
    v10 = v3;
    LODWORD(v10) = v3 | 0x80000000;
    PoolMm = ExAllocatePoolMm(0x40uLL, 0x248uLL, 1967679821, v10);
    v12 = PoolMm;
    if ( !PoolMm )
    {
      MiReleaseSpinLockExclusive((_DWORD *)(v7 + 15224), v9);
      return 0LL;
    }
    v13 = (volatile signed __int32 *)(PoolMm + 580);
    *(_DWORD *)(PoolMm + 580) = ExGenRandom(1LL);
    SingleHugeRangeToZero = MiGetSingleHugeRangeToZero(v12, v7, v13);
    if ( (SingleHugeRangeToZero & 0x3FFFFF) == 0 )
    {
      SinglePageToZero = MiGetSinglePageToZero(v12, v7, v13, 0);
      if ( !SinglePageToZero )
      {
        MiReleaseSpinLockExclusive((_DWORD *)(v7 + 15224), v9);
        ExFreePoolWithTag((PVOID)v12, 0);
        return 0LL;
      }
      SingleHugeRangeToZero = 0xAAAAAAAAAAAAAAABuLL * ((SinglePageToZero + 0x220000000000LL) >> 4);
    }
    *(_QWORD *)(v12 + 424) = SingleHugeRangeToZero;
    *(_DWORD *)(v12 + 568) = v3;
    v19 = MiInitializeNewUltraHugeContext(a2, v12);
    if ( v19 )
      MiDereferenceHugeContext(a2);
    MiReleaseSpinLockExclusive((_DWORD *)(v7 + 15224), v9);
  }
  while ( v19 == 1 );
  LOBYTE(v4) = v19 != 2;
  return v4;
}
