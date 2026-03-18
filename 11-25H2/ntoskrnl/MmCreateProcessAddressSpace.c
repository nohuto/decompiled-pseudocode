/*
 * XREFs of MmCreateProcessAddressSpace @ 0x140A47B88
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiCheckWsLimits @ 0x1403C56C4 (MiCheckWsLimits.c)
 *     PsChargeProcessQuota @ 0x1403C5C54 (PsChargeProcessQuota.c)
 *     PsReturnProcessQuota @ 0x1403C5C8C (PsReturnProcessQuota.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x1403FDD48 (MiCreateNewProcessTopLevelMappings.c)
 *     MiGetSharedVm @ 0x14040A910 (MiGetSharedVm.c)
 *     RtlRandomEx @ 0x14041CDA0 (RtlRandomEx.c)
 *     MiDeleteProcessShadow @ 0x14045CFAC (MiDeleteProcessShadow.c)
 *     MiMakePartitionActive @ 0x14048C0A0 (MiMakePartitionActive.c)
 *     MiSetProcessPartitionId @ 0x1404A4B98 (MiSetProcessPartitionId.c)
 *     PsGetDefaultWsMaximum @ 0x1404A7B30 (PsGetDefaultWsMaximum.c)
 *     MiCreateSlabIdentity @ 0x14067B174 (MiCreateSlabIdentity.c)
 *     MiDereferenceSlabIdentity @ 0x14067BEA0 (MiDereferenceSlabIdentity.c)
 *     MiAllocateProcessShadow @ 0x140A47EB0 (MiAllocateProcessShadow.c)
 *     PsReserveSessionMembership @ 0x140A47FFC (PsReserveSessionMembership.c)
 *     PsJoinSession @ 0x140A48054 (PsJoinSession.c)
 *     MiAllocateTopLevelPage @ 0x140A480DC (MiAllocateTopLevelPage.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char __fastcall MmCreateProcessAddressSpace(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // rbp
  void *v7; // r15
  char v8; // di
  __int64 v9; // rbx
  unsigned __int64 v11; // r12
  __int16 *v12; // rsi
  __int64 v13; // rdx
  __int64 Pool; // rax
  __int64 v15; // rdx
  __int64 TopLevelPage; // rax
  __int64 v17; // rdx
  unsigned __int8 v19; // dl
  __int64 v20; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *SharedVm; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+80h] [rbp+8h] BYREF
  __int64 v23; // [rsp+88h] [rbp+10h]
  unsigned __int64 v24; // [rsp+90h] [rbp+18h] BYREF

  v24 = a3;
  v23 = a2;
  v6 = PspMinimumWorkingSet;
  v7 = 0LL;
  v22 = 0LL;
  v8 = 0;
  v9 = a6;
  v20 = PspMinimumWorkingSet;
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
    *(_QWORD *)(v9 + 1728) = v9 + 1720;
    *(_QWORD *)(v9 + 1720) = v9 + 1720;
    *(_QWORD *)(v9 + 1712) = 0LL;
    if ( v11 != PsGetDefaultWsMaximum() )
    {
      MiCheckWsLimits(v9 + 1024, &v20, &v24, a4, 1);
      v11 = v24;
      v6 = v20;
    }
    *(_QWORD *)(v9 + 1136) = v6;
    *(_QWORD *)(v9 + 1144) = v11;
    if ( (a4 & 1) != 0 )
    {
      v6 = v20;
      LODWORD(v23) = *(_DWORD *)(v9 + 1208);
      LOBYTE(v23) = v23 | 0x40;
      *(_WORD *)(v9 + 1208) = v23;
    }
    Pool = MiAllocatePool(MmNumLockedPagesFixEnabled != 0 ? 72LL : 64LL, 0x580uLL, 844130637);
    v7 = (void *)Pool;
    if ( Pool )
    {
      v8 |= 4u;
      *SharedVm = Pool + 256;
      if ( (int)PsChargeProcessQuota((struct _KPROCESS *)v9, v13, v6) >= 0 )
      {
        v8 |= 8u;
        if ( (unsigned int)MiChargeResident((ULONG *)v12, v6, 0LL) )
        {
          v8 |= 0x10u;
          if ( (int)MiAllocateProcessShadow(v9, a5) >= 0 )
          {
            v8 |= 0x40u;
            if ( (unsigned int)PsReserveSessionMembership(&v22) )
            {
              v15 = a5;
              *(_QWORD *)(v9 + 984) = 4LL;
              TopLevelPage = MiAllocateTopLevelPage(v9, v15);
              MiCreateNewProcessTopLevelMappings(v9, TopLevelPage);
              v17 = v22;
              *(_QWORD *)(v9 + 1040) = v7;
              PsJoinSession(v9, v17);
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
    PsReturnProcessQuota((struct _KPROCESS *)v9, v13, v6);
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
