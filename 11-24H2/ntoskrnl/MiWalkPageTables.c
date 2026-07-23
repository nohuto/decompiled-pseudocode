/*
 * XREFs of MiWalkPageTables @ 0x14020F7D0
 * Callers:
 *     MiClearNonPagedPtes @ 0x14020E660 (MiClearNonPagedPtes.c)
 *     MiAgeWorkingSet @ 0x14020F2A0 (MiAgeWorkingSet.c)
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     MiGetWorkingSetInfoEx @ 0x14025E8F0 (MiGetWorkingSetInfoEx.c)
 *     MiDeletePagablePteRange @ 0x1402663A4 (MiDeletePagablePteRange.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026D5D0 (MiMakeZeroedPageTablesEx.c)
 *     MiDecommitLockNewPageTable @ 0x1402999C0 (MiDecommitLockNewPageTable.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 *     MiOutSwapWorkingSet @ 0x1403C745C (MiOutSwapWorkingSet.c)
 *     MiDeleteEmptyPageTables @ 0x1403C7ED4 (MiDeleteEmptyPageTables.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403C9030 (MiEmptyWorkingSetInitiate.c)
 *     MiDeleteSystemPageTables @ 0x14045B798 (MiDeleteSystemPageTables.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140462890 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiSimpleAging @ 0x140482350 (MiSimpleAging.c)
 *     MmUpdateOldWorkingSetPages @ 0x140491190 (MmUpdateOldWorkingSetPages.c)
 *     MmRemoveExecuteGrants @ 0x140499A20 (MmRemoveExecuteGrants.c)
 *     MiWalkResetCommitPages @ 0x14066BB18 (MiWalkResetCommitPages.c)
 *     MmProtectDriverSection @ 0x14066C990 (MmProtectDriverSection.c)
 *     MmAddRangeToCrashDump @ 0x140678B70 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140679018 (MmRemoveSystemCacheFromDump.c)
 *     MiCombineWorkingSet @ 0x140686378 (MiCombineWorkingSet.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1407EB07C (MmUnlockPhysicalPagesByVa.c)
 *     MiConvertHiberPhasePages @ 0x140B64734 (MiConvertHiberPhasePages.c)
 *     MiMarkKernelPageTablePages @ 0x140B64878 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140B648FC (MiMarkNonPagedHiberPhasePages.c)
 *     MmMarkHiberPhase @ 0x140B64E88 (MmMarkHiberPhase.c)
 *     MiAddLoaderHalIoMappings @ 0x140C4FC84 (MiAddLoaderHalIoMappings.c)
 *     MiMarkLargePageMappings @ 0x140C51F6C (MiMarkLargePageMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x140C53A8C (MiInitializePfnsForValidMappings.c)
 *     MiCreateInitialSystemWsles @ 0x140C556D8 (MiCreateInitialSystemWsles.c)
 *     MiCountBootDriverRegions @ 0x140C56E14 (MiCountBootDriverRegions.c)
 *     MiFillGapAddresses @ 0x140C56E9C (MiFillGapAddresses.c)
 * Callees:
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x14020FAE8 (MiWalkPageTablesRecursivelyNoSynch.c)
 *     MiInitializeWalkBounds @ 0x14020FC8C (MiInitializeWalkBounds.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MiReacquireWalkLocks @ 0x140246140 (MiReacquireWalkLocks.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiWalkPageTables(int *a1)
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

  if ( (*a1 & 0x20000) == 0 )
    *((_QWORD *)a1 + 11) = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(*((_QWORD *)a1 + 4) + 174LL));
  if ( !*((_BYTE *)a1 + 8) )
    *((_BYTE *)a1 + 8) = 15;
  v2 = *((_QWORD *)a1 + 8);
  v3 = 1;
  if ( v2 )
  {
    if ( v2 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v2 = 0xFFFFF6FB7DBEDF70uLL;
      *((_QWORD *)a1 + 8) = 0xFFFFF6FB7DBEDF70uLL;
    }
    if ( v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      *(__m128i *)v22 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffff0000000000000000);
      *((_QWORD *)a1 + 8) = 0LL;
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
    *(_OWORD *)v22 = *(_OWORD *)(a1 + 10);
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
          *((_QWORD *)a1 + 12) = v12;
          v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *((_QWORD *)a1 + 13) = v13;
          v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *((_QWORD *)a1 + 14) = v14;
          v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *((_QWORD *)a1 + 15) = v15;
          v16 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *((_QWORD *)a1 + 16) = v16;
          v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *((_QWORD *)a1 + 17) = v17;
          v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          *((_QWORD *)a1 + 18) = v18;
          *((_QWORD *)a1 + 19) = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v19 = *a1;
          v20 = a1[1] & 0xFFFFFFE3;
          *((_QWORD *)a1 + 9) = 0LL;
          a1[1] = v20;
          if ( (v19 & 0x20000) != 0 )
          {
            result = MiWalkPageTablesRecursivelyNoSynch(a1, v15, 3LL);
          }
          else
          {
            if ( (v19 & 4) != 0 )
            {
              a1[1] = v20 | 1;
              MiReacquireWalkLocks(a1, ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
            }
            else
            {
              *((_QWORD *)a1 + 7) = 0LL;
              a1[1] = v20 & 0xFFFFFFFE;
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
