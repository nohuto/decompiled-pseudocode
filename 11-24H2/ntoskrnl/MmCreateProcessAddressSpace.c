/*
 * XREFs of MmCreateProcessAddressSpace @ 0x140AE61C8
 * Callers:
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x140393CA0 (MiCreateNewProcessTopLevelMappings.c)
 *     PsChargeProcessQuota @ 0x1403CCF70 (PsChargeProcessQuota.c)
 *     MiCheckWsLimits @ 0x1403CD5D8 (MiCheckWsLimits.c)
 *     PsReturnProcessQuota @ 0x1403CD728 (PsReturnProcessQuota.c)
 *     MiGetSharedVm @ 0x14040C800 (MiGetSharedVm.c)
 *     RtlRandomEx @ 0x14041A510 (RtlRandomEx.c)
 *     MiDeleteProcessShadow @ 0x14045BC70 (MiDeleteProcessShadow.c)
 *     MiMakePartitionActive @ 0x14048A21C (MiMakePartitionActive.c)
 *     MiSetProcessPartitionId @ 0x1404A483C (MiSetProcessPartitionId.c)
 *     PsGetDefaultWsMaximum @ 0x1404A8270 (PsGetDefaultWsMaximum.c)
 *     MiCreateSlabIdentity @ 0x140686A04 (MiCreateSlabIdentity.c)
 *     MiDereferenceSlabIdentity @ 0x140687730 (MiDereferenceSlabIdentity.c)
 *     PsJoinSession @ 0x140A4D9A4 (PsJoinSession.c)
 *     MiAllocateProcessShadow @ 0x140A5A1B0 (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x140A5A2FC (MiAllocateTopLevelPage.c)
 *     PsReserveSessionMembership @ 0x140A7D9D0 (PsReserveSessionMembership.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 TopLevelPage; // rax
  volatile signed __int32 *v17; // rdx
  unsigned __int8 v19; // dl
  unsigned __int64 v20[9]; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int32 *v21; // [rsp+80h] [rbp+8h] BYREF
  __int64 v22; // [rsp+88h] [rbp+10h]
  unsigned __int64 v23; // [rsp+90h] [rbp+18h] BYREF

  v23 = a3;
  v22 = a2;
  v6 = PspMinimumWorkingSet;
  v7 = 0LL;
  v21 = 0LL;
  v8 = 0;
  v9 = a6;
  v20[0] = PspMinimumWorkingSet;
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
      MiCheckWsLimits(v9 + 1024, (__int64 *)v20, &v23, a4, 1);
      v11 = v23;
      v6 = v20[0];
    }
    *(_QWORD *)(v9 + 1136) = v6;
    *(_QWORD *)(v9 + 1144) = v11;
    if ( (a4 & 1) != 0 )
    {
      v6 = v20[0];
      LODWORD(v22) = *(_DWORD *)(v9 + 1208);
      LOBYTE(v22) = v22 | 0x40;
      *(_WORD *)(v9 + 1208) = v22;
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
        if ( (unsigned int)MiChargeResident((ULONG *)v12, v6, 0LL) )
        {
          v8 |= 0x10u;
          if ( (int)MiAllocateProcessShadow(v9, a5) >= 0 )
          {
            v8 |= 0x40u;
            if ( (unsigned int)PsReserveSessionMembership(&v21) )
            {
              *(_QWORD *)(v9 + 984) = 4LL;
              TopLevelPage = MiAllocateTopLevelPage(v9);
              MiCreateNewProcessTopLevelMappings(v9, TopLevelPage);
              v17 = v21;
              *(_QWORD *)(v9 + 1040) = v7;
              PsJoinSession(v9, (__int64)v17);
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
    v19 = *(_BYTE *)(v9 + 1774);
    if ( v19 != 0xFF )
    {
      MiDereferenceSlabIdentity((__int64)v12, v19);
      *(_BYTE *)(v9 + 1774) = -1;
    }
  }
  return 0;
}
