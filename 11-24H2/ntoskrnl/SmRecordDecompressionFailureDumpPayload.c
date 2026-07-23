/*
 * XREFs of SmRecordDecompressionFailureDumpPayload @ 0x14060D6D0
 * Callers:
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14060A0A8 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmRecordDecompressionFailureDumpPayload(
        __int64 a1,
        ULONG a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        PVOID BaseAddress,
        int *a9)
{
  struct _MDL *v10; // rdi
  char *v11; // r15
  int v12; // r12d
  __int64 v13; // rbx
  __int64 v14; // r14
  unsigned int v15; // ebx
  unsigned __int64 v16; // rbx
  struct _MDL *v17; // rax
  __int64 v18; // rcx
  PHYSICAL_ADDRESS v19; // rax
  KIRQL v20; // al
  __int64 v21; // rbx
  size_t Size; // [rsp+40h] [rbp-58h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v13 = a2;
  Size = a2;
  v14 = SmAllocEx(a2 + 56LL, 0x50626D73u, -1);
  if ( !v14 )
    goto LABEL_2;
  v16 = ((unsigned __int64)(a1 & 0xFFF) + v13 + 4095) >> 12;
  v17 = (struct _MDL *)SmAllocEx(8 * v16 + 48, 0x50426D73u, -1);
  v10 = v17;
  if ( !v17 )
    goto LABEL_2;
  v17->Next = 0LL;
  v17->Size = 8 * (v16 + 6);
  v17->MdlFlags = 0;
  v17->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v17->ByteOffset = a1 & 0xFFF;
  v17->ByteCount = a2;
  MmProbeAndLockPages(v17, 0, IoReadAccess);
  v12 = 1;
  v11 = (char *)((v10->MdlFlags & 5) != 0
               ? v10->MappedSystemVa
               : MmMapLockedPagesSpecifyCache(v10, 0, MmCached, 0LL, 0, 0x40000020u));
  if ( v11 )
  {
    *(_QWORD *)(v14 + 32) = 0LL;
    *(_QWORD *)(v14 + 40) = 0LL;
    *(_QWORD *)(v14 + 48) = 0LL;
    *(_QWORD *)(v14 + 56) = 0LL;
    *(_DWORD *)v14 = 65539;
    *(_DWORD *)(v14 + 4) = a3;
    *(_DWORD *)(v14 + 8) = a4;
    *(_DWORD *)(v14 + 12) = a2;
    *(_DWORD *)(v14 + 16) = a5;
    v18 = (unsigned int)(a7 - a1);
    *(_DWORD *)(v14 + 20) = v18;
    *(_QWORD *)(v14 + 24) = a6;
    *(_QWORD *)(v14 + 32) = MmGetPhysicalAddress(&v11[v18]).QuadPart / 4096;
    if ( (((a7 & 0xFFF) + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) == 0x1000 )
      v19.QuadPart = -1LL;
    else
      v19.QuadPart = MmGetPhysicalAddress(&v11[a3 - 1 + *(unsigned int *)(v14 + 20)]).QuadPart / 4096;
    *(PHYSICAL_ADDRESS *)(v14 + 40) = v19;
    *(_QWORD *)(v14 + 48) = MmGetPhysicalAddress(BaseAddress).QuadPart / 4096;
    memmove((void *)(v14 + 56), v11, Size);
    v20 = ExAcquireSpinLockExclusive(&dword_140E28944);
    v21 = qword_140E28978;
    qword_140E28978 = v14;
    dword_140E28980 = *a9;
    ExReleaseSpinLockExclusive(&dword_140E28944, v20);
    v14 = v21;
    v15 = 0;
  }
  else
  {
LABEL_2:
    v15 = -1073741670;
  }
  if ( v11 )
    MmUnmapLockedPages(v11, v10);
  if ( v12 )
    MmUnlockPages(v10);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v14 )
    ExFreePoolWithTag((PVOID)v14, 0);
  return v15;
}
