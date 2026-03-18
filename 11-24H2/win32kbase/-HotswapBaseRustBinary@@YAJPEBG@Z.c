/*
 * XREFs of ?HotswapBaseRustBinary@@YAJPEBG@Z @ 0x1401C5560
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?AllocateAndLoadBaseRustExports@@YAJPEBGPEAPEAUBaseRustExportsStorage@@_N@Z @ 0x1401C526C (-AllocateAndLoadBaseRustExports@@YAJPEBGPEAPEAUBaseRustExportsStorage@@_N@Z.c)
 */

__int64 __fastcall HotswapBaseRustBinary(PCWSTR SourceString)
{
  __int64 result; // rax
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v4; // ebx
  __int64 v5; // rdi
  LUID PrivilegeValue; // [rsp+38h] [rbp+10h] BYREF

  if ( !WPP_MAIN_CB.Dpc.SystemArgument1 )
    return 3221225474LL;
  PreviousMode = ExGetPreviousMode();
  PrivilegeValue = (LUID)10LL;
  if ( !SeSinglePrivilegeCheck((LUID)10LL, PreviousMode) )
    return 3221225569LL;
  PrivilegeValue = 0LL;
  result = AllocateAndLoadBaseRustExports(SourceString, (struct _UNICODE_STRING **)&PrivilegeValue, 0);
  v4 = result;
  if ( (int)result >= 0 )
  {
    W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)&WPP_MAIN_CB.Dpc.DpcData, 2u);
    v5 = _InterlockedExchange64((volatile __int64 *)&WPP_MAIN_CB.Dpc.SystemArgument2, *(_QWORD *)&PrivilegeValue);
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)&WPP_MAIN_CB.Dpc.DpcData, 2LL);
    if ( *(_QWORD *)(v5 + 24) )
      v4 = ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (PVOID)(v5 + 24), 8uLL);
    ExFreePoolWithTag((PVOID)v5, 0);
    if ( v4 < 0 )
      DbgPrintEx(0x70u, 1u, "failed to unload win32kbase_rs.sys: %08x\n", v4);
    return (unsigned int)v4;
  }
  return result;
}
