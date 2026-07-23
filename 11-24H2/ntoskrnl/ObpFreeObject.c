/*
 * XREFs of ObpFreeObject @ 0x140842C80
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x14027BA78 (PspReturnResourceQuota.c)
 *     PspReturnQuota @ 0x14027CC50 (PspReturnQuota.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PspRemoveQuotaBlock @ 0x1409C59F0 (PspRemoveQuotaBlock.c)
 *     ObpLockObjectTypeExclusive @ 0x1409C6564 (ObpLockObjectTypeExclusive.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ObpFreeObject(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ecx
  _QWORD *v5; // r14
  PVOID *v6; // r12
  int *v7; // r15
  PVOID *v8; // r13
  unsigned int *v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r14
  ULONG_PTR v13; // r9
  unsigned int v14; // ecx
  ULONG_PTR v15; // rax
  __int64 v16; // r14
  __int64 v17; // r9
  ULONG v18; // edx
  void *v19; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  _SLIST_ENTRY *v21; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  signed __int64 v25; // rax
  signed __int64 v26; // rdx
  __int64 v27; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  bool v29; // zf
  void *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r8
  unsigned int v43; // [rsp+60h] [rbp+8h]
  ULONG_PTR v44; // [rsp+60h] [rbp+8h]
  unsigned int v45; // [rsp+68h] [rbp+10h]
  __int64 v46; // [rsp+70h] [rbp+18h]

  v4 = *(unsigned __int8 *)(a1 + 26);
  v5 = (_QWORD *)(a1 - 32);
  if ( (v4 & 1) == 0 )
    v5 = 0LL;
  if ( (v4 & 2) != 0 )
  {
    a3 = a1 - ObpInfoMaskToOffset[v4 & 3];
    v46 = a3;
  }
  else
  {
    v46 = 0LL;
  }
  if ( (v4 & 4) != 0 )
    v6 = (PVOID *)(a1 - ObpInfoMaskToOffset[v4 & 7]);
  else
    v6 = 0LL;
  if ( (v4 & 8) != 0 )
    v7 = (int *)(a1 - ObpInfoMaskToOffset[v4 & 0xF]);
  else
    v7 = 0LL;
  if ( (v4 & 0x20) != 0 )
    v8 = (PVOID *)(a1 - ObpInfoMaskToOffset[v4 & 0x3F]);
  else
    v8 = 0LL;
  v9 = (unsigned int *)(a1 - ObpInfoMaskToOffset[v4]);
  if ( (v4 & 0x80u) != 0 )
    v9 = (unsigned int *)((char *)v9 + 4LL - *v9);
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(a1) ^ (unsigned __int64)*(unsigned __int8 *)(a1 + 24)];
  if ( v5 && (_QWORD *)*v5 != v5 )
  {
    ObpLockObjectTypeExclusive(v10);
    v23 = *v5;
    v24 = (_QWORD *)v5[1];
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v24 != v5 )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    _m_prefetchw((const void *)(v10 + 184));
    v25 = *(_QWORD *)(v10 + 184);
    v26 = v25 - 16;
    if ( (v25 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v26 = 0LL;
    if ( (v25 & 2) != 0
      || (v27 = *(_QWORD *)(v10 + 184),
          v27 != _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 184), v26, v25)) )
    {
      ExfReleasePushLock((_QWORD *)(v10 + 184));
    }
    KeAbPostRelease(v10 + 184);
    CurrentThread = KeGetCurrentThread();
    v29 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v29 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  _InterlockedDecrement((volatile signed __int32 *)(v10 + 44));
  v11 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(a1 + 27) & 1) == 0 )
  {
    if ( !v11 )
      goto LABEL_31;
    if ( !v7 )
    {
      v14 = *(_DWORD *)(v10 + 104);
      v15 = *(unsigned int *)(v10 + 108);
      goto LABEL_24;
    }
    v12 = *((_QWORD *)v7 + 2);
    v43 = *v7;
    v45 = v7[1];
    if ( !v12 || (v13 = (unsigned int)v7[2], v12 == 1) )
    {
      v14 = *v7;
      goto LABEL_23;
    }
    if ( v7[2] )
      PspReturnQuota((__int64 *)v12, 0LL, 1, v13);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 512), 0xFFFFFFFF) != 1 )
    {
LABEL_22:
      v14 = v43;
LABEL_23:
      v15 = v45;
LABEL_24:
      v16 = *(_QWORD *)(a1 + 32);
      v44 = v15;
      v17 = v14;
      if ( v16 == 1 )
        goto LABEL_30;
      if ( v14 )
      {
        PspReturnQuota((__int64 *)v16, 0LL, 1, v14);
        v15 = v44;
      }
      if ( v15 )
        PspReturnQuota((__int64 *)v16, 0LL, 0, v15);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 512), 0xFFFFFFFF) != 1 )
        goto LABEL_30;
      if ( (PspResourceFlags[0] & 3) != 1 )
      {
LABEL_79:
        if ( (byte_140FC7398 & 3) != 1 )
          goto LABEL_83;
        v17 = *(_QWORD *)(v16 + 208);
        a3 = *(_QWORD *)(v16 + 192);
        if ( a3 + *(_QWORD *)(v16 + 200) )
        {
          if ( v17 )
          {
            v34 = _InterlockedExchange64((volatile __int64 *)(v16 + 200), 0LL);
            a3 = _InterlockedExchange64((volatile __int64 *)(v16 + 192), 0LL) + v34;
          }
          if ( a3 )
          {
LABEL_99:
            PspReturnResourceQuota(1u, v16 + 128, a3, v17 != 0);
LABEL_83:
            if ( (byte_140FC73A0 & 3) != 1 )
              goto LABEL_87;
            v17 = *(_QWORD *)(v16 + 336);
            a3 = *(_QWORD *)(v16 + 320);
            if ( a3 + *(_QWORD *)(v16 + 328) )
            {
              if ( v17 )
              {
                v35 = _InterlockedExchange64((volatile __int64 *)(v16 + 328), 0LL);
                a3 = _InterlockedExchange64((volatile __int64 *)(v16 + 320), 0LL) + v35;
              }
              if ( a3 )
              {
LABEL_103:
                PspReturnResourceQuota(2u, v16 + 256, a3, v17 != 0);
LABEL_87:
                v32 = v16 + 384;
                if ( (byte_140FC73A8 & 3) != 1 )
                {
LABEL_91:
                  PspRemoveQuotaBlock(v16, v32, a3, v17);
                  ExFreePoolWithTag((PVOID)v16, 0);
LABEL_30:
                  *(_QWORD *)(a1 + 32) = 0LL;
                  goto LABEL_31;
                }
                v17 = *(_QWORD *)(v16 + 464);
                a3 = *(_QWORD *)(v16 + 448);
                if ( a3 + *(_QWORD *)(v16 + 456) )
                {
                  if ( v17 )
                  {
                    v36 = _InterlockedExchange64((volatile __int64 *)(v16 + 456), 0LL);
                    a3 = _InterlockedExchange64((volatile __int64 *)(v16 + 448), 0LL) + v36;
                  }
                  if ( a3 )
                    goto LABEL_107;
                }
                else
                {
                  a3 = 0LL;
                }
                if ( !v17 )
                  goto LABEL_91;
LABEL_107:
                PspReturnResourceQuota(3u, v32, a3, v17 != 0);
                goto LABEL_91;
              }
            }
            else
            {
              a3 = 0LL;
            }
            if ( !v17 )
              goto LABEL_87;
            goto LABEL_103;
          }
        }
        else
        {
          a3 = 0LL;
        }
        if ( !v17 )
          goto LABEL_83;
        goto LABEL_99;
      }
      v31 = *(_QWORD *)(v16 + 80);
      a3 = *(_QWORD *)(v16 + 64);
      v17 = v31 != 0;
      if ( a3 + *(_QWORD *)(v16 + 72) )
      {
        if ( v31 )
        {
          v33 = _InterlockedExchange64((volatile __int64 *)(v16 + 72), 0LL);
          a3 = _InterlockedExchange64((volatile __int64 *)(v16 + 64), 0LL) + v33;
        }
        if ( a3 )
        {
LABEL_95:
          PspReturnResourceQuota(0, v16, a3, v17);
          goto LABEL_79;
        }
      }
      else
      {
        a3 = 0LL;
      }
      if ( !v31 )
        goto LABEL_79;
      goto LABEL_95;
    }
    if ( (PspResourceFlags[0] & 3) != 1 )
    {
LABEL_112:
      if ( (byte_140FC7398 & 3) != 1 )
        goto LABEL_116;
      v13 = *(_QWORD *)(v12 + 208);
      a3 = *(_QWORD *)(v12 + 192);
      if ( a3 + *(_QWORD *)(v12 + 200) )
      {
        if ( v13 )
        {
          v40 = _InterlockedExchange64((volatile __int64 *)(v12 + 200), 0LL);
          a3 = _InterlockedExchange64((volatile __int64 *)(v12 + 192), 0LL) + v40;
        }
        if ( a3 )
        {
LABEL_132:
          PspReturnResourceQuota(1u, v12 + 128, a3, v13 != 0);
LABEL_116:
          if ( (byte_140FC73A0 & 3) != 1 )
            goto LABEL_120;
          v13 = *(_QWORD *)(v12 + 336);
          a3 = *(_QWORD *)(v12 + 320);
          if ( a3 + *(_QWORD *)(v12 + 328) )
          {
            if ( v13 )
            {
              v41 = _InterlockedExchange64((volatile __int64 *)(v12 + 328), 0LL);
              a3 = _InterlockedExchange64((volatile __int64 *)(v12 + 320), 0LL) + v41;
            }
            if ( a3 )
            {
LABEL_136:
              PspReturnResourceQuota(2u, v12 + 256, a3, v13 != 0);
LABEL_120:
              v38 = v12 + 384;
              if ( (byte_140FC73A8 & 3) != 1 )
              {
LABEL_124:
                PspRemoveQuotaBlock(v12, v38, a3, v13);
                ExFreePoolWithTag((PVOID)v12, 0);
                goto LABEL_22;
              }
              v13 = *(_QWORD *)(v12 + 464);
              a3 = *(_QWORD *)(v12 + 448);
              if ( a3 + *(_QWORD *)(v12 + 456) )
              {
                if ( v13 )
                {
                  v42 = _InterlockedExchange64((volatile __int64 *)(v12 + 456), 0LL);
                  a3 = _InterlockedExchange64((volatile __int64 *)(v12 + 448), 0LL) + v42;
                }
                if ( a3 )
                  goto LABEL_140;
              }
              else
              {
                a3 = 0LL;
              }
              if ( !v13 )
                goto LABEL_124;
LABEL_140:
              PspReturnResourceQuota(3u, v38, a3, v13 != 0);
              goto LABEL_124;
            }
          }
          else
          {
            a3 = 0LL;
          }
          if ( !v13 )
            goto LABEL_120;
          goto LABEL_136;
        }
      }
      else
      {
        a3 = 0LL;
      }
      if ( !v13 )
        goto LABEL_116;
      goto LABEL_132;
    }
    v37 = *(_QWORD *)(v12 + 80);
    a3 = *(_QWORD *)(v12 + 64);
    v13 = v37 != 0;
    if ( a3 + *(_QWORD *)(v12 + 72) )
    {
      if ( v37 )
      {
        v39 = _InterlockedExchange64((volatile __int64 *)(v12 + 72), 0LL);
        a3 = _InterlockedExchange64((volatile __int64 *)(v12 + 64), 0LL) + v39;
      }
      if ( a3 )
      {
LABEL_128:
        PspReturnResourceQuota(0, v12, a3, v13);
        goto LABEL_112;
      }
    }
    else
    {
      a3 = 0LL;
    }
    if ( !v37 )
      goto LABEL_112;
    goto LABEL_128;
  }
  if ( !v11 )
    goto LABEL_31;
  v19 = *(void **)(v11 + 32);
  if ( v19 )
  {
    if ( *(_BYTE *)(v11 + 16) <= 1u )
      ExFreePoolWithTag(v19, 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = 0LL;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = *(_SLIST_ENTRY **)(a1 + 32);
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalFrees;
  if ( LOWORD(P->ListHead.Alignment) < P->Depth
    || (++P->FreeMisses, P = CurrentPrcb->PPLookasideList[4].L,
                         ++P->TotalFrees,
                         LOWORD(P->ListHead.Alignment) < P->Depth) )
  {
    RtlpInterlockedPushEntrySList(&P->ListHead, v21);
  }
  else
  {
    ++P->FreeMisses;
    if ( (void (__stdcall *)(PVOID))P->FreeEx == ExFreePool )
    {
      ExFreePool(v21);
      *(_QWORD *)(a1 + 32) = 0LL;
      goto LABEL_31;
    }
    guard_dispatch_icall_no_overrides(v21, v21);
  }
  *(_QWORD *)(a1 + 32) = 0LL;
LABEL_31:
  if ( v6 && (*(_BYTE *)(a1 + 27) & 0x40) == 0 )
  {
    ExFreePoolWithTag(*v6, 0);
    *v6 = 0LL;
  }
  if ( v46 )
  {
    v30 = *(void **)(v46 + 16);
    if ( v30 )
    {
      ExFreePoolWithTag(v30, 0);
      *(_QWORD *)(v46 + 16) = 0LL;
    }
  }
  if ( v8 && *v8 )
  {
    ExFreePoolWithTag(*v8, 0);
    *v8 = 0LL;
  }
  *(_BYTE *)(a1 + 24) = ObHeaderCookie ^ BYTE1(a1) ^ 1;
  if ( v10 )
    v18 = *(_DWORD *)(v10 + 192);
  else
    v18 = 1416258127;
  ExFreePoolWithTag(v9, v18);
}
