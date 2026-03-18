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

__int64 __fastcall NtPssCaptureVaSpaceBulk(ULONG_PTR a1, unsigned __int64 a2, __int128 *a3, SIZE_T a4, __int64 *a5)
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
  __int64 v17; // [rsp+50h] [rbp-E8h]
  __int64 v18; // [rsp+58h] [rbp-E0h]
  PVOID Object; // [rsp+60h] [rbp-D8h] BYREF
  ULONG Length[2]; // [rsp+68h] [rbp-D0h]
  PMDL MemoryDescriptorList; // [rsp+70h] [rbp-C8h]
  __int64 *v22; // [rsp+78h] [rbp-C0h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-B8h]
  __int64 v24; // [rsp+88h] [rbp-B0h]
  __int128 v25; // [rsp+90h] [rbp-A8h]
  ULONG_PTR v26; // [rsp+A0h] [rbp-98h]
  unsigned __int64 v27; // [rsp+A8h] [rbp-90h]
  __int128 *v28; // [rsp+B0h] [rbp-88h]
  SIZE_T v29; // [rsp+B8h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-78h]
  _BYTE v31[48]; // [rsp+C8h] [rbp-70h] BYREF

  v5 = a4;
  *(_QWORD *)Length = a4;
  MappedSystemVa = a3;
  v7 = a2;
  v17 = a2;
  BugCheckParameter1 = a1;
  v26 = a1;
  v27 = a2;
  v28 = a3;
  v29 = a4;
  v22 = a5;
  Object = 0LL;
  memset(v31, 0, sizeof(v31));
  v24 = 0LL;
  v18 = 0LL;
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
    v25 = 0LL;
    ProbeForWrite(a3, a4, 8u);
    if ( a5 )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a5;
      *(_QWORD *)v13 = *(_QWORD *)v13;
    }
    v25 = *MappedSystemVa;
    v7 = v17;
    v5 = Length[0];
  }
  else
  {
    v25 = *a3;
  }
  if ( (_DWORD)v25 )
  {
    if ( (v25 & 0xFFFFFFFC) != 0 )
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
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v31);
          v8 |= 1u;
        }
        if ( PreviousMode )
        {
          VirtualMemory = ZwPssCaptureVaSpaceBulk(-1LL, v17);
        }
        else
        {
          *((_DWORD *)MappedSystemVa + 1) = 0;
          v18 = 16LL;
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
            VirtualMemory = MmQueryVirtualMemory(-1LL, v17, 0LL, i);
            if ( VirtualMemory < 0 )
            {
              if ( *((_DWORD *)MappedSystemVa + 1) )
                VirtualMemory = 0;
              break;
            }
            v15 = (char *)Object - v24;
            v18 += v24;
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
    KiUnstackDetachProcess((__int64)v31, 0LL);
  if ( v9 )
  {
    if ( v8 >= 2 )
      MmUnlockPages(v9);
    IoFreeMdl(v9);
  }
  if ( a5 )
    *a5 = v18;
  return (unsigned int)VirtualMemory;
}
