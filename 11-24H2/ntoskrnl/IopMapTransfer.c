/*
 * XREFs of IopMapTransfer @ 0x14038DCD0
 * Callers:
 *     <none>
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
  __int64 v38; // r8
  _QWORD *v39; // rcx
  __int64 v40; // rdi
  unsigned __int64 v41; // r14
  _QWORD *v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  size_t v45; // [rsp+20h] [rbp-69h]
  char v46; // [rsp+28h] [rbp-61h]
  char v47; // [rsp+30h] [rbp-59h]
  __int64 v48; // [rsp+40h] [rbp-49h]
  __int64 v49; // [rsp+48h] [rbp-41h]
  _DWORD v50[2]; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-31h]
  unsigned __int64 v52; // [rsp+60h] [rbp-29h]
  __int128 v53; // [rsp+68h] [rbp-21h]
  __int64 v54; // [rsp+78h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-9h] BYREF
  char v56; // [rsp+E0h] [rbp+57h]
  unsigned __int64 v57; // [rsp+F0h] [rbp+67h] BYREF

  v6 = a5;
  v54 = 0LL;
  v7 = *(_DWORD *)(a1 + 520) == 3;
  v50[1] = 0;
  *(_BYTE *)(a1 + 524) = 1;
  v53 = 0LL;
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
    v57 = v14;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !v15 )
    {
      v24 = v14;
      goto LABEL_17;
    }
    v56 = *(_BYTE *)(a1 + 441);
    v49 = *(_QWORD *)(a3 + 56);
    if ( *(_BYTE *)(a1 + 442) == (_BYTE)v14 )
    {
      v19 = a6;
      HalpDmaMapContiguousTransferV2(a1, a2, (_QWORD *)a3, v13, v6, a6, &v57);
      v24 = v57;
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
      v48 = ContiguousPieceV2;
      v57 = v21;
      v24 = v21 + (*(_QWORD *)(a2 + 8 * v23 + 48) << 12);
      if ( *(_QWORD *)(a1 + 144) < (unsigned __int64)ContiguousPieceV2 + v24 - 1 )
      {
LABEL_9:
        v25 = *(_QWORD **)(a3 + 56);
        v24 = *v25 + v57;
        if ( v19 )
        {
          v47 = 0;
          v46 = v19;
        }
        else
        {
          if ( *(_BYTE *)(a1 + 445) )
            goto LABEL_12;
          v47 = 1;
          v46 = 0;
        }
        LODWORD(v45) = v22;
        HalpDmaSyncMapBuffers(a1, a2, a4, (_DWORD)v25, v45, v46, v47, 0);
LABEL_12:
        v21 = *(_QWORD *)(a3 + 56);
        v26 = (v48 + 4095 + v57) >> 12;
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
    LODWORD(v57) = *v6;
    if ( !v56 )
    {
      if ( !v19 && *(_BYTE *)(a1 + 444) )
        HalpDmaZeroMapBuffers(v21, v49, a4 & 0xFFF, v28);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 160) + 128LL), &LockHandle);
      LOBYTE(v38) = v19;
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 432), a2, v38, a4);
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
    v39 = *(_QWORD **)(a3 + 24);
    v40 = v24 & 0xFFF;
    v41 = (v40 + *v6 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( *(_BYTE *)(a3 + 64) )
    {
      v44 = *(unsigned int *)(a3 + 16);
      v24 = *v39 + v40 + v44 + *(_QWORD *)(a3 + 32);
      *(_DWORD *)(a3 + 16) = v41 + v44;
    }
    else
    {
      v50[0] = 1;
      v51 = v24 & 0xFFFFFFFFFFFFF000uLL;
      v52 = v41;
      guard_dispatch_icall_no_overrides(v39, *(_QWORD *)(a3 + 40), 3LL, v50);
      v43 = *((_QWORD *)&v53 + 1);
      v42 = (_QWORD *)v53;
      *(_QWORD *)(a3 + 40) += v41;
      return *v42 + v40 + v43;
    }
  }
  return v24;
}
