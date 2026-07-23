/*
 * XREFs of IoReserveKsrPersistentMemoryEx @ 0x140718FD0
 * Callers:
 *     IoReserveKsrPersistentMemory @ 0x140718F90 (IoReserveKsrPersistentMemory.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocatePagesForMdlEx @ 0x140395340 (MmAllocatePagesForMdlEx.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     MmFreePagesFromMdl @ 0x14048E2C0 (MmFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PipGetDeviceObjectLocation @ 0x1407195B4 (PipGetDeviceObjectLocation.c)
 *     PipGetDriverKsrGuid @ 0x140719810 (PipGetDriverKsrGuid.c)
 *     PipGetPersistentMemory @ 0x1407199A0 (PipGetPersistentMemory.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoReserveKsrPersistentMemoryEx(
        size_t a1,
        ULONG_PTR a2,
        unsigned __int16 *a3,
        _WORD *a4,
        int a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rcx
  unsigned __int16 *v13; // r14
  _WORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r14
  struct _MDL *v18; // r12
  __int64 v19; // r15
  int DriverKsrGuid; // edi
  unsigned int v21; // ecx
  unsigned int v22; // eax
  int PersistentMemory; // eax
  struct _MDL *PagesForMdl; // rax
  void *v25; // rsi
  __int64 Pool2; // rax
  _WORD *v28; // rax
  __int64 v29; // rax
  int v30; // eax
  void *v31; // rdx
  size_t v32; // r8
  __int64 v33; // rax
  unsigned int v34; // [rsp+50h] [rbp-71h] BYREF
  unsigned int v35; // [rsp+54h] [rbp-6Dh]
  unsigned int v36; // [rsp+58h] [rbp-69h]
  PVOID BaseAddress; // [rsp+60h] [rbp-61h]
  PVOID P; // [rsp+68h] [rbp-59h]
  void *Src; // [rsp+70h] [rbp-51h]
  size_t Size; // [rsp+78h] [rbp-49h]
  unsigned __int16 *v41; // [rsp+80h] [rbp-41h]
  _WORD *v42; // [rsp+88h] [rbp-39h]
  _QWORD v43[2]; // [rsp+90h] [rbp-31h] BYREF
  _QWORD *v44; // [rsp+A0h] [rbp-21h]
  __int128 v45; // [rsp+A8h] [rbp-19h] BYREF

  v44 = a8;
  v43[0] = 0LL;
  v43[1] = 0LL;
  v45 = 0LL;
  v34 = 0;
  v42 = a4;
  v41 = a3;
  Size = a1;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( a2 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v9 || (*(_DWORD *)(v9 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v10 = *(_QWORD *)(a2 + 8);
      if ( v10 )
      {
        IoAddTriageDumpDataBlock(v10, (PVOID)(unsigned int)*(__int16 *)(v10 + 2));
        v11 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
        if ( *v11 )
        {
          IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        }
      }
      v12 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
      if ( v12 )
      {
        v13 = (unsigned __int16 *)(v12 + 40);
        IoAddTriageDumpDataBlock(v12, (PVOID)0x388);
        if ( *v13 )
        {
          IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v13 + 1), (PVOID)*v13);
        }
        v14 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL);
        if ( *v14 )
        {
          IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
        }
        v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
        if ( v15 )
        {
          if ( *(_WORD *)(v15 + 56) )
          {
            IoAddTriageDumpDataBlock(v15 + 56, (PVOID)2);
            v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v16 + 64), (PVOID)*(unsigned __int16 *)(v16 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
    }
  }
  v17 = 0LL;
  BaseAddress = 0LL;
  Src = 0LL;
  v18 = 0LL;
  v35 = 0;
  v19 = 0LL;
  P = 0LL;
  v36 = 0;
  if ( !PnpKsrEnabled )
    return (unsigned int)-1073741637;
  if ( a7 )
    return (unsigned int)-1073741582;
  DriverKsrGuid = PipGetDriverKsrGuid(a1, &v45);
  if ( DriverKsrGuid < 0 )
    return (unsigned int)DriverKsrGuid;
  if ( a2 )
  {
    if ( v41 )
    {
      Src = (void *)*((_QWORD *)v41 + 1);
      if ( !Src )
        return (unsigned int)-1073741811;
      v21 = *v41;
      if ( !(_WORD)v21 )
        return (unsigned int)-1073741811;
      v22 = v21 >> 1;
    }
    else
    {
      DriverKsrGuid = PipGetDeviceObjectLocation(a2);
      if ( DriverKsrGuid < 0 )
        goto LABEL_37;
      v22 = v36;
      Src = P;
    }
    v35 = v22;
  }
  PersistentMemory = PipGetPersistentMemory(Size, a2, v41, v42, 0LL);
  DriverKsrGuid = 0;
  if ( PersistentMemory != -1073741772 )
    DriverKsrGuid = PersistentMemory;
  if ( DriverKsrGuid < 0 )
    goto LABEL_37;
  Size = (a6 + 4103) & 0xFFFFFFFFFFFFF000uLL;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, Size, MmCached, 0x14u);
  v18 = PagesForMdl;
  if ( PagesForMdl )
  {
    BaseAddress = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( BaseAddress )
    {
      memset_0(BaseAddress, 0, Size);
      v36 = 2 * v35 + 24;
      Pool2 = ExAllocatePool2(0x40uLL, v36, 0x61706E50u);
      v19 = Pool2;
      if ( !Pool2 )
        goto LABEL_37;
      *(_WORD *)Pool2 = 2;
      *(_QWORD *)(Pool2 + 8) = a6;
      v28 = v42;
      *(_DWORD *)(v19 + 20) = a5;
      if ( v28 )
        *(_WORD *)(v19 + 16) = *v28;
      v29 = ExAllocatePool2(0x40uLL, 0x38uLL, 0x61706E50u);
      v17 = (_QWORD *)v29;
      if ( v29 )
      {
        *(_OWORD *)(v29 + 16) = v45;
        if ( a2 )
        {
          v31 = Src;
          v32 = 2 * v35;
          *(_DWORD *)(v19 + 4) = 2 * v35;
          memmove((void *)(v19 + 24), v31, v32);
          v30 = 2;
        }
        else
        {
          v30 = 1;
        }
        *(_DWORD *)v17 = v30;
        KsrMdlToMemoryRuns(v18, 0LL, 0LL, &v34);
        v33 = ExAllocatePool2(0x40uLL, 8LL * v34, 0x61706E50u);
        v25 = (void *)v33;
        if ( v33 )
        {
          DriverKsrGuid = KsrMdlToMemoryRuns(v18, v33, v34, &v34);
          if ( DriverKsrGuid >= 0 )
          {
            DriverKsrGuid = KsrPersistMemoryWithMetadata(&v45, v25, v34, v19, v36, v43, 0LL, 0LL, 1);
            if ( DriverKsrGuid >= 0 )
            {
              v17[5] = BaseAddress;
              v17[6] = v19;
              v19 = 0LL;
              v17[1] = v18;
              v18 = 0LL;
              v17[4] = v43[0];
              BaseAddress = 0LL;
              *v44 = v17;
              v17 = 0LL;
            }
          }
        }
        else
        {
          DriverKsrGuid = -1073741670;
        }
        goto LABEL_38;
      }
    }
  }
  DriverKsrGuid = -1073741670;
LABEL_37:
  v25 = 0LL;
LABEL_38:
  if ( v25 )
    ExFreePoolWithTag(v25, 0x61706E50u);
  if ( v18 )
  {
    if ( BaseAddress )
      MmUnmapLockedPages(BaseAddress, v18);
    MmFreePagesFromMdl(v18);
    ExFreePoolWithTag(v18, 0x61706E50u);
  }
  if ( v19 )
    ExFreePoolWithTag((PVOID)v19, 0x61706E50u);
  if ( v17 )
    ExFreePoolWithTag(v17, 0x61706E50u);
  return (unsigned int)DriverKsrGuid;
}
