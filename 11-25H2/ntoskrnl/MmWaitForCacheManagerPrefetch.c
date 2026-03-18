/*
 * XREFs of MmWaitForCacheManagerPrefetch @ 0x14025DC50
 * Callers:
 *     CcFetchDataForRead @ 0x14025BCE0 (CcFetchDataForRead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14045B73C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcPerformReadAhead @ 0x1404DE7C0 (CcPerformReadAhead.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     MiPfCompleteCoalescedIo @ 0x140378964 (MiPfCompleteCoalescedIo.c)
 *     MiPfCompleteInPageSupport @ 0x1403795D8 (MiPfCompleteInPageSupport.c)
 *     MiReleaseReadListResources @ 0x1409C985C (MiReleaseReadListResources.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmWaitForCacheManagerPrefetch(_DWORD *P)
{
  int v1; // ebx
  int v2; // ebp
  _QWORD *v3; // rdi
  _QWORD *v4; // r14
  ULONG_PTR *v5; // rsi
  int v6; // r15d
  ULONG_PTR v7; // rcx
  ULONG_PTR v9; // rax
  int v10; // eax

  v1 = 0;
  v2 = P[52] & 1;
  v3 = P;
  do
  {
    v4 = (_QWORD *)*v3;
    v5 = v3 + 28;
    v6 = v1;
    v1 = 0;
    while ( 1 )
    {
      v7 = *v5;
      if ( (ULONG_PTR *)*v5 == v5 )
        break;
      if ( *(ULONG_PTR **)(v7 + 8) != v5 || (v9 = *(_QWORD *)v7, *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7) )
        __fastfail(3u);
      *v5 = v9;
      *(_QWORD *)(v9 + 8) = v5;
      if ( (*(_DWORD *)(v7 + 192) & 0x1000000) != 0 )
        v10 = MiPfCompleteCoalescedIo(v7);
      else
        v10 = MiPfCompleteInPageSupport(v7, 0LL);
      if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -1073740748 )
        v1 = v10;
    }
    MiReleaseReadListResources(v3);
    ExFreePoolWithTag(v3, 0);
    v3 = v4;
    if ( v1 >= 0 )
      v1 = v6;
  }
  while ( v4 );
  if ( v2 )
    KeLeaveGuardedRegion();
  return (unsigned int)v1;
}
