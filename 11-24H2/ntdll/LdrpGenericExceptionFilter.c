/*
 * XREFs of LdrpGenericExceptionFilter @ 0x180113530
 * Callers:
 *     LdrpAllocateTlsEntry @ 0x18003416C (LdrpAllocateTlsEntry.c)
 *     LdrpHandleTlsData @ 0x180034C00 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x18003EF80 (LdrpAllocateTls.c)
 *     LdrpSnapModule @ 0x18006CB10 (LdrpSnapModule.c)
 *     LdrpProtectedCopyMemory @ 0x18007DB20 (LdrpProtectedCopyMemory.c)
 *     LdrLockLoaderLock @ 0x1800A0610 (LdrLockLoaderLock.c)
 *     LdrpTouchThreadStack @ 0x1800B0CA8 (LdrpTouchThreadStack.c)
 *     LdrpProtectAndRelocateImage @ 0x1800E04DC (LdrpProtectAndRelocateImage.c)
 *     LdrUnlockLoaderLock @ 0x1800F22A0 (LdrUnlockLoaderLock.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010B9E0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800AE26C (LdrpLogFatalLdrEtwEvent.c)
 *     DbgPrompt @ 0x180134B40 (DbgPrompt.c)
 *     ZwTerminateProcess @ 0x1801605D0 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x180160AB0 (NtTerminateThread.c)
 */

__int64 __fastcall LdrpGenericExceptionFilter(const void **a1, const char *a2)
{
  NTSTATUS v3; // edi
  bool v4; // zf
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  CHAR Response; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_DWORD *)*a1;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrutil.c",
    564,
    (__int64)"LdrpGenericExceptionFilter",
    0,
    "Function %s raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
    a2,
    v3,
    *a1,
    a1[1]);
  if ( (LdrpDebugFlags & 0x30) == 0x20 )
  {
    while ( 1 )
    {
      DbgPrint("\n***Exception thrown within loader***\n");
      DbgPrompt("Break repeatedly, break Once, Ignore, terminate Process or terminate Thread (boipt)? ", &Response, 2u);
      if ( Response > 98 )
      {
        v5 = Response - 105;
        v4 = Response == 105;
      }
      else
      {
        if ( Response == 98 || Response == 66 )
          goto LABEL_13;
        v5 = Response - 73;
        v4 = Response == 73;
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
          LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName.Length, &LoaderFatalErrorThread);
          NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, v3);
        }
      }
      else
      {
        LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName.Length, &LoaderFatalErrorProc);
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3);
      }
    }
  }
  return 1LL;
}
