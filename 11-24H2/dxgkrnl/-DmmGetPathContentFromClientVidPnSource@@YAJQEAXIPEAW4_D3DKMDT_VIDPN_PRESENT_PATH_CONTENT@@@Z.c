/*
 * XREFs of ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x140258D34
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1402324E0 (DxgkHandleVideoParameters.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1400345B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1400369D0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1400384F0 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x14031A018 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetPathContentFromClientVidPnSource(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // r13
  __int64 result; // rax
  __int64 v8; // rdi
  VIDPN_MGR *v9; // rdi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v10; // r12d
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  DMMVIDPNTOPOLOGY *v14; // r15
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  struct DMMVIDPNPRESENTPATH *Path; // r15
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct _KTHREAD **v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // [rsp+50h] [rbp-10h] BYREF
  DMMVIDPNTOPOLOGY *v26; // [rsp+58h] [rbp-8h]
  unsigned int v27; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0LL;
  v4 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 10856;
    return result;
  }
  *a3 = D3DKMDT_VPPC_UNINITIALIZED;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 10873;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10879;
  }
  v8 = *((_QWORD *)a1 + 390);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 10884;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
    v10 = D3DKMDT_VPPC_UNINITIALIZED;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v25, (__int64)v9);
    v28 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v9);
    auto_rc<DMMVIDPN const>::reset(&v28, (__int64)ClientCommittedVidPnRef);
    if ( v28 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 15) + 72LL));
      v13 = *((_QWORD *)v9 + 15);
      v14 = (DMMVIDPNTOPOLOGY *)(v28 + 96);
      v26 = (DMMVIDPNTOPOLOGY *)(v28 + 96);
      while ( 1 )
      {
        v27 = -1;
        v15 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v14, v4, v3, &v27);
        v12 = v15;
        if ( v15 < 0 )
          break;
        v20 = v27;
        if ( v27 == -1 )
          goto LABEL_20;
        Path = DMMVIDPNTOPOLOGY::FindPath(v14, v4, v27);
        if ( !Path )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10969;
        }
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v13, v20);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 108) )
          {
            v10 = *((_DWORD *)Path + 41);
LABEL_20:
            if ( v13 )
              ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
            auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
            v23 = (struct _KTHREAD **)(v25 + 40);
            *a3 = v10;
            DXGFASTMUTEX::Release(v23);
            return 0LL;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v20, v13);
          WdLogGlobalForLineNumber = 10986;
        }
        v14 = v26;
        ++v3;
      }
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
      v24[3] = v3;
      v24[4] = v4;
      v24[5] = v14;
      v24[6] = v12;
      WdLogGlobalForLineNumber = 10949;
      if ( v13 )
        ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 10919;
      LODWORD(v12) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v25 + 40));
    return (unsigned int)v12;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 10898;
  }
  return result;
}
