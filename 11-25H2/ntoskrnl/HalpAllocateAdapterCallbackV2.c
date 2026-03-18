/*
 * XREFs of HalpAllocateAdapterCallbackV2 @ 0x1403353E0
 * Callers:
 *     HalBuildScatterGatherListV2 @ 0x1403346B0 (HalBuildScatterGatherListV2.c)
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

__int64 __fastcall HalpAllocateAdapterCallbackV2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int *v5; // r10
  __int64 v6; // rax
  __int64 *v7; // r14
  unsigned __int64 v8; // rsi
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r12
  char v13; // r11
  __int64 v14; // rbp
  unsigned int v15; // r8d
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // edx
  int v19; // r9d
  unsigned int v20; // eax
  int *v21; // r15
  bool v22; // zf
  unsigned int v23; // r8d
  int v24; // r8d
  char v25; // r11
  unsigned int ContiguousPieceV2; // eax
  unsigned __int64 v27; // rcx
  char v28; // r11
  unsigned __int64 v29; // r12
  unsigned int v30; // r8d
  __int64 v31; // rbx
  __int64 v32; // rbx
  _QWORD *v33; // r9
  _BYTE *v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned int v39; // r9d
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // r10
  __int64 v43; // r8
  unsigned int v44; // edx
  __int64 v45; // r9
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // r12
  _QWORD *v49; // r10
  int v50; // ecx
  __int64 v51; // rdx
  __int64 v52; // rax
  size_t v53; // [rsp+20h] [rbp-E8h]
  char v54; // [rsp+28h] [rbp-E0h]
  char v55; // [rsp+30h] [rbp-D8h]
  int v56; // [rsp+40h] [rbp-C8h]
  __int64 v57; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v58; // [rsp+50h] [rbp-B8h]
  __int128 v59; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v60; // [rsp+68h] [rbp-A0h]
  __int64 v61; // [rsp+70h] [rbp-98h]
  int *v62; // [rsp+78h] [rbp-90h]
  __int64 v63; // [rsp+80h] [rbp-88h]
  __int64 v64; // [rsp+88h] [rbp-80h]
  __int64 v65; // [rsp+90h] [rbp-78h]
  __int128 v66; // [rsp+98h] [rbp-70h]
  __int64 v67; // [rsp+A8h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-58h] BYREF
  char v70; // [rsp+120h] [rbp+18h]
  bool v71; // [rsp+128h] [rbp+20h]
  unsigned __int64 v72; // [rsp+128h] [rbp+20h]

  v4 = *(_QWORD *)(a4 + 8);
  v5 = (int *)(a4 + 48);
  v6 = *(_QWORD *)(a4 + 104);
  v7 = (__int64 *)(a4 + 64);
  v8 = *(_QWORD *)(a4 + 32);
  v10 = *(_QWORD *)(a4 + 120);
  v11 = a1;
  v12 = *(_QWORD *)(a4 + 128);
  v13 = *(_BYTE *)(a4 + 152);
  v14 = *(_QWORD *)(a4 + 144);
  *(_QWORD *)(a4 + 24) = a3;
  v15 = *(_DWORD *)(a4 + 40);
  v65 = v6;
  *(_QWORD *)(a4 + 56) = a4;
  LODWORD(v6) = *(_DWORD *)(v4 + 40) + *(_DWORD *)(v4 + 44) - v8;
  v63 = v10;
  v16 = *(_DWORD *)(v4 + 32) + v6;
  v64 = v12;
  v70 = v13;
  v62 = (int *)(a4 + 48);
  if ( v15 )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)v4;
      v18 = v15;
      v19 = v15;
      if ( v16 <= v15 )
        v18 = v16;
      if ( v17 )
        v19 = v18;
      v20 = v15 - v18;
      v15 = 0;
      v56 = v19;
      if ( v17 )
        v15 = v20;
      v58 = v15;
      if ( v19 > 0 )
        break;
LABEL_29:
      v4 = *(_QWORD *)v4;
      if ( v4 )
      {
        v8 = *(_QWORD *)(v4 + 32) + *(unsigned int *)(v4 + 44);
        v16 = *(_DWORD *)(v4 + 40);
        if ( v15 )
          continue;
      }
      v5 = v62;
      v11 = a1;
      goto LABEL_32;
    }
    v21 = (int *)(v7 + 1);
    while ( 1 )
    {
      *v21 = v19;
      v22 = *(_DWORD *)(v14 + 520) == 3;
      v66 = 0LL;
      v67 = 0LL;
      v59 = 0LL;
      LODWORD(v60) = 0;
      *(_BYTE *)(v14 + 524) = 1;
      if ( v22 )
      {
        v46 = *(_DWORD *)(v14 + 252);
        if ( *v21 > v46 )
          *v21 = v46;
      }
      if ( !a3 )
      {
        v39 = *v21;
        v40 = v8 & 0xFFF;
        v41 = ((v8 - *(_QWORD *)(v4 + 32)) >> 12) + 6;
        v42 = *(_QWORD *)(v4 + 8 * v41);
        v43 = v4 + 8 * v41;
        v44 = 4096 - v40;
        v32 = v40 + (v42 << 12);
        if ( 4096 - (int)v40 < (unsigned int)*v21 )
        {
          do
          {
            v40 = *(_QWORD *)(v43 + 8);
            v43 += 8LL;
            if ( v42 + 1 != v40 )
              goto LABEL_41;
            if ( ((v42 ^ v40) & 0xFFFFFFFFFFF00000uLL) != 0 )
              break;
            v44 += 4096;
            v42 = v40;
          }
          while ( v44 < v39 );
          if ( v44 < v39 )
          {
LABEL_41:
            *v21 = v44;
            v39 = v44;
          }
        }
        if ( !*(_BYTE *)(v14 + 445) )
          HalpDmaFlushBuffer(v40, v4, v8, v39, v13, 0);
        goto LABEL_26;
      }
      if ( *(_DWORD *)(v14 + 156) == 2 )
      {
        v23 = *v21;
        v57 = 0LL;
        memset(&LockHandle, 0, sizeof(LockHandle));
        if ( v23 )
        {
          v71 = *(_BYTE *)(v14 + 441) != 0;
          v22 = *(_BYTE *)(v14 + 442) == 0;
          v61 = *(_QWORD *)(a3 + 56);
          if ( v22 )
          {
            HalpDmaMapContiguousTransferV2(v14, v4, a3, v8, (__int64)v21, v13, (__int64)&v57);
            v32 = v57;
            goto LABEL_25;
          }
          if ( (unsigned int)HalpDmaGetAdapterVersion(v14) == 2 )
            ContiguousPieceV2 = HalpDmaNextContiguousPieceV2(v14, v4, a3, v8, v25, v24);
          else
            ContiguousPieceV2 = HalpDmaNextContiguousPieceV3(v14, v4, a3, v8, v25, v24);
          v28 = v70;
          *v21 = ContiguousPieceV2;
          v29 = v8 & 0xFFF;
          v30 = ContiguousPieceV2;
          v31 = (unsigned int)((v8 - *(_QWORD *)(v4 + 32)) >> 12);
          v57 = ContiguousPieceV2;
          v32 = v29 + (*(_QWORD *)(v4 + 8 * v31 + 48) << 12);
          if ( *(_QWORD *)(v14 + 144) < (unsigned __int64)ContiguousPieceV2 + v32 - 1 )
          {
            v33 = *(_QWORD **)(a3 + 56);
            v34 = (_BYTE *)(v14 + 445);
            v32 = v29 + *v33;
            if ( v70 )
            {
              v55 = 0;
              v54 = v70;
              goto LABEL_20;
            }
LABEL_47:
            if ( !*v34 )
            {
              v55 = 1;
              v54 = 0;
LABEL_20:
              LODWORD(v53) = v30;
              HalpDmaSyncMapBuffers(v14, v4, v8, (_DWORD)v33, v53, v54, v55, 0);
            }
            v27 = *(_QWORD *)(a3 + 56);
            v35 = (v29 + v57 + 4095) >> 12;
            if ( (_DWORD)v35 )
            {
              v36 = (unsigned int)v35;
              do
              {
                v27 = *(_QWORD *)(v27 + 8);
                --v36;
              }
              while ( v36 );
            }
            *(_QWORD *)(a3 + 56) = v27;
LABEL_25:
            if ( !v71 )
            {
              if ( !v70 && *(_BYTE *)(v14 + 444) )
                HalpDmaZeroMapBuffers(v27, v61, v8 & 0xFFF, (unsigned int)*v21);
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v14 + 160) + 128LL), &LockHandle);
              guard_dispatch_icall_no_overrides(*(_QWORD *)(v14 + 432), v4);
              KeReleaseInStackQueuedSpinLock(&LockHandle);
            }
            goto LABEL_26;
          }
          if ( !v70 )
          {
            if ( *(_BYTE *)(v14 + 445) )
              goto LABEL_25;
            v27 = (unsigned int)HalpDmaGetAdapterCacheAlignment(v14) - 1;
            if ( (v27 & v32) != 0 || (v27 & v45) != 0 )
            {
              v33 = *(_QWORD **)(a3 + 56);
              v34 = (_BYTE *)(v14 + 445);
              v32 = v29 + *v33;
              goto LABEL_47;
            }
          }
          if ( !*(_BYTE *)(v14 + 445) )
            HalpDmaFlushBuffer(v27, v4, v8, v30, v28, 0);
          goto LABEL_25;
        }
        v32 = 0LL;
      }
      else
      {
        v32 = HalpMapTransferV3(v14, v4, a3, v8, (__int64)v21, v13, 0);
      }
LABEL_26:
      if ( *(_DWORD *)(v14 + 520) == 3 )
      {
        v47 = (unsigned int)*v21;
        v48 = v32 & 0xFFF;
        v49 = *(_QWORD **)(a3 + 24);
        v50 = (v47 + v48 + 4095) & 0xFFFFF000;
        v72 = (v47 + v48 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( *(_BYTE *)(a3 + 64) )
        {
          v52 = *(unsigned int *)(a3 + 16);
          v32 = v48 + *v49 + v52 + *(_QWORD *)(a3 + 32);
          *(_DWORD *)(a3 + 16) = v50 + v52;
        }
        else
        {
          v51 = *(_QWORD *)(a3 + 40);
          v60 = (v47 + v48 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          LODWORD(v59) = 1;
          *((_QWORD *)&v59 + 1) = v32 & 0xFFFFFFFFFFFFF000uLL;
          guard_dispatch_icall_no_overrides(v49, v51);
          *(_QWORD *)(a3 + 40) += v72;
          v32 = *(_QWORD *)v66 + v48 + *((_QWORD *)&v66 + 1);
        }
      }
      v37 = (unsigned int)*v21;
      v21 += 6;
      v8 += v37;
      v13 = v70;
      v19 = v56 - v37;
      *v7 = v32;
      v7 += 3;
      v56 = v19;
      if ( v19 <= 0 )
      {
        v15 = v58;
        goto LABEL_29;
      }
    }
  }
LABEL_32:
  *v5 = ((int)v7 - (int)v5 - 16) / 24;
  guard_dispatch_icall_no_overrides(v11, v65);
  return 3LL;
}
