/*
 * XREFs of PspReturnResourceQuota @ 0x14024B468
 * Callers:
 *     PsReturnPoolQuota @ 0x14024B2D0 (PsReturnPoolQuota.c)
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     ExReturnPoolQuota @ 0x1402B4980 (ExReturnPoolQuota.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x14031AC50 (IopFreeIrp.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1404066F0 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14041B3B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ObpFreeObject @ 0x1408469C0 (ObpFreeObject.c)
 *     PsReturnSharedPoolQuota @ 0x14085A690 (PsReturnSharedPoolQuota.c)
 *     PspDereferenceQuotaBlock @ 0x1409D59C0 (PspDereferenceQuotaBlock.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     PspLockQuotaExpansion @ 0x14024B79C (PspLockQuotaExpansion.c)
 *     PspUnlockQuotaExpansion @ 0x14024C868 (PspUnlockQuotaExpansion.c)
 *     MmReturnPoolQuota @ 0x14024C8E0 (MmReturnPoolQuota.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspReturnResourceQuota(unsigned int a1, __int64 a2, __int64 a3, int a4)
{
  int *v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v13; // rcx
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0;
  v7 = &PspQuotaExpansionDescriptors[14 * a1];
  PspLockQuotaExpansion(v7, &v14);
  if ( a3 )
  {
    if ( *((__int64 (__fastcall **)(_QWORD, _QWORD))v7 + 4) == MmReturnPoolQuota )
      MmReturnPoolQuota(a1, a3);
    else
      guard_dispatch_icall_no_overrides(a1, a3, v10, v11);
  }
  if ( a4 )
  {
    v9 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v9 + 8) != a2 + 80 || (v13 = *(_QWORD **)(a2 + 88), *v13 != a2 + 80) )
      __fastfail(3u);
    *v13 = v9;
    *(_QWORD *)(v9 + 8) = v13;
  }
  LOBYTE(v9) = v14;
  return PspUnlockQuotaExpansion(v7, v9);
}
