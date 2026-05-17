/*
 * XREFs of RtlRcuFree @ 0x180147C00
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlRcuFree(_QWORD *a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  unsigned int *v6; // rdi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r8
  void *ProcessHeap; // rcx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&qword_1801D3C70, a2, a3);
  v4 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v5 = (_QWORD *)a1[1], (_QWORD *)*v5 != a1) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  RtlReleaseSRWLockExclusive(&qword_1801D3C70);
  v6 = (unsigned int *)a1[3];
  while ( v6 )
  {
    v7 = (unsigned __int64)v6;
    v6 = *(unsigned int **)&v6[2 * *v6 + 2];
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
  }
  v8 = a1[4];
  while ( 1 )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !v8 )
      break;
    v9 = v8;
    v8 = *(_QWORD *)(v8 + 24);
    RtlFreeHeap((__int64)ProcessHeap, 0, v9);
  }
  return RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)a1);
}
