/*
 * XREFs of ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x140257DF0
 * Callers:
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1402568C4 (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140036A80 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x140056794 (-IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x14008DFE0 (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x140257A30 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x140258334 (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::CreateDynamicVideoPresentTarget(
        VIDPN_MGR **this,
        unsigned int a2,
        unsigned int a3,
        struct _DXGK_CHILD_CAPABILITIES *a4,
        char a5,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a6)
{
  __int64 v6; // rbp
  __int64 v8; // rdi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 result; // rax
  struct DMMVIDEOPRESENTTARGET *v13; // rax
  __int64 v14; // r9
  struct DXGADAPTER *v15; // rax
  struct DXGADAPTER *v16; // rax
  struct DXGADAPTER *v17; // rax
  __int64 v18; // r8
  struct DXGADAPTER *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  struct DXGADAPTER *v22; // rax
  DMMVIDEOPRESENTTARGET *v23; // rax
  DMMVIDEOPRESENTTARGET *v24; // rax
  DMMVIDEOPRESENTTARGET *v25; // rdi
  int v26; // eax
  __int64 v27; // r14
  int v28; // eax
  struct DMMVIDEOPRESENTTARGET **v29; // rdx
  struct DMMVIDEOPRESENTTARGET *v30; // rax
  struct DXGADAPTER *v31; // rax

  v6 = a2;
  v8 = a3;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)this, a3);
  if ( !TargetById )
  {
    *(_DWORD *)a6 = 1;
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this[11]);
    WdLogSingleEntry4(1LL, (unsigned int)v8, ContainingAdapter, -1073741811LL, 1LL);
    WdLogGlobalForLineNumber = 1464;
    return 3221225485LL;
  }
  v13 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)this, v6);
  if ( a5 )
  {
    if ( !v13 )
    {
      *(_DWORD *)a6 = 1;
      v15 = VIDPN_MGR::GetContainingAdapter(this[11]);
      WdLogSingleEntry4(1LL, v6, v15, -1073741811LL, 2LL);
      WdLogGlobalForLineNumber = 1479;
      return 3221225485LL;
    }
    if ( !*((_QWORD *)v13 + 59) )
    {
      *(_DWORD *)a6 = 5;
      v16 = VIDPN_MGR::GetContainingAdapter(this[11]);
      WdLogSingleEntry4(1LL, v6, v16, -1073741811LL, 3LL);
      WdLogGlobalForLineNumber = 1490;
      return 3221225485LL;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(v13) )
    {
      *(_DWORD *)a6 = 6;
      v17 = VIDPN_MGR::GetContainingAdapter(this[11]);
      WdLogSingleEntry4(1LL, v6, v17, -1073741811LL, 4LL);
      WdLogGlobalForLineNumber = 1500;
      return 3221225485LL;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(TargetById) )
    {
      *(_DWORD *)a6 = 6;
      v19 = VIDPN_MGR::GetContainingAdapter(this[11]);
      WdLogSingleEntry4(1LL, v8, v19, -1073741811LL, 4LL);
      WdLogGlobalForLineNumber = 1510;
      return 3221225485LL;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 72));
    v20 = *(_QWORD **)(v18 + 488);
    v21 = (_QWORD *)((char *)TargetById + 496);
    if ( *v20 == v18 + 480 )
    {
      *v21 = v18 + 480;
      *((_QWORD *)TargetById + 63) = v20;
      *v20 = v21;
      *(_QWORD *)(v18 + 488) = v21;
      *((_QWORD *)TargetById + 66) = v18;
      return 0LL;
    }
    goto LABEL_25;
  }
  if ( v13 )
  {
    *(_DWORD *)a6 = 3;
    v22 = VIDPN_MGR::GetContainingAdapter(this[11]);
    WdLogSingleEntry4(1LL, v6, v22, -1073741811LL, 5LL);
    WdLogGlobalForLineNumber = 1525;
    return 3221225485LL;
  }
  v23 = (DMMVIDEOPRESENTTARGET *)operator new(0x268uLL, 0x4E506456u, 256LL, v14);
  if ( v23 )
  {
    v24 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
            v23,
            (struct DMMVIDEOPRESENTTARGETSET *const)this,
            v6,
            (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a4->Type.Other.MustBeZero,
            a4->HpdAwareness,
            a4->Type.VideoOutput.MonitorOrientationAwareness,
            a4->Type.VideoOutput.SupportsSdtvModes);
    v25 = v24;
    if ( v24 )
    {
      v26 = DMMVIDEOPRESENTTARGET::Initialize(v24);
      LODWORD(v27) = v26;
      if ( v26 >= 0 )
      {
        v28 = DMMVIDEOPRESENTTARGETSET::AddTarget((DMMVIDEOPRESENTTARGETSET *)this, v25);
        v27 = v28;
        if ( v28 >= 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)TargetById + 18);
          v29 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)TargetById + 56);
          v30 = (DMMVIDEOPRESENTTARGET *)((char *)v25 + 456);
          if ( *v29 == (struct DMMVIDEOPRESENTTARGET *)((char *)TargetById + 440) )
          {
            *(_QWORD *)v30 = (char *)TargetById + 440;
            *((_QWORD *)v25 + 58) = v29;
            *v29 = v30;
            *((_QWORD *)TargetById + 56) = v30;
            *((_QWORD *)v25 + 59) = TargetById;
            *((_DWORD *)v25 + 30) = *((_DWORD *)TargetById + 30);
            ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v25 + 64));
            return 0LL;
          }
LABEL_25:
          __fastfail(3u);
        }
        *(_DWORD *)a6 = -2147483646;
        ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v25 + 64));
        WdLogSingleEntry3(2LL, v6, this, v27);
        WdLogGlobalForLineNumber = 1569;
      }
      else
      {
        *(_DWORD *)a6 = -2147483647;
        WdLogSingleEntry2(2LL, v6, v26);
        WdLogGlobalForLineNumber = 1554;
        ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v25 + 64));
      }
      return (unsigned int)v27;
    }
  }
  *(_DWORD *)a6 = 0x80000000;
  v31 = VIDPN_MGR::GetContainingAdapter(this[11]);
  WdLogSingleEntry2(6LL, v6, v31);
  result = 3221225495LL;
  WdLogGlobalForLineNumber = 1542;
  return result;
}
