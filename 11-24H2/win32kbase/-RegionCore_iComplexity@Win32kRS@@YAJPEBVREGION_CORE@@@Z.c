/*
 * XREFs of ?RegionCore_iComplexity@Win32kRS@@YAJPEBVREGION_CORE@@@Z @ 0x140010888
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14000F604 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1400107A0 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?IsEmpty@CRegion@@UEBA_NXZ @ 0x140010800 (-IsEmpty@CRegion@@UEBA_NXZ.c)
 *     GreOffsetRgn @ 0x14002C0D0 (GreOffsetRgn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_iComplexity(Win32kRS *this, const struct REGION_CORE *a2)
{
  PVOID SystemArgument1; // rdi
  char *v4; // rbx

  SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
  v4 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 2LL);
  LODWORD(SystemArgument1) = (*(__int64 (__fastcall **)(Win32kRS *))(*(_QWORD *)SystemArgument1 + 72LL))(this);
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)SystemArgument1;
}
