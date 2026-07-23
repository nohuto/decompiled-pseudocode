/*
 * XREFs of MmCreateProcessAddressSpace @ 0x140AE7AA8
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x14038D2BC (MiCreateNewProcessTopLevelMappings.c)
 *     MiGetSharedVm @ 0x140404E90 (MiGetSharedVm.c)
 *     RtlRandomEx @ 0x14040A510 (RtlRandomEx.c)
 *     MiDeleteProcessShadow @ 0x140451008 (MiDeleteProcessShadow.c)
 *     MiCheckWsLimits @ 0x14046CDC8 (MiCheckWsLimits.c)
 *     PsReturnProcessQuota @ 0x14046CF18 (PsReturnProcessQuota.c)
 *     PsChargeProcessQuota @ 0x14046CF4C (PsChargeProcessQuota.c)
 *     MiMakePartitionActive @ 0x140485044 (MiMakePartitionActive.c)
 *     MiSetProcessPartitionId @ 0x14049F5CC (MiSetProcessPartitionId.c)
 *     PsGetDefaultWsMaximum @ 0x1404A2D3C (PsGetDefaultWsMaximum.c)
 *     MiCreateSlabIdentity @ 0x140687B34 (MiCreateSlabIdentity.c)
 *     MiDereferenceSlabIdentity @ 0x140688860 (MiDereferenceSlabIdentity.c)
 *     PsJoinSession @ 0x140A44534 (PsJoinSession.c)
 *     MiAllocateProcessShadow @ 0x140A51A70 (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x140A51BBC (MiAllocateTopLevelPage.c)
 *     PsReserveSessionMembership @ 0x140A77CD0 (PsReserveSessionMembership.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall MmCreateProcessAddressSpace(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned __int64 v6; // rbp
  void *v7; // r14
  char v8; // di
  __int64 v9; // rbx
  unsigned __int64 v11; // r15
  __int16 *v12; // rsi
  __int64 v13; // rdx
  _QWORD *SharedVm; // r13
  __int64 Pool; // rax
  struct _KPRCB *v16; // r9
  __int64 TopLevelPage; // rax
  volatile signed __int32 *v18; // rdx
  unsigned __int8 v20; // dl
  unsigned __int64 v21[9]; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int32 *v22; // [rsp+80h] [rbp+8h] BYREF
  __int64 v23; // [rsp+88h] [rbp+10h]
  unsigned __int64 v24; // [rsp+90h] [rbp+18h] BYREF

  v24 = a3;
  v23 = a2;
  v6 = PspMinimumWorkingSet;
  v7 = 0LL;
  v22 = 0LL;
  v8 = 0;
  v9 = a6;
  v21[0] = PspMinimumWorkingSet;
  v11 = a3;
  if ( a1 )
    v12 = **(__int16 ***)(a6 + 1880);
  else
    v12 = (__int16 *)&MiSystemPartition;
  if ( !(unsigned int)MiMakePartitionActive((__int64)v12) )
    return 0;
  MiSetProcessPartitionId(v9, *v12);
  *(_DWORD *)(v9 + 1956) = 1;
  *(_BYTE *)(v9 + 1774) = -1;
  if ( (a4 & 0x10) != 0 )
  {
    if ( (int)MiCreateSlabIdentity((__int64)v12, (_BYTE *)(v9 + 1774)) < 0 )
      return 0;
    v8 = 1;
  }
  if ( (unsigned int)MiChargeCommit((__int64)v12, 4uLL, 0) )
  {
    v8 |= 2u;
    SharedVm = MiGetSharedVm(v9 + 1024);
    *(_DWORD *)(v9 + 1024) = (unsigned __int16)RtlRandomEx(&Seed);
    *(_QWORD *)(v9 + 1712) = 0LL;
    *(_QWORD *)(v9 + 1728) = v9 + 1720;
    *(_QWORD *)(v9 + 1720) = v9 + 1720;
    if ( v11 != PsGetDefaultWsMaximum() )
    {
      MiCheckWsLimits(v9 + 1024, (__int64 *)v21, &v24, a4, 1);
      v11 = v24;
      v6 = v21[0];
    }
    *(_QWORD *)(v9 + 1136) = v6;
    *(_QWORD *)(v9 + 1144) = v11;
    if ( (a4 & 1) != 0 )
    {
      v6 = v21[0];
      LODWORD(v23) = *(_DWORD *)(v9 + 1208);
      LOBYTE(v23) = v23 | 0x40;
      *(_WORD *)(v9 + 1208) = v23;
    }
    Pool = MiAllocatePool(0x48uLL, 0x580uLL, 844130637);
    v7 = (void *)Pool;
    if ( Pool )
    {
      *SharedVm = Pool + 256;
      v8 |= 4u;
      if ( (int)PsChargeProcessQuota(v9, v13, v6) >= 0 )
      {
        v8 |= 8u;
        if ( (unsigned int)MiChargeResident((ULONG *)v12, v6, 0LL, v16) )
        {
          v8 |= 0x10u;
          if ( (int)MiAllocateProcessShadow(v9, a5) >= 0 )
          {
            v8 |= 0x40u;
            if ( (unsigned int)PsReserveSessionMembership(&v22) )
            {
              *(_QWORD *)(v9 + 984) = 4LL;
              TopLevelPage = MiAllocateTopLevelPage(v9);
              MiCreateNewProcessTopLevelMappings(v9, TopLevelPage);
              v18 = v22;
              *(_QWORD *)(v9 + 1040) = v7;
              PsJoinSession(v9, (__int64)v18);
              return 1;
            }
          }
        }
      }
    }
  }
  if ( (v8 & 0x40) != 0 )
    MiDeleteProcessShadow(v9, 0);
  if ( (v8 & 0x10) != 0 )
    MiReturnResident((__int64)v12, v6);
  if ( (v8 & 8) != 0 )
    PsReturnProcessQuota(v9, v13, v6);
  if ( (v8 & 4) != 0 )
    ExFreePoolWithTag(v7, 0);
  if ( (v8 & 2) != 0 )
    MiReturnCommit((__int64)v12, 4LL, 0);
  if ( (v8 & 1) != 0 )
  {
    v20 = *(_BYTE *)(v9 + 1774);
    if ( v20 != 0xFF )
    {
      MiDereferenceSlabIdentity((__int64)v12, v20);
      *(_BYTE *)(v9 + 1774) = -1;
    }
  }
  return 0;
}
