/*
 * XREFs of IoMapTransferInternal @ 0x140390384
 * Callers:
 *     HalMapTransferEx @ 0x140391AE0 (HalMapTransferEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x14038D160 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaFlushBuffer @ 0x14038D450 (HalpDmaFlushBuffer.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x14038D984 (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x14038F490 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaGetAdapterVersion @ 0x14038FBDC (HalpDmaGetAdapterVersion.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x14038FC4C (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaSyncMapBuffers @ 0x14038FF20 (HalpDmaSyncMapBuffers.c)
 *     HalpMapTransferV3 @ 0x140493590 (HalpMapTransferV3.c)
 *     HalpDmaZeroMapBuffers @ 0x14054F91C (HalpDmaZeroMapBuffers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoMapTransferInternal(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 a4,
        unsigned int *a5,
        char a6,
        char a7)
{
  __int64 v7; // rbx
  int v12; // r8d
  unsigned __int64 v13; // r9
  unsigned int v14; // r8d
  __int64 v15; // r9
  char v16; // r15
  unsigned int ContiguousPieceV2; // eax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r12
  unsigned int v20; // r9d
  __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v27; // rcx
  __int64 *v28; // r10
  unsigned __int64 v29; // rax
  unsigned int v30; // r8d
  unsigned int v31; // r9d
  __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  __int64 v34; // r8
  __int64 v35; // r8
  size_t v36; // [rsp+20h] [rbp-78h]
  char v37; // [rsp+28h] [rbp-70h]
  char v38; // [rsp+30h] [rbp-68h]
  unsigned __int64 v39; // [rsp+40h] [rbp-58h] BYREF
  __int64 v40; // [rsp+48h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF
  char v42; // [rsp+B0h] [rbp+18h]

  v7 = 0LL;
  if ( a3 )
  {
    if ( (unsigned int)HalpDmaGetAdapterVersion(a1) != 2 )
      return HalpMapTransferV3(a1, a2, v12, v13, (__int64)a5, a6, a7);
    v39 = 0LL;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *a5 )
    {
      if ( !a1 || (v42 = 0, *(_BYTE *)(a1 + 441)) )
        v42 = 1;
      v40 = a3[7];
      if ( a1 && *(_BYTE *)(a1 + 442) )
      {
        v16 = a6;
        if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
          ContiguousPieceV2 = HalpDmaNextContiguousPieceV2(a1, a2, (__int64)a3, v15, a6, v14);
        else
          ContiguousPieceV2 = HalpDmaNextContiguousPieceV3(a1, a2, (__int64)a3, v15, a6, v14);
        *a5 = ContiguousPieceV2;
        v19 = a4 & 0xFFF;
        v20 = ContiguousPieceV2;
        v21 = (unsigned int)((a4 - *(_QWORD *)(a2 + 32)) >> 12);
        v39 = ContiguousPieceV2;
        v22 = v19 + (*(_QWORD *)(a2 + 8 * v21 + 48) << 12);
        if ( *(_QWORD *)(a1 + 144) < ContiguousPieceV2 + v22 - 1 )
        {
LABEL_12:
          v23 = (_QWORD *)a3[7];
          v22 = v19 + *v23;
          if ( a6 )
          {
            v38 = 0;
            v37 = a6;
          }
          else
          {
            if ( *(_BYTE *)(a1 + 445) )
              goto LABEL_15;
            v38 = 1;
            v37 = 0;
          }
          LODWORD(v36) = v20;
          HalpDmaSyncMapBuffers(a1, a2, a4, (__int64)v23, v36, v37, v38, 0);
LABEL_15:
          v18 = a3[7];
          v24 = (v19 + v39 + 4095) >> 12;
          if ( (_DWORD)v24 )
          {
            v25 = (unsigned int)v24;
            do
            {
              v18 = *(_QWORD *)(v18 + 8);
              --v25;
            }
            while ( v25 );
          }
          a3[7] = v18;
          goto LABEL_19;
        }
        if ( a6 )
        {
LABEL_23:
          if ( !*(_BYTE *)(a1 + 445) )
            HalpDmaFlushBuffer(v18, a2, a4, v20, a6, 0);
          goto LABEL_19;
        }
        if ( !*(_BYTE *)(a1 + 445) )
        {
          v18 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
          if ( (v18 & v22) != 0 || (v18 & v34) != 0 )
            goto LABEL_12;
          goto LABEL_23;
        }
      }
      else
      {
        v16 = a6;
        HalpDmaMapContiguousTransferV2(a1, a2, a3, v13, a5, a6, &v39);
        v22 = v39;
      }
LABEL_19:
      if ( !v42 )
      {
        if ( !v16 )
        {
          if ( *(_BYTE *)(a1 + 444) )
            HalpDmaZeroMapBuffers(v18, v40, a4 & 0xFFF, *a5);
        }
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 160) + 128LL), &LockHandle);
        LOBYTE(v35) = v16;
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 432), a2, v35, a4);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      return v22;
    }
    return v7;
  }
  v27 = 4096 - (unsigned int)(a4 & 0xFFF);
  v28 = (__int64 *)(a2 + 48 + 8 * ((a4 - *(_QWORD *)(a2 + 32)) >> 12));
  v29 = a4 & 0xFFF;
  v30 = *a5;
  v31 = *a5;
  v32 = *v28;
  v33 = v29 + (*v28 << 12);
  if ( (unsigned int)v27 < *a5 )
  {
    do
    {
      if ( v32 + 1 != *++v28 )
        break;
      if ( ((*v28 ^ v32) & 0xFFFFFFFFFFF00000uLL) != 0 )
        break;
      v27 = (unsigned int)(v27 + 4096);
      v32 = *v28;
    }
    while ( (unsigned int)v27 < v30 );
    v31 = *a5;
    if ( (unsigned int)v27 < v30 )
    {
      *a5 = v27;
      v31 = v27;
    }
  }
  if ( !*(_BYTE *)(a1 + 445) )
    HalpDmaFlushBuffer(v27, a2, a4, v31, a6, a7);
  return v33;
}
