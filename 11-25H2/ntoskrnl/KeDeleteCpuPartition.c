/*
 * XREFs of KeDeleteCpuPartition @ 0x1407305E8
 * Callers:
 *     PspDeleteCpuPartition @ 0x1407671F0 (PspDeleteCpuPartition.c)
 * Callees:
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiRundownAvailableCpusWorkItem @ 0x14036D3EC (KiRundownAvailableCpusWorkItem.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BB870 (KeCpuPartitionMoveCpus.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
