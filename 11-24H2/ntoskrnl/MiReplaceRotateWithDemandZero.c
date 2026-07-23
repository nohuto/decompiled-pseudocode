/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x140A5D478
 * Callers:
 *     MmRotatePhysicalView @ 0x140A231B0 (MmRotatePhysicalView.c)
 * Callees:
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MiMarkMdlComplete @ 0x140267140 (MiMarkMdlComplete.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MmBuildMdlForNonPagedPool @ 0x140293640 (MmBuildMdlForNonPagedPool.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     MmSizeOfMdl @ 0x14044DA00 (MmSizeOfMdl.c)
 *     MiIsPfn @ 0x14044F7D0 (MiIsPfn.c)
 *     MiGetVadCacheAttribute @ 0x1404A0228 (MiGetVadCacheAttribute.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiSlowRotateCopy @ 0x140679570 (MiSlowRotateCopy.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiLogVirtualRotateEvent @ 0x1407EE044 (MiLogVirtualRotateEvent.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 ByteCount; // rcx
  unsigned int v17; // esi
  __int64 *v18; // rdi
  unsigned __int64 i; // rbx
  _BYTE v21[192]; // [rsp+40h] [rbp-1D8h] BYREF
  _BYTE v22[192]; // [rsp+100h] [rbp-118h] BYREF

  memset_0(v21, 0, 0xB8uLL);
  memset_0(v22, 0, 0xB8uLL);
  if ( a3 <= 0x10000 )
    goto LABEL_6;
  if ( a3 > 0xFFFFFFFF
    || (v9 = MmSizeOfMdl((PVOID)a2, a3), (Pool = (struct _MDL *)MiAllocatePool(0x40uLL, v9, 1868983881)) == 0LL) )
  {
    a3 = 0x10000LL;
LABEL_6:
    Pool = (struct _MDL *)v21;
    goto LABEL_7;
  }
  v11 = MmSizeOfMdl((PVOID)a2, a3);
  v12 = (struct _MDL *)MiAllocatePool(0x40uLL, v11, 1868983881);
  if ( v12 )
    goto LABEL_8;
  a3 = 0x10000LL;
LABEL_7:
  v12 = (struct _MDL *)v22;
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
  v17 = v15;
  if ( ByteCount != a3 )
  {
    a3 = v12->ByteCount;
    Pool->ByteCount = ByteCount;
  }
  if ( v12->ByteCount )
  {
    if ( (int)guard_dispatch_icall_no_overrides(v12, Pool) < 0 )
      MiSlowRotateCopy((__int64)v12, (__int64)Pool, a1);
    MiMarkMdlComplete((__int64)v12, a1);
    v18 = (__int64 *)&Pool[1];
    for ( i = (unsigned __int64)Pool->ByteCount >> 12; i; --i )
    {
      if ( !(unsigned int)MiIsPfn(*v18) )
        MiDereferenceIoPages(1, *v18, 1uLL);
      ++v18;
    }
  }
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 && a3 )
    MiLogVirtualRotateEvent(a2, a3, 2);
  if ( Pool != (struct _MDL *)v21 )
    ExFreePoolWithTag(Pool, 0);
  if ( v12->ByteCount )
    MmUnlockPages(v12);
  if ( v12 != (struct _MDL *)v22 )
    ExFreePoolWithTag(v12, 0);
  *a6 = a3;
  return v17;
}
