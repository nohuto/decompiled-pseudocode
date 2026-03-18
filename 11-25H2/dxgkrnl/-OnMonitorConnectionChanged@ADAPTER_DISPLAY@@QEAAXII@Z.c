/*
 * XREFs of ?OnMonitorConnectionChanged@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140197690
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x140253DB4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1400293A8 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1401972F0 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1401F387C (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
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
    v9 = DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(*((DXGSESSIONMGR **)Global + 118), v11);
    if ( v9 < 0 )
    {
      v10 = v9;
      WdLogSingleEntry2(2LL, (unsigned int)v8, v9);
      WdLogGlobalForLineNumber = 3217;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
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
