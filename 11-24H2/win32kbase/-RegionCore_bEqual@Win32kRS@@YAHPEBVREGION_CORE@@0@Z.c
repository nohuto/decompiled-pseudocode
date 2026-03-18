/*
 * XREFs of ?RegionCore_bEqual@Win32kRS@@YAHPEBVREGION_CORE@@0@Z @ 0x140066150
 * Callers:
 *     GreEqualRgn @ 0x140066030 (GreEqualRgn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_bEqual(
        Win32kRS *this,
        const struct REGION_CORE *a2,
        const struct REGION_CORE *a3)
{
  PVOID SystemArgument1; // rdi
  char *v6; // rbx

  SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
  v6 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 2LL);
  LODWORD(SystemArgument1) = (*(__int64 (__fastcall **)(Win32kRS *, const struct REGION_CORE *))(*(_QWORD *)SystemArgument1
                                                                                               + 128LL))(
                               this,
                               a2);
  ExReleasePushLockSharedEx(v6, 2LL);
  KeLeaveCriticalRegion();
  return (unsigned int)SystemArgument1;
}
