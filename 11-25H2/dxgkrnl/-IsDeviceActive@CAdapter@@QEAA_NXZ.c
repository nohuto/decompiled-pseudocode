/*
 * XREFs of ?IsDeviceActive@CAdapter@@QEAA_NXZ @ 0x14002EAE4
 * Callers:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14002E7DC (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?FreeFlipAwayFence@CAdapterCollection@@QEAAX_K@Z @ 0x140098620 (-FreeFlipAwayFence@CAdapterCollection@@QEAAX_K@Z.c)
 *     ?IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400986D8 (-IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVE.c)
 *     ?IssueFlipManagerWaitForFlipAway@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x140098840 (-IssueFlipManagerWaitForFlipAway@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSIT.c)
 *     ?IssueFlipManagerWaitForFrameRenderingComplete@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@_KAEBU_LUID@@@Z @ 0x140098904 (-IssueFlipManagerWaitForFrameRenderingComplete@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@_.c)
 * Callees:
 *     DxgkGetDeviceStateInternal @ 0x1402A4C80 (DxgkGetDeviceStateInternal.c)
 */

char __fastcall CAdapter::IsDeviceActive(CAdapter *this)
{
  int v1; // eax
  char v2; // bl
  _DWORD v4[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+28h] [rbp-40h]
  __int128 v6; // [rsp+30h] [rbp-38h]
  __int128 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+50h] [rbp-18h]

  v1 = *((_DWORD *)this + 11);
  v2 = 1;
  if ( v1 )
  {
    v8 = 0LL;
    v4[0] = v1;
    v6 = 0LL;
    v4[1] = 1;
    v7 = 0LL;
    v5 = 1LL;
    if ( (int)DxgkGetDeviceStateInternal(v4, 0LL) < 0 || (_DWORD)v5 != 1 )
      return 0;
  }
  return v2;
}
