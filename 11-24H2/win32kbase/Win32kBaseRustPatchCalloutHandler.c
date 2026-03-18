/*
 * XREFs of Win32kBaseRustPatchCalloutHandler @ 0x1401C56E0
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?AllocateAndGetBaseRustExports@@YAJPEBU_SYSTEM_GDI_DRIVER_INFORMATION@@PEAPEAUBaseRustExportsStorage@@@Z @ 0x1401C51E0 (-AllocateAndGetBaseRustExports@@YAJPEBU_SYSTEM_GDI_DRIVER_INFORMATION@@PEAPEAUBaseRustExportsSto.c)
 */

__int64 __fastcall Win32kBaseRustPatchCalloutHandler(
        const struct _SYSTEM_GDI_DRIVER_INFORMATION *a1,
        struct BaseRustExportsStorage **a2)
{
  __int64 v3; // rbx
  void *v4; // rcx

  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 == 1 )
    {
      W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)&WPP_MAIN_CB.Dpc.DpcData, 2u);
      v3 = _InterlockedExchange64(
             (volatile __int64 *)&WPP_MAIN_CB.Dpc.SystemArgument2,
             *(__int64 *)&WPP_MAIN_CB.ActiveThreadCount);
      W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)&WPP_MAIN_CB.Dpc.DpcData, 2LL);
      v4 = (void *)v3;
    }
    else
    {
      if ( (_DWORD)a2 != 2 )
        return 3221225659LL;
      v4 = *(void **)&WPP_MAIN_CB.ActiveThreadCount;
      if ( !*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount )
        return 0LL;
    }
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = 0LL;
    return 0LL;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount )
    return 3221266435LL;
  else
    return AllocateAndGetBaseRustExports(a1, a2);
}
