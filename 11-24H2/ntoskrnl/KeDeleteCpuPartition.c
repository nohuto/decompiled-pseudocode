/*
 * XREFs of KeDeleteCpuPartition @ 0x14073C878
 * Callers:
 *     PspDeleteCpuPartition @ 0x140776BC0 (PspDeleteCpuPartition.c)
 * Callees:
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     KiRundownAvailableCpusWorkItem @ 0x14043A3D8 (KiRundownAvailableCpusWorkItem.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BF6B0 (KeCpuPartitionMoveCpus.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
