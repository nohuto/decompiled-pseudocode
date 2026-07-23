/*
 * XREFs of CcWriteBehindReleaseFile @ 0x1404D8118
 * Callers:
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 *     CcQueueAsyncLazywriteCompletion @ 0x14057B740 (CcQueueAsyncLazywriteCompletion.c)
 * Callees:
 *     CcApplyLowIoPriorityToThread @ 0x1404D4698 (CcApplyLowIoPriorityToThread.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall CcWriteBehindReleaseFile(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 264);
  if ( *(_DWORD *)(v1 + 128) == 2 )
  {
    v3 = *(_QWORD *)(v1 + 16);
    v4 = *(_QWORD *)(v3 + 536);
  }
  else
  {
    v3 = *(_QWORD *)(v1 + 24);
    v4 = *(_QWORD *)(v1 + 136);
  }
  CcApplyLowIoPriorityToThread(v4, 0, (_DWORD *)v3);
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v3 + 512) + 204LL), -*(_DWORD *)(a1 + 252));
  if ( (*(_DWORD *)(v3 + 152) & 0x1000000) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v3 + 512) + 208LL), -*(_DWORD *)(a1 + 252));
  v5 = *(_QWORD *)(v3 + 512);
  *(_QWORD *)(v5 + 296) += *(unsigned int *)(v5 + 204);
  ++*(_QWORD *)(v5 + 312);
  *(_QWORD *)(v5 + 320) += *(unsigned int *)(*(_QWORD *)(v3 + 512) + 208LL);
  ++*(_QWORD *)(v5 + 336);
  if ( *(_QWORD *)(v5 + 304) <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v3 + 512) + 204LL) )
    v6 = *(unsigned int *)(*(_QWORD *)(v3 + 512) + 204LL);
  else
    v6 = *(_QWORD *)(v5 + 304);
  *(_QWORD *)(v5 + 304) = v6;
  if ( *(_QWORD *)(v5 + 328) <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v3 + 512) + 208LL) )
    v7 = *(unsigned int *)(*(_QWORD *)(v3 + 512) + 208LL);
  else
    v7 = *(_QWORD *)(v5 + 328);
  *(_QWORD *)(v5 + 328) = v7;
  guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 224), *(_QWORD *)(v3 + 216));
  return 1;
}
