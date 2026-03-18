/*
 * XREFs of ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x14037E6CC
 * Callers:
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037E324 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1400369D0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     DxgkStatusChangeNotify @ 0x14037E7F0 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall VIDPN_MGR::SetTargetOwnership(VIDPN_MGR *a1, unsigned int a2, int a3)
{
  __int64 v3; // r14
  __int64 v6; // rbp
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rdi
  struct DXGADAPTER *v12; // rax
  _QWORD v13[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v14; // [rsp+30h] [rbp-48h]

  v3 = a3;
  v6 = a2;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(a1);
  WdLogSingleEntry3(7LL, a2, ContainingAdapter, v3);
  v8 = *((_QWORD *)a1 + 15);
  WdLogGlobalForLineNumber = 5870;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 72));
  v9 = *((_QWORD *)a1 + 15);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v9, a2);
  if ( TargetById )
  {
    if ( v9 )
      ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
    v13[1] = 0LL;
    *((_DWORD *)TargetById + 30) = v3;
    v14 = 0LL;
    v13[0] = 1LL;
    if ( (int)DxgkStatusChangeNotify(v13) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5894;
    }
    return 0LL;
  }
  else
  {
    v12 = VIDPN_MGR::GetContainingAdapter(a1);
    WdLogSingleEntry2(2LL, v6, v12);
    WdLogGlobalForLineNumber = 5882;
    if ( v9 )
      ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
    return 3223192325LL;
  }
}
