/*
 * XREFs of ?bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z @ 0x1401C13D0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x140174490 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140026664 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14002689C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x14002AF10 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1400673D0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140069040 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z @ 0x1400DD83C (-bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bCopy(RGNOBJ *this, const struct RustAutoHotpatchLockSH *a2, struct RGNOBJ *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  const struct REGION_CORE *v8; // rsi
  unsigned int v9; // ebx
  REGION_CORE *v11; // [rsp+20h] [rbp-10h] BYREF
  REGION_CORE *v12; // [rsp+28h] [rbp-8h] BYREF
  Win32kRS *v13; // [rsp+58h] [rbp+28h] BYREF

  v4 = *(_QWORD *)a3;
  v5 = *(_QWORD *)this;
  v6 = *(_QWORD *)this + 24LL;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    v7 = *(_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument1;
    v8 = (const struct REGION_CORE *)(v6 & -(__int64)(v5 != 0));
    v9 = (*(unsigned __int8 (__fastcall **)(const struct REGION_CORE *, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument1
                                                                                + 96LL))(
           v8,
           (v4 + 24) & -(__int64)(v4 != 0));
    RgnCaptureLiveMemoryDumpOnZeroSizedScan((unsigned int (__fastcall **)(const struct REGION_CORE *))(v7 + 48), v8);
    return v9;
  }
  v11 = (REGION_CORE *)((v4 + 24) & -(__int64)(v4 != 0));
  LODWORD(v13) = 0;
  v12 = (REGION_CORE *)(v6 & -(__int64)(v5 != 0));
  if ( RGNCOREOBJ::bIsResizeRequiredBeforeCopyingRegion(&v12, &v11, (unsigned int *)&v13) )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13);
    if ( !v13 )
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13);
      return 0LL;
    }
    RGNOBJ::vSwap(this, (struct RGNOBJ *)&v13);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13);
  }
  v13 = (Win32kRS *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
  RGNCOREOBJ::vCopy(&v13, &v11);
  return 1LL;
}
