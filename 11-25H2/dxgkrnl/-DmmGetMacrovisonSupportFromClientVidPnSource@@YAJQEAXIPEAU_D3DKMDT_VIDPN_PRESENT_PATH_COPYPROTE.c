/*
 * XREFs of ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1402516EC
 * Callers:
 *     DxgkHandleVideoParameters @ 0x14022BBF0 (DxgkHandleVideoParameters.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140036A80 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402D0038 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetMacrovisonSupportFromClientVidPnSource(
        _QWORD *a1,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *a3)
{
  unsigned __int64 v3; // r15
  __int64 v4; // r12
  __int64 result; // rax
  __int64 v8; // rsi
  VIDPN_MGR *v9; // rsi
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT v10; // edi
  char v11; // r13
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v13; // rsi
  __int64 v14; // rbx
  DMMVIDPNTOPOLOGY *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  _QWORD *v23; // rax
  DMMVIDPNTOPOLOGY *v24; // [rsp+50h] [rbp-20h]
  __int64 v25; // [rsp+58h] [rbp-18h] BYREF
  struct DMMVIDPNPRESENTPATH *Path; // [rsp+60h] [rbp-10h]
  unsigned int v27; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+58h] BYREF

  v3 = 0LL;
  v4 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 11842;
    return result;
  }
  *a3 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 11863;
    return 3223191554LL;
  }
  v8 = a1[390];
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 11871;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v9 = *(VIDPN_MGR **)(v8 + 104);
  if ( v9 )
  {
    v10 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)7;
    v11 = 0;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v25, (__int64)v9);
    v28 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v9);
    auto_rc<DMMVIDPN const>::reset(&v28, (__int64)ClientCommittedVidPnRef);
    if ( v28 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 15) + 72LL));
      v14 = *((_QWORD *)v9 + 15);
      v15 = (DMMVIDPNTOPOLOGY *)(v28 + 96);
      v24 = (DMMVIDPNTOPOLOGY *)(v28 + 96);
      while ( 1 )
      {
        v27 = -1;
        v16 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v15, v4, v3, &v27);
        v13 = v16;
        if ( v16 < 0 )
          break;
        v21 = v27;
        if ( v27 == -1 )
        {
          if ( v14 )
            ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
          auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
          if ( v11 )
            *a3 = v10;
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v25 + 40));
          return 0LL;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v24, v4, v27);
        if ( !Path )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 11963;
        }
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v14, v21);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 108) )
          {
            v11 = 1;
            v10 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)((*((_DWORD *)Path + 42) | 0xFFFFFFF8) & *(_DWORD *)&v10);
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v21, v14);
          WdLogGlobalForLineNumber = 11990;
        }
        v15 = v24;
        ++v3;
      }
      v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
      v23[3] = v3;
      v23[4] = v4;
      v23[5] = v24;
      v23[6] = v13;
      WdLogGlobalForLineNumber = 11943;
      if ( v14 )
        ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 11913;
      LODWORD(v13) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v25 + 40));
    return (unsigned int)v13;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 11885;
  }
  return result;
}
