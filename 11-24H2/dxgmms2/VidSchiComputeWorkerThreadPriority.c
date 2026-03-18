/*
 * XREFs of VidSchiComputeWorkerThreadPriority @ 0x1400364A8
 * Callers:
 *     VidSchiAdjustWorkerThreadPriorityDirectSubmitAware @ 0x14004A7CC (VidSchiAdjustWorkerThreadPriorityDirectSubmitAware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiComputeWorkerThreadPriority(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 v3; // rbx
  __int64 v4; // rax
  int v6; // r10d
  int v8; // eax

  v2 = 16;
  if ( a2 >= 16 )
    v2 = a2;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v4 = *(int *)(a1 + 392);
  if ( (_DWORD)v4 != v2 )
  {
    v6 = 0;
    if ( (int)v4 > 16 && (*(_DWORD *)(v3 + 4 * v4 + 2664))-- == 1 )
    {
      v6 = 1;
      *(_DWORD *)(v3 + 2728) &= ~(1 << *(_DWORD *)(a1 + 392));
    }
    if ( v2 > 16 && (v8 = *(_DWORD *)(v3 + 4LL * v2 + 2664) + 1, *(_DWORD *)(v3 + 4LL * v2 + 2664) = v8, v8 == 1) )
    {
      *(_DWORD *)(v3 + 2728) |= 1 << v2;
      *(_DWORD *)(a1 + 392) = v2;
    }
    else
    {
      *(_DWORD *)(a1 + 392) = v2;
      if ( !v6 )
        return *(unsigned int *)(v3 + 236);
    }
    if ( *(_DWORD *)(v3 + 2728) )
      *(_DWORD *)(v3 + 236) = RtlFindMostSignificantBit(*(unsigned int *)(v3 + 2728));
    else
      *(_DWORD *)(v3 + 236) = 16;
  }
  return *(unsigned int *)(v3 + 236);
}
