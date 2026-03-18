/*
 * XREFs of MiReadPagefilePage @ 0x14066A47C
 * Callers:
 *     MiMakeOutswappedPageResident @ 0x1404A8280 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiIsRetryIoStatus @ 0x1402CBFE0 (MiIsRetryIoStatus.c)
 *     MiInitializeInPageSupport @ 0x1402E44F8 (MiInitializeInPageSupport.c)
 *     MiIsPteInStore @ 0x1402E5460 (MiIsPteInStore.c)
 *     MiValidatePagefilePageHash @ 0x1402E57B0 (MiValidatePagefilePageHash.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoPageReadEx @ 0x140373740 (IoPageReadEx.c)
 *     MiStoreFaultComplete @ 0x140398D18 (MiStoreFaultComplete.c)
 *     SmPageRead @ 0x140399080 (SmPageRead.c)
 *     MiSetPageTablePfnBuddy @ 0x140498190 (MiSetPageTablePfnBuddy.c)
 *     MiReadFromMemoryPagefile @ 0x1404D1F24 (MiReadFromMemoryPagefile.c)
 *     MiFlushAllFilesystemPages @ 0x1404D6B8C (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  ULONG_PTR v13; // rsi
  __int64 v14; // rdi
  signed int v15; // eax
  unsigned __int8 v16; // al
  NTSTATUS LowPart; // ebx
  __int64 result; // rax
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  void *v20; // [rsp+50h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2[4]; // [rsp+58h] [rbp-B0h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v23; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-58h]
  ULONG_PTR BugCheckParameter4[11]; // [rsp+B8h] [rbp-50h] BYREF
  int v26; // [rsp+110h] [rbp+8h]
  unsigned int v27; // [rsp+118h] [rbp+10h]
  struct _MDL MemoryDescriptorList; // [rsp+168h] [rbp+60h] BYREF
  __int64 v29; // [rsp+198h] [rbp+90h]

  memset_0(BugCheckParameter2, 0, 0x1C0uLL);
  v4 = 48 * a1 - 0x220000000000LL;
  v5 = a2 << 25 >> 16;
  v20 = (void *)(v5 & 0xFFFFFFFFFFFFF000uLL);
  v6 = 8 * (((unsigned __int16)((v5 & 0xFFF) + 0x1FFF) >> 12) + 6);
  v7 = v5 & 0xFFF;
  while ( 1 )
  {
    v8 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
    MiInitializeInPageSupport((__int64)BugCheckParameter2, 0, 0LL);
    IsPteInStore = MiIsPteInStore(v8, *(_QWORD *)(v4 + 16));
    v10 = *(_QWORD *)(v4 + 16) >> 12;
    v27 = v11 & 0xFFFFFBFF | ((IsPteInStore | 0x1000) << 10);
    PagingFileOffset = (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v4 + 16));
    if ( !IsPteInStore )
      PagingFileOffset = (unsigned __int64)(unsigned int)PagingFileOffset << 12;
    BugCheckParameter4[0] = PagingFileOffset;
    MiSetPageTablePfnBuddy(48 * a1 - 0x220000000000LL, 0x10000000000uLL, 0);
    v13 = v10 & 0xF;
    MemoryDescriptorList.StartVa = v20;
    MemoryDescriptorList.Next = 0LL;
    MemoryDescriptorList.MdlFlags = 16386;
    MemoryDescriptorList.Size = v6;
    MemoryDescriptorList.ByteOffset = v7;
    MemoryDescriptorList.ByteCount = 4096;
    v26 = 4096;
    v29 = a1;
    v14 = *(_QWORD *)(v8 + 8 * v13 + 18528);
    if ( _bittest16((const signed __int16 *)(v14 + 172), 0xBu) )
    {
      MiReadFromMemoryPagefile(v14, (__int64)BugCheckParameter2);
    }
    else
    {
      if ( IsPteInStore )
      {
        v23.LowPart = 0;
        v24 = 0LL;
        v15 = SmPageRead(
                *(_QWORD *)(*(_QWORD *)(v14 + 216) + 184LL),
                (int *)BugCheckParameter4,
                (int)&MemoryDescriptorList,
                (int)&Event,
                (__int64)&v23);
      }
      else
      {
        v15 = IoPageReadEx(
                *(PFILE_OBJECT *)(v14 + 24),
                (__int64)&MemoryDescriptorList,
                BugCheckParameter4,
                (__int64)&Event,
                (__int64)&v23,
                0,
                0LL);
      }
      if ( v15 < 0 )
      {
        v24 = 0LL;
        v23.LowPart = v15;
        KeSetEvent(&Event, 0, 0);
      }
    }
    KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
    LODWORD(v19) = 0;
    if ( (v27 & 0x400) != 0 )
    {
      MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2, (int *)&v19);
      v16 = MiLockPageInline(48 * a1 - 0x220000000000LL);
      MiUnlockPage(48 * a1 - 0x220000000000LL, v16);
    }
    LowPart = v23.LowPart;
    if ( (v23.LowPart & 0x80000000) == 0 && *(_QWORD *)(v14 + 184) )
    {
      v27 |= 0x800000u;
      LowPart = MiValidatePagefilePageHash(BugCheckParameter2);
    }
    if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
      MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
    result = MiSetPageTablePfnBuddy(48 * a1 - 0x220000000000LL, 0LL, 0);
    if ( LowPart >= 0 )
      break;
    if ( !MiIsRetryIoStatus(LowPart, 0x1000uLL) )
    {
      MiFlushAllFilesystemPages(1);
      KeBugCheckEx(0x77u, LowPart, LowPart, v13, LODWORD(BugCheckParameter4[0]));
    }
    if ( (v19 & 1) == 0 || (v19 & 2) != 0 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  if ( v24 != 4096 )
  {
    MiFlushAllFilesystemPages(1);
    KeBugCheckEx(0x77u, 2uLL, LowPart, v13, LODWORD(BugCheckParameter4[0]));
  }
  return result;
}
