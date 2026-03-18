/*
 * XREFs of PspAddSchedulingGroupToJobChain @ 0x140A57628
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1409040C0 (PspEstablishJobHierarchy.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeInsertSchedulingGroup @ 0x1402F5D80 (KeInsertSchedulingGroup.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408DC8DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspFreeRateControl @ 0x14091C530 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14091C57C (PspAllocateRateControl.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAddSchedulingGroupToJobChain(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 Pool2; // rax
  __int64 v6; // rax
  __int64 *RateControl; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rdi
  __int64 v12; // r14
  struct _KSCHEDULING_GROUP **v13; // rsi
  __int64 v14; // r15
  struct _KSCHEDULING_GROUP *v15; // r14
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  char **v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD P[2]; // [rsp+30h] [rbp-10h] BYREF

  P[1] = P;
  v3 = P;
  P[0] = P;
  if ( a2 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
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
LABEL_20:
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
      *((_DWORD *)RateControl + 33) |= 3u;
      *((_DWORD *)RateControl + 32) = 655370000;
      *(_DWORD *)(*(_QWORD *)(a1 + 1240) + 44LL) = *((_DWORD *)RateControl + 32);
      *(_DWORD *)(*(_QWORD *)(a1 + 1240) + 40LL) |= 0x40u;
      v8 = ExAllocatePool2(0x100uLL);
      v3 = (_QWORD *)v8;
      if ( !v8 )
      {
        PspFreeRateControl(*(char ***)(a1 + 1240), 2u);
        *(_QWORD *)(a1 + 1240) = 0LL;
LABEL_26:
        while ( 1 )
        {
          v18 = (_QWORD *)P[0];
          if ( (_QWORD *)P[0] == P )
            return 3221225626LL;
          v19 = *(_QWORD *)(P[0] + 16LL);
          v20 = *(char ***)(v19 + 1240);
          if ( v20 )
          {
            PspFreeRateControl(v20, 2u);
            *(_QWORD *)(v19 + 1240) = 0LL;
            _InterlockedAnd((volatile signed __int32 *)(v19 + 1552), 0xFFFFFFDF);
          }
          v21 = *v18;
          if ( *(_QWORD **)(*v18 + 8LL) != v18 )
            goto LABEL_20;
          v22 = (_QWORD *)v18[1];
          if ( (_QWORD *)*v22 != v18 )
            goto LABEL_20;
          *v22 = v21;
          *(_QWORD *)(v21 + 8) = v22;
          ExFreePoolWithTag(v18, 0x624A7350u);
        }
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x20u);
      *(_QWORD *)(v8 + 16) = a1;
      v9 = P[0];
      if ( *(_QWORD **)(P[0] + 8LL) != P )
        goto LABEL_20;
      *v3 = P[0];
      v3[1] = P;
      *(_QWORD *)(v9 + 8) = v3;
      P[0] = v3;
      a1 = *(_QWORD *)(a1 + 1304);
    }
    while ( v3 != P )
    {
      v11 = v3[2];
      v12 = *(_QWORD *)(v11 + 1304);
      v13 = (struct _KSCHEDULING_GROUP **)(v11 + 1248);
      v14 = *(_QWORD *)(v11 + 1240);
      if ( v12 )
      {
        v15 = (struct _KSCHEDULING_GROUP *)(*(_QWORD *)(v12 + 1240) + 128LL);
      }
      else
      {
        v15 = *v13;
        if ( PsCpuFairShareEnabled && v15 )
          ObfReferenceObjectWithTag(*(PVOID *)(v11 + 1344), 0x624A7350u);
      }
      KeInsertSchedulingGroup((struct _KSCHEDULING_GROUP *)(v14 + 128), *(_KSCHEDULING_GROUP_POLICY *)(v14 + 128), v15);
      if ( *v13 )
        PspEnumJobsAndProcessesInJobHierarchy(
          (char *)v11,
          (int)PspSetCpuRateControlJobPreCallback,
          (int)PspSetCpuRateControlJobPostCallback,
          0,
          0LL,
          8);
      PspEnumJobsAndProcessesInJobHierarchy(
        (char *)v11,
        (int)PspSetCpuRateControlJobPreCallback,
        (int)PspSetCpuRateControlJobPostCallback,
        0,
        *(_QWORD *)(v11 + 1240),
        8);
      v16 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 )
        goto LABEL_20;
      v17 = (_QWORD *)v3[1];
      if ( (_QWORD *)*v17 != v3 )
        goto LABEL_20;
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      ExFreePoolWithTag(v3, 0x624A7350u);
      v3 = (_QWORD *)P[0];
    }
    return 0LL;
  }
}
