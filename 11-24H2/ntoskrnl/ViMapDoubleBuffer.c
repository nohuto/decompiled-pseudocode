/*
 * XREFs of ViMapDoubleBuffer @ 0x140B8B650
 * Callers:
 *     VfBuildScatterGatherList @ 0x140B87AB0 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140B88BE0 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x140B89310 (VfMapTransfer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     KeFlushIoBuffers @ 0x140431710 (KeFlushIoBuffers.c)
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ViAllocateMapRegistersFromFile @ 0x140B8A0B8 (ViAllocateMapRegistersFromFile.c)
 *     ViHalPreprocessOptions @ 0x140B8B21C (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViMapDoubleBuffer(
        __int64 a1,
        PMDL MemoryDescriptorList,
        unsigned __int64 a3,
        unsigned int a4,
        char a5)
{
  unsigned int v5; // esi
  PMDL v9; // r9
  ULONG_PTR v10; // r8
  ULONG_PTR v11; // rdx
  CHAR *v13; // rsi
  KIRQL v14; // r14
  PVOID MappedSystemVa; // rbp
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r14
  ULONG_PTR v18; // rbx
  ULONG_PTR v19; // rdx
  __int64 v20; // rax
  char *v21; // r9
  PMDL v22; // r15
  unsigned int v23; // ebp
  struct _MDL *Next; // rax
  __int64 v25; // rbx
  const char *v26; // rdx
  CHAR *v27; // rbp
  ULONG ByteCount; // ecx
  KIRQL v29; // al
  bool v30; // zf
  PVOID v31; // rbx
  ULONG_PTR v32; // rcx
  PMDL BugCheckOnFailure; // [rsp+20h] [rbp-68h]
  CHAR *Priority; // [rsp+28h] [rbp-60h]
  int v35; // [rsp+30h] [rbp-58h]
  void *Src; // [rsp+38h] [rbp-50h]
  char *v37; // [rsp+40h] [rbp-48h]
  char *v38; // [rsp+48h] [rbp-40h]
  unsigned __int64 v39; // [rsp+50h] [rbp-38h]
  ULONG v40; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a4;
  v40 = 0;
  if ( !a4 )
  {
    ViHalPreprocessOptions(byte_140E0E9F8, "Driver is attempting to map a 0-length transfer.", 33LL, a1, 0LL, 0LL);
    Priority = byte_140E0E9F8;
    v9 = 0LL;
    BugCheckOnFailure = 0LL;
    v10 = a1;
    v11 = 33LL;
LABEL_3:
    VfReportIssueWithOptions(0xE6u, v11, v10, (ULONG_PTR)v9, (ULONG_PTR)BugCheckOnFailure, Priority);
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 25) && a4 >= 4096 - (a3 & 0xFFF) )
    v5 = 4096 - (a3 & 0xFFF);
  if ( (PVOID)a3 < (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset )
  {
    v13 = (CHAR *)&dword_140E0EA20;
    ViHalPreprocessOptions(
      &dword_140E0EA20,
      "Virtual address %p is before the first MDL %p.",
      268435487LL,
      1LL,
      a3,
      (__int64)MemoryDescriptorList);
    v10 = 1LL;
    goto LABEL_10;
  }
  if ( (unsigned int)(a3 - LODWORD(MemoryDescriptorList->StartVa) - MemoryDescriptorList->ByteOffset) >= MemoryDescriptorList->ByteCount )
  {
    v13 = (CHAR *)&dword_140E0EA24;
    ViHalPreprocessOptions(
      &dword_140E0EA24,
      "Virtual address %p is after the first MDL %p.",
      268435487LL,
      2LL,
      a3,
      (__int64)MemoryDescriptorList);
    v10 = 2LL;
LABEL_10:
    Priority = v13;
    v9 = (PMDL)a3;
    BugCheckOnFailure = MemoryDescriptorList;
LABEL_11:
    v11 = 31LL;
    goto LABEL_3;
  }
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 80), v14);
  if ( !MappedSystemVa )
    return 0LL;
  v16 = a3 - MemoryDescriptorList->ByteOffset - (unsigned __int64)MemoryDescriptorList->StartVa;
  v17 = MemoryDescriptorList->ByteCount - v16;
  v18 = (ULONG_PTR)MappedSystemVa + v16;
  v35 = 1;
  v39 = v17;
  Src = (void *)v18;
  if ( !(unsigned int)ViAllocateMapRegistersFromFile(a1, v18, v5, a5, &v40) )
    return 0LL;
  v19 = (v40 << 12) + (v18 & 0xFFF);
  v20 = *(_QWORD *)(a1 + 72);
  v21 = (char *)(v19 + *(_QWORD *)(a1 + 64));
  v38 = v21;
  if ( !v20 )
    return 0LL;
  v22 = MemoryDescriptorList;
  v37 = (char *)(v19 + v20);
  v23 = v5;
  while ( v23 )
  {
    if ( !v22 )
      return 0LL;
    Next = v22->Next;
    if ( v35 )
    {
      v35 = 0;
      if ( !Next && v23 > v17 )
      {
        v25 = v5;
        if ( (((v5 - 1) ^ (v17 + v5 - (unsigned __int64)v23)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        {
          v26 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x.";
          v27 = (CHAR *)&unk_140E0EA18;
LABEL_28:
          ViHalPreprocessOptions(v27, v26, 268435487LL, 3LL, (__int64)MemoryDescriptorList, v25);
          Priority = v27;
          v9 = MemoryDescriptorList;
          BugCheckOnFailure = (PMDL)v25;
          v10 = 3LL;
          goto LABEL_11;
        }
LABEL_32:
        LODWORD(v17) = v23;
        goto LABEL_36;
      }
    }
    else
    {
      if ( !Next )
      {
        ByteCount = v22->ByteCount;
        if ( v23 > ByteCount )
        {
          if ( (((v5 - 1) ^ (v5 + ByteCount - v23)) & 0xFFFFF000) != 0 )
          {
            v25 = v5;
            v26 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x";
            v27 = (CHAR *)&unk_140E0EA1C;
            goto LABEL_28;
          }
          goto LABEL_32;
        }
      }
      LODWORD(v17) = v22->ByteCount;
    }
    if ( v23 < (unsigned int)v17 )
      LODWORD(v17) = v23;
LABEL_36:
    memmove(v21, Src, (unsigned int)v17);
    v38 += (unsigned int)v17;
    memmove(v37, Src, (unsigned int)v17);
    v37 += (unsigned int)v17;
    v22 = v22->Next;
    if ( v22 )
    {
      v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
      v30 = (v22->MdlFlags & 5) == 0;
      LOBYTE(v40) = v29;
      if ( v30 )
      {
        v31 = MmMapLockedPagesSpecifyCache(v22, 0, MmCached, 0LL, 0, 0x40000010u);
        Src = v31;
        v29 = v40;
      }
      else
      {
        v31 = v22->MappedSystemVa;
        Src = v31;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 80), v29);
      if ( !v31 )
        return 0LL;
    }
    v21 = v38;
    v23 -= v17;
    v17 = v39;
  }
  v32 = *(_QWORD *)(a1 + 56);
  if ( v32 )
    KeFlushIoBuffers(v32, a5 == 0, 1, (__int64)v21);
  return v5;
}
