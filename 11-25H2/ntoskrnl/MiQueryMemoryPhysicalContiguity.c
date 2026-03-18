/*
 * XREFs of MiQueryMemoryPhysicalContiguity @ 0x1409D1E28
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     MmSizeOfMdl @ 0x140457EF0 (MmSizeOfMdl.c)
 *     MiGetLargestPageIndex @ 0x1404953CC (MiGetLargestPageIndex.c)
 *     MiQueryVaPhysicalContiguity @ 0x1406755A0 (MiQueryVaPhysicalContiguity.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQueryMemoryPhysicalContiguity(ULONG_PTR a1, volatile void **a2, __int64 a3, KPROCESSOR_MODE a4)
{
  struct _MDL *v5; // r14
  __int64 v6; // rsi
  unsigned int v7; // ebx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rbx
  int v10; // eax
  unsigned int LargestPageIndex; // eax
  char v12; // dl
  char v13; // r9
  unsigned int v14; // r8d
  __int64 *v15; // rcx
  size_t v16; // r13
  _BYTE *v17; // r15
  SIZE_T v18; // rax
  struct _MDL *Pool; // rax
  unsigned __int64 v20; // rdx
  __int16 v21; // r8
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rbx
  struct _KTHREAD *v24; // r8
  unsigned __int8 VaPhysicalContiguity; // al
  struct _KTHREAD *v26; // r8
  int v29; // [rsp+34h] [rbp-104h]
  int v30; // [rsp+40h] [rbp-F8h]
  unsigned int v31; // [rsp+44h] [rbp-F4h] BYREF
  struct _MDL *v32; // [rsp+48h] [rbp-F0h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-E8h]
  int v34; // [rsp+58h] [rbp-E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-D8h]
  __int128 v36; // [rsp+68h] [rbp-D0h]
  __int128 v37; // [rsp+78h] [rbp-C0h]
  volatile void *Address; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v39; // [rsp+90h] [rbp-A8h]
  unsigned __int64 v40; // [rsp+98h] [rbp-A0h]
  _OWORD v41[3]; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE Src[32]; // [rsp+D0h] [rbp-68h] BYREF

  BugCheckParameter1 = a1;
  v31 = 0;
  memset(v41, 0, sizeof(v41));
  v5 = 0LL;
  v32 = 0LL;
  v6 = 0LL;
  v29 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 != 40 )
  {
    v7 = -1073741820;
    goto LABEL_54;
  }
  if ( a4 )
    ProbeForWrite(a2, 0x28uLL, 8u);
  v36 = *(_OWORD *)a2;
  v37 = *((_OWORD *)a2 + 1);
  Address = a2[4];
  if ( (DWORD2(v37) & 0xFFFFFFFE) != 0 )
    goto LABEL_53;
  v8 = v36;
  if ( (unsigned __int64)v36 > 0x7FFFFFFEFFFFLL )
    goto LABEL_53;
  v9 = v37;
  if ( !(_QWORD)v37 || (v10 = 1, (((_QWORD)v37 - 1LL) & (unsigned __int64)v37) != 0) )
    v10 = 0;
  if ( !v10 || (unsigned __int64)v37 <= 0x1000 )
    goto LABEL_53;
  LargestPageIndex = MiGetLargestPageIndex();
  v14 = LargestPageIndex;
  v30 = LargestPageIndex;
  if ( LargestPageIndex < 3 )
  {
    v15 = &MiPageSizes[LargestPageIndex];
    do
    {
      if ( *v15 == (unsigned __int64)v37 >> 12 )
        break;
      ++v14;
      ++v15;
    }
    while ( v14 < 3 );
    v30 = v14;
    v12 = BYTE8(v37);
  }
  if ( v14 == 3 )
  {
LABEL_18:
    v7 = -1073741637;
    goto LABEL_54;
  }
  if ( (((_QWORD)v37 - 1LL) & *((_QWORD *)&v36 + 1)) != 0
    || ((unsigned __int64)v36 & ~((_QWORD)v37 - 1LL)) != (_QWORD)v36 )
  {
    goto LABEL_53;
  }
  v34 = 2 * (v12 & 1);
  v39 = *((_QWORD *)&v36 + 1) / (unsigned __int64)v37;
  v16 = 4 * (*((_QWORD *)&v36 + 1) / (unsigned __int64)v37);
  if ( v16 > 0x20 )
  {
    if ( v16 <= 0xFFFFF000 )
    {
      v18 = MmSizeOfMdl((PVOID)Address, 4 * (*((_QWORD *)&v36 + 1) / (unsigned __int64)v37));
      Pool = (struct _MDL *)MiAllocatePool(0x40uLL, v18, 538996045);
      v5 = Pool;
      v32 = Pool;
      if ( !Pool )
        goto LABEL_26;
      Pool->Next = 0LL;
      v20 = (unsigned __int64)Address;
      v21 = (__int16)Address;
      Pool->Size = 8 * (((v16 + ((unsigned __int16)Address & 0xFFF) + 4095LL) >> 12) + 6);
      Pool->MdlFlags = 0;
      Pool->StartVa = (PVOID)(v20 & 0xFFFFFFFFFFFFF000uLL);
      Pool->ByteOffset = v21 & 0xFFF;
      Pool->ByteCount = v16;
      MmProbeAndLockPages(Pool, a4, IoWriteAccess);
      v17 = (v5->MdlFlags & 5) != 0
          ? v5->MappedSystemVa
          : MmMapLockedPagesSpecifyCache(v5, 0, MmCached, 0LL, 0, 0x40000010u);
      if ( !v17 )
      {
LABEL_26:
        v7 = -1073741670;
        goto LABEL_54;
      }
      goto LABEL_31;
    }
LABEL_53:
    v7 = -1073741811;
    goto LABEL_54;
  }
  v17 = Src;
  if ( v13 )
    ProbeForWrite(Address, 4 * (*((_QWORD *)&v36 + 1) / (unsigned __int64)v37), 4u);
LABEL_31:
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v41);
    v29 = 1;
  }
  v22 = v8 >> 12;
  v23 = v9 >> 12;
  v24 = 0LL;
  while ( 1 )
  {
    CurrentThread = v24;
    if ( (unsigned __int64)v24 >= v39 )
      break;
    if ( !v6 )
      goto LABEL_65;
    if ( v22 < (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32))
      || v22 > (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) )
    {
      MiUnlockAndDereferenceVadShared((PVOID)v6);
      v6 = 0LL;
    }
    if ( !v6 )
    {
LABEL_65:
      v6 = MiObtainReferencedVadEx(v22 << 12, 2, (int *)&v31);
      if ( !v6 )
      {
        v7 = v31;
        goto LABEL_56;
      }
    }
    v40 = v23 + v22;
    if ( v23 + v22 - 1 > (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) )
    {
      v7 = -1073741800;
      goto LABEL_54;
    }
    if ( (*(_DWORD *)(v6 + 48) & 0x70) != 0 || (*(_DWORD *)(v6 + 48) & 0x200000) == 0 )
      goto LABEL_18;
    *(_DWORD *)&v17[4 * (_QWORD)CurrentThread] = 0;
    VaPhysicalContiguity = MiQueryVaPhysicalContiguity(BugCheckParameter1 + 1024, v22 << 12, v30, v34);
    v26 = CurrentThread;
    *(_DWORD *)&v17[4 * (_QWORD)CurrentThread] ^= (VaPhysicalContiguity ^ (unsigned __int8)*(_DWORD *)&v17[4 * (_QWORD)CurrentThread]) & 3;
    v24 = (struct _KTHREAD *)((char *)&v26->Header.Lock + 1);
    v22 = v40;
  }
  if ( v6 )
  {
    MiUnlockAndDereferenceVadShared((PVOID)v6);
    v6 = 0LL;
  }
  if ( v29 )
  {
    KiUnstackDetachProcess((__int64)v41, 0LL);
    v29 = 0;
  }
  if ( v17 == Src )
    memmove((void *)Address, v17, v16);
  v7 = 0;
LABEL_54:
  if ( v6 )
    MiUnlockAndDereferenceVadShared((PVOID)v6);
LABEL_56:
  if ( v29 )
    KiUnstackDetachProcess((__int64)v41, 0LL);
  if ( v5 )
  {
    if ( (v5->MdlFlags & 2) != 0 )
      MmUnlockPages(v5);
    ExFreePoolWithTag(v5, 0);
  }
  return v7;
}
