/*
 * XREFs of MiCreateLargePfnList @ 0x14026A8C0
 * Callers:
 *     MiMapUserLargePages @ 0x14026A20C (MiMapUserLargePages.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x140692A4C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiAllocateFastAwePages @ 0x1407F8AAC (MiAllocateFastAwePages.c)
 * Callees:
 *     MiGetCrossPartitionCharges @ 0x140269C84 (MiGetCrossPartitionCharges.c)
 *     MiInitializeDemandCoalesceContext @ 0x14026AE60 (MiInitializeDemandCoalesceContext.c)
 *     MiComputePreferredNode @ 0x14026AF48 (MiComputePreferredNode.c)
 *     MiFreeLargeZeroPages @ 0x14026DAE0 (MiFreeLargeZeroPages.c)
 *     MiAllocateLargeZeroPages @ 0x14026F2E8 (MiAllocateLargeZeroPages.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x140338944 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x140692A4C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiComputeIdealLargePage @ 0x140693080 (MiComputeIdealLargePage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiCreateLargePfnList(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        char a6,
        __int64 *a7,
        char a8,
        __int64 a9)
{
  struct _KTHREAD *CurrentThread; // r11
  __int64 v12; // r9
  unsigned int v13; // ebx
  int v14; // edx
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // r12
  char v18; // r15
  __int64 v19; // r11
  int v20; // r10d
  int v21; // eax
  unsigned int v22; // r9d
  bool v23; // zf
  int *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned int CrossPartitionCharges; // edi
  __int64 v30; // r9
  int LargeProcessPagesFromCache; // eax
  int v32; // [rsp+38h] [rbp-C8h]
  int v33; // [rsp+3Ch] [rbp-C4h]
  _KPROCESS *Process; // [rsp+40h] [rbp-C0h]
  int *v35; // [rsp+40h] [rbp-C0h]
  _QWORD v38[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v39; // [rsp+70h] [rbp-90h]
  unsigned __int64 v40; // [rsp+78h] [rbp-88h]
  int v41; // [rsp+80h] [rbp-80h]
  int v42; // [rsp+84h] [rbp-7Ch]
  __int64 v43; // [rsp+88h] [rbp-78h]
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  _OWORD *v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  _OWORD v49[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v50; // [rsp+F0h] [rbp-10h]
  int v51; // [rsp+F8h] [rbp-8h]

  v50 = 0LL;
  v51 = 0;
  memset(v49, 0, sizeof(v49));
  v38[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = *a1;
  v44 = 0LL;
  if ( v12 )
  {
    a1[1] = MiVadPageSizes[(*(_DWORD *)(v12 + 48) >> 19) & 3];
    *((_DWORD *)a1 + 5) = (*(_DWORD *)(v12 + 48) >> 7) & 0x1F;
    *((_DWORD *)a1 + 4) = (*(_DWORD *)(v12 + 48) & 0x1A00000) == 27262976;
  }
  v13 = 0;
  v14 = *((_DWORD *)a1 + 2);
  v15 = 0LL;
  v33 = *((_DWORD *)a1 + 5);
  Process = CurrentThread->ApcState.Process;
  v32 = v14;
  v16 = *((_QWORD *)qword_140E300C8 + HIWORD(Process[2].ProcessListEntry.Blink));
  if ( v12 )
  {
    if ( a7 )
    {
      v15 = *a7;
      v16 = *a7;
      CrossPartitionCharges = MiGetCrossPartitionCharges(*a7, 2u, 1, a3);
      if ( (CrossPartitionCharges & 0x80000000) != 0 )
        return CrossPartitionCharges;
      if ( !(unsigned int)MiChargeCommit(v15, a3, 0LL, v30) )
      {
        CrossPartitionCharges = -1073741523;
LABEL_27:
        MiReturnCrossPartitionCharges(v16, 2LL, 1LL, a3);
        return CrossPartitionCharges;
      }
      v13 = 3;
    }
    if ( !(unsigned int)MiChargeResident(v16, a3, 0LL) )
      goto LABEL_43;
    v14 = v32;
    v13 |= 4u;
  }
  v17 = 0LL;
  if ( v15 || v14 != 16 || a3 >= 0x200 )
  {
    v18 = a6;
LABEL_6:
    v19 = a9;
LABEL_7:
    v20 = MmMakeProtectNotWriteCopy[v33];
    if ( a5 )
    {
      v21 = a5 - 1;
      if ( a5 - 1 >= (unsigned int)(unsigned __int16)KeNumberNodes )
      {
        CrossPartitionCharges = -1073741811;
        goto LABEL_17;
      }
    }
    else
    {
      v21 = MiComputePreferredNode(&Process[2].ReadyListHead.Blink, *a1);
    }
    v22 = 0;
    v23 = *((_DWORD *)a1 + 4) == 0;
    v41 = v21;
    v38[1] = v16;
    v47 = v17;
    v39 = a3;
    v42 = v20;
    v24 = (int *)(qword_140E2DC10 + 4LL * v21 * (unsigned int)(unsigned __int16)KeNumberNodes);
    v45 = a2;
    v35 = &v24[(unsigned __int16)KeNumberNodes];
    if ( !v23 )
      v22 = 4;
    v43 = -1LL;
    LODWORD(v38[0]) = v22;
    v40 = a4;
    if ( (a8 & 8) != 0 )
    {
      v22 |= 8u;
      LODWORD(v38[0]) = v22;
    }
    v25 = *a1;
    v48 = v19;
    if ( v25 )
    {
      MiComputeIdealLargePage(v25, a2 + (v17 << 12), a3 - v17, v38);
      v22 = v38[0];
    }
    MiInitializeDemandCoalesceContext(v49, a4, (a3 - v17) / a4, (v22 >> 3) & 1);
    v46 = v49;
    MiAllocateLargeZeroPages(v38);
    v26 = v47;
    v27 = v39;
    if ( v47 != v39 )
    {
      if ( !v18 )
      {
        do
        {
          if ( ++v24 == v35 )
            break;
          v41 = *v24;
          MiAllocateLargeZeroPages(v38);
          v26 = v47;
          v27 = v39;
        }
        while ( v47 != v39 );
      }
      if ( v26 != v27 )
      {
        MiFreeLargeZeroPages(v16, a9, (LODWORD(v38[0]) >> 2) & 1);
LABEL_43:
        CrossPartitionCharges = -1073741670;
LABEL_17:
        if ( v13 >= 4 )
          MiReturnResident(v16, a3);
        if ( (v13 & 2) != 0 )
          MiReturnCommit(v16, a3, 0LL);
        if ( (v13 & 1) == 0 )
          return CrossPartitionCharges;
        goto LABEL_27;
      }
    }
    return 0;
  }
  v18 = a6;
  if ( (*(_DWORD *)(v16 + 4) & 0x10) != 0 )
    goto LABEL_6;
  LargeProcessPagesFromCache = MiAllocateLargeProcessPagesFromCache((_DWORD)a1, a2, a3, a5, a6, a9);
  v19 = a9;
  v17 = 16LL * *(_QWORD *)(a9 + 64);
  if ( LargeProcessPagesFromCache < 0 )
    goto LABEL_7;
  return 0LL;
}
