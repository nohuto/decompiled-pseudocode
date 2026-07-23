/*
 * XREFs of KeDeleteCpuPartition @ 0x14073A7A8
 * Callers:
 *     PspDeleteCpuPartition @ 0x140776DE0 (PspDeleteCpuPartition.c)
 * Callees:
 *     KiRundownAvailableCpusWorkItem @ 0x1402B9C1C (KiRundownAvailableCpusWorkItem.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BCCE0 (KeCpuPartitionMoveCpus.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall KeDeleteCpuPartition(__int64 P, __int64 a2)
{
  struct _KAFFINITY_EX *v2; // rdi
  struct _KAFFINITY_EX v5; // [rsp+20h] [rbp-138h] BYREF

  v2 = *(struct _KAFFINITY_EX **)P;
  if ( !(unsigned int)KeIsEmptyAffinityEx(*(unsigned __int16 **)P) )
  {
    memset_0(&v5.8, 0, sizeof(v5.8));
    v5.Reserved = 0;
    *(_DWORD *)&v5.Count = 2097153;
    memset_0(&v5.8, 0, sizeof(v5.8));
    KiCopyAffinityEx(&v5, 0x20u, v2);
    KeCpuPartitionMoveCpus(a2, P, &v5, 1);
  }
  KiRundownAvailableCpusWorkItem((struct _EX_RUNDOWN_REF *)(P + 40));
  ExFreePoolWithTag((PVOID)P, 0);
}
