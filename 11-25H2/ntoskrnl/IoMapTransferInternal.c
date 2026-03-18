/*
 * XREFs of IoMapTransferInternal @ 0x140333E20
 * Callers:
 *     HalMapTransferEx @ 0x140332780 (HalMapTransferEx.c)
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

__int64 __fastcall IoMapTransferInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int *a5,
        char a6,
        char a7)
{
  __int64 v7; // rbx
  int v12; // r8d
  int v13; // r9d
  char v14; // r12
  unsigned int ContiguousPieceV2; // eax
  unsigned __int64 v16; // rcx
  unsigned int v17; // r9d
  __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v24; // rcx
  __int64 *v25; // r10
  unsigned __int64 v26; // rax
  unsigned int v27; // r8d
  unsigned int v28; // r9d
  __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  __int64 v31; // r8
  size_t v32; // [rsp+20h] [rbp-78h]
  char v33; // [rsp+28h] [rbp-70h]
  char v34; // [rsp+30h] [rbp-68h]
  unsigned __int64 v35; // [rsp+40h] [rbp-58h] BYREF
  __int64 v36; // [rsp+48h] [rbp-50h]
  __int64 v37; // [rsp+50h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-40h] BYREF
  char v39; // [rsp+B0h] [rbp+18h]

  v7 = 0LL;
  if ( a3 )
  {
    if ( *(_DWORD *)(a1 + 156) != 2 )
      return HalpMapTransferV3(a1, a2, a3, a4, (__int64)a5, a6, a7);
    v35 = 0LL;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *a5 )
    {
      v39 = *(_BYTE *)(a1 + 441);
      v37 = *(_QWORD *)(a3 + 56);
      if ( *(_BYTE *)(a1 + 442) )
      {
        v14 = a6;
        if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
          ContiguousPieceV2 = HalpDmaNextContiguousPieceV2(a1, a2, a3, v13, a6, v12);
        else
          ContiguousPieceV2 = HalpDmaNextContiguousPieceV3(a1, a2, a3, v13, a6, v12);
        *a5 = ContiguousPieceV2;
        v16 = a4 & 0xFFF;
        v17 = ContiguousPieceV2;
        v18 = (unsigned int)((a4 - *(_QWORD *)(a2 + 32)) >> 12);
        v36 = ContiguousPieceV2;
        v35 = v16;
        v19 = v16 + (*(_QWORD *)(a2 + 8 * v18 + 48) << 12);
        if ( *(_QWORD *)(a1 + 144) < ContiguousPieceV2 + v19 - 1 )
        {
LABEL_8:
          v20 = *(_QWORD **)(a3 + 56);
          v19 = *v20 + v35;
          if ( a6 )
          {
            v34 = 0;
            v33 = a6;
          }
          else
          {
            if ( *(_BYTE *)(a1 + 445) )
              goto LABEL_11;
            v34 = 1;
            v33 = 0;
          }
          LODWORD(v32) = v17;
          HalpDmaSyncMapBuffers(a1, a2, a4, (_DWORD)v20, v32, v33, v34, 0);
LABEL_11:
          v16 = *(_QWORD *)(a3 + 56);
          v21 = (v36 + 4095 + v35) >> 12;
          if ( (_DWORD)v21 )
          {
            v22 = (unsigned int)v21;
            do
            {
              v16 = *(_QWORD *)(v16 + 8);
              --v22;
            }
            while ( v22 );
          }
          *(_QWORD *)(a3 + 56) = v16;
          goto LABEL_15;
        }
        if ( a6 )
        {
LABEL_20:
          if ( !*(_BYTE *)(a1 + 445) )
            HalpDmaFlushBuffer(v16, a2, a4, v17, a6, 0);
          goto LABEL_15;
        }
        if ( !*(_BYTE *)(a1 + 445) )
        {
          v16 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
          if ( (v16 & v19) != 0 || (v16 & v31) != 0 )
            goto LABEL_8;
          goto LABEL_20;
        }
      }
      else
      {
        v14 = a6;
        HalpDmaMapContiguousTransferV2(a1, a2, a3, a4, (__int64)a5, a6, (__int64)&v35);
        v19 = v35;
      }
LABEL_15:
      if ( !v39 )
      {
        if ( !v14 )
        {
          if ( *(_BYTE *)(a1 + 444) )
            HalpDmaZeroMapBuffers(v16, v37, a4 & 0xFFF, *a5);
        }
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 160) + 128LL), &LockHandle);
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 432), a2);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      return v19;
    }
    return v7;
  }
  v24 = 4096 - (unsigned int)(a4 & 0xFFF);
  v25 = (__int64 *)(a2 + 48 + 8 * ((a4 - *(_QWORD *)(a2 + 32)) >> 12));
  v26 = a4 & 0xFFF;
  v27 = *a5;
  v28 = *a5;
  v29 = *v25;
  v30 = v26 + (*v25 << 12);
  if ( (unsigned int)v24 < *a5 )
  {
    do
    {
      if ( v29 + 1 != *++v25 )
        break;
      if ( ((*v25 ^ v29) & 0xFFFFFFFFFFF00000uLL) != 0 )
        break;
      v24 = (unsigned int)(v24 + 4096);
      v29 = *v25;
    }
    while ( (unsigned int)v24 < v27 );
    v28 = *a5;
    if ( (unsigned int)v24 < v27 )
    {
      *a5 = v24;
      v28 = v24;
    }
  }
  if ( !*(_BYTE *)(a1 + 445) )
    HalpDmaFlushBuffer(v24, a2, a4, v28, a6, a7);
  return v30;
}
