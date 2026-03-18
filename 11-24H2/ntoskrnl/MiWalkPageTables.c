/*
 * XREFs of MiWalkPageTables @ 0x140235640
 * Callers:
 *     MiDeleteSystemPageTables @ 0x140234368 (MiDeleteSystemPageTables.c)
 *     MiOutSwapWorkingSet @ 0x1402345FC (MiOutSwapWorkingSet.c)
 *     MiClearNonPagedPtes @ 0x1402346CC (MiClearNonPagedPtes.c)
 *     MiAgeWorkingSet @ 0x140235110 (MiAgeWorkingSet.c)
 *     MiGetNextPageTable @ 0x140235DA0 (MiGetNextPageTable.c)
 *     MiGetWorkingSetInfoEx @ 0x140267310 (MiGetWorkingSetInfoEx.c)
 *     MiDecommitLockNewPageTable @ 0x140289DC0 (MiDecommitLockNewPageTable.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140379A98 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiMakeZeroedPageTablesEx @ 0x1403A62E0 (MiMakeZeroedPageTablesEx.c)
 *     MiDeletePagablePteRange @ 0x1403CC1D4 (MiDeletePagablePteRange.c)
 *     MiEmptyWorkingSetInitiate @ 0x140404B98 (MiEmptyWorkingSetInitiate.c)
 *     MiDeleteEmptyPageTables @ 0x140405978 (MiDeleteEmptyPageTables.c)
 *     MiSimpleAging @ 0x1404872E0 (MiSimpleAging.c)
 *     MmUpdateOldWorkingSetPages @ 0x140496800 (MmUpdateOldWorkingSetPages.c)
 *     MmRemoveExecuteGrants @ 0x14049EBE8 (MmRemoveExecuteGrants.c)
 *     MiWalkResetCommitPages @ 0x14066A948 (MiWalkResetCommitPages.c)
 *     MmProtectDriverSection @ 0x14066B7C0 (MmProtectDriverSection.c)
 *     MmAddRangeToCrashDump @ 0x140677990 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140677E38 (MmRemoveSystemCacheFromDump.c)
 *     MiCombineWorkingSet @ 0x140685248 (MiCombineWorkingSet.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1407EAAAC (MmUnlockPhysicalPagesByVa.c)
 *     MiConvertHiberPhasePages @ 0x140B62664 (MiConvertHiberPhasePages.c)
 *     MiMarkKernelPageTablePages @ 0x140B627A8 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140B6282C (MiMarkNonPagedHiberPhasePages.c)
 *     MmMarkHiberPhase @ 0x140B62DB8 (MmMarkHiberPhase.c)
 *     MiAddLoaderHalIoMappings @ 0x140C4DAE8 (MiAddLoaderHalIoMappings.c)
 *     MiMarkLargePageMappings @ 0x140C4FDDC (MiMarkLargePageMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x140C518FC (MiInitializePfnsForValidMappings.c)
 *     MiCreateInitialSystemWsles @ 0x140C53548 (MiCreateInitialSystemWsles.c)
 *     MiCountBootDriverRegions @ 0x140C54C84 (MiCountBootDriverRegions.c)
 *     MiFillGapAddresses @ 0x140C54D0C (MiFillGapAddresses.c)
 * Callees:
 *     MiReacquireWalkLocks @ 0x1402193F0 (MiReacquireWalkLocks.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x140235958 (MiWalkPageTablesRecursivelyNoSynch.c)
 *     MiInitializeWalkBounds @ 0x140235AFC (MiInitializeWalkBounds.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiWalkPageTables(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned int v3; // r12d
  unsigned int v4; // ebp
  unsigned int i; // r15d
  unsigned int v6; // edi
  unsigned __int64 *v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  int v19; // ecx
  unsigned int v20; // eax
  __int64 result; // rax
  _BYTE v22[24]; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-80h]
  _QWORD v24[6]; // [rsp+50h] [rbp-68h] BYREF

  if ( (*(_DWORD *)a1 & 0x20000) == 0 )
    *(_QWORD *)(a1 + 88) = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 174LL));
  if ( !*(_BYTE *)(a1 + 8) )
    *(_BYTE *)(a1 + 8) = 15;
  v2 = *(_QWORD *)(a1 + 64);
  v3 = 1;
  if ( v2 )
  {
    if ( v2 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v2 = 0xFFFFF6FB7DBEDF70uLL;
      *(_QWORD *)(a1 + 64) = 0xFFFFF6FB7DBEDF70uLL;
    }
    if ( v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      *(__m128i *)v22 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffff0000000000000000);
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    else
    {
      do
      {
        if ( v2 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v2 = (__int64)(v2 << 25) >> 16;
      }
      while ( v2 >= 0xFFFFF68000000000uLL );
      *(__m128i *)&v22[8] = _mm_load_si128((const __m128i *)&_xmm);
      v23 = v2 - 1;
      v3 = 2;
      *(_QWORD *)v22 = v2;
    }
  }
  else
  {
    *(_OWORD *)v22 = *(_OWORD *)(a1 + 40);
  }
  v4 = MiInitializeWalkBounds(a1, v24);
  for ( i = 0; i < v3; ++i )
  {
    v6 = 0;
    v7 = (unsigned __int64 *)&v22[16 * i];
    while ( v6 < v4 )
    {
      v8 = *v7;
      v9 = v24[2 * v6 + 1];
      if ( *v7 <= v9 )
      {
        v10 = v24[2 * v6];
        v11 = v7[1];
        if ( v11 >= v10 )
        {
          if ( v8 < v10 )
            v8 = v24[2 * v6];
          if ( v11 > v9 )
            v11 = v24[2 * v6 + 1];
          v12 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *(_QWORD *)(a1 + 96) = v12;
          v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *(_QWORD *)(a1 + 104) = v13;
          v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *(_QWORD *)(a1 + 112) = v14;
          v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *(_QWORD *)(a1 + 120) = v15;
          v16 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *(_QWORD *)(a1 + 128) = v16;
          v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *(_QWORD *)(a1 + 136) = v17;
          v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *(_QWORD *)(a1 + 144) = v18;
          *(_QWORD *)(a1 + 152) = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v19 = *(_DWORD *)a1;
          v20 = *(_DWORD *)(a1 + 4) & 0xFFFFFFE3;
          *(_QWORD *)(a1 + 72) = 0LL;
          *(_DWORD *)(a1 + 4) = v20;
          if ( (v19 & 0x20000) != 0 )
          {
            result = MiWalkPageTablesRecursivelyNoSynch(a1, v15, 3LL);
          }
          else
          {
            if ( (v19 & 4) != 0 )
            {
              *(_DWORD *)(a1 + 4) = v20 | 1;
              MiReacquireWalkLocks(a1, ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
            }
            else
            {
              *(_QWORD *)(a1 + 56) = 0LL;
              *(_DWORD *)(a1 + 4) = v20 & 0xFFFFFFFE;
            }
            result = MiWalkPageTablesRecursively(a1, v15, 3LL);
          }
          if ( (int)result >= 4 )
            return result;
        }
      }
      ++v6;
    }
  }
  return 4LL;
}
