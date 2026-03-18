/*
 * XREFs of ?RegionCore_bCopy@Win32kRS@@YA_NPEAVREGION_CORE@@PEBV2@@Z @ 0x1401C1340
 * Callers:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140025B10 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x140025C20 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017A1BC (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 * Callees:
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140069040 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ??0RustAutoHotpatchLockSH@@QEAA@XZ @ 0x1401C11C8 (--0RustAutoHotpatchLockSH@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

bool __fastcall Win32kRS::RegionCore_bCopy(Win32kRS *this, struct REGION_CORE *a2, const struct REGION_CORE *a3)
{
  __int64 *SystemArgument1; // rbx
  __int64 v6; // rsi
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
  RustAutoHotpatchLockSH::RustAutoHotpatchLockSH((RustAutoHotpatchLockSH *)&v8);
  v6 = *SystemArgument1;
  LOBYTE(SystemArgument1) = (*(__int64 (__fastcall **)(Win32kRS *, struct REGION_CORE *))(*SystemArgument1 + 96))(
                              this,
                              a2);
  RgnCaptureLiveMemoryDumpOnZeroSizedScan((unsigned int (__fastcall **)(const struct REGION_CORE *))(v6 + 48), this);
  ExReleasePushLockSharedEx(v8, 2LL);
  KeLeaveCriticalRegion();
  return (char)SystemArgument1;
}
