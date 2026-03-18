/*
 * XREFs of ObpFreeObject @ 0x1408469C0
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x14024B468 (PspReturnResourceQuota.c)
 *     PspReturnQuota @ 0x14024C640 (PspReturnQuota.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PspRemoveQuotaBlock @ 0x1409D5BC0 (PspRemoveQuotaBlock.c)
 *     ObpLockObjectTypeExclusive @ 0x1409D6734 (ObpLockObjectTypeExclusive.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ObpFreeObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  _QWORD *v6; // r14
  PVOID *v7; // r12
  int *v8; // r15
  PVOID *v9; // r13
  unsigned int *v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r14
  ULONG_PTR v14; // r9
  unsigned int v15; // ecx
  ULONG_PTR v16; // rax
  __int64 v17; // r14
  __int64 v18; // r9
  ULONG v19; // edx
  void *v20; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  struct _SLIST_ENTRY *v22; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  signed __int64 v26; // rax
  signed __int64 v27; // rdx
  __int64 v28; // rtt
  __int64 v29; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  bool v31; // zf
  void *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  unsigned int v45; // [rsp+60h] [rbp+8h]
  ULONG_PTR v46; // [rsp+60h] [rbp+8h]
  unsigned int v47; // [rsp+68h] [rbp+10h]
  __int64 v48; // [rsp+70h] [rbp+18h]

  v5 = *(unsigned __int8 *)(a1 + 26);
  v6 = (_QWORD *)(a1 - 32);
  if ( (v5 & 1) == 0 )
    v6 = 0LL;
  if ( (v5 & 2) != 0 )
  {
    a3 = a1 - ObpInfoMaskToOffset[v5 & 3];
    v48 = a3;
  }
  else
  {
    v48 = 0LL;
  }
  if ( (v5 & 4) != 0 )
    v7 = (PVOID *)(a1 - ObpInfoMaskToOffset[v5 & 7]);
  else
    v7 = 0LL;
  if ( (v5 & 8) != 0 )
    v8 = (int *)(a1 - ObpInfoMaskToOffset[v5 & 0xF]);
  else
    v8 = 0LL;
  if ( (v5 & 0x20) != 0 )
    v9 = (PVOID *)(a1 - ObpInfoMaskToOffset[v5 & 0x3F]);
  else
    v9 = 0LL;
  v10 = (unsigned int *)(a1 - ObpInfoMaskToOffset[v5]);
  if ( (v5 & 0x80u) != 0 )
    v10 = (unsigned int *)((char *)v10 + 4LL - *v10);
  v11 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(a1) ^ (unsigned __int64)*(unsigned __int8 *)(a1 + 24)];
  if ( v6 && (_QWORD *)*v6 != v6 )
  {
    ObpLockObjectTypeExclusive(v11);
    v24 = *v6;
    v25 = (_QWORD *)v6[1];
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v25 != v6 )
      __fastfail(3u);
    *v25 = v24;
    *(_QWORD *)(v24 + 8) = v25;
    _m_prefetchw((const void *)(v11 + 184));
    v26 = *(_QWORD *)(v11 + 184);
    v27 = v26 - 16;
    if ( (v26 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v27 = 0LL;
    if ( (v26 & 2) != 0
      || (v28 = *(_QWORD *)(v11 + 184),
          v28 != _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 184), v27, v26)) )
    {
      ExfReleasePushLock((_QWORD *)(v11 + 184));
    }
    KeAbPostRelease(v11 + 184);
    CurrentThread = KeGetCurrentThread();
    v31 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v31 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery((__int64)CurrentThread, v29);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v11 + 44));
  v12 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(a1 + 27) & 1) == 0 )
  {
    if ( !v12 )
      goto LABEL_31;
    if ( !v8 )
    {
      v15 = *(_DWORD *)(v11 + 104);
      v16 = *(unsigned int *)(v11 + 108);
      goto LABEL_24;
    }
    v13 = *((_QWORD *)v8 + 2);
    v45 = *v8;
    v47 = v8[1];
    if ( !v13 || (v14 = (unsigned int)v8[2], v13 == 1) )
    {
      v15 = *v8;
      goto LABEL_23;
    }
    if ( v8[2] )
      PspReturnQuota((__int64 *)v13, 0LL, 1, v14);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 512), 0xFFFFFFFF) != 1 )
    {
LABEL_22:
      v15 = v45;
LABEL_23:
      v16 = v47;
LABEL_24:
      v17 = *(_QWORD *)(a1 + 32);
      v46 = v16;
      v18 = v15;
      if ( v17 == 1 )
        goto LABEL_30;
      if ( v15 )
      {
        PspReturnQuota((__int64 *)v17, 0LL, 1, v15);
        v16 = v46;
      }
      if ( v16 )
        PspReturnQuota((__int64 *)v17, 0LL, 0, v16);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 512), 0xFFFFFFFF) != 1 )
        goto LABEL_30;
      if ( (PspResourceFlags[0] & 3) != 1 )
      {
LABEL_79:
        if ( (byte_140FC6348 & 3) != 1 )
          goto LABEL_83;
        v18 = *(_QWORD *)(v17 + 208);
        a3 = *(_QWORD *)(v17 + 192);
        if ( a3 + *(_QWORD *)(v17 + 200) )
        {
          if ( v18 )
          {
            v36 = _InterlockedExchange64((volatile __int64 *)(v17 + 200), 0LL);
            a3 = _InterlockedExchange64((volatile __int64 *)(v17 + 192), 0LL) + v36;
          }
          if ( a3 )
          {
LABEL_99:
            PspReturnResourceQuota(1u, v17 + 128, a3, v18 != 0);
LABEL_83:
            if ( (byte_140FC6350 & 3) != 1 )
              goto LABEL_87;
            v18 = *(_QWORD *)(v17 + 336);
            a3 = *(_QWORD *)(v17 + 320);
            if ( a3 + *(_QWORD *)(v17 + 328) )
            {
              if ( v18 )
              {
                v37 = _InterlockedExchange64((volatile __int64 *)(v17 + 328), 0LL);
                a3 = _InterlockedExchange64((volatile __int64 *)(v17 + 320), 0LL) + v37;
              }
              if ( a3 )
              {
LABEL_103:
                PspReturnResourceQuota(2u, v17 + 256, a3, v18 != 0);
LABEL_87:
                v34 = v17 + 384;
                if ( (byte_140FC6358 & 3) != 1 )
                {
LABEL_91:
                  PspRemoveQuotaBlock(v17, v34, a3, v18);
                  ExFreePoolWithTag((PVOID)v17, 0);
LABEL_30:
                  *(_QWORD *)(a1 + 32) = 0LL;
                  goto LABEL_31;
                }
                v18 = *(_QWORD *)(v17 + 464);
                a3 = *(_QWORD *)(v17 + 448);
                if ( a3 + *(_QWORD *)(v17 + 456) )
                {
                  if ( v18 )
                  {
                    v38 = _InterlockedExchange64((volatile __int64 *)(v17 + 456), 0LL);
                    a3 = _InterlockedExchange64((volatile __int64 *)(v17 + 448), 0LL) + v38;
                  }
                  if ( a3 )
                    goto LABEL_107;
                }
                else
                {
                  a3 = 0LL;
                }
                if ( !v18 )
                  goto LABEL_91;
LABEL_107:
                PspReturnResourceQuota(3u, v34, a3, v18 != 0);
                goto LABEL_91;
              }
            }
            else
            {
              a3 = 0LL;
            }
            if ( !v18 )
              goto LABEL_87;
            goto LABEL_103;
          }
        }
        else
        {
          a3 = 0LL;
        }
        if ( !v18 )
          goto LABEL_83;
        goto LABEL_99;
      }
      v33 = *(_QWORD *)(v17 + 80);
      a3 = *(_QWORD *)(v17 + 64);
      v18 = v33 != 0;
      if ( a3 + *(_QWORD *)(v17 + 72) )
      {
        if ( v33 )
        {
          v35 = _InterlockedExchange64((volatile __int64 *)(v17 + 72), 0LL);
          a3 = _InterlockedExchange64((volatile __int64 *)(v17 + 64), 0LL) + v35;
        }
        if ( a3 )
        {
LABEL_95:
          PspReturnResourceQuota(0, v17, a3, v18);
          goto LABEL_79;
        }
      }
      else
      {
        a3 = 0LL;
      }
      if ( !v33 )
        goto LABEL_79;
      goto LABEL_95;
    }
    if ( (PspResourceFlags[0] & 3) != 1 )
    {
LABEL_112:
      if ( (byte_140FC6348 & 3) != 1 )
        goto LABEL_116;
      v14 = *(_QWORD *)(v13 + 208);
      a3 = *(_QWORD *)(v13 + 192);
      if ( a3 + *(_QWORD *)(v13 + 200) )
      {
        if ( v14 )
        {
          v42 = _InterlockedExchange64((volatile __int64 *)(v13 + 200), 0LL);
          a3 = _InterlockedExchange64((volatile __int64 *)(v13 + 192), 0LL) + v42;
        }
        if ( a3 )
        {
LABEL_132:
          PspReturnResourceQuota(1u, v13 + 128, a3, v14 != 0);
LABEL_116:
          if ( (byte_140FC6350 & 3) != 1 )
            goto LABEL_120;
          v14 = *(_QWORD *)(v13 + 336);
          a3 = *(_QWORD *)(v13 + 320);
          if ( a3 + *(_QWORD *)(v13 + 328) )
          {
            if ( v14 )
            {
              v43 = _InterlockedExchange64((volatile __int64 *)(v13 + 328), 0LL);
              a3 = _InterlockedExchange64((volatile __int64 *)(v13 + 320), 0LL) + v43;
            }
            if ( a3 )
            {
LABEL_136:
              PspReturnResourceQuota(2u, v13 + 256, a3, v14 != 0);
LABEL_120:
              v40 = v13 + 384;
              if ( (byte_140FC6358 & 3) != 1 )
              {
LABEL_124:
                PspRemoveQuotaBlock(v13, v40, a3, v14);
                ExFreePoolWithTag((PVOID)v13, 0);
                goto LABEL_22;
              }
              v14 = *(_QWORD *)(v13 + 464);
              a3 = *(_QWORD *)(v13 + 448);
              if ( a3 + *(_QWORD *)(v13 + 456) )
              {
                if ( v14 )
                {
                  v44 = _InterlockedExchange64((volatile __int64 *)(v13 + 456), 0LL);
                  a3 = _InterlockedExchange64((volatile __int64 *)(v13 + 448), 0LL) + v44;
                }
                if ( a3 )
                  goto LABEL_140;
              }
              else
              {
                a3 = 0LL;
              }
              if ( !v14 )
                goto LABEL_124;
LABEL_140:
              PspReturnResourceQuota(3u, v40, a3, v14 != 0);
              goto LABEL_124;
            }
          }
          else
          {
            a3 = 0LL;
          }
          if ( !v14 )
            goto LABEL_120;
          goto LABEL_136;
        }
      }
      else
      {
        a3 = 0LL;
      }
      if ( !v14 )
        goto LABEL_116;
      goto LABEL_132;
    }
    v39 = *(_QWORD *)(v13 + 80);
    a3 = *(_QWORD *)(v13 + 64);
    v14 = v39 != 0;
    if ( a3 + *(_QWORD *)(v13 + 72) )
    {
      if ( v39 )
      {
        v41 = _InterlockedExchange64((volatile __int64 *)(v13 + 72), 0LL);
        a3 = _InterlockedExchange64((volatile __int64 *)(v13 + 64), 0LL) + v41;
      }
      if ( a3 )
      {
LABEL_128:
        PspReturnResourceQuota(0, v13, a3, v14);
        goto LABEL_112;
      }
    }
    else
    {
      a3 = 0LL;
    }
    if ( !v39 )
      goto LABEL_112;
    goto LABEL_128;
  }
  if ( !v12 )
    goto LABEL_31;
  v20 = *(void **)(v12 + 32);
  if ( v20 )
  {
    if ( *(_BYTE *)(v12 + 16) <= 1u )
      ExFreePoolWithTag(v20, 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = 0LL;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v22 = *(struct _SLIST_ENTRY **)(a1 + 32);
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalFrees;
  if ( LOWORD(P->ListHead.Alignment) < P->Depth
    || (++P->FreeMisses, P = CurrentPrcb->PPLookasideList[4].L,
                         ++P->TotalFrees,
                         LOWORD(P->ListHead.Alignment) < P->Depth) )
  {
    RtlpInterlockedPushEntrySList(&P->ListHead, v22);
  }
  else
  {
    ++P->FreeMisses;
    if ( (void (__stdcall *)(PVOID))P->FreeEx == ExFreePool )
    {
      ExFreePool(v22);
      *(_QWORD *)(a1 + 32) = 0LL;
      goto LABEL_31;
    }
    guard_dispatch_icall_no_overrides(v22, v22, CurrentPrcb, a4);
  }
  *(_QWORD *)(a1 + 32) = 0LL;
LABEL_31:
  if ( v7 && (*(_BYTE *)(a1 + 27) & 0x40) == 0 )
  {
    ExFreePoolWithTag(*v7, 0);
    *v7 = 0LL;
  }
  if ( v48 )
  {
    v32 = *(void **)(v48 + 16);
    if ( v32 )
    {
      ExFreePoolWithTag(v32, 0);
      *(_QWORD *)(v48 + 16) = 0LL;
    }
  }
  if ( v9 && *v9 )
  {
    ExFreePoolWithTag(*v9, 0);
    *v9 = 0LL;
  }
  *(_BYTE *)(a1 + 24) = ObHeaderCookie ^ BYTE1(a1) ^ 1;
  if ( v11 )
    v19 = *(_DWORD *)(v11 + 192);
  else
    v19 = 1416258127;
  ExFreePoolWithTag(v10, v19);
}
