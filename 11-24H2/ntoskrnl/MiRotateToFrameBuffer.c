/*
 * XREFs of MiRotateToFrameBuffer @ 0x140A2E9A4
 * Callers:
 *     MmRotatePhysicalView @ 0x140A2E770 (MmRotatePhysicalView.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     MiReferenceIoPages @ 0x140283108 (MiReferenceIoPages.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402855E0 (MiLegitimatePageForDriversToMap.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiDeleteRotateAndStopFaults @ 0x1403CC068 (MiDeleteRotateAndStopFaults.c)
 *     MiDereferenceIoPages @ 0x1403CE8E0 (MiDereferenceIoPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403CFA04 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MmSizeOfMdl @ 0x140458550 (MmSizeOfMdl.c)
 *     MiIsPfn @ 0x14045A380 (MiIsPfn.c)
 *     MiSanitizePage @ 0x140467A44 (MiSanitizePage.c)
 *     MiGetVadCacheAttribute @ 0x1404A5498 (MiGetVadCacheAttribute.c)
 *     MiRotateComplete @ 0x1404A62D4 (MiRotateComplete.c)
 *     MiSlowRotateCopy @ 0x1406783E4 (MiSlowRotateCopy.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRotateToFrameBuffer(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7)
{
  SIZE_T v7; // r12
  int VadCacheAttribute; // ebx
  unsigned __int64 v9; // r9
  int v10; // esi
  __int64 v11; // r10
  __int64 *v12; // r14
  unsigned __int64 *v13; // r13
  unsigned int v14; // eax
  __int64 v15; // rax
  int v16; // ebx
  SIZE_T v17; // rax
  struct _MDL *Pool; // rax
  struct _MDL *v19; // rbx
  __int64 result; // rax
  __int64 v21; // r9
  unsigned int P; // [rsp+40h] [rbp-68h]
  int v23; // [rsp+48h] [rbp-60h]
  __int128 v24; // [rsp+58h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-40h]

  v24 = 0LL;
  CurrentThread = 0LL;
  v7 = a5 << 12;
  if ( a5 << 12 > 0xFFFFFFFF )
    return 3221225990LL;
  VadCacheAttribute = MiGetVadCacheAttribute(a2);
  v23 = VadCacheAttribute;
  v10 = 0;
  v12 = (__int64 *)(v11 + 48);
  v13 = (unsigned __int64 *)(v11 + 48);
  v14 = 0;
  while ( 1 )
  {
    P = v14;
    if ( v14 >= v9 )
      break;
    if ( (unsigned int)MiIsPfn(*v13) )
    {
      result = MiLegitimatePageForDriversToMap(48 * *v13 - 0x220000000000LL);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v15 = MiSanitizePage(*v13);
      v16 = MiReferenceIoPages(1u, v15, 1uLL, VadCacheAttribute, 0LL, 0LL);
      if ( v16 < 0 )
        goto LABEL_12;
      ++v10;
      VadCacheAttribute = v23;
    }
    v14 = P + 1;
    ++v13;
    v9 = a5;
  }
  if ( !(unsigned int)MiChargeCommit(a1, v9, 0) )
  {
LABEL_11:
    v16 = -1073741670;
LABEL_12:
    while ( v10 )
    {
      if ( !(unsigned int)MiIsPfn(*v12) )
      {
        MiDereferenceIoPages(1, *v12, 1uLL);
        --v10;
      }
      ++v12;
    }
    return (unsigned int)v16;
  }
  v17 = MmSizeOfMdl((PVOID)a3, v7);
  Pool = (struct _MDL *)MiAllocatePool(0x40uLL, v17, 1868983881);
  v19 = Pool;
  if ( !Pool )
  {
    MiReturnCommit(a1, a5, 0);
    goto LABEL_11;
  }
  Pool->Next = 0LL;
  Pool->Size = 8 * (((v7 + (a3 & 0xFFF) + 4095) >> 12) + 6);
  Pool->MdlFlags = 0;
  Pool->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  Pool->ByteOffset = a3 & 0xFFF;
  Pool->ByteCount = v7;
  MmProbeAndLockPages(Pool, 1, IoReadAccess);
  *((_QWORD *)&v24 + 1) = a2;
  CurrentThread = KeGetCurrentThread();
  MiDeleteRotateAndStopFaults(a3, v7 + a3 - 1, &v24);
  v19->MdlFlags |= 0x2000u;
  if ( (int)guard_dispatch_icall_no_overrides(a4, v19, a7, v21) < 0 )
    MiSlowRotateCopy(a4, (__int64)v19, a2);
  MiMapLockedPagesInUserSpaceHelper(a3, (__int64)v12, &v19[1].Next, v23, a5, a2, 16);
  MiRotateComplete((unsigned __int64 *)&v24);
  MmUnlockPages(v19);
  ExFreePoolWithTag(v19, 0);
  return 0LL;
}
