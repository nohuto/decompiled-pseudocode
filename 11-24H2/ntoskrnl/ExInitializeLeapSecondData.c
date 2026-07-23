/*
 * XREFs of ExInitializeLeapSecondData @ 0x1407B6080
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmSizeOfMdl @ 0x14044DA00 (MmSizeOfMdl.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateSection @ 0x1406A7CF0 (ZwCreateSection.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpReadLeapSecondData @ 0x1407B68FC (ExpReadLeapSecondData.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     MmMapViewInSessionSpace @ 0x1408EB520 (MmMapViewInSessionSpace.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 ExInitializeLeapSecondData()
{
  NTSTATUS v0; // edi
  PVOID v1; // r12
  size_t v2; // r14
  SIZE_T v3; // rax
  struct _MDL *Pool2; // rax
  struct _MDL *v5; // rdi
  __int16 v6; // dx
  PVOID v7; // rsi
  LARGE_INTEGER v9[7]; // [rsp+40h] [rbp-38h] BYREF
  PVOID MappedBase; // [rsp+80h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF
  PVOID Section; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+98h] [rbp+20h] BYREF

  Handle = 0LL;
  v9[0].QuadPart = 4096LL;
  v0 = ZwCreateSection(&Handle, 6u, 0LL, v9, 4u, 0x8000000u, 0LL);
  if ( v0 >= 0 )
  {
    Section = 0LL;
    v0 = ObReferenceObjectByHandle(Handle, 6u, MmSectionObjectType, 0, &Section, 0LL);
    if ( v0 >= 0 )
    {
      MappedBase = 0LL;
      ViewSize = 0LL;
      v1 = Section;
      v0 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
      if ( v0 >= 0 )
      {
        v2 = ViewSize;
        v3 = MmSizeOfMdl(MappedBase, ViewSize);
        Pool2 = (struct _MDL *)ExAllocatePool2(0x40uLL, v3, 0x6453704Cu);
        v5 = Pool2;
        if ( !Pool2 )
          goto LABEL_5;
        Pool2->Next = 0LL;
        v6 = (__int16)MappedBase;
        Pool2->Size = 8 * (((v2 + ((unsigned __int16)MappedBase & 0xFFF) + 4095LL) >> 12) + 6);
        Pool2->MdlFlags = 0;
        Pool2->StartVa = (PVOID)((unsigned __int64)MappedBase & 0xFFFFFFFFFFFFF000uLL);
        Pool2->ByteOffset = v6 & 0xFFF;
        Pool2->ByteCount = v2;
        MmProbeAndLockPages(Pool2, 0, IoWriteAccess);
        v7 = MmMapLockedPagesSpecifyCache(v5, 0, MmCached, 0LL, 0, 0x40000010u);
        if ( v7 )
        {
          MiRemoveFromSystemSpace((ULONG_PTR)MappedBase, 1);
          v0 = 0;
          ExpLeapSecondDataLock = 0LL;
          ExLeapSecondDataSectionPointer = (__int64)v1;
          memset_0(v7, 0, v2);
          ExpReadLeapSecondData(v7, 0LL);
          ExLeapSecondData = v7;
        }
        else
        {
LABEL_5:
          v0 = -1073741801;
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v0;
}
