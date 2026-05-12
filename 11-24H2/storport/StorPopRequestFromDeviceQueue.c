/*
 * XREFs of StorPopRequestFromDeviceQueue @ 0x1401275E0
 * Callers:
 *     NvmeNamespaceCancelPendingRequests @ 0x1400FBDFC (NvmeNamespaceCancelPendingRequests.c)
 *     NvmeNamespaceProcessQueueRequests @ 0x140107114 (NvmeNamespaceProcessQueueRequests.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011CB50 (NvmeNamespaceProcessIoForDeviceIdle.c)
 * Callees:
 *     StorRefillShadowQueue @ 0x14012796C (StorRefillShadowQueue.c)
 */

__int64 __fastcall StorPopRequestFromDeviceQueue(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  KIRQL v5; // r9
  __int64 v6; // r8
  signed __int32 v7; // ecx
  __int64 v8; // rdi
  KIRQL v9; // cl
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rax
  KIRQL v16; // r10
  __int64 v17; // r9
  signed __int32 v18; // r8d
  __int64 v19; // rax

  v4 = *(_QWORD *)(a1 + 8LL * a2 + 64);
  v5 = KfRaiseIrql(2u);
  while ( 1 )
  {
    v6 = *(unsigned int *)(v4 + 52);
    if ( (_DWORD)v6 == *(_DWORD *)(v4 + 48) )
      break;
    v7 = 0;
    if ( (unsigned int)(v6 + 1) < *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4LL) )
      v7 = v6 + 1;
    if ( (_DWORD)v6 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 52), v7, v6) )
    {
      do
        v8 = _InterlockedExchange64((volatile __int64 *)(8 * v6 + *(_QWORD *)(v4 + 56)), 0LL);
      while ( !v8 );
      v9 = v5;
      goto LABEL_39;
    }
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)v4, 0, 1) == 1 )
  {
    v10 = *(_QWORD *)(v4 + 24);
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 16) + 20LL) == 1 )
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 956));
    else
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 16) + 952LL));
  }
  KeLowerIrql(v5);
  if ( !*(_DWORD *)(*(_QWORD *)(v4 + 16) + 16LL)
    && (*(_DWORD *)v4 == 2 || ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v4 + 32) + 16LL * *(unsigned int *)(v4 + 8)))) )
  {
    if ( *(_DWORD *)(v4 + 48) == *(_DWORD *)(v4 + 52)
      || ((v11 = *(_DWORD *)(v4 + 48), v12 = *(_DWORD *)(v4 + 52), v11 != v12)
        ? (v11 <= v12
         ? ((v14 = *(_QWORD *)(v4 + 24), *(_BYTE *)(*(_QWORD *)(v4 + 16) + 20LL))
          ? (v15 = *(_QWORD *)(v14 + 1024))
          : (v15 = *(_QWORD *)(v14 + 256)),
            v13 = *(_DWORD *)(v15 + 4) - v12 + v11)
         : (v13 = v11 - v12))
        : (v13 = 0),
          v13 <= *(_DWORD *)(*(_QWORD *)(v4 + 16) + 8LL)) )
    {
      StorRefillShadowQueue(a1, a2, 0LL);
    }
  }
  v16 = KfRaiseIrql(2u);
  while ( 1 )
  {
    v17 = *(unsigned int *)(v4 + 52);
    if ( (_DWORD)v17 == *(_DWORD *)(v4 + 48) )
      break;
    v18 = 0;
    if ( (unsigned int)(v17 + 1) < *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4LL) )
      v18 = v17 + 1;
    if ( (_DWORD)v17 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 52), v18, v17) )
    {
      do
        v8 = _InterlockedExchange64((volatile __int64 *)(8 * v17 + *(_QWORD *)(v4 + 56)), 0LL);
      while ( !v8 );
      goto LABEL_38;
    }
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)v4, 0, 1) == 1 )
  {
    v19 = *(_QWORD *)(v4 + 24);
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 16) + 20LL) == 1 )
      _InterlockedDecrement((volatile signed __int32 *)(v19 + 956));
    else
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v19 + 16) + 952LL));
  }
  v8 = 0LL;
LABEL_38:
  v9 = v16;
LABEL_39:
  KeLowerIrql(v9);
  return v8;
}
