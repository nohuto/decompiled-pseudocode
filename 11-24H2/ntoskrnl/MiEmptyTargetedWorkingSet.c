/*
 * XREFs of MiEmptyTargetedWorkingSet @ 0x140679A10
 * Callers:
 *     MiTrimAllSystemPagableMemory @ 0x140679F28 (MiTrimAllSystemPagableMemory.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReturnWsToExpansionList @ 0x1402F26D0 (MiReturnWsToExpansionList.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403C9030 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyTargetedWorkingSet(__int64 a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // si
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  int v8; // [rsp+30h] [rbp+8h]
  int v9; // [rsp+30h] [rbp+8h]

  v2 = 0;
  v3 = ExAcquireSpinLockExclusive(&SpinLock);
  v4 = (_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    if ( *(_QWORD **)(v5 + 8) != v4 || (v6 = *(_QWORD **)(a1 + 32), (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *v4 = 0LL;
    v8 = *(_DWORD *)(a1 + 184);
    BYTE1(v8) = BYTE1(v8) & 0xF9 | 2;
    *(_WORD *)(a1 + 184) = v8;
    MiReleaseSpinLockExclusive(&SpinLock, v3);
    MiEmptyWorkingSetInitiate(a1, 0, 0LL, -1LL);
    v2 = 1;
    ExAcquireSpinLockExclusive(&SpinLock);
    v9 = *(_DWORD *)(a1 + 184);
    BYTE1(v9) &= 0xF9u;
    *(_WORD *)(a1 + 184) = v9;
    MiReturnWsToExpansionList(a1, 0);
  }
  MiReleaseSpinLockExclusive(&SpinLock, v3);
  return v2;
}
