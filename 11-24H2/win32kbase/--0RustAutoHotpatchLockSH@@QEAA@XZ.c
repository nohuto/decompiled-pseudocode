/*
 * XREFs of ??0RustAutoHotpatchLockSH@@QEAA@XZ @ 0x1401C11C8
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?RegionCore_bCopy@Win32kRS@@YA_NPEAVREGION_CORE@@PEBV2@@Z @ 0x1401C1340 (-RegionCore_bCopy@Win32kRS@@YA_NPEAVREGION_CORE@@PEBV2@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

RustAutoHotpatchLockSH *__fastcall RustAutoHotpatchLockSH::RustAutoHotpatchLockSH(RustAutoHotpatchLockSH *this)
{
  struct W32_PUSH_LOCK *v2; // rcx

  v2 = (struct W32_PUSH_LOCK *)((char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8);
  *(_QWORD *)this = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  W32AcquirePushLockSharedEx(v2, 2u);
  return this;
}
