/*
 * XREFs of NtPssCaptureVaSpaceBulk @ 0x1407C51A0
 * Callers:
 *     <none>
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     Feature_1462962491__private_IsEnabledDeviceUsageNoInline @ 0x140659108 (Feature_1462962491__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwPssCaptureVaSpaceBulk @ 0x1406A9C90 (ZwPssCaptureVaSpaceBulk.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 */

NTSTATUS __cdecl NtPssCaptureVaSpaceBulk(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PNTPSS_MEMORY_BULK_INFORMATION BulkInformation,
        SIZE_T BulkInformationLength,
        PSIZE_T ReturnLength)
{
  _NTPSS_MEMORY_BULK_INFORMATION *MappedSystemVa; // r14
  unsigned int v7; // ebx
  struct _MDL *v8; // r15
  int VirtualMemory; // edi
  char PreviousMode; // r13
  __int64 v12; // rcx
  struct _MDL *Mdl; // rax
  SIZE_T v14; // r12
  _NTPSS_MEMORY_BULK_INFORMATION *v15; // r13
  char *v16; // rax
  PVOID BaseAddressa; // [rsp+58h] [rbp-E0h]
  ULONG_PTR v18; // [rsp+60h] [rbp-D8h] BYREF
  PMDL MemoryDescriptorList; // [rsp+68h] [rbp-D0h]
  PSIZE_T v20; // [rsp+70h] [rbp-C8h]
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-C0h]
  PVOID Object; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+88h] [rbp-B0h] BYREF
  _NTPSS_MEMORY_BULK_INFORMATION v24; // [rsp+90h] [rbp-A8h]
  HANDLE v25; // [rsp+A0h] [rbp-98h]
  PVOID v26; // [rsp+A8h] [rbp-90h]
  PNTPSS_MEMORY_BULK_INFORMATION v27; // [rsp+B0h] [rbp-88h]
  SIZE_T v28; // [rsp+B8h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-78h]
  _BYTE v30[48]; // [rsp+C8h] [rbp-70h] BYREF

  MappedSystemVa = BulkInformation;
  BaseAddressa = BaseAddress;
  BugCheckParameter1 = (ULONG_PTR)ProcessHandle;
  v25 = ProcessHandle;
  v26 = BaseAddress;
  v27 = BulkInformation;
  v28 = BulkInformationLength;
  v20 = ReturnLength;
  Object = 0LL;
  memset(v30, 0, sizeof(v30));
  v23 = 0LL;
  v18 = 0LL;
  v7 = 0;
  v8 = 0LL;
  MemoryDescriptorList = 0LL;
  VirtualMemory = 0;
  if ( BulkInformationLength < 0x10 )
    return -1073741820;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v24 = 0LL;
    ProbeForWrite(BulkInformation, BulkInformationLength, 8u);
    if ( ReturnLength )
    {
      BulkInformation = (PNTPSS_MEMORY_BULK_INFORMATION)0x7FFFFFFF0000LL;
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v12 = (__int64)ReturnLength;
      *(_QWORD *)v12 = *(_QWORD *)v12;
    }
    v24 = *MappedSystemVa;
    BaseAddress = BaseAddressa;
  }
  else
  {
    v24 = *BulkInformation;
  }
  if ( !v24.QueryFlags )
    goto LABEL_11;
  if ( (v24.QueryFlags & 0xFFFFFFFC) != 0 )
  {
    VirtualMemory = -1073741637;
    goto LABEL_46;
  }
  if ( (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
  {
    VirtualMemory = -1073741503;
    goto LABEL_46;
  }
  if ( !PreviousMode )
  {
    v8 = 0LL;
    goto LABEL_27;
  }
  if ( !(unsigned int)Feature_1462962491__private_IsEnabledDeviceUsageNoInline() || BulkInformationLength <= 0xFFFFFFFF )
  {
    Mdl = IoAllocateMdl(MappedSystemVa, BulkInformationLength, 0, 0, 0LL);
    v8 = Mdl;
    MemoryDescriptorList = Mdl;
    if ( !Mdl
      || ((MmProbeAndLockPages(Mdl, 0, IoWriteAccess), v7 = 2, (v8->MdlFlags & 5) == 0)
        ? (MappedSystemVa = (_NTPSS_MEMORY_BULK_INFORMATION *)MmMapLockedPagesSpecifyCache(
                                                                v8,
                                                                0,
                                                                MmCached,
                                                                0LL,
                                                                0,
                                                                0x40000010u))
        : (MappedSystemVa = (_NTPSS_MEMORY_BULK_INFORMATION *)v8->MappedSystemVa),
          !MappedSystemVa) )
    {
      VirtualMemory = -1073741670;
      goto LABEL_46;
    }
LABEL_27:
    if ( BugCheckParameter1 != -1LL )
    {
      VirtualMemory = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x41737350u, (__int64)&Object, 0LL, 0LL);
      if ( VirtualMemory < 0 )
        goto LABEL_46;
      if ( (*((_DWORD *)Object + 383) & 0x1000) != 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x41737350u);
        VirtualMemory = -1073741790;
        goto LABEL_46;
      }
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v30);
      v7 |= 1u;
    }
    if ( PreviousMode )
    {
      VirtualMemory = ZwPssCaptureVaSpaceBulk(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        BaseAddressa,
                        MappedSystemVa,
                        BulkInformationLength,
                        &v18);
    }
    else
    {
      MappedSystemVa->NumberOfEntries = 0;
      v18 = 16LL;
      v14 = BulkInformationLength - 16;
      v15 = MappedSystemVa + 1;
      while ( v14 >= 0x30 )
      {
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
        {
          VirtualMemory = -1073741749;
          goto LABEL_46;
        }
        VirtualMemory = MmQueryVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 48, (__int64)&v23, 2);
        if ( VirtualMemory < 0 )
        {
          if ( MappedSystemVa->NumberOfEntries )
            VirtualMemory = 0;
          break;
        }
        v14 -= v23;
        v18 += v23;
        v16 = (char *)v15[1].NextValidAddress + *(_QWORD *)&v15->QueryFlags;
        v15 += 3;
        ++MappedSystemVa->NumberOfEntries;
        MappedSystemVa->NextValidAddress = v16;
      }
      if ( VirtualMemory >= 0 && MappedSystemVa->NextValidAddress != (PVOID)0x7FFFFFFF0000LL )
        VirtualMemory = 261;
    }
    goto LABEL_46;
  }
LABEL_11:
  VirtualMemory = -1073741811;
LABEL_46:
  if ( (v7 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v30, 0, (__int64)BulkInformation, BulkInformationLength);
  if ( v8 )
  {
    if ( v7 >= 2 )
      MmUnlockPages(v8);
    IoFreeMdl(v8);
  }
  if ( ReturnLength )
    *ReturnLength = v18;
  return VirtualMemory;
}
