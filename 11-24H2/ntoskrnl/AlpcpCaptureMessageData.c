/*
 * XREFs of AlpcpCaptureMessageData @ 0x1408942E0
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x14089055C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCreateReserve @ 0x140893C6C (AlpcpCreateReserve.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409E5CE0 (AlpcpReplyLegacySynchronousRequest.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403C8EA0 (PsReturnProcessPagedPoolQuota.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     AlpcpChargePagedPoolQuota @ 0x140892384 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1408923C8 (AlpcpReleasePagedPoolQuota.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpCaptureMessageData(__int64 a1, size_t a2, char *a3)
{
  __int64 v3; // r14
  size_t v7; // r14
  void *v8; // rcx
  ULONG_PTR v10; // r15
  void *v11; // rcx
  size_t v12; // rbp
  __int64 Pool2; // rax
  ULONG_PTR v14; // rcx
  ULONG_PTR v15; // rcx
  ULONG_PTR v16; // rdx
  int v17; // ebp
  ULONG_PTR v18; // rcx

  v3 = *(_QWORD *)(a1 + 96);
  if ( v3 )
    v7 = *(_QWORD *)(v3 + 32) - 40LL;
  else
    v7 = 512LL;
  if ( a2 <= v7 )
  {
    if ( a3 )
      memmove((void *)(a1 + 280), a3, a2);
    v8 = *(void **)(a1 + 224);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0x42456C41u);
      v15 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 224) = 0LL;
      if ( v15 )
      {
        v16 = *(_QWORD *)(a1 + 232);
        if ( v16 + *(_QWORD *)(v15 + 1432) >= 0x1000 )
          PsReturnProcessPagedPoolQuota(v15, v16);
        else
          _InterlockedAdd64((volatile signed __int64 *)(v15 + 1432), v16);
      }
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    return 0LL;
  }
  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  v10 = *(_QWORD *)(a1 + 232);
  if ( a2 <= v10 + v7 )
    goto LABEL_14;
  v11 = *(void **)(a1 + 224);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0x42456C41u);
    *(_QWORD *)(a1 + 232) = 0LL;
  }
  v12 = a2 - v7;
  Pool2 = ExAllocatePool2(0x100uLL, a2 - v7, 0x42456C41u);
  v14 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 224) = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(a1 + 232) = v12;
    if ( v14 )
    {
      v17 = AlpcpChargePagedPoolQuota(v14, v12 - v10);
      if ( v17 < 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 224), 0x42456C41u);
        v18 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 224) = 0LL;
        *(_QWORD *)(a1 + 232) = 0LL;
        AlpcpReleasePagedPoolQuota(v18, v10);
        return (unsigned int)v17;
      }
    }
LABEL_14:
    if ( a3 )
    {
      memmove((void *)(a1 + 280), a3, v7);
      memmove(*(void **)(a1 + 224), &a3[v7], a2 - v7);
    }
    return 0LL;
  }
  if ( v14 )
    AlpcpReleasePagedPoolQuota(v14, v10);
  return 3221225626LL;
}
