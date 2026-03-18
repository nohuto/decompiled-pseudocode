/*
 * XREFs of MiGetBackgroundHugePageToZero @ 0x140209AF0
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiGetSinglePageToZero @ 0x14020B4C0 (MiGetSinglePageToZero.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExAllocatePoolMm @ 0x1402ACBC0 (ExAllocatePoolMm.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403F98CC (MiInitializeNewUltraHugeContext.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     MiPreparePageAccessor @ 0x140432670 (MiPreparePageAccessor.c)
 *     MiGetUltraHugeAlreadyActive @ 0x1404879F0 (MiGetUltraHugeAlreadyActive.c)
 *     MiDereferenceHugeContext @ 0x1404CFD8C (MiDereferenceHugeContext.c)
 *     MiGetSingleHugeRangeToZero @ 0x1404F0954 (MiGetSingleHugeRangeToZero.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetBackgroundHugePageToZero(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  int v5; // ebx
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r13
  __int64 v10; // rcx
  KIRQL v11; // r14
  __int64 v12; // rdx
  __int64 PoolMm; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // r12
  unsigned __int64 SingleHugeRangeToZero; // rax
  __int64 SinglePageToZero; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v22; // rdx
  int v23; // r15d
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
        v20 = *(_QWORD *)(v10 + 208);
        if ( !*(_QWORD *)(v20 + 16) )
        {
          if ( *(_QWORD *)(v7 + 16664) )
          {
            for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; ++i )
            {
              if ( *(_QWORD *)(v20 + 8LL * i + 15016) )
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
      LOBYTE(v12) = v11;
      MiReleaseSpinLockExclusive(v9 + 15224, v12);
      return 1LL;
    }
    PoolMm = ExAllocatePoolMm(0x40uLL, 0x248uLL);
    v15 = PoolMm;
    if ( !PoolMm )
    {
      LOBYTE(v14) = v11;
      MiReleaseSpinLockExclusive(v9 + 15224, v14);
      return 0LL;
    }
    v16 = PoolMm + 580;
    *(_DWORD *)(PoolMm + 580) = ExGenRandom(1LL);
    SingleHugeRangeToZero = MiGetSingleHugeRangeToZero(v15, v9, v16);
    if ( (SingleHugeRangeToZero & 0x3FFFFF) == 0 )
    {
      SinglePageToZero = MiGetSinglePageToZero(v15, v9, v16, 0LL);
      if ( !SinglePageToZero )
      {
        LOBYTE(v19) = v11;
        MiReleaseSpinLockExclusive(v9 + 15224, v19);
        ExFreePoolWithTag((PVOID)v15, 0);
        return 0LL;
      }
      SingleHugeRangeToZero = 0xAAAAAAAAAAAAAAABuLL * ((SinglePageToZero + 0x220000000000LL) >> 4);
    }
    *(_QWORD *)(v15 + 424) = SingleHugeRangeToZero;
    *(_DWORD *)(v15 + 568) = v5;
    v23 = MiInitializeNewUltraHugeContext(a2, v15);
    if ( v23 )
      MiDereferenceHugeContext(a2);
    LOBYTE(v22) = v11;
    MiReleaseSpinLockExclusive(v9 + 15224, v22);
    if ( v23 != 1 )
      break;
    v4 = a1;
  }
  LOBYTE(v6) = v23 != 2;
  return v6;
}
