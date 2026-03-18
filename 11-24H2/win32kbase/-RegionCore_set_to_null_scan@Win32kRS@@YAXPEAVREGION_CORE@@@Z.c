/*
 * XREFs of ?RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140028934
 * Callers:
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x140019A04 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@XZ @ 0x140019CF8 (--0RGNCOREMEMOBJ@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400268F0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400288AC (-vSet@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1400291D0 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vInit@RGNMEMOBJ@@QEAAXXZ @ 0x140029510 (-vInit@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140029D30 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     GreSetRectRgn @ 0x14002C480 (GreSetRectRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14002C870 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x14002CCB0 (SetRectRgnIndirect.c)
 *     GreCreateRectRgnIndirect @ 0x14002D480 (GreCreateRectRgnIndirect.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall Win32kRS::RegionCore_set_to_null_scan(Win32kRS *this, struct REGION_CORE *a2)
{
  __int64 *SystemArgument1; // rdi
  char *v4; // rbx
  __int64 v5; // rdi

  SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v4 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 2LL);
  v5 = *SystemArgument1;
  (*(void (__fastcall **)(Win32kRS *))(v5 + 160))(this);
  if ( !(*(unsigned int (__fastcall **)(Win32kRS *))(v5 + 216))(this) )
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, this, 0LL, 0LL, 0LL, 0LL, 0);
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
}
