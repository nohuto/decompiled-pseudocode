/*
 * XREFs of ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C1200
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x140174490 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXAEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C18F0 (-vInitialize@RGNMEMOBJ@@QEAAXAEBVRustAutoHotpatchLockSH@@K@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ @ 0x140026B3C (--$AllocateIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140027B90 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x140029050 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140029120 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x14005264C (-Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z.c)
 *     ?set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z @ 0x140065BE4 (-set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140069040 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?vDeleteREGION@REGION@@AEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C1770 (-vDeleteREGION@REGION@@AEAAXAEBVRustAutoHotpatchLockSH@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

struct REGION *__fastcall RGNMEMOBJ::AllocateRegion(const struct RustAutoHotpatchLockSH *a1, unsigned int a2)
{
  __int64 v4; // rax
  unsigned int v5; // r8d
  REGION *v6; // rsi
  const struct REGION_CORE *v7; // r14
  REGION_CORE *v8; // rcx
  __int64 v9; // rdi
  int v10; // ebx
  struct REGION_CORE *v11; // rdx
  __int64 v12; // rcx
  __int64 SessionState; // rax
  __int64 v14; // rax

  v4 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>((__int64)a1);
  v6 = (REGION *)v4;
  if ( !v4 )
    return v6;
  v7 = (const struct REGION_CORE *)(v4 + 24);
  v8 = (REGION_CORE *)(v4 + 24);
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    v9 = *(_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument1;
    v10 = (*(__int64 (__fastcall **)(REGION_CORE *, _QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument1 + 144LL))(
            v8,
            a2);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan((unsigned int (__fastcall **)(const struct REGION_CORE *))(v9 + 48), v7);
    if ( !v10 )
    {
      REGION::vDeleteREGION(v6, a1);
      return 0LL;
    }
    return v6;
  }
  REGION_CORE::set_sizeScan(v8, 0LL, v5);
  REGION_CORE::set_sizeScanAlloc(v7, a2);
  if ( a2 == 112 )
  {
    SessionState = W32GetSessionState(v12);
    v14 = (__int64)Win32AllocateFromPagedLookasideListImpl(*(char **)(*(_QWORD *)(SessionState + 88) + 4136LL));
  }
  else
  {
    if ( a2 <= 0x70 )
      goto LABEL_10;
    v14 = PALLOCNOZ(a2, 0x6E637347u);
  }
  *(_QWORD *)v7 = v14;
LABEL_10:
  if ( !REGION_CORE::get_pScan(v7, v11) )
  {
    REGION::vDeleteREGION(v6);
    return 0LL;
  }
  return v6;
}
