/*
 * XREFs of PspAddSchedulingGroupToJobChain @ 0x1409774CC
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14091B360 (PspEstablishJobHierarchy.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeInsertSchedulingGroup @ 0x14045CB04 (KeInsertSchedulingGroup.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspFreeRateControl @ 0x14097782C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140977878 (PspAllocateRateControl.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAddSchedulingGroupToJobChain(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 Pool2; // rax
  __int64 v6; // rax
  __int64 RateControl; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r14
  struct _KSCHEDULING_GROUP **v12; // rsi
  __int64 v13; // r15
  struct _KSCHEDULING_GROUP *v14; // r14
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  void *v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD P[2]; // [rsp+30h] [rbp-10h] BYREF

  P[1] = P;
  v3 = P;
  P[0] = P;
  if ( a2 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x18uLL, 0x624A7350u);
    v3 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 16) = a2;
      v6 = P[0];
      if ( *(_QWORD **)(P[0] + 8LL) == P )
      {
        *v3 = P[0];
        v3[1] = P;
        *(_QWORD *)(v6 + 8) = v3;
        P[0] = v3;
        goto LABEL_5;
      }
LABEL_18:
      __fastfail(3u);
    }
    return 3221225626LL;
  }
  else
  {
LABEL_5:
    while ( a1 && (*(_DWORD *)(a1 + 1552) & 0x20) == 0 )
    {
      RateControl = PspAllocateRateControl(2LL);
      *(_QWORD *)(a1 + 1240) = RateControl;
      if ( !RateControl )
        goto LABEL_26;
      *(_DWORD *)(RateControl + 132) |= 3u;
      *(_DWORD *)(RateControl + 128) = 655370000;
      *(_DWORD *)(*(_QWORD *)(a1 + 1240) + 44LL) = *(_DWORD *)(RateControl + 128);
      *(_DWORD *)(*(_QWORD *)(a1 + 1240) + 40LL) |= 0x40u;
      v8 = ExAllocatePool2(0x100uLL, 0x18uLL, 0x624A7350u);
      v3 = (_QWORD *)v8;
      if ( !v8 )
      {
        PspFreeRateControl(*(PVOID *)(a1 + 1240));
        *(_QWORD *)(a1 + 1240) = 0LL;
LABEL_26:
        while ( 1 )
        {
          v18 = (_QWORD *)P[0];
          if ( (_QWORD *)P[0] == P )
            return 3221225626LL;
          v19 = *(_QWORD *)(P[0] + 16LL);
          v20 = *(void **)(v19 + 1240);
          if ( v20 )
          {
            PspFreeRateControl(v20);
            *(_QWORD *)(v19 + 1240) = 0LL;
            _InterlockedAnd((volatile signed __int32 *)(v19 + 1552), 0xFFFFFFDF);
          }
          v21 = *v18;
          if ( *(_QWORD **)(*v18 + 8LL) != v18 )
            goto LABEL_18;
          v22 = (_QWORD *)v18[1];
          if ( (_QWORD *)*v22 != v18 )
            goto LABEL_18;
          *v22 = v21;
          *(_QWORD *)(v21 + 8) = v22;
          ExFreePoolWithTag(v18, 0x624A7350u);
        }
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x20u);
      *(_QWORD *)(v8 + 16) = a1;
      v9 = P[0];
      if ( *(_QWORD **)(P[0] + 8LL) != P )
        goto LABEL_18;
      *v3 = P[0];
      v3[1] = P;
      *(_QWORD *)(v9 + 8) = v3;
      P[0] = v3;
      a1 = *(_QWORD *)(a1 + 1304);
    }
    while ( v3 != P )
    {
      v10 = v3[2];
      v11 = *(_QWORD *)(v10 + 1304);
      v12 = (struct _KSCHEDULING_GROUP **)(v10 + 1248);
      v13 = *(_QWORD *)(v10 + 1240);
      if ( v11 )
      {
        v14 = (struct _KSCHEDULING_GROUP *)(*(_QWORD *)(v11 + 1240) + 128LL);
      }
      else
      {
        v14 = *v12;
        if ( PsCpuFairShareEnabled && v14 )
          ObfReferenceObjectWithTag(*(PVOID *)(v10 + 1344), 0x624A7350u);
      }
      KeInsertSchedulingGroup((struct _KSCHEDULING_GROUP *)(v13 + 128), *(_KSCHEDULING_GROUP_POLICY *)(v13 + 128), v14);
      if ( *v12 )
        PspEnumJobsAndProcessesInJobHierarchy(
          (char *)v10,
          (int)PspSetCpuRateControlJobPreCallback,
          (int)PspSetCpuRateControlJobPostCallback,
          0,
          0LL,
          8);
      PspEnumJobsAndProcessesInJobHierarchy(
        (char *)v10,
        (int)PspSetCpuRateControlJobPreCallback,
        (int)PspSetCpuRateControlJobPostCallback,
        0,
        *(_QWORD *)(v10 + 1240),
        8);
      v15 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 )
        goto LABEL_18;
      v16 = (_QWORD *)v3[1];
      if ( (_QWORD *)*v16 != v3 )
        goto LABEL_18;
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      ExFreePoolWithTag(v3, 0x624A7350u);
      v3 = (_QWORD *)P[0];
    }
    return 0LL;
  }
}
