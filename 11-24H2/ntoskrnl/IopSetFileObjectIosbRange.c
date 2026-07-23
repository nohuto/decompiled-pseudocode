/*
 * XREFs of IopSetFileObjectIosbRange @ 0x140710988
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     IopAllocateFileObjectExtension @ 0x1403B4640 (IopAllocateFileObjectExtension.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403E40F0 (RtlInsertElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     IopSetTypeSpecificFoExtension @ 0x140443050 (IopSetTypeSpecificFoExtension.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetFileObjectIosbRange(__int64 a1, __int64 a2)
{
  _KPROCESS *i; // rdi
  char **v3; // r14
  int v4; // r15d
  _KPROCESS *Process; // rsi
  char **v6; // r12
  __int64 v7; // r13
  char *v9; // r12
  _KPROCESS **inserted; // rax
  char v11; // r12
  __int16 v12; // ax
  char v13; // al
  struct _LIST_ENTRY *MappedSystemVa; // rax
  char **Pool2; // rax
  char **v16; // rcx
  char **j; // rdx
  signed __int64 v18; // rax
  signed __int64 v19; // rax
  _KPROCESS **v20; // rcx
  PMDL MemoryDescriptorList; // [rsp+38h] [rbp-A0h]
  struct _LIST_ENTRY *BaseAddress; // [rsp+48h] [rbp-90h]
  __int64 *v23; // [rsp+58h] [rbp-80h] BYREF
  _KPROCESS **v24; // [rsp+60h] [rbp-78h]
  _KPROCESS *v25; // [rsp+68h] [rbp-70h]
  __int64 v26; // [rsp+70h] [rbp-68h]
  char *v27; // [rsp+78h] [rbp-60h]
  _KPROCESS *v28; // [rsp+88h] [rbp-50h]
  _QWORD Buffer[9]; // [rsp+90h] [rbp-48h] BYREF
  char v32; // [rsp+F0h] [rbp+18h]
  BOOLEAN NewElement; // [rsp+F8h] [rbp+20h] BYREF

  v23 = 0LL;
  v32 = 0;
  NewElement = 0;
  i = 0LL;
  Buffer[1] = 0LL;
  v3 = 0LL;
  v26 = 0LL;
  MemoryDescriptorList = 0LL;
  BaseAddress = 0LL;
  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v28 = Process;
  v6 = *(char ***)(a2 + 24);
  v7 = *((unsigned int *)v6 + 2);
  if ( !(_DWORD)v7 )
    return 3221225485LL;
  v9 = *v6;
  v27 = v9;
  ExAcquireFastMutex(&IoStatusBlockRangeTableLock);
  Buffer[0] = Process;
  inserted = (_KPROCESS **)RtlInsertElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer, 0x10u, &NewElement);
  v24 = inserted;
  if ( !inserted )
  {
    v4 = -1073741670;
    v11 = 0;
LABEL_59:
    if ( MemoryDescriptorList )
    {
      if ( BaseAddress )
        MmUnmapLockedPages(BaseAddress, MemoryDescriptorList);
      MmUnlockPages(MemoryDescriptorList);
      IoFreeMdl(MemoryDescriptorList);
    }
    if ( v3 )
    {
      ObfDereferenceObjectWithTag(Process, 0x70436F49u);
      ExFreePoolWithTag(v3, 0);
    }
    if ( NewElement == 1 )
      RtlDeleteElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
    if ( v11 == 1 )
      ExFreePoolWithTag(i, 0);
    goto LABEL_69;
  }
  if ( !NewElement )
  {
    for ( i = inserted[1];
          i && ((char *)i->Header.WaitListHead.Flink != v9 || (char *)i->Header.WaitListHead.Blink != &v9[v7]);
          i = (_KPROCESS *)i->DirectoryTableBase )
    {
      ;
    }
  }
  if ( !i )
  {
    i = (_KPROCESS *)ExAllocatePool2(0x100uLL, 0x30uLL, 0x65546F49u);
    v25 = i;
    if ( !i )
    {
      v4 = -1073741670;
      v11 = 0;
      goto LABEL_59;
    }
    v32 = 1;
    if ( Process[1].ReadyTime
      && ((v12 = WORD2(Process[3].PerProcessorCycleTimes), v12 == 332) || v12 == 452 ? (v13 = 1) : (v13 = 0), v13) )
    {
      if ( ((unsigned __int8)v9 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    else if ( ((unsigned __int8)v9 & 7) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    MemoryDescriptorList = IoAllocateMdl(v9, v7, 0, 1u, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    MmProbeAndLockPages(MemoryDescriptorList, *(_BYTE *)(a2 + 64), IoWriteAccess);
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
      MappedSystemVa = (struct _LIST_ENTRY *)MemoryDescriptorList->MappedSystemVa;
    else
      MappedSystemVa = (struct _LIST_ENTRY *)MmMapLockedPagesSpecifyCache(
                                               MemoryDescriptorList,
                                               0,
                                               MmCached,
                                               0LL,
                                               0,
                                               0x40000010u);
    BaseAddress = MappedSystemVa;
    if ( MappedSystemVa )
    {
      i->ProfileListHead.Flink = (struct _LIST_ENTRY *)MemoryDescriptorList;
      i->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v9;
      i->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v9[(unsigned int)v7];
      i->Header.LockNV = 1;
      i->DirectoryTableBase = 0LL;
      i->ProfileListHead.Blink = MappedSystemVa;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  if ( v4 < 0 )
    goto LABEL_57;
  Pool2 = (char **)ExAllocatePool2(0x40uLL, 0x30uLL, 0x65546F49u);
  v3 = Pool2;
  if ( !Pool2 )
  {
    v4 = -1073741670;
    v11 = v32;
    goto LABEL_59;
  }
  *Pool2 = v9;
  Pool2[1] = &v9[(unsigned int)v7];
  Pool2[3] = &v9[(unsigned __int64)((char *)i->ProfileListHead.Blink - (char *)i->Header.WaitListHead.Flink)];
  Pool2[2] = (char *)i->ProfileListHead.Flink;
  Pool2[5] = 0LL;
  ObfReferenceObjectWithTag(Process, 0x70436F49u);
  v3[4] = (char *)Process;
  v4 = IopAllocateFileObjectExtension(a1, &v23, 0);
  if ( v4 < 0 )
  {
LABEL_57:
    v11 = v32;
  }
  else
  {
    v4 = IopSetTypeSpecificFoExtension((__int64)v23, 2u, (signed __int64)v3);
    if ( v4 == -1073741823 )
    {
      v16 = *(char ***)(a1 + 208);
      if ( v16 )
        v16 = (char **)v16[3];
      if ( v3[4] == (char *)Process )
      {
        for ( j = v16; j; j = (char **)j[5] )
        {
          if ( *v3 == *j && v3[1] == j[1] )
          {
            ObfDereferenceObjectWithTag(Process, 0x70436F49u);
            ExFreePoolWithTag(v3, 0);
            v4 = 0;
            goto LABEL_69;
          }
        }
        v18 = (signed __int64)v16[5];
        v3[5] = (char *)v18;
        if ( (char *)_InterlockedCompareExchange64((volatile signed __int64 *)v16 + 5, (signed __int64)v3, v18) != v3[5] )
        {
          _m_prefetchw(v16 + 5);
          do
          {
            v19 = (signed __int64)v16[5];
            v3[5] = (char *)v19;
          }
          while ( (char *)_InterlockedCompareExchange64((volatile signed __int64 *)v16 + 5, (signed __int64)v3, v19) != v3[5] );
        }
        v4 = 0;
      }
    }
    v11 = v32;
    if ( v4 < 0 )
      goto LABEL_59;
    if ( v32 == 1 )
    {
      v20 = v24;
      if ( NewElement == 1 )
        *v24 = Process;
      else
        i->DirectoryTableBase = (unsigned __int64)v24[1];
      v20[1] = i;
    }
    else
    {
      ++i->Header.LockNV;
    }
  }
  if ( v4 < 0 )
    goto LABEL_59;
LABEL_69:
  KeReleaseGuardedMutex(&IoStatusBlockRangeTableLock);
  return (unsigned int)v4;
}
