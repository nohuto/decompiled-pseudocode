/*
 * XREFs of PopQueryPowerLimitAttributes @ 0x140749E08
 * Callers:
 *     PopAssociatePowerLimitRequest @ 0x1407493A8 (PopAssociatePowerLimitRequest.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopQueryPowerLimitAttributes(__int64 a1)
{
  unsigned int v2; // esi
  void *Pool2; // r14
  void *v4; // rbp
  __int64 v5; // rax
  void *v6; // r15

  v2 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 120), 0LL);
  if ( v2 != -1073741789 )
    return v2;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, 0LL, 0x6D6C5050u);
  v4 = (void *)ExAllocatePool2(0x100uLL, 0LL, 0x6D6C5050u);
  v5 = ExAllocatePool2(0x100uLL, 0LL, 0x6D6C5050u);
  v6 = (void *)v5;
  if ( Pool2 && v4 && v5 )
  {
    v2 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 120), 0LL);
    if ( (v2 & 0x80000000) == 0 )
    {
      *(_DWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 80) = Pool2;
      *(_QWORD *)(a1 + 88) = v4;
      *(_DWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 104) = v6;
      return v2;
    }
    goto LABEL_8;
  }
  v2 = -1073741670;
  if ( Pool2 )
LABEL_8:
    ExFreePoolWithTag(Pool2, 0x6D6C5050u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x6D6C5050u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D6C5050u);
  return v2;
}
