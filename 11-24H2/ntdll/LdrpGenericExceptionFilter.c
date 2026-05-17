/*
 * XREFs of LdrpGenericExceptionFilter @ 0x1801185C0
 * Callers:
 *     LdrUnlockLoaderLock @ 0x180003D60 (LdrUnlockLoaderLock.c)
 *     LdrpAllocateTlsEntry @ 0x18000776C (LdrpAllocateTlsEntry.c)
 *     LdrpHandleTlsData @ 0x180008200 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x180012580 (LdrpAllocateTls.c)
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 *     LdrpTouchThreadStack @ 0x180068AC8 (LdrpTouchThreadStack.c)
 *     LdrpProtectedCopyMemory @ 0x1800B1280 (LdrpProtectedCopyMemory.c)
 *     LdrpProtectAndRelocateImage @ 0x1800E502C (LdrpProtectAndRelocateImage.c)
 *     LdrLockLoaderLock @ 0x1800F3720 (LdrLockLoaderLock.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180110720 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x180066090 (LdrpLogFatalLdrEtwEvent.c)
 *     DbgPrompt @ 0x180136910 (DbgPrompt.c)
 *     ZwTerminateProcess @ 0x180162210 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x1801626F0 (NtTerminateThread.c)
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
