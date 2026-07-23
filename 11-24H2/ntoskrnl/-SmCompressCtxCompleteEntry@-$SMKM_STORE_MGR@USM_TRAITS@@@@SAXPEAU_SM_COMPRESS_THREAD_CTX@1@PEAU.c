/*
 * XREFs of ?SmCompressCtxCompleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_WORK_ITEM@1@KKJ@Z @ 0x140383954
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140383570 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_.c)
 *     ?SmCompressCtxCompletePendingEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX@1@@Z @ 0x140495094 (-SmCompressCtxCompletePendingEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_THREAD_CTX.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x140293640 (MmBuildMdlForNonPagedPool.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x1402E6EC4 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     wyhash @ 0x140382B78 (wyhash.c)
 *     IoBuildPartialMdl @ 0x1403852A0 (IoBuildPartialMdl.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCompleteEntry(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // r12
  __int64 v6; // rsi
  struct _MDL *v7; // r15
  unsigned __int64 MappedSystemVa; // rdi
  __int64 v9; // r13
  unsigned int v10; // ebx
  _DWORD *v12; // rcx
  int v13; // eax
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  unsigned int v17; // r13d
  unsigned int v18; // r9d
  unsigned int v19; // ebp
  __int64 v20; // rax
  __int64 v21; // r15
  _QWORD *v22; // rsi
  unsigned int v23; // ebp
  unsigned int v24; // r15d
  __int64 v25; // rax
  struct _MDL *v26; // [rsp+28h] [rbp-40h]
  __int64 v28; // [rsp+78h] [rbp+10h]

  v5 = a1[1];
  v6 = a2 + 40;
  v7 = *(struct _MDL **)(a2 + 16);
  MappedSystemVa = a2 + 112;
  v9 = a4;
  v10 = a3;
  v26 = v7;
  if ( a5 >= 0 )
  {
    *(_QWORD *)v6 = 0LL;
    *(_WORD *)(a2 + 50) = 0;
    *(_DWORD *)(a2 + 80) = a3;
    *(_DWORD *)(a2 + 84) = MappedSystemVa & 0xFFF;
    *(_WORD *)(a2 + 48) = 8 * ((((MappedSystemVa & 0xFFF) + a3 + 4095LL) >> 12) + 6);
    *(_QWORD *)(a2 + 72) = MappedSystemVa & 0xFFFFFFFFFFFFF000uLL;
    MmBuildMdlForNonPagedPool((PMDL)v6);
  }
  else
  {
    MappedSystemVa = (unsigned __int64)v7->MappedSystemVa;
    v10 = 4096;
    IoBuildPartialMdl(v7, (PMDL)(a2 + 40), (char *)v7->StartVa + v7->ByteOffset, 0);
  }
  v12 = *(_DWORD **)(v6 + 64);
  if ( (*v12 & 0x200000) != 0 )
  {
    v13 = v12[1208];
    v14 = 0LL;
    if ( !v13 || v10 == 4096 )
    {
      v14 = wyhash((_QWORD *)MappedSystemVa, v10, 0LL);
    }
    else
    {
      v17 = (v13 == 2) + 1;
      v18 = 2 * v17 - 2;
      v19 = 4096 - (MappedSystemVa & 0xFFF) - v18;
      v20 = v19 / v17;
      if ( 2 * v17 == 2 )
      {
        v21 = 0LL;
      }
      else
      {
        v21 = v18;
        v14 = wyhash((_QWORD *)MappedSystemVa, v18, 0LL);
        v20 = v19 / v17;
        v10 -= 2 * v17 - 2;
      }
      v22 = (_QWORD *)(v21 + MappedSystemVa);
      v28 = v20;
      v23 = 0;
      do
      {
        v24 = v10;
        if ( v23 != v17 - 1 )
          v24 = *(unsigned __int16 *)MappedSystemVa;
        v25 = wyhash(v22, v24, v14);
        v22 = (_QWORD *)((char *)v22 + v28);
        v10 -= v24;
        ++v23;
        MappedSystemVa += 2LL;
        v14 = v25;
      }
      while ( v23 < v17 );
      v6 = a2 + 40;
      v7 = v26;
    }
  }
  else
  {
    v14 = v9;
  }
  *(_QWORD *)(v6 + 56) = v14;
  *(_QWORD *)v6 = v7;
  *(_DWORD *)(a2 + 8) |= 0x40000000u;
  *(_QWORD *)(a2 + 16) = v6;
  v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 136));
  *(_QWORD *)a2 = *(_DWORD *)a2 & 7 | ((**(_QWORD **)(v5 + 128) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
  **(_QWORD **)(v5 + 128) = a2 | **(_DWORD **)(v5 + 128) & 7;
  *(_QWORD *)(v5 + 128) = a2;
  if ( !*(_DWORD *)(v5 + 140) && (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF8uLL) >= 0x80 )
  {
    *(_DWORD *)(v5 + 140) = 1;
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(v5, *a1, v15);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 136));
  if ( KiIrqlFlags )
  {
    LOBYTE(v16) = v15;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
  }
  __writecr8(v15);
}
