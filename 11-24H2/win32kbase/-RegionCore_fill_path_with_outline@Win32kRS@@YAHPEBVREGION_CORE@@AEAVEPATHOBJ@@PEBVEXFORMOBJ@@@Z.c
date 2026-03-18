/*
 * XREFs of ?RegionCore_fill_path_with_outline@Win32kRS@@YAHPEBVREGION_CORE@@AEAVEPATHOBJ@@PEBVEXFORMOBJ@@@Z @ 0x140068D20
 * Callers:
 *     GreExtCreateRegion @ 0x140066D70 (GreExtCreateRegion.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x140068C60 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_fill_path_with_outline(
        Win32kRS *this,
        const struct REGION_CORE *a2,
        struct EPATHOBJ *a3,
        const struct EXFORMOBJ *a4)
{
  PVOID SystemArgument1; // rdi
  char *v8; // rbx

  SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
  v8 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)((char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8), 2u);
  LODWORD(SystemArgument1) = (*(__int64 (__fastcall **)(Win32kRS *, const struct REGION_CORE *, struct EPATHOBJ *))(*(_QWORD *)SystemArgument1 + 312LL))(
                               this,
                               a2,
                               a3);
  ExReleasePushLockSharedEx(v8, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)SystemArgument1;
}
