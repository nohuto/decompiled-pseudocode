/*
 * XREFs of ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140389780
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x140379F54 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmCompressCtxNewThreadNeeded@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140389C00 (-SmCompressCtxNewThreadNeeded@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140389C30 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_.c)
 *     ?SmCompressCtxDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140449650 (-SmCompressCtxDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAM.c)
 *     ?SmCompressCtxUpdateThreadTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_ETHREAD@@@Z @ 0x14044A2C8 (-SmCompressCtxUpdateThreadTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@.c)
 *     ?SmCompressCtxCompletePendingEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX@1@@Z @ 0x14049A670 (-SmCompressCtxCompletePendingEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX.c)
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x1404CDC48 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxWorkerThread(PVOID P)
{
  __int64 v1; // rbx
  __int64 v3; // r15
  __int64 v4; // rcx
  KIRQL v5; // al
  __int64 v6; // r8
  __int64 **v7; // rdx
  KIRQL v8; // di
  int v9; // r14d
  int v10; // r12d
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v12; // edi
  KIRQL v13; // si
  _QWORD *v14; // rdi
  _QWORD **v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  KIRQL v20; // al
  KIRQL v21; // di
  unsigned __int64 *v22; // r8
  KIRQL v23; // al
  __int64 v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rdx
  PVOID Object[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v29; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v30; // [rsp+60h] [rbp-31h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-29h]
  __int64 v32[2]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v33; // [rsp+88h] [rbp-9h]
  __int64 v34; // [rsp+90h] [rbp-1h]
  __int64 v35; // [rsp+98h] [rbp+7h]
  _QWORD v36[2]; // [rsp+A0h] [rbp+Fh] BYREF
  unsigned __int64 *v37; // [rsp+B0h] [rbp+1Fh] BYREF
  unsigned __int64 *v38; // [rsp+B8h] [rbp+27h]
  __int64 v39; // [rsp+C0h] [rbp+2Fh]
  __int64 v40; // [rsp+F8h] [rbp+67h] BYREF

  v1 = *(_QWORD *)P;
  v3 = *(_QWORD *)(*(_QWORD *)P + 8LL);
  Object[0] = (PVOID)(*(_QWORD *)P + 80LL);
  Object[1] = (PVOID)(v1 + 32);
  v32[0] = *((_QWORD *)P + 1);
  v40 = -50000000LL;
  v39 = 0LL;
  v32[1] = v1;
  v4 = *(_QWORD *)(*(_QWORD *)v3 + 2016LL);
  v34 = *((_QWORD *)P + 3);
  v35 = *((_QWORD *)P + 4);
  v36[1] = v36;
  v33 = v4;
  v38 = (unsigned __int64 *)&v37;
  v36[0] = 0LL;
  v37 = 0LL;
  BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
  ++*(_DWORD *)(v1 + 156);
  v7 = *(__int64 ***)(v1 + 112);
  v8 = v5;
  if ( *v7 != (__int64 *)(v1 + 104) )
    goto LABEL_2;
  v29 = v1 + 104;
  v30 = (__int64 *)v7;
  *v7 = &v29;
  *(_QWORD *)(v1 + 112) = &v29;
  KeSetActualBasePriorityThread(BugCheckParameter1, *(_DWORD *)(v1 + 152), v6);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxUpdateThreadTopology(v1, BugCheckParameter1);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v1, v8);
  KeSetEvent(*((PRKEVENT *)P + 2), 0, 0);
  v9 = 0;
  v10 = 0;
LABEL_4:
  while ( 2 )
  {
    Timeout = (LARGE_INTEGER *)&v40;
    if ( *(_DWORD *)(v1 + 156) <= 1u )
      Timeout = 0LL;
    v12 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrKernel, 0, 0, Timeout, 0LL);
    if ( v12 != 258 )
    {
      v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
      if ( !v12 )
        break;
      ++*(_DWORD *)(v1 + 160);
      v10 = 1;
      v14 = 0LL;
      while ( 1 )
      {
        if ( *(_DWORD *)(v1 + 156) <= 1u || *(_DWORD *)(v3 + 44) - *(_DWORD *)(v3 + 40) <= 0 )
        {
          v15 = (_QWORD **)(v1 + 16);
          v16 = *(_QWORD **)(v1 + 24);
          if ( v16 != (_QWORD *)(v1 + 16) )
          {
            v17 = *v15;
            *v15 = (_QWORD *)**v15;
            if ( v17 == v16 )
            {
              *(_QWORD *)(v1 + 24) = v1 + 16;
              *v15 = 0LL;
            }
            else
            {
              --*v16;
            }
            goto LABEL_13;
          }
        }
        else if ( !v14 )
        {
          goto LABEL_46;
        }
        v17 = 0LL;
LABEL_13:
        if ( !*(_DWORD *)(v1 + 36) )
        {
          if ( (v19 = **(_QWORD **)(v1 + 24), !v17) && v19 || v19 > (unsigned int)(32 * *(_DWORD *)(v1 + 160)) )
            v9 = 1;
        }
        if ( !v17 )
        {
          --*(_DWORD *)(v1 + 160);
          v10 = 0;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1);
        if ( v9 )
        {
          KeSetEvent((PRKEVENT)(v1 + 32), 0, 0);
          v9 = 0;
        }
        if ( KiIrqlFlags )
        {
          LOBYTE(v18) = v13;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
        }
        __writecr8(v13);
        if ( !v17 )
        {
          while ( (unsigned int)SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCompletePendingEntry(v32) )
            ;
          if ( *(_QWORD *)(v1 + 128) != v1 + 120 )
          {
            v20 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 136));
            v21 = v20;
            if ( !*(_DWORD *)(v1 + 140) )
            {
              *(_DWORD *)(v1 + 140) = 1;
              SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(v1, v32[0], v20);
            }
            ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 136), v21);
          }
          while ( v38 != (unsigned __int64 *)&v37 )
          {
            v22 = v37;
            v37 = (unsigned __int64 *)(*v37 & 0xFFFFFFFFFFFFFFF8uLL);
            if ( v22 == v38 )
            {
              v37 = 0LL;
              v38 = (unsigned __int64 *)&v37;
            }
            else
            {
              *v38 = *v38 & 7 | (8 * (*v38 >> 3) - 8);
            }
            if ( (*(_DWORD *)v22 & 2) != 0 )
              LODWORD(v39) = v39 - 1;
            SmHwAcceleratorPartitionMgrFreeDescriptor(v33, v22);
          }
          goto LABEL_4;
        }
        v14 = v17 - 9;
        SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessEntry(v32, v14);
        v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
        if ( (unsigned int)SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxNewThreadNeeded(v1) )
          KeSetEvent((PRKEVENT)(v1 + 56), 0, 0);
      }
    }
    v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
    v13 = v23;
    if ( *(_DWORD *)(v1 + 156) <= 1u )
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v1, v23);
      continue;
    }
    break;
  }
LABEL_46:
  if ( !*(_DWORD *)(v1 + 36) && *(_QWORD *)(v1 + 24) != v1 + 16 )
    v9 = 1;
  v24 = v29;
  v25 = v30;
  if ( *(__int64 **)(v29 + 8) != &v29 || (__int64 *)*v30 != &v29 )
LABEL_2:
    __fastfail(3u);
  *v30 = v29;
  *(_QWORD *)(v24 + 8) = v25;
  if ( v10 )
    --*(_DWORD *)(v1 + 160);
  --*(_DWORD *)(v1 + 156);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1);
  if ( v9 )
    KeSetEvent((PRKEVENT)(v1 + 32), 0, 0);
  if ( KiIrqlFlags )
  {
    LOBYTE(v26) = v13;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v26);
  }
  __writecr8(v13);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 44));
  return SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxDeleteThreadParams(P);
}
