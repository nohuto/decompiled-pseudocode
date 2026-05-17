/*
 * XREFs of LdrpGenericExceptionFilter @ 0x18011B640
 * Callers:
 *     LdrpSnapModule @ 0x180012B70 (LdrpSnapModule.c)
 *     LdrpAllocateTls @ 0x180020710 (LdrpAllocateTls.c)
 *     LdrpHandleTlsData @ 0x180021A20 (LdrpHandleTlsData.c)
 *     LdrpAllocateTlsEntry @ 0x1800236B8 (LdrpAllocateTlsEntry.c)
 *     LdrUnlockLoaderLock @ 0x18003F1D0 (LdrUnlockLoaderLock.c)
 *     LdrpProtectedCopyMemory @ 0x18006AC40 (LdrpProtectedCopyMemory.c)
 *     LdrpTouchThreadStack @ 0x1800D4754 (LdrpTouchThreadStack.c)
 *     LdrpProtectAndRelocateImage @ 0x1800E3FFC (LdrpProtectAndRelocateImage.c)
 *     LdrLockLoaderLock @ 0x1800F5290 (LdrLockLoaderLock.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180113590 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800D1D10 (LdrpLogFatalLdrEtwEvent.c)
 *     DbgPrompt @ 0x180138080 (DbgPrompt.c)
 *     ZwTerminateProcess @ 0x1801637A0 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x180163C80 (NtTerminateThread.c)
 */

__int64 __fastcall LdrpGenericExceptionFilter(unsigned int **a1, char a2)
{
  unsigned int v3; // edi
  bool v4; // zf
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  char v9; // [rsp+60h] [rbp+8h] BYREF

  v3 = **a1;
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrutil.c",
    564,
    (__int64)"LdrpGenericExceptionFilter",
    0,
    "Function %s raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
    a2);
  if ( (LdrpDebugFlags & 0x30) == 0x20 )
  {
    while ( 1 )
    {
      DbgPrint("\n***Exception thrown within loader***\n");
      DbgPrompt("Break repeatedly, break Once, Ignore, terminate Process or terminate Thread (boipt)? ", &v9, 2LL);
      if ( v9 > 98 )
      {
        v5 = v9 - 105;
        v4 = v9 == 105;
      }
      else
      {
        if ( v9 == 98 || v9 == 66 )
          goto LABEL_13;
        v5 = v9 - 73;
        v4 = v9 == 73;
      }
      if ( v4 )
        return 1LL;
      v6 = v5 - 6;
      if ( !v6 )
      {
LABEL_13:
        DbgPrint("Execute '.cxr %p' to dump context\n", a1[1]);
        __debugbreak();
      }
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 4 )
        {
          LdrpLogFatalLdrEtwEvent(
            &NtCurrentPeb()->ProcessParameters->ImagePathName.Length,
            (__int64)&LoaderFatalErrorThread);
          NtTerminateThread(-2LL, v3);
        }
      }
      else
      {
        LdrpLogFatalLdrEtwEvent(
          &NtCurrentPeb()->ProcessParameters->ImagePathName.Length,
          (__int64)&LoaderFatalErrorProc);
        ZwTerminateProcess(-1LL, v3);
      }
    }
  }
  return 1LL;
}
