/*
 * XREFs of MiGetBackgroundHugePageToZero @ 0x1403310D0
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiGetSinglePageToZero @ 0x1403332A0 (MiGetSinglePageToZero.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403EF7D8 (MiInitializeNewUltraHugeContext.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     MiPreparePageAccessor @ 0x140424F00 (MiPreparePageAccessor.c)
 *     MiGetUltraHugeAlreadyActive @ 0x140482A60 (MiGetUltraHugeAlreadyActive.c)
 *     MiDereferenceHugeContext @ 0x1404C8E3C (MiDereferenceHugeContext.c)
 *     MiGetSingleHugeRangeToZero @ 0x1404EE3F4 (MiGetSingleHugeRangeToZero.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetBackgroundHugePageToZero(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  unsigned int v5; // ebx
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r13
  __int64 v10; // rcx
  KIRQL v11; // r14
  ULONG_PTR v12; // r9
  __int64 PoolMm; // rax
  __int64 v14; // r15
  __int64 v15; // r12
  unsigned __int64 SingleHugeRangeToZero; // rax
  __int64 SinglePageToZero; // rax
  __int64 v18; // r8
  int v20; // r15d
  unsigned __int8 i; // dl

  v4 = a1;
  v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 336) + 176LL) + 56LL);
  v6 = 0;
  while ( 1 )
  {
    MiPreparePageAccessor(a2, a2, a3, v4);
    v9 = v8 + *(_QWORD *)(v7 + 16);
    if ( !*(_QWORD *)(a2 + 584) )
    {
      v10 = *(_QWORD *)(a2 + 336);
      if ( *(_QWORD *)(*(_QWORD *)(v10 + 176) + 32LL) == *(_QWORD *)(v10 + 176) + 32LL )
      {
        v18 = *(_QWORD *)(v10 + 208);
        if ( !*(_QWORD *)(v18 + 16) )
        {
          if ( *(_QWORD *)(v7 + 16664) )
          {
            for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; ++i )
            {
              if ( *(_QWORD *)(v18 + 8LL * i + 15016) )
                goto LABEL_4;
            }
          }
          return 0LL;
        }
      }
    }
LABEL_4:
    v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 15224));
    if ( MiGetUltraHugeAlreadyActive(a2) )
    {
      MiReleaseSpinLockExclusive((_DWORD *)(v9 + 15224), v11);
      return 1LL;
    }
    v12 = v5;
    LODWORD(v12) = v5 | 0x80000000;
    PoolMm = ExAllocatePoolMm(0x40uLL, 0x248uLL, 1967679821, v12);
    v14 = PoolMm;
    if ( !PoolMm )
    {
      MiReleaseSpinLockExclusive((_DWORD *)(v9 + 15224), v11);
      return 0LL;
    }
    v15 = PoolMm + 580;
    *(_DWORD *)(PoolMm + 580) = ExGenRandom(1LL);
    SingleHugeRangeToZero = MiGetSingleHugeRangeToZero(v14, v9, v15);
    if ( (SingleHugeRangeToZero & 0x3FFFFF) == 0 )
    {
      SinglePageToZero = MiGetSinglePageToZero(v14, v9, v15, 0LL);
      if ( !SinglePageToZero )
      {
        MiReleaseSpinLockExclusive((_DWORD *)(v9 + 15224), v11);
        ExFreePoolWithTag((PVOID)v14, 0);
        return 0LL;
      }
      SingleHugeRangeToZero = 0xAAAAAAAAAAAAAAABuLL * ((SinglePageToZero + 0x220000000000LL) >> 4);
    }
    *(_QWORD *)(v14 + 424) = SingleHugeRangeToZero;
    *(_DWORD *)(v14 + 568) = v5;
    v20 = MiInitializeNewUltraHugeContext(a2, v14);
    if ( v20 )
      MiDereferenceHugeContext(a2);
    MiReleaseSpinLockExclusive((_DWORD *)(v9 + 15224), v11);
    if ( v20 != 1 )
      break;
    v4 = a1;
  }
  LOBYTE(v6) = v20 != 2;
  return v6;
}
