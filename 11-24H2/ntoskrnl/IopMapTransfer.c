/*
 * XREFs of IopMapTransfer @ 0x140387610
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140386AA0 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaFlushBuffer @ 0x140386D90 (HalpDmaFlushBuffer.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x1403872C4 (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x140388DD0 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaGetAdapterVersion @ 0x14038951C (HalpDmaGetAdapterVersion.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x14038958C (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaSyncMapBuffers @ 0x140389860 (HalpDmaSyncMapBuffers.c)
 *     HalpMapTransferV3 @ 0x14048DEC0 (HalpMapTransferV3.c)
 *     HalpDmaZeroMapBuffers @ 0x14054D25C (HalpDmaZeroMapBuffers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopMapTransfer(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned int *a5, char a6)
{
  unsigned int *v6; // r13
  bool v7; // zf
  int v12; // r8d
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r11
  unsigned int v15; // r8d
  int AdapterVersion; // eax
  int v17; // r8d
  int v18; // r9d
  char v19; // r15
  unsigned int ContiguousPieceV2; // eax
  unsigned __int64 v21; // rcx
  unsigned int v22; // r9d
  __int64 v23; // rbx
  __int64 v24; // rbx
  _QWORD *v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // eax
  unsigned int v30; // edx
  __int64 *v31; // r10
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned int v34; // r9d
  __int64 v35; // r8
  __int64 v36; // r8
  unsigned int v37; // eax
  _QWORD *v38; // rcx
  __int64 v39; // rdi
  unsigned __int64 v40; // r14
  __int64 v41; // rax
  size_t v42; // [rsp+20h] [rbp-69h]
  char v43; // [rsp+28h] [rbp-61h]
  char v44; // [rsp+30h] [rbp-59h]
  __int64 v45; // [rsp+40h] [rbp-49h]
  __int64 v46; // [rsp+48h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-9h] BYREF
  char v48; // [rsp+E0h] [rbp+57h]
  unsigned __int64 v49; // [rsp+F0h] [rbp+67h] BYREF

  v6 = a5;
  v7 = *(_DWORD *)(a1 + 520) == 3;
  *(_BYTE *)(a1 + 524) = 1;
  if ( v7 )
  {
    v37 = *(_DWORD *)(a1 + 252);
    if ( *v6 > v37 )
      *v6 = v37;
  }
  if ( a3 )
  {
    if ( (unsigned int)((__int64 (*)(void))HalpDmaGetAdapterVersion)() != 2 )
    {
      v24 = HalpMapTransferV3(a1, a2, v12, v13, (__int64)v6, a6, v14);
      goto LABEL_17;
    }
    v15 = *v6;
    v49 = v14;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !v15 )
    {
      v24 = v14;
      goto LABEL_17;
    }
    v48 = *(_BYTE *)(a1 + 441);
    v46 = *(_QWORD *)(a3 + 56);
    if ( *(_BYTE *)(a1 + 442) == (_BYTE)v14 )
    {
      v19 = a6;
      HalpDmaMapContiguousTransferV2(a1, a2, (_QWORD *)a3, v13, v6, a6, &v49);
      v24 = v49;
    }
    else
    {
      AdapterVersion = HalpDmaGetAdapterVersion(a1);
      v19 = a6;
      if ( AdapterVersion == 2 )
        ContiguousPieceV2 = HalpDmaNextContiguousPieceV2(a1, a2, a3, v18, a6, v17);
      else
        ContiguousPieceV2 = HalpDmaNextContiguousPieceV3(a1, a2, a3, v18, a6, v17);
      *v6 = ContiguousPieceV2;
      v21 = a4 & 0xFFF;
      v22 = ContiguousPieceV2;
      v23 = (unsigned int)((a4 - *(_QWORD *)(a2 + 32)) >> 12);
      v45 = ContiguousPieceV2;
      v49 = v21;
      v24 = v21 + (*(_QWORD *)(a2 + 8 * v23 + 48) << 12);
      if ( *(_QWORD *)(a1 + 144) < (unsigned __int64)ContiguousPieceV2 + v24 - 1 )
      {
LABEL_9:
        v25 = *(_QWORD **)(a3 + 56);
        v24 = *v25 + v49;
        if ( v19 )
        {
          v44 = 0;
          v43 = v19;
        }
        else
        {
          if ( *(_BYTE *)(a1 + 445) )
            goto LABEL_12;
          v44 = 1;
          v43 = 0;
        }
        LODWORD(v42) = v22;
        HalpDmaSyncMapBuffers(a1, a2, a4, (_DWORD)v25, v42, v43, v44, 0);
LABEL_12:
        v21 = *(_QWORD *)(a3 + 56);
        v26 = (v45 + 4095 + v49) >> 12;
        if ( (_DWORD)v26 )
        {
          v27 = (unsigned int)v26;
          do
          {
            v21 = *(_QWORD *)(v21 + 8);
            --v27;
          }
          while ( v27 );
        }
        *(_QWORD *)(a3 + 56) = v21;
        goto LABEL_16;
      }
      if ( v19 )
      {
LABEL_21:
        if ( !*(_BYTE *)(a1 + 445) )
          HalpDmaFlushBuffer(v21, a2, a4, v22, v19, 0);
        goto LABEL_16;
      }
      if ( !*(_BYTE *)(a1 + 445) )
      {
        v21 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
        if ( (v21 & v24) != 0 || (v21 & v36) != 0 )
          goto LABEL_9;
        goto LABEL_21;
      }
    }
LABEL_16:
    v28 = *v6;
    LODWORD(v49) = *v6;
    if ( !v48 )
    {
      if ( !v19 && *(_BYTE *)(a1 + 444) )
        HalpDmaZeroMapBuffers(v21, v46, a4 & 0xFFF, v28);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 160) + 128LL), &LockHandle);
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 432), a2);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    goto LABEL_17;
  }
  v30 = 4096 - (a4 & 0xFFF);
  v31 = (__int64 *)(a2 + 8 * (((a4 - *(_QWORD *)(a2 + 32)) >> 12) + 6));
  v32 = a4 & 0xFFF;
  v33 = *v6;
  v34 = v33;
  v35 = *v31;
  v24 = v32 + (*v31 << 12);
  if ( v30 < (unsigned int)v33 )
  {
    do
    {
      if ( v35 + 1 != *++v31 )
        break;
      if ( ((*v31 ^ v35) & 0xFFFFFFFFFFF00000uLL) != 0 )
        break;
      v30 += 4096;
      v35 = *v31;
    }
    while ( v30 < (unsigned int)v33 );
    v34 = *v6;
    if ( v30 < (unsigned int)v33 )
    {
      *v6 = v30;
      v34 = v30;
    }
  }
  if ( !*(_BYTE *)(a1 + 445) )
    HalpDmaFlushBuffer(v33, a2, a4, v34, a6, 0);
LABEL_17:
  if ( *(_DWORD *)(a1 + 520) == 3 )
  {
    v38 = *(_QWORD **)(a3 + 24);
    v39 = v24 & 0xFFF;
    v40 = (v39 + *v6 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( *(_BYTE *)(a3 + 64) )
    {
      v41 = *(unsigned int *)(a3 + 16);
      v24 = *v38 + v39 + v41 + *(_QWORD *)(a3 + 32);
      *(_DWORD *)(a3 + 16) = v40 + v41;
    }
    else
    {
      guard_dispatch_icall_no_overrides(v38, *(_QWORD *)(a3 + 40));
      *(_QWORD *)(a3 + 40) += v40;
      return MEMORY[0] + v39;
    }
  }
  return v24;
}
