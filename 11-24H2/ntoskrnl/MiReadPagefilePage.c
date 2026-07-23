/*
 * XREFs of MiReadPagefilePage @ 0x14066B64C
 * Callers:
 *     MiMakeOutswappedPageResident @ 0x1402EF6F4 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     IoPageReadEx @ 0x14025C000 (IoPageReadEx.c)
 *     MiIsRetryIoStatus @ 0x140260570 (MiIsRetryIoStatus.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     SmPageRead @ 0x1402F6388 (SmPageRead.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     MiValidatePagefilePageHash @ 0x140341950 (MiValidatePagefilePageHash.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiStoreFaultComplete @ 0x140351468 (MiStoreFaultComplete.c)
 *     MiInitializeInPageSupport @ 0x1403DC938 (MiInitializeInPageSupport.c)
 *     MiIsPteInStore @ 0x140423310 (MiIsPteInStore.c)
 *     MiSetPageTablePfnBuddy @ 0x140492B70 (MiSetPageTablePfnBuddy.c)
 *     MiReadFromMemoryPagefile @ 0x1404CAF64 (MiReadFromMemoryPagefile.c)
 *     MiFlushAllFilesystemPages @ 0x1404CFFDC (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiReadPagefilePage(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // r15
  CSHORT v6; // r12
  ULONG v7; // r15d
  __int64 v8; // rdi
  BOOL IsPteInStore; // ebx
  __int64 v10; // rsi
  int v11; // r9d
  unsigned __int64 PagingFileOffset; // rax
  __int64 v13; // r9
  ULONG_PTR v14; // rsi
  __int64 v15; // rdi
  signed int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int8 v21; // al
  NTSTATUS LowPart; // ebx
  __int64 result; // rax
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  void *v25; // [rsp+50h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2[4]; // [rsp+58h] [rbp-B0h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v28; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-58h]
  ULONG_PTR BugCheckParameter4[11]; // [rsp+B8h] [rbp-50h] BYREF
  int v31; // [rsp+110h] [rbp+8h]
  unsigned int v32; // [rsp+118h] [rbp+10h]
  struct _MDL MemoryDescriptorList; // [rsp+168h] [rbp+60h] BYREF
  __int64 v34; // [rsp+198h] [rbp+90h]

  memset_0(BugCheckParameter2, 0, 0x1C0uLL);
  v4 = 48 * a1 - 0x220000000000LL;
  v5 = a2 << 25 >> 16;
  v25 = (void *)(v5 & 0xFFFFFFFFFFFFF000uLL);
  v6 = 8 * (((unsigned __int16)((v5 & 0xFFF) + 0x1FFF) >> 12) + 6);
  v7 = v5 & 0xFFF;
  while ( 1 )
  {
    v8 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
    MiInitializeInPageSupport((__int64)BugCheckParameter2, 0, 0LL);
    IsPteInStore = MiIsPteInStore(v8, *(_QWORD *)(v4 + 16));
    v10 = *(_QWORD *)(v4 + 16) >> 12;
    v32 = v11 & 0xFFFFFBFF | ((IsPteInStore | 0x1000) << 10);
    PagingFileOffset = (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v4 + 16));
    if ( !IsPteInStore )
      PagingFileOffset = (unsigned __int64)(unsigned int)PagingFileOffset << 12;
    BugCheckParameter4[0] = PagingFileOffset;
    MiSetPageTablePfnBuddy(48 * a1 - 0x220000000000LL, 0x10000000000LL, 0LL, v13);
    v14 = v10 & 0xF;
    MemoryDescriptorList.StartVa = v25;
    MemoryDescriptorList.Next = 0LL;
    MemoryDescriptorList.MdlFlags = 16386;
    MemoryDescriptorList.Size = v6;
    MemoryDescriptorList.ByteOffset = v7;
    MemoryDescriptorList.ByteCount = 4096;
    v31 = 4096;
    v34 = a1;
    v15 = *(_QWORD *)(v8 + 8 * v14 + 18528);
    if ( _bittest16((const signed __int16 *)(v15 + 172), 0xBu) )
    {
      MiReadFromMemoryPagefile(v15, (__int64)BugCheckParameter2);
    }
    else
    {
      if ( IsPteInStore )
      {
        v28.LowPart = 0;
        v29 = 0LL;
        v16 = SmPageRead(
                *(_QWORD *)(*(_QWORD *)(v15 + 216) + 184LL),
                (int *)BugCheckParameter4,
                (int)&MemoryDescriptorList,
                (int)&Event,
                (__int64)&v28);
      }
      else
      {
        v16 = IoPageReadEx(
                *(PFILE_OBJECT *)(v15 + 24),
                (__int64)&MemoryDescriptorList,
                BugCheckParameter4,
                (__int64)&Event,
                (__int64)&v28,
                0,
                0LL);
      }
      if ( v16 < 0 )
      {
        v29 = 0LL;
        v28.LowPart = v16;
        KeSetEvent(&Event, 0, 0);
      }
    }
    KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
    LODWORD(v24) = 0;
    if ( (v32 & 0x400) != 0 )
    {
      MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2, (int *)&v24);
      v21 = MiLockPageInline(48 * a1 - 0x220000000000LL, v18, v19, v20);
      MiUnlockPage(48 * a1 - 0x220000000000LL, v21);
    }
    LowPart = v28.LowPart;
    if ( (v28.LowPart & 0x80000000) == 0 && *(_QWORD *)(v15 + 184) )
    {
      v32 |= 0x800000u;
      LowPart = MiValidatePagefilePageHash(BugCheckParameter2);
    }
    if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
      MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
    result = MiSetPageTablePfnBuddy(48 * a1 - 0x220000000000LL, 0LL, 0LL, v17);
    if ( LowPart >= 0 )
      break;
    if ( !MiIsRetryIoStatus(LowPart, 0x1000uLL) )
    {
      MiFlushAllFilesystemPages(1);
      KeBugCheckEx(0x77u, LowPart, LowPart, v14, LODWORD(BugCheckParameter4[0]));
    }
    if ( (v24 & 1) == 0 || (v24 & 2) != 0 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  if ( v29 != 4096 )
  {
    MiFlushAllFilesystemPages(1);
    KeBugCheckEx(0x77u, 2uLL, LowPart, v14, LODWORD(BugCheckParameter4[0]));
  }
  return result;
}
