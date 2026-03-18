/*
 * XREFs of ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403A0C80
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ?SmCompressCtxDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140393710 (-SmCompressCtxDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAM.c)
 *     ?SmCompressCtxUpdateThreadTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_ETHREAD@@@Z @ 0x140393740 (-SmCompressCtxUpdateThreadTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@.c)
 *     ?SmCompressCtxNewThreadNeeded@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x1403A1100 (-SmCompressCtxNewThreadNeeded@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1403A1130 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x1403D4210 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmCompressCtxCompletePendingEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX@1@@Z @ 0x14049B3B8 (-SmCompressCtxCompletePendingEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX.c)
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x1404CDE68 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxWorkerThread(PVOID P)
{
  __int64 v1; // rbx
  __int64 v3; // r15
  __int64 v4; // rcx
  KIRQL v5; // al
  __int64 **v6; // rdx
  KIRQL v7; // di
  int v8; // r14d
  int v9; // r12d
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v11; // edi
  KIRQL v12; // si
  _QWORD *v13; // rdi
  _QWORD **v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  KIRQL v19; // al
  __int64 v20; // r8
  KIRQL v21; // di
  unsigned __int64 *v22; // r8
  KIRQL v23; // al
  __int64 v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rdx
  PVOID Object[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v28; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v29; // [rsp+60h] [rbp-31h]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-29h]
  _QWORD v31[2]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v32; // [rsp+88h] [rbp-9h]
  __int64 v33; // [rsp+90h] [rbp-1h]
  __int64 v34; // [rsp+98h] [rbp+7h]
  _QWORD v35[2]; // [rsp+A0h] [rbp+Fh] BYREF
  unsigned __int64 *v36; // [rsp+B0h] [rbp+1Fh] BYREF
  unsigned __int64 *v37; // [rsp+B8h] [rbp+27h]
  __int64 v38; // [rsp+C0h] [rbp+2Fh]
  __int64 v39; // [rsp+F8h] [rbp+67h] BYREF

  v1 = *(_QWORD *)P;
  v3 = *(_QWORD *)(*(_QWORD *)P + 8LL);
  Object[0] = (PVOID)(*(_QWORD *)P + 80LL);
  Object[1] = (PVOID)(v1 + 32);
  v31[0] = *((_QWORD *)P + 1);
  v39 = -50000000LL;
  v38 = 0LL;
  v31[1] = v1;
  v4 = *(_QWORD *)(*(_QWORD *)v3 + 2016LL);
  v33 = *((_QWORD *)P + 3);
  v34 = *((_QWORD *)P + 4);
  v35[1] = v35;
  v32 = v4;
  v37 = (unsigned __int64 *)&v36;
  v35[0] = 0LL;
  v36 = 0LL;
  BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
  ++*(_DWORD *)(v1 + 156);
  v6 = *(__int64 ***)(v1 + 112);
  v7 = v5;
  if ( *v6 != (__int64 *)(v1 + 104) )
    goto LABEL_2;
  v28 = v1 + 104;
  v29 = (__int64 *)v6;
  *v6 = &v28;
  *(_QWORD *)(v1 + 112) = &v28;
  KeSetActualBasePriorityThread(BugCheckParameter1, *(_DWORD *)(v1 + 152));
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxUpdateThreadTopology(v1, (struct _KTHREAD *)BugCheckParameter1);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v1, v7);
  KeSetEvent(*((PRKEVENT *)P + 2), 0, 0);
  v8 = 0;
  v9 = 0;
LABEL_4:
  while ( 2 )
  {
    Timeout = (LARGE_INTEGER *)&v39;
    if ( *(_DWORD *)(v1 + 156) <= 1u )
      Timeout = 0LL;
    v11 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrKernel, 0, 0, Timeout, 0LL);
    if ( v11 != 258 )
    {
      v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
      if ( !v11 )
        break;
      ++*(_DWORD *)(v1 + 160);
      v9 = 1;
      v13 = 0LL;
      while ( 1 )
      {
        if ( *(_DWORD *)(v1 + 156) <= 1u || *(_DWORD *)(v3 + 44) - *(_DWORD *)(v3 + 40) <= 0 )
        {
          v14 = (_QWORD **)(v1 + 16);
          v15 = *(_QWORD **)(v1 + 24);
          if ( v15 != (_QWORD *)(v1 + 16) )
          {
            v16 = *v14;
            *v14 = (_QWORD *)**v14;
            if ( v16 == v15 )
            {
              *(_QWORD *)(v1 + 24) = v1 + 16;
              *v14 = 0LL;
            }
            else
            {
              --*v15;
            }
            goto LABEL_13;
          }
        }
        else if ( !v13 )
        {
          goto LABEL_46;
        }
        v16 = 0LL;
LABEL_13:
        if ( !*(_DWORD *)(v1 + 36) )
        {
          if ( (v18 = **(_QWORD **)(v1 + 24), !v16) && v18 || v18 > (unsigned int)(32 * *(_DWORD *)(v1 + 160)) )
            v8 = 1;
        }
        if ( !v16 )
        {
          --*(_DWORD *)(v1 + 160);
          v9 = 0;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1);
        if ( v8 )
        {
          KeSetEvent((PRKEVENT)(v1 + 32), 0, 0);
          v8 = 0;
        }
        if ( KiIrqlFlags )
        {
          LOBYTE(v17) = v12;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
        }
        __writecr8(v12);
        if ( !v16 )
        {
          while ( (unsigned int)SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCompletePendingEntry(v31) )
            ;
          if ( *(_QWORD *)(v1 + 128) != v1 + 120 )
          {
            v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 136));
            v21 = v19;
            if ( !*(_DWORD *)(v1 + 140) )
            {
              *(_DWORD *)(v1 + 140) = 1;
              LOBYTE(v20) = v19;
              SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(v1, v31[0], v20);
            }
            ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 136), v21);
          }
          while ( v37 != (unsigned __int64 *)&v36 )
          {
            v22 = v36;
            v36 = (unsigned __int64 *)(*v36 & 0xFFFFFFFFFFFFFFF8uLL);
            if ( v22 == v37 )
            {
              v36 = 0LL;
              v37 = (unsigned __int64 *)&v36;
            }
            else
            {
              *v37 = *v37 & 7 | (8 * (*v37 >> 3) - 8);
            }
            if ( (*(_DWORD *)v22 & 2) != 0 )
              LODWORD(v38) = v38 - 1;
            SmHwAcceleratorPartitionMgrFreeDescriptor(v32, v22);
          }
          goto LABEL_4;
        }
        v13 = v16 - 9;
        SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessEntry(v31, v13);
        v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
        if ( (unsigned int)SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxNewThreadNeeded(v1) )
          KeSetEvent((PRKEVENT)(v1 + 56), 0, 0);
      }
    }
    v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
    v12 = v23;
    if ( *(_DWORD *)(v1 + 156) <= 1u )
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v1, v23);
      continue;
    }
    break;
  }
LABEL_46:
  if ( !*(_DWORD *)(v1 + 36) && *(_QWORD *)(v1 + 24) != v1 + 16 )
    v8 = 1;
  v24 = v28;
  v25 = v29;
  if ( *(__int64 **)(v28 + 8) != &v28 || (__int64 *)*v29 != &v28 )
LABEL_2:
    __fastfail(3u);
  *v29 = v28;
  *(_QWORD *)(v24 + 8) = v25;
  if ( v9 )
    --*(_DWORD *)(v1 + 160);
  --*(_DWORD *)(v1 + 156);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1);
  if ( v8 )
    KeSetEvent((PRKEVENT)(v1 + 32), 0, 0);
  if ( KiIrqlFlags )
  {
    LOBYTE(v26) = v12;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v26);
  }
  __writecr8(v12);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 44));
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxDeleteThreadParams((struct _EX_RUNDOWN_REF **)P);
}
