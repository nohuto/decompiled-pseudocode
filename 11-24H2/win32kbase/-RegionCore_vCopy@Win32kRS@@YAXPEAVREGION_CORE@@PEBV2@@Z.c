/*
 * XREFs of ?RegionCore_vCopy@Win32kRS@@YAXPEAVREGION_CORE@@PEBV2@@Z @ 0x1400CE774
 * Callers:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x140025A90 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall Win32kRS::RegionCore_vCopy(Win32kRS *this, struct REGION_CORE *a2, const struct REGION_CORE *a3)
{
  __int64 *SystemArgument1; // rdi
  char *v6; // rbx
  __int64 v7; // rdi

  SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v6 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 2LL);
  v7 = *SystemArgument1;
  (*(void (__fastcall **)(Win32kRS *, struct REGION_CORE *))(v7 + 88))(this, a2);
  if ( !(*(unsigned int (__fastcall **)(Win32kRS *))(v7 + 216))(this) )
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, this, 0LL, 0LL, 0LL, 0LL, 0);
  ExReleasePushLockSharedEx(v6, 2LL);
  KeLeaveCriticalRegion();
}
