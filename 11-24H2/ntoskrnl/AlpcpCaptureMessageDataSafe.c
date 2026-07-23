/*
 * XREFs of AlpcpCaptureMessageDataSafe @ 0x14089BA70
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x140899F40 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x14089A890 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403C8EA0 (PsReturnProcessPagedPoolQuota.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AlpcpChargePagedPoolQuota @ 0x140892384 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1408923C8 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpAvailableBufferSize @ 0x14089E820 (AlpcpAvailableBufferSize.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpCaptureMessageDataSafe(__int64 a1)
{
  char *v2; // rsi
  size_t v3; // rdi
  __int64 v4; // r14
  size_t v5; // r14
  void *v6; // rcx
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // rdx
  ULONG_PTR v9; // r12
  void *v10; // rcx
  size_t v11; // r15
  __int64 Pool2; // rax
  ULONG_PTR v13; // rcx

  v2 = *(char **)(a1 + 176);
  v3 = *(unsigned __int16 *)(a1 + 240);
  v4 = *(_QWORD *)(a1 + 96);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 32) - 40LL;
  else
    v5 = 512LL;
  if ( v3 <= v5 )
  {
    if ( v2 )
      memmove((void *)(a1 + 280), v2, v3);
    v6 = *(void **)(a1 + 224);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x42456C41u);
      *(_QWORD *)(a1 + 224) = 0LL;
      v7 = *(_QWORD *)(a1 + 48);
      if ( v7 )
      {
        v8 = *(_QWORD *)(a1 + 232);
        if ( v8 + *(_QWORD *)(v7 + 1432) >= 0x1000 )
          PsReturnProcessPagedPoolQuota(v7, v8);
        else
          _InterlockedAdd64((volatile signed __int64 *)(v7 + 1432), v8);
      }
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    return;
  }
  if ( v3 > 0xFFD7 )
    return;
  v9 = *(_QWORD *)(a1 + 232);
  if ( v3 <= v9 + v5 )
    goto LABEL_17;
  v10 = *(void **)(a1 + 224);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x42456C41u);
    *(_QWORD *)(a1 + 232) = 0LL;
  }
  v11 = v3 - v5;
  Pool2 = ExAllocatePool2(0x100uLL, v3 - v5, 0x42456C41u);
  *(_QWORD *)(a1 + 224) = Pool2;
  v13 = *(_QWORD *)(a1 + 48);
  if ( Pool2 )
  {
    *(_QWORD *)(a1 + 232) = v11;
    if ( v13 && (int)AlpcpChargePagedPoolQuota(v13, v11 - v9) < 0 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 224), 0x42456C41u);
      *(_QWORD *)(a1 + 224) = 0LL;
      *(_QWORD *)(a1 + 232) = 0LL;
      AlpcpReleasePagedPoolQuota(*(_QWORD *)(a1 + 48), v9);
      return;
    }
LABEL_17:
    if ( v2 )
    {
      memmove((void *)(a1 + 280), v2, v5);
      memmove(*(void **)(a1 + 224), &v2[v5], v3 - v5);
    }
    return;
  }
  if ( v13 )
    AlpcpReleasePagedPoolQuota(v13, v9);
}
