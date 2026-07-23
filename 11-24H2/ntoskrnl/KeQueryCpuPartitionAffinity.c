/*
 * XREFs of KeQueryCpuPartitionAffinity @ 0x1405BD154
 * Callers:
 *     KeQuerySystemCpuPartitionAffinity @ 0x1405BD2B0 (KeQuerySystemCpuPartitionAffinity.c)
 *     KiAdjustProcessCpuSetsAfterCpuPartitionChange @ 0x1405BD53C (KiAdjustProcessCpuSetsAfterCpuPartitionChange.c)
 *     NtQueryInformationCpuPartition @ 0x140775EF0 (NtQueryInformationCpuPartition.c)
 * Callees:
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeCountSetBitsGroupMask @ 0x140407DD4 (KeCountSetBitsGroupMask.c)
 *     KiAcquireCpuPartitionLock @ 0x14048B51C (KiAcquireCpuPartitionLock.c)
 *     KeComputeGroupMask @ 0x1404936EC (KeComputeGroupMask.c)
 *     KiReleaseCpuPartitionLock @ 0x1404F26AC (KiReleaseCpuPartitionLock.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeQueryCpuPartitionAffinity(
        struct _KAFFINITY_EX **a1,
        void *a2,
        unsigned __int16 a3,
        unsigned __int16 *a4)
{
  __int64 v4; // r14
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // bx
  unsigned __int16 Count; // r8
  unsigned __int16 v12; // cx
  unsigned __int16 i; // dx
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int8 v16[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v17; // [rsp+28h] [rbp-D8h] BYREF
  struct _KAFFINITY_EX v18; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a3;
  memset_0(&v18.8, 0, sizeof(v18.8));
  *(_QWORD *)&v18.Count = 2097153LL;
  v16[0] = 0;
  v17 = 0LL;
  memset_0(&v18.8, 0, sizeof(v18.8));
  KiAcquireCpuPartitionLock((__int64)a1, v16);
  KiCopyAffinityEx(&v18, v18.Size, *a1);
  KiReleaseCpuPartitionLock((__int64)a1, v16[0]);
  KeComputeGroupMask(&v18.Count, (signed __int64 *)&v17);
  v8 = KeCountSetBitsGroupMask((__int64)&v17);
  v9 = v8;
  if ( (unsigned __int16)v4 >= v8 )
  {
    memset_0(a2, 0, 16 * v4);
    Count = v18.Count;
    v12 = 0;
    for ( i = 0; v12 < Count; ++v12 )
    {
      if ( i >= v9 )
        break;
      if ( v12 < Count )
      {
        v14 = v18.Bitmap[v12];
        if ( v14 )
        {
          v15 = 2LL * i++;
          *((_WORD *)a2 + 4 * v15 + 4) = v12;
          *((_QWORD *)a2 + v15) = v14;
        }
      }
    }
    *a4 = i;
    return 0LL;
  }
  else
  {
    *a4 = v8;
    return 3221225507LL;
  }
}
