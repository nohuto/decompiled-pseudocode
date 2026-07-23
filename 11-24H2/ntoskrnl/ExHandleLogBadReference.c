/*
 * XREFs of ExHandleLogBadReference @ 0x14042D470
 * Callers:
 *     ObpCloseHandle @ 0x140846A30 (ObpCloseHandle.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x140847240 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObReferenceFileObjectForWrite @ 0x140863440 (ObReferenceFileObjectForWrite.c)
 *     AlpcpLookupMessage @ 0x140892E20 (AlpcpLookupMessage.c)
 *     ExMapHandleToPointerEx @ 0x140896120 (ExMapHandleToPointerEx.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14089F010 (NtAlpcImpersonateClientOfPort.c)
 *     NtWriteFile @ 0x1408BEB30 (NtWriteFile.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     KeRaiseUserException @ 0x1404C6E50 (KeRaiseUserException.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExpUpdateDebugInfo @ 0x1408495B4 (ExpUpdateDebugInfo.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140AA4BD0 (DbgkWerCaptureLiveKernelDump.c)
 */

struct _KTHREAD *__fastcall ExHandleLogBadReference(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        char a3)
{
  struct _KTHREAD *BugCheckParameter4; // rbp
  struct _KTHREAD *result; // rax
  struct _KTHREAD *CurrentThread; // rdx

  if ( (*(_BYTE *)(BugCheckParameter2 + 44) & 2) != 0 )
  {
    BugCheckParameter4 = KeGetCurrentThread();
    if ( *(_QWORD *)(BugCheckParameter2 + 96) )
      result = (struct _KTHREAD *)ExpUpdateDebugInfo(BugCheckParameter2, BugCheckParameter4, BugCheckParameter1, 3LL);
    if ( a3 == 1 )
    {
      result = KeGetCurrentThread();
      if ( result->ApcStateIndex != 1 )
      {
        result = KeGetCurrentThread();
        if ( BugCheckParameter2 == result->ApcState.Process[1].KernelTime )
        {
          if ( (NtGlobalFlag & 0x100) != 0 )
            DbgPrintEx(
              0x5Du,
              0,
              "AVRF: Invalid handle %p in process %p \n",
              (const void *)BugCheckParameter1,
              KeGetCurrentThread()->ApcState.Process);
          if ( (*((_DWORD *)&BugCheckParameter4[1].SwapListEntry + 3) & 0x1000) != 0 )
          {
            CurrentThread = KeGetCurrentThread();
            if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x200000000000LL) != 0 )
              KeBugCheckEx(
                0x1EDu,
                BugCheckParameter1,
                BugCheckParameter2,
                (ULONG_PTR)CurrentThread->ApcState.Process,
                (ULONG_PTR)BugCheckParameter4);
            DbgkWerCaptureLiveKernelDump(
              (unsigned int)L"BadHandleKmChk",
              492,
              -1073741816,
              (_DWORD)BugCheckParameter4,
              (__int64)CurrentThread->ApcState.Process,
              BugCheckParameter1,
              0LL,
              0LL,
              0);
          }
          return (struct _KTHREAD *)KeRaiseUserException(3221225480LL);
        }
      }
    }
    else if ( (NtGlobalFlag & 0x40000000) != 0 )
    {
      KeBugCheckEx(0x93u, BugCheckParameter1, BugCheckParameter2, 0LL, 1uLL);
    }
  }
  return result;
}
