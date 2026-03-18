/*
 * XREFs of KiQueryCpuPartitionAffinity @ 0x1404F4D3C
 * Callers:
 *     KiQueryCpuPartitionAffinityProcess @ 0x140204354 (KiQueryCpuPartitionAffinityProcess.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405B86B4 (KiUpdateSystemAvailableCpuState.c)
 * Callees:
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiAcquireCpuPartitionLock @ 0x1403C65B4 (KiAcquireCpuPartitionLock.c)
 *     KiReleaseCpuPartitionLock @ 0x1404F4DAC (KiReleaseCpuPartitionLock.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KiQueryCpuPartitionAffinity(__int64 a1, struct _KAFFINITY_EX *a2)
{
  struct _KAFFINITY_EX **v2; // rdi
  size_t v4; // r8
  __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  v2 = (struct _KAFFINITY_EX **)KiSystemCpuPartition;
  v4 = 8LL * a2->Count;
  LOBYTE(v7) = 0;
  memset_0(&a2->8, 0, v4);
  a2->Count = 1;
  KiAcquireCpuPartitionLock((__int64)v2, (unsigned __int8 *)&v7);
  KiCopyAffinityEx(a2, a2->Size, *v2);
  LOBYTE(v5) = v7;
  return KiReleaseCpuPartitionLock(v2, v5);
}
