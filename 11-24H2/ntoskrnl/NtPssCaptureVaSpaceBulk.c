/*
 * XREFs of NtPssCaptureVaSpaceBulk @ 0x1407C4840
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140267BF0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwPssCaptureVaSpaceBulk @ 0x1406A8CF0 (ZwPssCaptureVaSpaceBulk.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 */

__int64 __fastcall NtPssCaptureVaSpaceBulk(ULONG_PTR a1, __int64 a2, __int128 *a3, SIZE_T a4, __int64 *a5)
{
  ULONG v5; // r10d
  __int128 *MappedSystemVa; // r14
  unsigned __int64 v7; // rax
  unsigned int v8; // ebx
  struct _MDL *v9; // r15
  int VirtualMemory; // edi
  char PreviousMode; // r13
  __int64 v13; // rcx
  struct _MDL *Mdl; // rax
  char *v15; // rcx
  _QWORD *i; // r13
  __int64 v17; // rax
  __int64 v19; // [rsp+58h] [rbp-E0h]
  PVOID Object; // [rsp+60h] [rbp-D8h] BYREF
  ULONG Length[2]; // [rsp+68h] [rbp-D0h]
  PMDL MemoryDescriptorList; // [rsp+70h] [rbp-C8h]
  __int64 *v23; // [rsp+78h] [rbp-C0h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-B8h]
  __int64 v25; // [rsp+88h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+90h] [rbp-A8h]
  ULONG_PTR v27; // [rsp+A0h] [rbp-98h]
  __int64 v28; // [rsp+A8h] [rbp-90h]
  __int128 *v29; // [rsp+B0h] [rbp-88h]
  SIZE_T v30; // [rsp+B8h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-78h]
  _BYTE v32[48]; // [rsp+C8h] [rbp-70h] BYREF

  v5 = a4;
  *(_QWORD *)Length = a4;
  MappedSystemVa = a3;
  v7 = a2;
  BugCheckParameter1 = a1;
  v27 = a1;
  v28 = a2;
  v29 = a3;
  v30 = a4;
  v23 = a5;
  Object = 0LL;
  memset(v32, 0, sizeof(v32));
  v25 = 0LL;
  v19 = 0LL;
  v8 = 0;
  v9 = 0LL;
  MemoryDescriptorList = 0LL;
  VirtualMemory = 0;
  if ( a4 < 0x10 )
    return 3221225476LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v26 = 0LL;
    ProbeForWrite(a3, a4, 8u);
    if ( a5 )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a5;
      *(_QWORD *)v13 = *(_QWORD *)v13;
    }
    v26 = *MappedSystemVa;
    v7 = a2;
    v5 = Length[0];
  }
  else
  {
    v26 = *a3;
  }
  if ( (_DWORD)v26 )
  {
    if ( (v26 & 0xFFFFFFFC) != 0 )
    {
      VirtualMemory = -1073741637;
    }
    else
    {
      if ( v7 <= 0x7FFFFFFEFFFFLL )
      {
        if ( PreviousMode )
        {
          Mdl = IoAllocateMdl(MappedSystemVa, v5, 0, 0, 0LL);
          v9 = Mdl;
          MemoryDescriptorList = Mdl;
          if ( !Mdl
            || ((MmProbeAndLockPages(Mdl, 0, IoWriteAccess), v8 = 2, (v9->MdlFlags & 5) == 0)
              ? (MappedSystemVa = (__int128 *)MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000010u))
              : (MappedSystemVa = (__int128 *)v9->MappedSystemVa),
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
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v32);
          v8 |= 1u;
        }
        if ( PreviousMode )
        {
          VirtualMemory = ZwPssCaptureVaSpaceBulk(-1LL, a2);
        }
        else
        {
          *((_DWORD *)MappedSystemVa + 1) = 0;
          v19 = 16LL;
          v15 = (char *)(*(_QWORD *)Length - 16LL);
          for ( i = MappedSystemVa + 1; ; i += 6 )
          {
            Object = v15;
            if ( (unsigned __int64)v15 < 0x30 )
              break;
            if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
            {
              VirtualMemory = -1073741749;
              goto LABEL_43;
            }
            VirtualMemory = MmQueryVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 48, (__int64)&v25, 2);
            if ( VirtualMemory < 0 )
            {
              if ( *((_DWORD *)MappedSystemVa + 1) )
                VirtualMemory = 0;
              break;
            }
            v15 = (char *)Object - v25;
            v19 += v25;
            v17 = *i + i[3];
            ++*((_DWORD *)MappedSystemVa + 1);
            *((_QWORD *)MappedSystemVa + 1) = v17;
          }
          if ( VirtualMemory >= 0 && *((_QWORD *)MappedSystemVa + 1) != 0x7FFFFFFF0000LL )
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
    KiUnstackDetachProcess((__int64)v32, 0);
  if ( v9 )
  {
    if ( v8 >= 2 )
      MmUnlockPages(v9);
    IoFreeMdl(v9);
  }
  if ( a5 )
    *a5 = v19;
  return (unsigned int)VirtualMemory;
}
