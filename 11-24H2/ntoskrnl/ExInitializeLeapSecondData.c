/*
 * XREFs of ExInitializeLeapSecondData @ 0x1407B5C30
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14026086C (MiRemoveFromSystemSpace.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmSizeOfMdl @ 0x140458550 (MmSizeOfMdl.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwCreateSection @ 0x1406A6D50 (ZwCreateSection.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExpReadLeapSecondData @ 0x1407B64AC (ExpReadLeapSecondData.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     MmMapViewInSessionSpace @ 0x140946C00 (MmMapViewInSessionSpace.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 ExInitializeLeapSecondData()
{
  NTSTATUS v0; // edi
  PVOID v1; // r12
  size_t v2; // r14
  struct _MDL *Pool2; // rax
  struct _MDL *v4; // rdi
  __int16 v5; // dx
  PVOID v6; // rsi
  LARGE_INTEGER v8[7]; // [rsp+40h] [rbp-38h] BYREF
  PVOID MappedBase; // [rsp+80h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF
  PVOID Section; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+98h] [rbp+20h] BYREF

  Handle = 0LL;
  v8[0].QuadPart = 4096LL;
  v0 = ZwCreateSection(&Handle, 6u, 0LL, v8, 4u, 0x8000000u, 0LL);
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
        MmSizeOfMdl(MappedBase, ViewSize);
        Pool2 = (struct _MDL *)ExAllocatePool2(0x40uLL);
        v4 = Pool2;
        if ( !Pool2 )
          goto LABEL_5;
        Pool2->Next = 0LL;
        v5 = (__int16)MappedBase;
        Pool2->Size = 8 * (((v2 + ((unsigned __int16)MappedBase & 0xFFF) + 4095LL) >> 12) + 6);
        Pool2->MdlFlags = 0;
        Pool2->StartVa = (PVOID)((unsigned __int64)MappedBase & 0xFFFFFFFFFFFFF000uLL);
        Pool2->ByteOffset = v5 & 0xFFF;
        Pool2->ByteCount = v2;
        MmProbeAndLockPages(Pool2, 0, IoWriteAccess);
        v6 = MmMapLockedPagesSpecifyCache(v4, 0, MmCached, 0LL, 0, 0x40000010u);
        if ( v6 )
        {
          MiRemoveFromSystemSpace((ULONG_PTR)MappedBase, 1);
          v0 = 0;
          ExpLeapSecondDataLock = 0LL;
          ExLeapSecondDataSectionPointer = (__int64)v1;
          memset_0(v6, 0, v2);
          ExpReadLeapSecondData(v6, 0LL);
          ExLeapSecondData = v6;
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
