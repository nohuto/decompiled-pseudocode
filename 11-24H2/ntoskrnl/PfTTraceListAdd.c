/*
 * XREFs of PfTTraceListAdd @ 0x140972A00
 * Callers:
 *     PfTGenerateTrace @ 0x140971110 (PfTGenerateTrace.c)
 *     PfpSectInfoHandleFullBuffer @ 0x140972940 (PfpSectInfoHandleFullBuffer.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PfpPartitionDereferenceParent @ 0x14022A25C (PfpPartitionDereferenceParent.c)
 *     PfpPartitionReferenceParentSafe @ 0x14022BCDC (PfpPartitionReferenceParentSafe.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PfTTraceListTrim @ 0x140745204 (PfTTraceListTrim.c)
 *     PfTTraceListFree @ 0x140972BA4 (PfTTraceListFree.c)
 *     PfTAccessTracingCleanup @ 0x140B5D4DC (PfTAccessTracingCleanup.c)
 */

__int64 __fastcall PfTTraceListAdd(__int64 a1, __int64 a2)
{
  struct _FAST_MUTEX *v3; // r13
  unsigned int v5; // r12d
  unsigned int v6; // r15d
  unsigned int v7; // r8d
  _DWORD *v8; // rcx
  _QWORD *v9; // rdi
  _QWORD *v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 result; // rax
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  v15[1] = v15;
  v3 = (struct _FAST_MUTEX *)(a1 + 624);
  v15[0] = v15;
  ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 624));
  v5 = *(_DWORD *)(a1 + 604);
  v6 = *(_DWORD *)(a1 + 600);
  if ( *(_DWORD *)(a2 + 28) == 1 )
  {
    v7 = *(_DWORD *)(a1 + 612);
    v8 = (_DWORD *)(a1 + 608);
    v9 = (_QWORD *)(a1 + 584);
    if ( *(_DWORD *)(a1 + 608) + 1 == v7 )
      ++*(_DWORD *)(a1 + 700);
    v10 = (_QWORD *)(a1 + 568);
  }
  else
  {
    v8 = (_DWORD *)(a1 + 600);
    v10 = (_QWORD *)(a1 + 568);
    v7 = *(_DWORD *)(a1 + 604);
    v9 = (_QWORD *)(a1 + 568);
    if ( v6 + 1 == v5 )
      ++*(_DWORD *)(a1 + 696);
    *(_DWORD *)(a1 + 616) = 1;
  }
  v11 = (_QWORD *)v9[1];
  if ( (_QWORD *)*v11 != v9 )
    __fastfail(3u);
  *(_QWORD *)a2 = v9;
  *(_QWORD *)(a2 + 8) = v11;
  *v11 = a2;
  v9[1] = a2;
  if ( ++*v8 > v7 )
    PfTTraceListTrim(a1, *(_DWORD *)(a2 + 28), v7, (__int64)v15);
  if ( v9 == v10 && (_QWORD *)*v9 == v9 )
    *(_DWORD *)(a1 + 616) = 0;
  v12 = PfpPartitionReferenceParentSafe((__int64 *)a1);
  v13 = v12;
  if ( v6 < v5 && v12 && *(_DWORD *)(a1 + 600) >= *(_DWORD *)(a1 + 604) )
    PfTAccessTracingCleanup(a1, 2LL, 0LL);
  KeSetEvent(*(PRKEVENT *)(a1 + 680), 0, 0);
  KeReleaseGuardedMutex(v3);
  result = PfTTraceListFree(a1, v15);
  if ( v13 )
    return PfpPartitionDereferenceParent(v13);
  return result;
}
