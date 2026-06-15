/*
 * XREFs of ServiceStart @ 0x18014E768
 * Callers:
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x18014D860 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x1800CB4B4 (--0CAudioSrv@@QEAA@XZ.c)
 *     ReportStatusToSCMgr @ 0x18014DDE0 (ReportStatusToSCMgr.c)
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x18014E08C (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ServiceStart(struct SERVICE_STATUS_HANDLE__ *a1, int a2)
{
  CAudioSrv *v3; // rax
  CAudioSrv *v4; // rbx
  __int64 v5; // rdx
  const unsigned __int16 **v6; // r8
  unsigned int v7; // ebx

  if ( !a2 )
    ReportStatusToSCMgr(1, -2147467259, 0);
  v3 = (CAudioSrv *)operator new(0x1E0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( !v3 )
  {
    g_AudioService = 0LL;
    return 14LL;
  }
  memset_0(v3, 0, 0x1E0uLL);
  g_AudioService = CAudioSrv::CAudioSrv(v4);
  if ( !g_AudioService )
    return 14LL;
  v7 = MyServiceInitialization(a1, v5, v6);
  if ( !v7 )
  {
    ReportStatusToSCMgr(4, 0, 0);
    (*(void (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 104LL))(g_AudioService);
  }
  return v7;
}
