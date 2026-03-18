/*
 * XREFs of ?OnMonitorConnectionChanged@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140199B1C
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x14025ABEC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x140029B50 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140051AB8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x14019977C (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1401FA0C8 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::OnMonitorConnectionChanged(
        PERESOURCE **this,
        __int64 a2,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a3)
{
  unsigned int v3; // edi
  struct _LUID *v5; // rdx
  DXGADAPTER *v6; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = (unsigned int)a3;
  v3 = a2;
  ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(this, a2, a3);
  if ( v3 != -1 )
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)this, v3, 1);
  v6 = (DXGADAPTER *)this[2];
  v11 = 0;
  if ( (*((_DWORD *)v6 + 111) & 0x100) != 0 && DXGADAPTER::IsAdapterSessionized(v6, v5, &v11, 0LL) )
  {
    Global = DXGGLOBAL::GetGlobal();
    v8 = v11;
    v9 = DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(*((DXGSESSIONMGR **)Global + 122), v11);
    if ( v9 < 0 )
    {
      v10 = v9;
      WdLogSingleEntry2(2LL, (unsigned int)v8, v9);
      WdLogGlobalForLineNumber = 3208;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to purge the cached IDD display config request for session 0x%I64x, (Status = 0x%I64x).",
        v8,
        v10,
        0LL,
        0LL,
        0LL);
    }
  }
}
