/*
 * XREFs of ?vDeleteREGION@REGION@@AEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C1770
 * Callers:
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C1200 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C1840 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400280F8 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140029120 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x140040A9C (--$FreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140065B50 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall REGION::vDeleteREGION(REGION *this, const struct RustAutoHotpatchLockSH *a2)
{
  struct REGION_CORE *v3; // rdx
  __int64 v4; // rsi
  int sizeScanAlloc; // eax
  struct REGION_CORE *v6; // rdx
  REGION_CORE *v7; // rcx
  char *pScan; // rax
  struct REGION_CORE *v9; // rdx
  char *v10; // rax

  v4 = *(_QWORD *)(W32GetSessionState(this) + 88);
  if ( this && this != *(REGION **)(v4 + 4160) )
  {
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument1 + 152LL))((char *)this + 24);
    }
    else if ( REGION_CORE::get_pScan((REGION *)((char *)this + 24), v3) )
    {
      sizeScanAlloc = REGION_CORE::get_sizeScanAlloc((REGION *)((char *)this + 24));
      v7 = (REGION *)((char *)this + 24);
      if ( sizeScanAlloc == 112 )
      {
        pScan = (char *)REGION_CORE::get_pScan(v7, v6);
        Win32FreeToPagedLookasideListImpl(*(char **)(v4 + 4136), pScan);
      }
      else if ( (unsigned int)REGION_CORE::get_sizeScanAlloc(v7) > 0x70 )
      {
        v10 = (char *)REGION_CORE::get_pScan((REGION *)((char *)this + 24), v9);
        GreDeleteFastMutex(v10);
      }
      *((_QWORD *)this + 3) = 0LL;
    }
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(this);
  }
}
