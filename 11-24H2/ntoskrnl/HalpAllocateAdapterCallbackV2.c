/*
 * XREFs of HalpAllocateAdapterCallbackV2 @ 0x1403886C0
 * Callers:
 *     HalBuildScatterGatherListV2 @ 0x1403879B0 (HalBuildScatterGatherListV2.c)
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

__int64 __fastcall HalpAllocateAdapterCallbackV2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  int *v5; // r13
  char v6; // al
  __int64 *v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rbx
  unsigned int v12; // r12d
  __int64 v13; // rbp
  __int64 v14; // r8
  int v15; // eax
  unsigned int v16; // eax
  unsigned __int64 v17; // r13
  __int64 v18; // rcx
  int v19; // edx
  int v20; // r14d
  unsigned int v21; // eax
  unsigned int *v22; // r15
  bool v23; // zf
  unsigned int v24; // r8d
  int v25; // r8d
  unsigned int ContiguousPieceV2; // eax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r8
  unsigned int v29; // r10d
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // r9
  char v33; // al
  _QWORD *v34; // r9
  _BYTE *v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rax
  unsigned int v41; // r9d
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // r10
  __int64 v45; // r8
  unsigned int v46; // edx
  __int64 v47; // r9
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // r10
  int v52; // edx
  __int64 v53; // rdx
  __int64 v54; // rax
  size_t v55; // [rsp+20h] [rbp-E8h]
  char v56; // [rsp+28h] [rbp-E0h]
  char v57; // [rsp+30h] [rbp-D8h]
  bool v58; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v59; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v60; // [rsp+50h] [rbp-B8h]
  __int64 v61; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v62; // [rsp+60h] [rbp-A8h]
  __int128 v63; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v64; // [rsp+78h] [rbp-90h]
  int *v65; // [rsp+80h] [rbp-88h]
  __int64 v66; // [rsp+88h] [rbp-80h]
  __int64 v67; // [rsp+90h] [rbp-78h]
  __int64 v68; // [rsp+98h] [rbp-70h]
  __int128 v69; // [rsp+A0h] [rbp-68h]
  __int64 v70; // [rsp+B0h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B8h] [rbp-50h] BYREF
  char v74; // [rsp+128h] [rbp+20h]

  v4 = *(_QWORD *)(a4 + 8);
  v5 = (int *)(a4 + 48);
  v6 = *(_BYTE *)(a4 + 152);
  v7 = (__int64 *)(a4 + 64);
  v8 = *(_QWORD *)(a4 + 32);
  v9 = a1;
  v10 = *(_QWORD *)(a4 + 120);
  v11 = *(_QWORD *)(a4 + 104);
  v12 = *(_DWORD *)(a4 + 40);
  v13 = *(_QWORD *)(a4 + 144);
  *(_QWORD *)(a4 + 24) = a3;
  v14 = *(_QWORD *)(a4 + 128);
  v74 = v6;
  *(_QWORD *)(a4 + 56) = a4;
  v15 = *(_DWORD *)(v4 + 40) + *(_DWORD *)(v4 + 44) - v8;
  v66 = v10;
  v16 = *(_DWORD *)(v4 + 32) + v15;
  v67 = v14;
  v68 = v11;
  v65 = (int *)(a4 + 48);
  v60 = v8;
  if ( v12 )
  {
    v17 = v8;
    while ( 1 )
    {
      v18 = *(_QWORD *)v4;
      v19 = v12;
      v20 = v12;
      if ( v16 <= v12 )
        v19 = v16;
      if ( v18 )
        v20 = v19;
      v21 = v12 - v19;
      v12 = 0;
      if ( v18 )
        v12 = v21;
      LODWORD(v60) = v12;
      if ( v20 > 0 )
        break;
LABEL_30:
      v4 = *(_QWORD *)v4;
      if ( v4 )
      {
        v17 = *(_QWORD *)(v4 + 32) + *(unsigned int *)(v4 + 44);
        v16 = *(_DWORD *)(v4 + 40);
        if ( v12 )
          continue;
      }
      v5 = v65;
      v9 = a1;
      v11 = v68;
      goto LABEL_33;
    }
    v22 = (unsigned int *)(v7 + 1);
    while ( 1 )
    {
      *v22 = v20;
      v23 = *(_DWORD *)(v13 + 520) == 3;
      v69 = 0LL;
      v70 = 0LL;
      v63 = 0LL;
      LODWORD(v64) = 0;
      *(_BYTE *)(v13 + 524) = 1;
      if ( v23 )
      {
        v48 = *(_DWORD *)(v13 + 252);
        if ( *v22 > v48 )
          *v22 = v48;
      }
      if ( !a3 )
      {
        v41 = *v22;
        v42 = v17 & 0xFFF;
        v43 = ((v17 - *(_QWORD *)(v4 + 32)) >> 12) + 6;
        v44 = *(_QWORD *)(v4 + 8 * v43);
        v45 = v4 + 8 * v43;
        v46 = 4096 - v42;
        v31 = v42 + (v44 << 12);
        if ( 4096 - (int)v42 < *v22 )
        {
          do
          {
            v42 = *(_QWORD *)(v45 + 8);
            v45 += 8LL;
            if ( v44 + 1 != v42 )
              goto LABEL_41;
            if ( ((v44 ^ v42) & 0xFFFFFFFFFFF00000uLL) != 0 )
              break;
            v46 += 4096;
            v44 = v42;
          }
          while ( v46 < v41 );
          if ( v46 < v41 )
          {
LABEL_41:
            *v22 = v46;
            v41 = v46;
          }
        }
        if ( !*(_BYTE *)(v13 + 445) )
          HalpDmaFlushBuffer(v42, v4, v17, v41, v74, 0);
        goto LABEL_27;
      }
      if ( (unsigned int)HalpDmaGetAdapterVersion(v13) == 2 )
      {
        v24 = *v22;
        v59 = 0LL;
        memset(&LockHandle, 0, sizeof(LockHandle));
        if ( v24 )
        {
          v58 = *(_BYTE *)(v13 + 441) != 0;
          v23 = *(_BYTE *)(v13 + 442) == 0;
          v62 = *(_QWORD *)(a3 + 56);
          if ( v23 )
          {
            HalpDmaMapContiguousTransferV2(v13, v4, (_QWORD *)a3, v17, v22, v74, &v59);
            v31 = v59;
            goto LABEL_26;
          }
          if ( (unsigned int)HalpDmaGetAdapterVersion(v13) == 2 )
            ContiguousPieceV2 = HalpDmaNextContiguousPieceV2(v13, v4, a3, v17, v74, v25);
          else
            ContiguousPieceV2 = HalpDmaNextContiguousPieceV3(v13, v4, a3, v17, v74, v25);
          *v22 = ContiguousPieceV2;
          v28 = v17 & 0xFFF;
          v29 = ContiguousPieceV2;
          v30 = (unsigned int)((v17 - *(_QWORD *)(v4 + 32)) >> 12);
          v61 = ContiguousPieceV2;
          v59 = v28;
          v31 = v28 + (*(_QWORD *)(v4 + 8 * v30 + 48) << 12);
          v32 = ContiguousPieceV2 + v31;
          v33 = v74;
          if ( *(_QWORD *)(v13 + 144) < (unsigned __int64)(v32 - 1) )
          {
            v34 = *(_QWORD **)(a3 + 56);
            v35 = (_BYTE *)(v13 + 445);
            v31 = v28 + *v34;
            if ( v74 )
            {
              v57 = 0;
              v56 = v74;
              goto LABEL_21;
            }
LABEL_47:
            if ( !*v35 )
            {
              v57 = 1;
              v56 = 0;
LABEL_21:
              LODWORD(v55) = v29;
              HalpDmaSyncMapBuffers(v13, v4, v17, (_DWORD)v34, v55, v56, v57, 0);
              v28 = v59;
            }
            v27 = *(_QWORD *)(a3 + 56);
            v36 = (v28 + v61 + 4095) >> 12;
            if ( (_DWORD)v36 )
            {
              v37 = (unsigned int)v36;
              do
              {
                v27 = *(_QWORD *)(v27 + 8);
                --v37;
              }
              while ( v37 );
            }
            *(_QWORD *)(a3 + 56) = v27;
LABEL_26:
            v38 = *v22;
            LODWORD(v59) = *v22;
            if ( !v58 )
            {
              if ( !v74 && *(_BYTE *)(v13 + 444) )
                HalpDmaZeroMapBuffers(v27, v62, v17 & 0xFFF, v38);
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v13 + 160) + 128LL), &LockHandle);
              guard_dispatch_icall_no_overrides(*(_QWORD *)(v13 + 432), v4);
              KeReleaseInStackQueuedSpinLock(&LockHandle);
            }
            goto LABEL_27;
          }
          if ( !v74 )
          {
            if ( *(_BYTE *)(v13 + 445) )
              goto LABEL_26;
            v27 = (unsigned int)HalpDmaGetAdapterCacheAlignment(v13) - 1;
            if ( (v27 & v31) != 0 || (v27 & v47) != 0 )
            {
              v34 = *(_QWORD **)(a3 + 56);
              v35 = (_BYTE *)(v13 + 445);
              v31 = v28 + *v34;
              goto LABEL_47;
            }
            v33 = v74;
          }
          if ( !*(_BYTE *)(v13 + 445) )
            HalpDmaFlushBuffer(v27, v4, v17, v29, v33, 0);
          goto LABEL_26;
        }
        v31 = 0LL;
      }
      else
      {
        v31 = HalpMapTransferV3(v13, v4, a3, v17, (__int64)v22, v74, 0);
      }
LABEL_27:
      if ( *(_DWORD *)(v13 + 520) == 3 )
      {
        v49 = *v22;
        v50 = v31 & 0xFFF;
        v51 = *(_QWORD **)(a3 + 24);
        v61 = v50;
        v52 = (v49 + v50 + 4095) & 0xFFFFF000;
        v23 = *(_BYTE *)(a3 + 64) == 0;
        v62 = (v49 + v50 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( v23 )
        {
          v64 = (v49 + v50 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          v53 = *(_QWORD *)(a3 + 40);
          LODWORD(v63) = 1;
          *((_QWORD *)&v63 + 1) = v31 & 0xFFFFFFFFFFFFF000uLL;
          guard_dispatch_icall_no_overrides(v51, v53);
          *(_QWORD *)(a3 + 40) += v62;
          v31 = *(_QWORD *)v69 + *((_QWORD *)&v69 + 1) + v61;
        }
        else
        {
          v54 = *(unsigned int *)(a3 + 16);
          v31 = v50 + *v51 + v54 + *(_QWORD *)(a3 + 32);
          *(_DWORD *)(a3 + 16) = v52 + v54;
        }
      }
      v39 = *v22;
      v22 += 6;
      *v7 = v31;
      v20 -= v39;
      v17 += v39;
      v7 += 3;
      if ( v20 <= 0 )
      {
        v12 = v60;
        goto LABEL_30;
      }
    }
  }
LABEL_33:
  *v5 = ((int)v7 - (int)v5 - 16) / 24;
  guard_dispatch_icall_no_overrides(v9, v11);
  return 3LL;
}
