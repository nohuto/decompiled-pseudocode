/*
 * XREFs of DrvStopPresenterView @ 0x14014E53C
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

char __fastcall DrvStopPresenterView(__int64 a1)
{
  __int64 v1; // rcx
  __int64 DxgkWin32kInterface; // rax

  if ( !*(_QWORD *)(DxDdGetDxgkWin32kInterface(a1) + 528) )
    return 0;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v1);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(DxgkWin32kInterface + 528))(0LL, 0LL);
}
