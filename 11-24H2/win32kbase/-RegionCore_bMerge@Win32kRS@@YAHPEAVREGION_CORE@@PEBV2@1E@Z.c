/*
 * XREFs of ?RegionCore_bMerge@Win32kRS@@YAHPEAVREGION_CORE@@PEBV2@1E@Z @ 0x1400D8464
 * Callers:
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140019860 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x140026690 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Win32kRS::RegionCore_bMerge(
        Win32kRS *this,
        struct REGION_CORE *a2,
        const struct REGION_CORE *a3,
        const struct REGION_CORE *a4)
{
  __int64 *SystemArgument1; // rdi
  char v5; // si
  char *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r9
  unsigned int v12; // esi

  SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v5 = (char)a4;
  v9 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v9, 2LL);
  v10 = *SystemArgument1;
  LOBYTE(v11) = v5;
  v12 = (*(__int64 (__fastcall **)(Win32kRS *, struct REGION_CORE *, const struct REGION_CORE *, __int64))(v10 + 184))(
          this,
          a2,
          a3,
          v11);
  if ( !(*(unsigned int (__fastcall **)(Win32kRS *))(v10 + 216))(this) )
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, this, 0LL, 0LL, 0LL, 0LL, 0);
  ExReleasePushLockSharedEx(v9, 2LL);
  KeLeaveCriticalRegion();
  return v12;
}
