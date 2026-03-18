/*
 * XREFs of IsvDisableSynchronizeSupported @ 0x14003DBD4
 * Callers:
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x14003D870 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     bDynamicModeChange @ 0x140175A68 (bDynamicModeChange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 IsvDisableSynchronizeSupported()
{
  __int64 (*v0)(void); // rax

  v0 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1592LL);
  if ( v0 )
    return v0();
  else
    return 3221225659LL;
}
