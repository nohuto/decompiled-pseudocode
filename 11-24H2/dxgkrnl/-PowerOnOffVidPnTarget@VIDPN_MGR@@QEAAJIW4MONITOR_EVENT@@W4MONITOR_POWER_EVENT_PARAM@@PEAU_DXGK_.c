/*
 * XREFs of ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037E324
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14025CB50 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003E58C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C6F0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037E164 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x14037E6CC (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 *     DxgkStatusChangeNotify @ 0x14037E7F0 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall VIDPN_MGR::PowerOnOffVidPnTarget(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v9; // r13
  unsigned __int8 v10; // si
  char v11; // r15
  __int64 v12; // rcx
  unsigned __int8 v13; // al
  int v14; // eax
  __int64 v15; // rsi
  DXGADAPTER ***v16; // rax
  __int64 result; // rax
  _QWORD *v18; // rbx
  _QWORD *v19; // r14
  unsigned int *i; // r14
  unsigned int j; // esi
  int v22; // eax
  int v23; // ebx
  int v24; // ebx
  unsigned int v25; // ebx
  struct DXGADAPTER *v26; // rax
  unsigned int v27; // ebx
  struct DXGADAPTER *ContainingAdapter; // rax
  char v29[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v30; // [rsp+58h] [rbp-A8h]
  _QWORD v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+70h] [rbp-90h]
  _DWORD v33[68]; // [rsp+80h] [rbp-80h] BYREF

  v30 = a5;
  v9 = a2;
  WdLogSingleEntry2(7LL, a2, a1);
  WdLogGlobalForLineNumber = 8009;
  if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8012;
  }
  if ( a4 )
  {
    v23 = a4 - 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        if ( v24 != 1 )
        {
          WdLogSingleEntry3(2LL, v9, a1, -1073741811LL);
          result = 3221225485LL;
          WdLogGlobalForLineNumber = 8041;
          return result;
        }
        v10 = 0;
      }
      else
      {
        v10 = 1;
      }
      v11 = 0;
    }
    else
    {
      v10 = 0;
      v11 = 1;
    }
  }
  else
  {
    v10 = 1;
    v11 = 1;
  }
  if ( a2 == -1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 120) + 72LL));
    v18 = *(_QWORD **)(a1 + 120);
    v19 = (_QWORD *)v18[3];
    if ( v19 != v18 + 3 )
    {
      for ( i = (unsigned int *)(v19 - 1);
            i;
            i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                  (DMMVIDEOPRESENTTARGETSET *)v18,
                                  (const struct DMMVIDEOPRESENTTARGET *const)i) )
      {
        if ( a3 != 8 || v10 || !i[23] )
          VIDPN_MGR::SetTargetOwnership(a1, i[6], (v10 ^ 1u) + 1);
      }
    }
    if ( v18 )
      ReferenceCounted::Release((ReferenceCounted *)(v18 + 8));
  }
  else
  {
    VIDPN_MGR::SetTargetOwnership(a1, a2, (v10 ^ 1u) + 1);
  }
  if ( v11 )
  {
    memset(v33, 0, 0x104uLL);
    v29[0] = 0;
    if ( !*((_QWORD *)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1) + 391)
      || (v12 = *((_QWORD *)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1) + 391), v13 = 0, *(_DWORD *)(v12 + 756)) )
    {
      v13 = 1;
    }
    v14 = VIDPN_MGR::SetTimingsFromVidPn(
            (VIDPN_MGR *)a1,
            0,
            4,
            0LL,
            (struct D3DKMT_VIDPN_SOURCE_MASKS *)v33,
            v29,
            v13,
            0LL,
            0LL);
    v15 = v14;
    if ( v14 < 0 )
    {
      v29[0] = 2;
      v27 = *((_DWORD *)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1) + 103);
      ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
      WdLogSingleEntry4(2LL, v9, *((int *)ContainingAdapter + 104), v27, v15);
      WdLogGlobalForLineNumber = 8100;
    }
    if ( v33[6] )
    {
      for ( j = 0; j < *(_DWORD *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1) + 390) + 96LL); ++j )
      {
        v22 = v33[6];
        if ( _bittest(&v22, j) )
        {
          v25 = v33[j + 22];
          v26 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
          DisplayRestoreVidPnResult(*(_QWORD *)((char *)v26 + 412), j, 3LL, v25);
        }
      }
    }
    v16 = (DXGADAPTER ***)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
    DmmHandleSetTimingsResult(v16, (struct _DMM_SET_TIMING_RESULT *)v29, (GUID *)v30);
    v31[0] = 1LL;
    v31[1] = 0LL;
    v32 = 0LL;
    if ( (int)DxgkStatusChangeNotify(v31) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8130;
    }
  }
  return 0LL;
}
