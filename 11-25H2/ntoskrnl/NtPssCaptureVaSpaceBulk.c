/*
 * XREFs of NtPssCaptureVaSpaceBulk @ 0x1407B5720
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     IoAllocateMdl @ 0x1402D5350 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwPssCaptureVaSpaceBulk @ 0x14069DA20 (ZwPssCaptureVaSpaceBulk.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 */

NTSTATUS __cdecl NtPssCaptureVaSpaceBulk(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PNTPSS_MEMORY_BULK_INFORMATION BulkInformation,
        SIZE_T BulkInformationLength,
        PSIZE_T ReturnLength)
{
  ULONG v5; // r10d
  _NTPSS_MEMORY_BULK_INFORMATION *MappedSystemVa; // r14
  PVOID v7; // rax
  unsigned int v8; // ebx
  struct _MDL *v9; // r15
  int VirtualMemory; // edi
  char PreviousMode; // r13
  __int64 v13; // rcx
  struct _MDL *Mdl; // rax
  char *v15; // rcx
  _NTPSS_MEMORY_BULK_INFORMATION *i; // r13
  char *BaseAddressa; // [rsp+50h] [rbp-E8h]
  ULONG_PTR v18; // [rsp+58h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-D8h] BYREF
  ULONG Length[2]; // [rsp+68h] [rbp-D0h]
  PMDL MemoryDescriptorList; // [rsp+70h] [rbp-C8h]
  PSIZE_T v22; // [rsp+78h] [rbp-C0h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-B8h]
  __int64 v24; // [rsp+88h] [rbp-B0h]
  _NTPSS_MEMORY_BULK_INFORMATION v25; // [rsp+90h] [rbp-A8h]
  HANDLE v26; // [rsp+A0h] [rbp-98h]
  PVOID v27; // [rsp+A8h] [rbp-90h]
  PNTPSS_MEMORY_BULK_INFORMATION v28; // [rsp+B0h] [rbp-88h]
  SIZE_T v29; // [rsp+B8h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-78h]
  _BYTE v31[48]; // [rsp+C8h] [rbp-70h] BYREF

  v5 = BulkInformationLength;
  *(_QWORD *)Length = BulkInformationLength;
  MappedSystemVa = BulkInformation;
  v7 = BaseAddress;
  BaseAddressa = (char *)BaseAddress;
  BugCheckParameter1 = (ULONG_PTR)ProcessHandle;
  v26 = ProcessHandle;
  v27 = BaseAddress;
  v28 = BulkInformation;
  v29 = BulkInformationLength;
  v22 = ReturnLength;
  Object = 0LL;
  memset(v31, 0, sizeof(v31));
  v24 = 0LL;
  v18 = 0LL;
  v8 = 0;
  v9 = 0LL;
  MemoryDescriptorList = 0LL;
  VirtualMemory = 0;
  if ( BulkInformationLength < 0x10 )
    return -1073741820;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v25 = 0LL;
    ProbeForWrite(BulkInformation, BulkInformationLength, 8u);
    if ( ReturnLength )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v13 = (__int64)ReturnLength;
      *(_QWORD *)v13 = *(_QWORD *)v13;
    }
    v25 = *MappedSystemVa;
    v7 = BaseAddressa;
    v5 = Length[0];
  }
  else
  {
    v25 = *BulkInformation;
  }
  if ( v25.QueryFlags )
  {
    if ( (v25.QueryFlags & 0xFFFFFFFC) != 0 )
    {
      VirtualMemory = -1073741637;
    }
    else
    {
      if ( (unsigned __int64)v7 <= 0x7FFFFFFEFFFFLL )
      {
        if ( PreviousMode )
        {
          Mdl = IoAllocateMdl(MappedSystemVa, v5, 0, 0, 0LL);
          v9 = Mdl;
          MemoryDescriptorList = Mdl;
          if ( !Mdl
            || ((MmProbeAndLockPages(Mdl, 0, IoWriteAccess), v8 = 2, (v9->MdlFlags & 5) == 0)
              ? (MappedSystemVa = (_NTPSS_MEMORY_BULK_INFORMATION *)MmMapLockedPagesSpecifyCache(
                                                                      v9,
                                                                      0,
                                                                      MmCached,
                                                                      0LL,
                                                                      0,
                                                                      0x40000010u))
              : (MappedSystemVa = (_NTPSS_MEMORY_BULK_INFORMATION *)v9->MappedSystemVa),
                !MappedSystemVa) )
          {
            VirtualMemory = -1073741670;
            goto LABEL_43;
          }
        }
        else
        {
          v9 = 0LL;
        }
        if ( BugCheckParameter1 != -1LL )
        {
          VirtualMemory = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x41737350u, (__int64)&Object, 0LL, 0LL);
          if ( VirtualMemory < 0 )
            goto LABEL_43;
          if ( (*((_DWORD *)Object + 383) & 0x1000) != 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x41737350u);
            VirtualMemory = -1073741790;
            goto LABEL_43;
          }
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v31);
          v8 |= 1u;
        }
        if ( PreviousMode )
        {
          VirtualMemory = ZwPssCaptureVaSpaceBulk(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            BaseAddressa,
                            MappedSystemVa,
                            *(SIZE_T *)Length,
                            &v18);
        }
        else
        {
          MappedSystemVa->NumberOfEntries = 0;
          v18 = 16LL;
          v15 = (char *)(*(_QWORD *)Length - 16LL);
          for ( i = MappedSystemVa + 1; ; i += 3 )
          {
            Object = v15;
            if ( (unsigned __int64)v15 < 0x30 )
              break;
            if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
            {
              VirtualMemory = -1073741749;
              goto LABEL_43;
            }
            VirtualMemory = MmQueryVirtualMemory(-1LL, BaseAddressa, 0LL, i);
            if ( VirtualMemory < 0 )
            {
              if ( MappedSystemVa->NumberOfEntries )
                VirtualMemory = 0;
              break;
            }
            v15 = (char *)Object - v24;
            v18 += v24;
            BaseAddressa = (char *)i[1].NextValidAddress + *(_QWORD *)&i->QueryFlags;
            ++MappedSystemVa->NumberOfEntries;
            MappedSystemVa->NextValidAddress = BaseAddressa;
          }
          if ( VirtualMemory >= 0 && MappedSystemVa->NextValidAddress != (PVOID)0x7FFFFFFF0000LL )
            VirtualMemory = 261;
        }
        goto LABEL_43;
      }
      VirtualMemory = -1073741503;
    }
  }
  else
  {
    VirtualMemory = -1073741811;
  }
LABEL_43:
  if ( (v8 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v31, 0LL);
  if ( v9 )
  {
    if ( v8 >= 2 )
      MmUnlockPages(v9);
    IoFreeMdl(v9);
  }
  if ( ReturnLength )
    *ReturnLength = v18;
  return VirtualMemory;
}
