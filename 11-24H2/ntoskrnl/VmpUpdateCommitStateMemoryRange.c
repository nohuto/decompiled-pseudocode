/*
 * XREFs of VmpUpdateCommitStateMemoryRange @ 0x140649B80
 * Callers:
 *     VmUpdateCommitMemoryRange @ 0x14079F1A0 (VmUpdateCommitMemoryRange.c)
 * Callees:
 *     VmpProcessContextLockShared @ 0x14039A340 (VmpProcessContextLockShared.c)
 *     VmpProcessContextUnlockShared @ 0x14039A38C (VmpProcessContextUnlockShared.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x14039ECB4 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpFindNextPinnedPageStateHelper @ 0x140648D94 (VmpFindNextPinnedPageStateHelper.c)
 *     ZwAllocateVirtualMemory @ 0x1406A76B0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1406A7770 (ZwFreeVirtualMemory.c)
 *     MmCommitDecommitSecuredMemory @ 0x1407EE244 (MmCommitDecommitSecuredMemory.c)
 */

__int64 __fastcall VmpUpdateCommitStateMemoryRange(__int64 a1, __int128 *a2, ULONG a3)
{
  __int128 v5; // xmm0
  __int64 v6; // r15
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  PVOID BaseAddress; // [rsp+40h] [rbp-40h] BYREF
  __int128 v14; // [rsp+48h] [rbp-38h] BYREF
  __int128 v15; // [rsp+58h] [rbp-28h] BYREF
  __int128 v16; // [rsp+68h] [rbp-18h] BYREF
  __int64 v17; // [rsp+78h] [rbp-8h]
  int v18; // [rsp+A8h] [rbp+28h] BYREF
  ULONG_PTR RegionSize; // [rsp+B8h] [rbp+38h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  v18 = 0;
  v15 = 0LL;
  v5 = *a2;
  v17 = 0LL;
  v16 = 0LL;
  v14 = v5;
  v6 = VmpProcessContextLockShared((PEX_SPIN_LOCK)a1);
  v7 = *(_QWORD *)(a1 + 24);
  if ( (*(_BYTE *)(a1 + 32) & 1) != 0 && v7 )
    v7 ^= a1 + 24;
  while ( v7 )
  {
    if ( (unsigned __int64)v14 <= *(_QWORD *)(v7 + 32) )
    {
      if ( (unsigned __int64)v14 >= *(_QWORD *)(v7 + 24) )
        break;
      v8 = *(_QWORD *)v7;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 8);
    }
    if ( (*(_BYTE *)(a1 + 32) & 1) != 0 && v8 )
      v7 ^= v8;
    else
      v7 = v8;
  }
  if ( !v7 )
  {
    v9 = -1073741172;
    goto LABEL_26;
  }
  if ( (unsigned __int64)(*(_QWORD *)(v7 + 32) - v14 + 1) < *((_QWORD *)&v14 + 1) )
  {
    v9 = -1073741800;
LABEL_26:
    if ( v6 != -1 )
      VmpProcessContextUnlockShared((volatile LONG *)a1, v6);
    return v9;
  }
  BaseAddress = (PVOID)((_QWORD)v14 << 12);
  RegionSize = *((_QWORD *)&v14 + 1) << 12;
  v10 = *(_QWORD *)(v7 + 56);
  if ( v10 && !a3 )
  {
    *(_QWORD *)&v16 = v7;
    while ( 1 )
    {
      VmpConvertPortionVpnRangeToGpnRange(
        a1,
        (unsigned __int64 *)&v14,
        0xFFFFFFFFFFFFFFFFuLL,
        (__int64 *)&v16,
        &v15,
        &v18,
        2);
      if ( VmpFindNextPinnedPageStateHelper(a1, v15, v15 + *((_QWORD *)&v15 + 1) - 1LL, 1) != -1 )
        break;
      if ( !*((_QWORD *)&v14 + 1) )
        goto LABEL_23;
    }
    v9 = -1073741780;
    goto LABEL_26;
  }
LABEL_23:
  VmpProcessContextUnlockShared((volatile LONG *)a1, v6);
  if ( v10 )
  {
    return (unsigned int)MmCommitDecommitSecuredMemory(BaseAddress, RegionSize, a3, v10);
  }
  else if ( a3 )
  {
    return (unsigned int)ZwAllocateVirtualMemory(
                           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                           &BaseAddress,
                           0LL,
                           &RegionSize,
                           0x1000u,
                           a3);
  }
  else
  {
    return (unsigned int)ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
  }
}
