/*
 * XREFs of PspEstablishJobHierarchy @ 0x14091B360
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1408D79EC (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140A105B0 (PspAssignProcessToJob.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     KeInsertSchedulingGroup @ 0x14045CB04 (KeInsertSchedulingGroup.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140484128 (IoSetDiskIoAttributionOnProcess.c)
 *     KeRemoveSchedulingGroup @ 0x14049F368 (KeRemoveSchedulingGroup.c)
 *     PspEstablishDfssHierarchy @ 0x140777990 (PspEstablishDfssHierarchy.c)
 *     PspSetEffectiveRateControlJob @ 0x140777F38 (PspSetEffectiveRateControlJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     MmLinkJobProcess @ 0x14091A3E0 (MmLinkJobProcess.c)
 *     PspBindProcessSessionToJob @ 0x14091B844 (PspBindProcessSessionToJob.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1409774CC (PspAddSchedulingGroupToJobChain.c)
 *     PspSetEffectiveJobLimits @ 0x140A2C888 (PspSetEffectiveJobLimits.c)
 *     PspUpdateJobEffectivePriorityLimits @ 0x140A41E64 (PspUpdateJobEffectivePriorityLimits.c)
 *     PspUnlinkJobProcess @ 0x140A485E4 (PspUnlinkJobProcess.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspEstablishJobHierarchy(char *Object, unsigned __int64 a2, __int64 a3, int a4)
{
  int v8; // esi
  __int64 v9; // rcx
  _QWORD *Pool2; // r15
  unsigned __int64 v12; // r14
  unsigned __int16 *v13; // rcx
  __int64 v14; // rax
  PVOID v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  char v19; // al
  int i; // r8d
  __int64 v21; // rax
  bool v22; // zf
  void *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v27; // [rsp+40h] [rbp-28h]

  *(_OWORD *)v26 = 0LL;
  v27 = 0LL;
  if ( a4 != 1 )
  {
    if ( a4 != 2 )
    {
      if ( a4 == 3 )
      {
        PspUnlinkJobProcess(a3, a2);
        MmLinkJobProcess((__int64)Object, a2);
        ObfReferenceObjectWithTag(Object, 0x73507350u);
        ObfDereferenceObjectWithTag((PVOID)a3, 0x73507350u);
        v18 = *((_QWORD *)Object + 198);
        if ( !*((_DWORD *)Object + 395) )
        {
          if ( !v18 )
            goto LABEL_27;
          v18 = *(_QWORD *)(v18 + 1584);
        }
        IoSetDiskIoAttributionOnProcess(v18, a2);
        goto LABEL_27;
      }
      if ( a4 == 4 || a4 == 5 )
        goto LABEL_14;
      if ( a4 != 6 )
      {
        if ( a4 != 7 )
        {
          v8 = -1073741811;
          goto LABEL_6;
        }
LABEL_14:
        Pool2 = 0LL;
        v12 = *(_QWORD *)(a3 + 1336) + 1LL;
        if ( v12 > 2 )
        {
          Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 8 * v12 - 16, 0x624A7350u);
          if ( !Pool2 )
            return 3221225626LL;
        }
        if ( (unsigned int)(a4 - 4) <= 1 )
        {
          v8 = PspBindProcessSessionToJob(Object, a2);
          if ( v8 < 0 )
            goto LABEL_47;
        }
        v13 = (unsigned __int16 *)*((_QWORD *)Object + 156);
        if ( v13 )
        {
          KeRemoveSchedulingGroup(v13);
          if ( (*(_DWORD *)(a3 + 1552) & 0x20) == 0 )
          {
            v8 = PspAddSchedulingGroupToJobChain(a3, 0LL);
            if ( v8 < 0 )
            {
              KeInsertSchedulingGroup(
                (struct _KSCHEDULING_GROUP *)(*((_QWORD *)Object + 155) + 128LL),
                *(_KSCHEDULING_GROUP_POLICY *)(*((_QWORD *)Object + 155) + 128LL),
                0LL);
LABEL_47:
              if ( Pool2 )
                ExFreePoolWithTag(Pool2, 0x624A7350u);
              goto LABEL_6;
            }
          }
          KeInsertSchedulingGroup(
            (struct _KSCHEDULING_GROUP *)(*((_QWORD *)Object + 155) + 128LL),
            *(_KSCHEDULING_GROUP_POLICY *)(*((_QWORD *)Object + 155) + 128LL),
            (struct _KSCHEDULING_GROUP *)(*(_QWORD *)(a3 + 1240) + 128LL));
        }
        else
        {
          v14 = *(_QWORD *)(a3 + 1248);
          if ( v14 )
            *((_QWORD *)Object + 156) = v14;
        }
        v15 = Object;
        if ( a4 != 4 )
          v15 = (PVOID)a3;
        ObfReferenceObjectWithTag(v15, 0x73507350u);
        v16 = *(_QWORD **)(a3 + 1296);
        v17 = Object + 1272;
        if ( *v16 != a3 + 1288 )
          __fastfail(3u);
        *v17 = a3 + 1288;
        *((_QWORD *)Object + 160) = v16;
        *v16 = v17;
        *(_QWORD *)(a3 + 1296) = v17;
        *((_QWORD *)Object + 163) = a3;
        *((_QWORD *)Object + 164) = *(_QWORD *)(a3 + 1312);
        v19 = *(_BYTE *)(a3 + 1102) + 1;
        *((_QWORD *)Object + 167) = v12;
        Object[1102] = v19;
        if ( v12 > 2 )
        {
          if ( v12 > 3 )
          {
            v25 = *(_QWORD *)(a3 + 1336) - 2LL;
            if ( *(_QWORD *)(a3 + 1336) != 2LL )
            {
              do
              {
                Pool2[v25] = *(_QWORD *)(*(_QWORD *)(a3 + 1344) + 8 * v25 - 8);
                --v25;
              }
              while ( v25 );
            }
          }
          *Pool2 = *(_QWORD *)(a3 + 1304);
          *((_QWORD *)Object + 168) = Pool2;
          Pool2 = 0LL;
        }
        if ( a4 == 4 )
        {
          PspUnlinkJobProcess(a3, a2);
          MmLinkJobProcess((__int64)Object, a2);
        }
        PspSetEffectiveJobLimits(Object, 0LL);
        *((_DWORD *)Object + 266) += *(_DWORD *)(a3 + 1064);
        *((_DWORD *)Object + 267) += *(_DWORD *)(a3 + 1068);
        *((_DWORD *)Object + 269) += *(_DWORD *)(a3 + 1076);
        *((_DWORD *)Object + 268) += *(_DWORD *)(a3 + 1072);
        *((_DWORD *)Object + 270) += *(_DWORD *)(a3 + 1080);
        *((_QWORD *)Object + 226) = *(_QWORD *)(a3 + 1808);
        PspUpdateJobEffectivePriorityLimits(Object, 3LL);
        if ( (*(_DWORD *)(a3 + 1552) & 0x1841000) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 388, *(_DWORD *)(a3 + 1552) & 0x1841000);
        for ( i = 0; i < 3; ++i )
        {
          if ( (unsigned int)(i - 1) > 1 )
          {
            v24 = *(_QWORD *)(a3 + 1040);
            if ( v24 )
              PspSetEffectiveRateControlJob((__int64)Object, v24);
          }
        }
        if ( *(_DWORD *)(a3 + 1580) )
        {
          v21 = a3;
          v22 = a3 == 0;
        }
        else
        {
          v21 = *(_QWORD *)(a3 + 1584);
          v22 = v21 == 0;
        }
        if ( v22 )
        {
          if ( *((_DWORD *)Object + 395) && a4 == 4 )
            IoSetDiskIoAttributionOnProcess(*((_QWORD *)Object + 198), a2);
        }
        else
        {
          v26[1] = v21;
          LOBYTE(v27) = 1;
          PspEnumJobsAndProcessesInJobHierarchy(
            Object,
            (int)PspSetJobIoAttributionJobPreCallback,
            0,
            0,
            (__int64)v26,
            5);
        }
        v23 = *(void **)(a3 + 1792);
        if ( v23 )
        {
          ObfReferenceObjectWithTag(v23, 0x624A7350u);
          *((_QWORD *)Object + 224) = *(_QWORD *)(a3 + 1792);
          *((_QWORD *)Object + 225) = *(_QWORD *)(a3 + 1800);
        }
        if ( a4 == 7 )
          _interlockedbittestandset((volatile signed __int32 *)Object + 389, 0);
        v8 = 0;
        goto LABEL_47;
      }
      _interlockedbittestandset((volatile signed __int32 *)Object + 389, 0);
    }
LABEL_27:
    v8 = 0;
    goto LABEL_6;
  }
  v8 = PspBindProcessSessionToJob(Object, a2);
  if ( v8 >= 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x73507350u);
    MmLinkJobProcess((__int64)Object, a2);
  }
  v9 = *((_QWORD *)Object + 198);
  if ( !*((_DWORD *)Object + 395) )
  {
    if ( !v9 )
      goto LABEL_6;
    v9 = *(_QWORD *)(v9 + 1584);
  }
  IoSetDiskIoAttributionOnProcess(v9, a2);
LABEL_6:
  if ( a2 && v8 >= 0 && PsCpuFairShareEnabled )
  {
    if ( (unsigned int)PsGetSessionId(a2) )
      PspEstablishDfssHierarchy((__int64)Object, a2, a4);
  }
  return (unsigned int)v8;
}
