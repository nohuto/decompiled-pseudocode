/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x140A64CA8
 * Callers:
 *     MmRotatePhysicalView @ 0x140A2E770 (MmRotatePhysicalView.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x140263DD0 (MmBuildMdlForNonPagedPool.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiMarkMdlComplete @ 0x1403CD75C (MiMarkMdlComplete.c)
 *     MiDereferenceIoPages @ 0x1403CE8E0 (MiDereferenceIoPages.c)
 *     MmSizeOfMdl @ 0x140458550 (MmSizeOfMdl.c)
 *     MiIsPfn @ 0x14045A380 (MiIsPfn.c)
 *     MiGetVadCacheAttribute @ 0x1404A5498 (MiGetVadCacheAttribute.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiSlowRotateCopy @ 0x1406783E4 (MiSlowRotateCopy.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiLogVirtualRotateEvent @ 0x1407EDA74 (MiLogVirtualRotateEvent.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReplaceRotateWithDemandZero(__int64 a1, __int64 a2, SIZE_T a3, __int64 a4, __int64 a5, SIZE_T *a6)
{
  SIZE_T v9; // rax
  struct _MDL *Pool; // r14
  SIZE_T v11; // rax
  struct _MDL *v12; // r15
  CSHORT v13; // di
  unsigned int VadCacheAttribute; // eax
  unsigned int v15; // eax
  __int64 v16; // r9
  __int64 ByteCount; // rcx
  unsigned int v18; // esi
  __int64 *v19; // rdi
  unsigned __int64 i; // rbx
  _BYTE v22[192]; // [rsp+40h] [rbp-1D8h] BYREF
  _BYTE v23[192]; // [rsp+100h] [rbp-118h] BYREF

  memset_0(v22, 0, 0xB8uLL);
  memset_0(v23, 0, 0xB8uLL);
  if ( a3 <= 0x10000 )
    goto LABEL_6;
  if ( a3 > 0xFFFFFFFF
    || (v9 = MmSizeOfMdl((PVOID)a2, a3), (Pool = (struct _MDL *)MiAllocatePool(0x40uLL, v9, 1868983881)) == 0LL) )
  {
    a3 = 0x10000LL;
LABEL_6:
    Pool = (struct _MDL *)v22;
    goto LABEL_7;
  }
  v11 = MmSizeOfMdl((PVOID)a2, a3);
  v12 = (struct _MDL *)MiAllocatePool(0x40uLL, v11, 1868983881);
  if ( v12 )
    goto LABEL_8;
  a3 = 0x10000LL;
LABEL_7:
  v12 = (struct _MDL *)v23;
LABEL_8:
  Pool->Next = 0LL;
  Pool->MdlFlags = 0;
  Pool->ByteCount = a3;
  Pool->ByteOffset = a2 & 0xFFF;
  Pool->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v13 = 8 * (((a3 + (a2 & 0xFFF) + 4095) >> 12) + 6);
  Pool->Size = v13;
  MmBuildMdlForNonPagedPool(Pool);
  Pool->MdlFlags |= 0x2000u;
  v12->Next = 0LL;
  v12->Size = v13;
  v12->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v12->ByteOffset = a2 & 0xFFF;
  v12->ByteCount = a3;
  v12->MdlFlags = 0x2000;
  VadCacheAttribute = MiGetVadCacheAttribute(a1);
  v15 = MiSwitchToTransition((ULONG_PTR)v12, a1, VadCacheAttribute);
  ByteCount = v12->ByteCount;
  v18 = v15;
  if ( ByteCount != a3 )
  {
    a3 = v12->ByteCount;
    Pool->ByteCount = ByteCount;
  }
  if ( v12->ByteCount )
  {
    if ( (int)guard_dispatch_icall_no_overrides(v12, Pool, a5, v16) < 0 )
      MiSlowRotateCopy((__int64)v12, (__int64)Pool, a1);
    MiMarkMdlComplete((__int64)v12, a1);
    v19 = (__int64 *)&Pool[1];
    for ( i = (unsigned __int64)Pool->ByteCount >> 12; i; --i )
    {
      if ( !(unsigned int)MiIsPfn(*v19) )
        MiDereferenceIoPages(1, *v19, 1uLL);
      ++v19;
    }
  }
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 && a3 )
    MiLogVirtualRotateEvent(a2, a3, 2);
  if ( Pool != (struct _MDL *)v22 )
    ExFreePoolWithTag(Pool, 0);
  if ( v12->ByteCount )
    MmUnlockPages(v12);
  if ( v12 != (struct _MDL *)v23 )
    ExFreePoolWithTag(v12, 0);
  *a6 = a3;
  return v18;
}
