/*
 * XREFs of MiRotateToFrameBuffer @ 0x140A233E4
 * Callers:
 *     MmRotatePhysicalView @ 0x140A231B0 (MmRotatePhysicalView.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MiDeleteRotateAndStopFaults @ 0x14026622C (MiDeleteRotateAndStopFaults.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140390E28 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiLegitimatePageForDriversToMap @ 0x14041DB10 (MiLegitimatePageForDriversToMap.c)
 *     MmSizeOfMdl @ 0x14044DA00 (MmSizeOfMdl.c)
 *     MiIsPfn @ 0x14044F7D0 (MiIsPfn.c)
 *     MiSanitizePage @ 0x14045F4E4 (MiSanitizePage.c)
 *     MiGetVadCacheAttribute @ 0x1404A0228 (MiGetVadCacheAttribute.c)
 *     MiRotateComplete @ 0x1404A0FB4 (MiRotateComplete.c)
 *     MiSlowRotateCopy @ 0x140679570 (MiSlowRotateCopy.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRotateToFrameBuffer(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int64 a5)
{
  SIZE_T v5; // r12
  int VadCacheAttribute; // ebx
  unsigned __int64 v7; // r9
  int v8; // esi
  __int64 v9; // r10
  __int64 *v10; // r14
  unsigned __int64 *v11; // r13
  unsigned int v12; // eax
  __int64 v13; // rax
  int v14; // ebx
  SIZE_T v15; // rax
  struct _MDL *Pool; // rax
  struct _MDL *v17; // rbx
  __int64 result; // rax
  unsigned int P; // [rsp+40h] [rbp-68h]
  unsigned int v20; // [rsp+48h] [rbp-60h]
  __int128 v21; // [rsp+58h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-40h]

  v21 = 0LL;
  CurrentThread = 0LL;
  v5 = a5 << 12;
  if ( a5 << 12 > 0xFFFFFFFF )
    return 3221225990LL;
  VadCacheAttribute = MiGetVadCacheAttribute(a2);
  v20 = VadCacheAttribute;
  v8 = 0;
  v10 = (__int64 *)(v9 + 48);
  v11 = (unsigned __int64 *)(v9 + 48);
  v12 = 0;
  while ( 1 )
  {
    P = v12;
    if ( v12 >= v7 )
      break;
    if ( (unsigned int)MiIsPfn(*v11) )
    {
      result = MiLegitimatePageForDriversToMap(48 * *v11 - 0x220000000000LL);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v13 = MiSanitizePage(*v11);
      v14 = MiReferenceIoPages(1u, v13, 1uLL, VadCacheAttribute, 0LL, 0LL);
      if ( v14 < 0 )
        goto LABEL_12;
      ++v8;
      VadCacheAttribute = v20;
    }
    v12 = P + 1;
    ++v11;
    v7 = a5;
  }
  if ( !(unsigned int)MiChargeCommit(a1, v7, 0) )
  {
LABEL_11:
    v14 = -1073741670;
LABEL_12:
    while ( v8 )
    {
      if ( !(unsigned int)MiIsPfn(*v10) )
      {
        MiDereferenceIoPages(1, *v10, 1uLL);
        --v8;
      }
      ++v10;
    }
    return (unsigned int)v14;
  }
  v15 = MmSizeOfMdl((PVOID)a3, v5);
  Pool = (struct _MDL *)MiAllocatePool(0x40uLL, v15, 1868983881);
  v17 = Pool;
  if ( !Pool )
  {
    MiReturnCommit(a1, a5, 0);
    goto LABEL_11;
  }
  Pool->Next = 0LL;
  Pool->Size = 8 * (((v5 + (a3 & 0xFFF) + 4095) >> 12) + 6);
  Pool->MdlFlags = 0;
  Pool->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  Pool->ByteOffset = a3 & 0xFFF;
  Pool->ByteCount = v5;
  MmProbeAndLockPages(Pool, 1, IoReadAccess);
  *((_QWORD *)&v21 + 1) = a2;
  CurrentThread = KeGetCurrentThread();
  MiDeleteRotateAndStopFaults(a3, v5 + a3 - 1, &v21);
  v17->MdlFlags |= 0x2000u;
  if ( (int)guard_dispatch_icall_no_overrides(a4, v17) < 0 )
    MiSlowRotateCopy(a4, (__int64)v17, a2);
  MiMapLockedPagesInUserSpaceHelper(a3, (__int64)v10, &v17[1].Next, v20, a5, a2, 16);
  MiRotateComplete((unsigned __int64 *)&v21);
  MmUnlockPages(v17);
  ExFreePoolWithTag(v17, 0);
  return 0LL;
}
