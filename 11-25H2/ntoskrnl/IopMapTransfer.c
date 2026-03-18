/*
 * XREFs of IopMapTransfer @ 0x140334310
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140333410 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaFlushBuffer @ 0x140333700 (HalpDmaFlushBuffer.c)
 *     HalpDmaGetAdapterVersion @ 0x140333AC8 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x140335AE0 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x140336260 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaSyncMapBuffers @ 0x140336530 (HalpDmaSyncMapBuffers.c)
 *     HalpMapTransferV3 @ 0x140336994 (HalpMapTransferV3.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x1403373F4 (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaZeroMapBuffers @ 0x14054CFBC (HalpDmaZeroMapBuffers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopMapTransfer(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned int *a5, char a6)
{
  unsigned int *v6; // r13
  bool v7; // zf
  unsigned int v12; // r8d
  int AdapterVersion; // eax
  int v14; // r8d
  int v15; // r9d
  char v16; // r15
  unsigned int ContiguousPieceV2; // eax
  unsigned __int64 v18; // rcx
  unsigned int v19; // r9d
  __int64 v20; // rbx
  __int64 v21; // rbx
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned int v27; // edx
  __int64 *v28; // r10
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned int v31; // r9d
  __int64 v32; // r8
  __int64 v33; // r8
  unsigned int v34; // eax
  _QWORD *v35; // rcx
  __int64 v36; // rdi
  unsigned __int64 v37; // r14
  __int64 v38; // rax
  size_t v39; // [rsp+20h] [rbp-69h]
  char v40; // [rsp+28h] [rbp-61h]
  char v41; // [rsp+30h] [rbp-59h]
  __int64 v42; // [rsp+40h] [rbp-49h]
  __int64 v43; // [rsp+48h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-9h] BYREF
  char v45; // [rsp+E0h] [rbp+57h]
  unsigned __int64 v46; // [rsp+F0h] [rbp+67h] BYREF

  v6 = a5;
  v7 = *(_DWORD *)(a1 + 520) == 3;
  *(_BYTE *)(a1 + 524) = 1;
  if ( v7 )
  {
    v34 = *(_DWORD *)(a1 + 252);
    if ( *v6 > v34 )
      *v6 = v34;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)(a1 + 156) != 2 )
    {
      v21 = HalpMapTransferV3(a1, a2, a3, a4, (__int64)v6, a6, 0);
      goto LABEL_17;
    }
    v12 = *v6;
    v46 = 0LL;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !v12 )
    {
      v21 = 0LL;
      goto LABEL_17;
    }
    v45 = *(_BYTE *)(a1 + 441);
    v43 = *(_QWORD *)(a3 + 56);
    if ( *(_BYTE *)(a1 + 442) )
    {
      AdapterVersion = HalpDmaGetAdapterVersion(a1);
      v16 = a6;
      if ( AdapterVersion == 2 )
        ContiguousPieceV2 = HalpDmaNextContiguousPieceV2(a1, a2, a3, v15, a6, v14);
      else
        ContiguousPieceV2 = HalpDmaNextContiguousPieceV3(a1, a2, a3, v15, a6, v14);
      *v6 = ContiguousPieceV2;
      v18 = a4 & 0xFFF;
      v19 = ContiguousPieceV2;
      v20 = (unsigned int)((a4 - *(_QWORD *)(a2 + 32)) >> 12);
      v42 = ContiguousPieceV2;
      v46 = v18;
      v21 = v18 + (*(_QWORD *)(a2 + 8 * v20 + 48) << 12);
      if ( *(_QWORD *)(a1 + 144) < (unsigned __int64)ContiguousPieceV2 + v21 - 1 )
      {
LABEL_9:
        v22 = *(_QWORD **)(a3 + 56);
        v21 = *v22 + v46;
        if ( v16 )
        {
          v41 = 0;
          v40 = v16;
        }
        else
        {
          if ( *(_BYTE *)(a1 + 445) )
            goto LABEL_12;
          v41 = 1;
          v40 = 0;
        }
        LODWORD(v39) = v19;
        HalpDmaSyncMapBuffers(a1, a2, a4, (_DWORD)v22, v39, v40, v41, 0);
LABEL_12:
        v18 = *(_QWORD *)(a3 + 56);
        v23 = (v42 + 4095 + v46) >> 12;
        if ( (_DWORD)v23 )
        {
          v24 = (unsigned int)v23;
          do
          {
            v18 = *(_QWORD *)(v18 + 8);
            --v24;
          }
          while ( v24 );
        }
        *(_QWORD *)(a3 + 56) = v18;
        goto LABEL_16;
      }
      if ( v16 )
      {
LABEL_22:
        if ( !*(_BYTE *)(a1 + 445) )
          HalpDmaFlushBuffer(v18, a2, a4, v19, v16, 0);
        goto LABEL_16;
      }
      if ( !*(_BYTE *)(a1 + 445) )
      {
        v18 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
        if ( (v18 & v21) != 0 || (v18 & v33) != 0 )
          goto LABEL_9;
        goto LABEL_22;
      }
    }
    else
    {
      v16 = a6;
      HalpDmaMapContiguousTransferV2(a1, a2, a3, a4, (__int64)v6, a6, (__int64)&v46);
      v21 = v46;
    }
LABEL_16:
    v25 = *v6;
    LODWORD(v46) = *v6;
    if ( !v45 )
    {
      if ( !v16 && *(_BYTE *)(a1 + 444) )
        HalpDmaZeroMapBuffers(v18, v43, a4 & 0xFFF, v25);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 160) + 128LL), &LockHandle);
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 432), a2);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    goto LABEL_17;
  }
  v27 = 4096 - (a4 & 0xFFF);
  v28 = (__int64 *)(a2 + 8 * (((a4 - *(_QWORD *)(a2 + 32)) >> 12) + 6));
  v29 = a4 & 0xFFF;
  v30 = *v6;
  v31 = v30;
  v32 = *v28;
  v21 = v29 + (*v28 << 12);
  if ( v27 < (unsigned int)v30 )
  {
    do
    {
      if ( v32 + 1 != *++v28 )
        break;
      if ( ((*v28 ^ v32) & 0xFFFFFFFFFFF00000uLL) != 0 )
        break;
      v27 += 4096;
      v32 = *v28;
    }
    while ( v27 < (unsigned int)v30 );
    v31 = *v6;
    if ( v27 < (unsigned int)v30 )
    {
      *v6 = v27;
      v31 = v27;
    }
  }
  if ( !*(_BYTE *)(a1 + 445) )
    HalpDmaFlushBuffer(v30, a2, a4, v31, a6, 0);
LABEL_17:
  if ( *(_DWORD *)(a1 + 520) == 3 )
  {
    v35 = *(_QWORD **)(a3 + 24);
    v36 = v21 & 0xFFF;
    v37 = (v36 + *v6 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( *(_BYTE *)(a3 + 64) )
    {
      v38 = *(unsigned int *)(a3 + 16);
      v21 = *v35 + v36 + v38 + *(_QWORD *)(a3 + 32);
      *(_DWORD *)(a3 + 16) = v37 + v38;
    }
    else
    {
      guard_dispatch_icall_no_overrides(v35, *(_QWORD *)(a3 + 40));
      *(_QWORD *)(a3 + 40) += v37;
      return MEMORY[0] + v36;
    }
  }
  return v21;
}
