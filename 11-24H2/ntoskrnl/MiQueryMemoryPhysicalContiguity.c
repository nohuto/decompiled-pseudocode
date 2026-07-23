/*
 * XREFs of MiQueryMemoryPhysicalContiguity @ 0x140970318
 * Callers:
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     MmSizeOfMdl @ 0x14044DA00 (MmSizeOfMdl.c)
 *     MiGetLargestPageIndex @ 0x14048F5E0 (MiGetLargestPageIndex.c)
 *     MiQueryVaPhysicalContiguity @ 0x140681F6C (MiQueryVaPhysicalContiguity.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQueryMemoryPhysicalContiguity(ULONG_PTR a1, volatile void **a2, unsigned __int64 a3, __int64 a4)
{
  struct _MDL *v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned int v8; // ebx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rbx
  int v11; // eax
  unsigned int LargestPageIndex; // eax
  __int64 *v13; // rcx
  size_t v14; // r13
  _BYTE *v15; // r15
  SIZE_T v16; // rax
  struct _MDL *Pool; // rax
  unsigned __int64 v18; // rdx
  __int16 v19; // r8
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rdx
  unsigned __int8 VaPhysicalContiguity; // al
  struct _KTHREAD *v24; // r8
  KPROCESSOR_MODE AccessMode; // [rsp+30h] [rbp-108h]
  int v27; // [rsp+34h] [rbp-104h]
  int v28; // [rsp+40h] [rbp-F8h]
  unsigned int v29; // [rsp+44h] [rbp-F4h] BYREF
  struct _MDL *v30; // [rsp+48h] [rbp-F0h]
  unsigned __int64 CurrentThread; // [rsp+50h] [rbp-E8h]
  unsigned int v32; // [rsp+58h] [rbp-E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-D8h]
  __int128 v34; // [rsp+68h] [rbp-D0h]
  __int128 v35; // [rsp+78h] [rbp-C0h]
  volatile void *Address; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v37; // [rsp+90h] [rbp-A8h]
  unsigned __int64 v38; // [rsp+98h] [rbp-A0h]
  _OWORD v39[3]; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE Src[32]; // [rsp+D0h] [rbp-68h] BYREF

  AccessMode = a4;
  BugCheckParameter1 = a1;
  v29 = 0;
  memset(v39, 0, sizeof(v39));
  v5 = 0LL;
  v30 = 0LL;
  v6 = 0LL;
  v27 = 0;
  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  v7 = 40LL;
  if ( a3 != 40 )
  {
    v8 = -1073741820;
    goto LABEL_55;
  }
  if ( (_BYTE)a4 )
  {
    ProbeForWrite(a2, 0x28uLL, 8u);
    v34 = *(_OWORD *)a2;
    v35 = *((_OWORD *)a2 + 1);
    Address = a2[4];
    LOBYTE(a4) = AccessMode;
  }
  else
  {
    v34 = *(_OWORD *)a2;
    v35 = *((_OWORD *)a2 + 1);
    Address = a2[4];
  }
  v7 = DWORD2(v35);
  if ( (DWORD2(v35) & 0xFFFFFFFE) != 0 )
    goto LABEL_54;
  v9 = v34;
  if ( (unsigned __int64)v34 > 0x7FFFFFFEFFFFLL )
    goto LABEL_54;
  v10 = v35;
  if ( !(_QWORD)v35 || (v11 = 1, (((_QWORD)v35 - 1LL) & (unsigned __int64)v35) != 0) )
    v11 = 0;
  if ( !v11 || (unsigned __int64)v35 <= 0x1000 )
    goto LABEL_54;
  LargestPageIndex = MiGetLargestPageIndex();
  a3 = LargestPageIndex;
  v28 = LargestPageIndex;
  if ( LargestPageIndex < 3 )
  {
    v13 = &MiPageSizes[LargestPageIndex];
    do
    {
      if ( *v13 == (unsigned __int64)v35 >> 12 )
        break;
      a3 = (unsigned int)(a3 + 1);
      ++v13;
    }
    while ( (unsigned int)a3 < 3 );
    v28 = a3;
    v7 = DWORD2(v35);
  }
  if ( (_DWORD)a3 == 3 )
  {
LABEL_19:
    v8 = -1073741637;
    goto LABEL_55;
  }
  if ( (((_QWORD)v35 - 1LL) & *((_QWORD *)&v34 + 1)) != 0
    || ((unsigned __int64)v34 & ~((_QWORD)v35 - 1LL)) != (_QWORD)v34 )
  {
    goto LABEL_54;
  }
  v32 = 2 * (v7 & 1);
  v7 = *((_QWORD *)&v34 + 1) % (unsigned __int64)v35;
  v37 = *((_QWORD *)&v34 + 1) / (unsigned __int64)v35;
  v14 = 4 * (*((_QWORD *)&v34 + 1) / (unsigned __int64)v35);
  if ( v14 > 0x20 )
  {
    if ( v14 <= 0xFFFFF000 )
    {
      v16 = MmSizeOfMdl((PVOID)Address, 4 * (*((_QWORD *)&v34 + 1) / (unsigned __int64)v35));
      Pool = (struct _MDL *)MiAllocatePool(0x40uLL, v16, 538996045);
      v5 = Pool;
      v30 = Pool;
      if ( !Pool )
        goto LABEL_27;
      Pool->Next = 0LL;
      v18 = (unsigned __int64)Address;
      v19 = (__int16)Address;
      Pool->Size = 8 * (((v14 + ((unsigned __int16)Address & 0xFFF) + 4095LL) >> 12) + 6);
      Pool->MdlFlags = 0;
      Pool->StartVa = (PVOID)(v18 & 0xFFFFFFFFFFFFF000uLL);
      Pool->ByteOffset = v19 & 0xFFF;
      Pool->ByteCount = v14;
      MmProbeAndLockPages(Pool, AccessMode, IoWriteAccess);
      v15 = (v5->MdlFlags & 5) != 0
          ? v5->MappedSystemVa
          : MmMapLockedPagesSpecifyCache(v5, 0, MmCached, 0LL, 0, 0x40000010u);
      if ( !v15 )
      {
LABEL_27:
        v8 = -1073741670;
        goto LABEL_55;
      }
      goto LABEL_32;
    }
LABEL_54:
    v8 = -1073741811;
    goto LABEL_55;
  }
  v15 = Src;
  if ( (_BYTE)a4 )
    ProbeForWrite(Address, 4 * (*((_QWORD *)&v34 + 1) / (unsigned __int64)v35), 4u);
LABEL_32:
  if ( *(_QWORD *)(CurrentThread + 184) != BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v39);
    v27 = 1;
  }
  v20 = v9 >> 12;
  v21 = v10 >> 12;
  a3 = 0LL;
  while ( 1 )
  {
    CurrentThread = a3;
    if ( a3 >= v37 )
      break;
    if ( !v6 )
      goto LABEL_66;
    v22 = *(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32);
    if ( v20 < v22
      || (v22 = *(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32), v20 > v22) )
    {
      MiUnlockAndDereferenceVadShared(v6, v22, a3, a4);
      v6 = 0LL;
    }
    if ( !v6 )
    {
LABEL_66:
      v6 = MiObtainReferencedVadEx(v20 << 12, 2LL, (int *)&v29, a4);
      if ( !v6 )
      {
        v8 = v29;
        goto LABEL_57;
      }
    }
    v7 = v21 + v20;
    v38 = v21 + v20;
    if ( v21 + v20 - 1 > (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) )
    {
      v8 = -1073741800;
      goto LABEL_55;
    }
    if ( (*(_DWORD *)(v6 + 48) & 0x70) != 0 || (*(_DWORD *)(v6 + 48) & 0x200000) == 0 )
      goto LABEL_19;
    *(_DWORD *)&v15[4 * CurrentThread] = 0;
    VaPhysicalContiguity = MiQueryVaPhysicalContiguity(BugCheckParameter1 + 1024, v20 << 12, v28, v32);
    v24 = (struct _KTHREAD *)CurrentThread;
    v7 = *(_DWORD *)&v15[4 * CurrentThread] ^ (VaPhysicalContiguity ^ (unsigned __int8)*(_DWORD *)&v15[4 * CurrentThread]) & 3u;
    *(_DWORD *)&v15[4 * CurrentThread] = v7;
    a3 = (unsigned __int64)&v24->Header.Lock + 1;
    v20 = v38;
  }
  if ( v6 )
  {
    MiUnlockAndDereferenceVadShared(v6, v7, a3, a4);
    v6 = 0LL;
  }
  if ( v27 )
  {
    KiUnstackDetachProcess((__int64)v39, 0, a3, a4);
    v27 = 0;
  }
  if ( v15 == Src )
    memmove((void *)Address, v15, v14);
  v8 = 0;
LABEL_55:
  if ( v6 )
    MiUnlockAndDereferenceVadShared(v6, v7, a3, a4);
LABEL_57:
  if ( v27 )
    KiUnstackDetachProcess((__int64)v39, 0, a3, a4);
  if ( v5 )
  {
    if ( (v5->MdlFlags & 2) != 0 )
      MmUnlockPages(v5);
    ExFreePoolWithTag(v5, 0);
  }
  return v8;
}
