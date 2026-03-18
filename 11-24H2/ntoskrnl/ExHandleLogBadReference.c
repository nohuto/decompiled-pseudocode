/*
 * XREFs of ExHandleLogBadReference @ 0x14043AC30
 * Callers:
 *     ObpCloseHandle @ 0x14084A770 (ObpCloseHandle.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x14084AF80 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140896970 (NtAlpcImpersonateClientOfPort.c)
 *     NtWriteFile @ 0x1408C1170 (NtWriteFile.c)
 *     AlpcpLookupMessage @ 0x14093E7E0 (AlpcpLookupMessage.c)
 *     ObReferenceFileObjectForWrite @ 0x140988C30 (ObReferenceFileObjectForWrite.c)
 *     ExMapHandleToPointerEx @ 0x14098A1A0 (ExMapHandleToPointerEx.c)
 * Callees:
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     KeRaiseUserException @ 0x1404CDA80 (KeRaiseUserException.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExpUpdateDebugInfo @ 0x14084D2F4 (ExpUpdateDebugInfo.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140AA9B20 (DbgkWerCaptureLiveKernelDump.c)
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
