/*
 * XREFs of PspReturnResourceQuota @ 0x14027BA78
 * Callers:
 *     ExReturnPoolQuota @ 0x14021ACC0 (ExReturnPoolQuota.c)
 *     PsReturnPoolQuota @ 0x14027B8E0 (PsReturnPoolQuota.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1402C37E0 (IopFreeIrp.c)
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C8EA0 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14040EEF0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ObpFreeObject @ 0x140842C80 (ObpFreeObject.c)
 *     PsReturnSharedPoolQuota @ 0x140856970 (PsReturnSharedPoolQuota.c)
 *     PspDereferenceQuotaBlock @ 0x1409C57F0 (PspDereferenceQuotaBlock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     PspLockQuotaExpansion @ 0x14027BDAC (PspLockQuotaExpansion.c)
 *     PspUnlockQuotaExpansion @ 0x14027CE78 (PspUnlockQuotaExpansion.c)
 *     MmReturnPoolQuota @ 0x14027CEF0 (MmReturnPoolQuota.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
