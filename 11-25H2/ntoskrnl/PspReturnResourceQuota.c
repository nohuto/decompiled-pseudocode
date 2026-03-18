/*
 * XREFs of PspReturnResourceQuota @ 0x1403C651C
 * Callers:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140250FE0 (IopFreeIrp.c)
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C5970 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C5AE0 (PsReturnProcessPagedPoolQuota.c)
 *     ExReturnPoolQuota @ 0x1403C5CF0 (ExReturnPoolQuota.c)
 *     PsReturnPoolQuota @ 0x1403C6380 (PsReturnPoolQuota.c)
 *     ObpFreeObject @ 0x14084AD10 (ObpFreeObject.c)
 *     PspDereferenceQuotaBlock @ 0x1408E0160 (PspDereferenceQuotaBlock.c)
 *     PsReturnSharedPoolQuota @ 0x14091B660 (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     PspLockQuotaExpansion @ 0x1403C685C (PspLockQuotaExpansion.c)
 *     PspUnlockQuotaExpansion @ 0x1403C6BB8 (PspUnlockQuotaExpansion.c)
 *     MmReturnPoolQuota @ 0x1403C6C30 (MmReturnPoolQuota.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspReturnResourceQuota(unsigned int a1, __int64 a2, __int64 a3, int a4)
{
  int *v7; // rbx
  __int64 v9; // rdx
  _QWORD *v11; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  v7 = &PspQuotaExpansionDescriptors[14 * a1];
  PspLockQuotaExpansion(v7, &v12);
  if ( a3 )
  {
    if ( *((__int64 (__fastcall **)(_QWORD, _QWORD))v7 + 4) == MmReturnPoolQuota )
      MmReturnPoolQuota(a1, a3);
    else
      guard_dispatch_icall_no_overrides(a1, a3);
  }
  if ( a4 )
  {
    v9 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v9 + 8) != a2 + 80 || (v11 = *(_QWORD **)(a2 + 88), *v11 != a2 + 80) )
      __fastfail(3u);
    *v11 = v9;
    *(_QWORD *)(v9 + 8) = v11;
  }
  LOBYTE(v9) = v12;
  return PspUnlockQuotaExpansion(v7, v9);
}
