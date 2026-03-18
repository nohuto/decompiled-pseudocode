/*
 * XREFs of MiUnlinkUnusedControlArea @ 0x140419C98
 * Callers:
 *     MiRemoveUnusedSegment @ 0x140218D9C (MiRemoveUnusedSegment.c)
 *     MiCheckForControlAreaDeletion @ 0x140419AE0 (MiCheckForControlAreaDeletion.c)
 *     MiDeleteCachedEntry @ 0x140459A0C (MiDeleteCachedEntry.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1406667B8 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140666ACC (MiProcessDeleteOnClose.c)
 * Callees:
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     MiComputePagedPoolSegmentBytes @ 0x140419D54 (MiComputePagedPoolSegmentBytes.c)
 */

__int64 __fastcall MiUnlinkUnusedControlArea(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rbp
  _QWORD *v5; // rcx
  __int64 result; // rax
  _QWORD *v7; // rdx

  v2 = *(_DWORD *)(a1 + 56);
  v3 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(a1 + 60) & 0x3FF));
  v4 = MiComputePagedPoolSegmentBytes(a1);
  if ( (v2 & 0x40000) != 0 && (*(_DWORD *)(v3 + 1732))-- == 1 )
  {
    KeCancelTimer((PKTIMER)(v3 + 2008));
    *(_BYTE *)(v3 + 2072) = 0;
  }
  v5 = (_QWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(result + 8) != a1 + 8 || (v7 = *(_QWORD **)(a1 + 16), (_QWORD *)*v7 != v5) )
    __fastfail(3u);
  *v7 = result;
  *(_QWORD *)(result + 8) = v7;
  *(_DWORD *)(a1 + 56) = v2 & 0xEFFFFFFF;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v5 = v5;
  *(_QWORD *)(v3 + 2088) -= v4;
  _InterlockedAdd64(&qword_140E2C9D8, -v4);
  return result;
}
