/*
 * XREFs of ?RegionCore_set_to_rect@Win32kRS@@YAXPEAVREGION_CORE@@PEBU_RECTL@@@Z @ 0x14002AE28
 * Callers:
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x140019A04 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     GreSetRectRgn @ 0x14002C480 (GreSetRectRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14002C870 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x14002CCB0 (SetRectRgnIndirect.c)
 *     GreCreateRectRgnIndirect @ 0x14002D480 (GreCreateRectRgnIndirect.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall Win32kRS::RegionCore_set_to_rect(Win32kRS *this, struct REGION_CORE *a2, const struct _RECTL *a3)
{
  __int64 *SystemArgument1; // rdi
  char *v6; // rbx
  __int64 v7; // rdi

  SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v6 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 2LL);
  v7 = *SystemArgument1;
  (*(void (__fastcall **)(Win32kRS *, struct REGION_CORE *))(v7 + 176))(this, a2);
  if ( !(*(unsigned int (__fastcall **)(Win32kRS *))(v7 + 216))(this) )
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, this, 0LL, 0LL, 0LL, 0LL, 0);
  ExReleasePushLockSharedEx(v6, 2LL);
  KeLeaveCriticalRegion();
}
