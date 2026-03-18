/*
 * XREFs of MiCreateLargePfnList @ 0x14036E934
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x14036E280 (MiMapUserLargePages.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14069197C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiAllocateFastAwePages @ 0x1407F833C (MiAllocateFastAwePages.c)
 * Callees:
 *     MiReturnCrossPartitionCharges @ 0x14020F5E4 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x14036E19C (MiGetCrossPartitionCharges.c)
 *     MiInitializeDemandCoalesceContext @ 0x14036EEE0 (MiInitializeDemandCoalesceContext.c)
 *     MiComputePreferredNode @ 0x14036EFC8 (MiComputePreferredNode.c)
 *     MiFreeLargeZeroPages @ 0x1403A67F0 (MiFreeLargeZeroPages.c)
 *     MiAllocateLargeZeroPages @ 0x1403A7BB8 (MiAllocateLargeZeroPages.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14069197C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiComputeIdealLargePage @ 0x140691FB0 (MiComputeIdealLargePage.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
  ULONG *v16; // r14
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
  int LargeProcessPagesFromCache; // eax
  int v31; // [rsp+38h] [rbp-C8h]
  int v32; // [rsp+3Ch] [rbp-C4h]
  _KPROCESS *Process; // [rsp+40h] [rbp-C0h]
  int *v34; // [rsp+40h] [rbp-C0h]
  _QWORD v37[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v38; // [rsp+70h] [rbp-90h]
  unsigned __int64 v39; // [rsp+78h] [rbp-88h]
  int v40; // [rsp+80h] [rbp-80h]
  int v41; // [rsp+84h] [rbp-7Ch]
  __int64 v42; // [rsp+88h] [rbp-78h]
  __int64 v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  _OWORD *v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  _OWORD v48[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v49; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+F8h] [rbp-8h]

  v49 = 0LL;
  v50 = 0;
  memset(v48, 0, sizeof(v48));
  v37[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = *a1;
  v43 = 0LL;
  if ( v12 )
  {
    a1[1] = MiVadPageSizes[(*(_DWORD *)(v12 + 48) >> 19) & 3];
    *((_DWORD *)a1 + 5) = (*(_DWORD *)(v12 + 48) >> 7) & 0x1F;
    *((_DWORD *)a1 + 4) = (*(_DWORD *)(v12 + 48) & 0x1A00000) == 27262976;
  }
  v13 = 0;
  v14 = *((_DWORD *)a1 + 2);
  v15 = 0LL;
  v32 = *((_DWORD *)a1 + 5);
  Process = CurrentThread->ApcState.Process;
  v31 = v14;
  v16 = (ULONG *)*((_QWORD *)qword_140E2FF88 + HIWORD(Process[2].ProcessListEntry.Blink));
  if ( v12 )
  {
    if ( a7 )
    {
      v15 = *a7;
      v16 = (ULONG *)*a7;
      CrossPartitionCharges = MiGetCrossPartitionCharges(*a7, 2u, 1, a3);
      if ( (CrossPartitionCharges & 0x80000000) != 0 )
        return CrossPartitionCharges;
      if ( !(unsigned int)MiChargeCommit(v15, a3, 0) )
      {
        CrossPartitionCharges = -1073741523;
LABEL_27:
        MiReturnCrossPartitionCharges((__int64)v16, 2u, 1, a3);
        return CrossPartitionCharges;
      }
      v13 = 3;
    }
    if ( !(unsigned int)MiChargeResident(v16, a3, 0LL) )
      goto LABEL_43;
    v14 = v31;
    v13 |= 4u;
  }
  v17 = 0LL;
  if ( v15 || v14 != 16 || a3 >= 0x200 )
  {
    v18 = a6;
LABEL_6:
    v19 = a9;
LABEL_7:
    v20 = MmMakeProtectNotWriteCopy[v32];
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
    v40 = v21;
    v37[1] = v16;
    v46 = v17;
    v38 = a3;
    v41 = v20;
    v24 = (int *)(qword_140E2DAD0 + 4LL * v21 * (unsigned int)(unsigned __int16)KeNumberNodes);
    v44 = a2;
    v34 = &v24[(unsigned __int16)KeNumberNodes];
    if ( !v23 )
      v22 = 4;
    v42 = -1LL;
    LODWORD(v37[0]) = v22;
    v39 = a4;
    if ( (a8 & 8) != 0 )
    {
      v22 |= 8u;
      LODWORD(v37[0]) = v22;
    }
    v25 = *a1;
    v47 = v19;
    if ( v25 )
    {
      MiComputeIdealLargePage(v25, a2 + (v17 << 12), a3 - v17, v37);
      v22 = v37[0];
    }
    MiInitializeDemandCoalesceContext(v48, a4, (a3 - v17) / a4, (v22 >> 3) & 1);
    v45 = v48;
    MiAllocateLargeZeroPages(v37);
    v26 = v46;
    v27 = v38;
    if ( v46 != v38 )
    {
      if ( !v18 )
      {
        do
        {
          if ( ++v24 == v34 )
            break;
          v40 = *v24;
          MiAllocateLargeZeroPages(v37);
          v26 = v46;
          v27 = v38;
        }
        while ( v46 != v38 );
      }
      if ( v26 != v27 )
      {
        MiFreeLargeZeroPages(v16, a9, (LODWORD(v37[0]) >> 2) & 1);
LABEL_43:
        CrossPartitionCharges = -1073741670;
LABEL_17:
        if ( v13 >= 4 )
          MiReturnResident((__int64)v16, a3);
        if ( (v13 & 2) != 0 )
          MiReturnCommit((__int64)v16, a3, 0);
        if ( (v13 & 1) == 0 )
          return CrossPartitionCharges;
        goto LABEL_27;
      }
    }
    return 0;
  }
  v18 = a6;
  if ( (v16[1] & 0x10) != 0 )
    goto LABEL_6;
  LargeProcessPagesFromCache = MiAllocateLargeProcessPagesFromCache((_DWORD)a1, a2, a3, a5, a6, a9);
  v19 = a9;
  v17 = 16LL * *(_QWORD *)(a9 + 64);
  if ( LargeProcessPagesFromCache < 0 )
    goto LABEL_7;
  return 0LL;
}
