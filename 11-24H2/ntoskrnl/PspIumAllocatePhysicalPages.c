/*
 * XREFs of PspIumAllocatePhysicalPages @ 0x1405E39B4
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmFreeSecureKernelPages @ 0x1404331CC (MmFreeSecureKernelPages.c)
 *     MmAllocateSecureKernelPages @ 0x140689BF4 (MmAllocateSecureKernelPages.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspIumAllocatePhysicalPages(int a1, ULONG_PTR a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 SecureKernelPages; // rax
  unsigned int v8; // ebx
  void *v9; // rdi
  __int64 v11; // rax
  unsigned int v12; // r14d
  unsigned int v13; // r14d
  _DWORD *v14; // rax
  _DWORD *v15; // rsi
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h]

  v17 = 0LL;
  memset(&MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
  SecureKernelPages = MmAllocateSecureKernelPages(a2, a5);
  v8 = 0;
  v9 = (void *)SecureKernelPages;
  if ( !SecureKernelPages )
    return 3221225495LL;
  if ( a1 )
  {
    v12 = *(_DWORD *)(SecureKernelPages + 40);
    *(_DWORD *)&MemoryDescriptorList.Size = 131128;
    MemoryDescriptorList.StartVa = 0LL;
    *(_QWORD *)&MemoryDescriptorList.ByteCount = 4096LL;
    v13 = v12 >> 12;
    v17 = *(_QWORD *)(SecureKernelPages + 8LL * (v13 - 1) + 48);
    v14 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    v15 = v14;
    if ( !v14 )
    {
      MmFreeSecureKernelPages((__int64)v9, 0);
      v8 = -1073741670;
      goto LABEL_9;
    }
    memmove(v14, v9, 8LL * v13 + 48);
    v15[10] -= 4096;
    MmUnmapLockedPages(v15, &MemoryDescriptorList);
    v11 = v17;
  }
  else
  {
    v11 = *(_QWORD *)(SecureKernelPages + 48);
  }
  *a4 = v11;
LABEL_9:
  ExFreePoolWithTag(v9, 0);
  return v8;
}
