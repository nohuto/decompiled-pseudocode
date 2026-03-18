/*
 * XREFs of ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x140316098
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x14042BEA0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140316B60 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x140319BE4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 */

__int64 __fastcall DmmCanAddPresentPathToClientVidPn(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rbp
  __int64 v6; // r15
  unsigned __int8 v8; // si
  __int64 v9; // rdi
  VIDPN_MGR *v10; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // edi
  __int64 result; // rax
  __int64 v16; // [rsp+50h] [rbp-38h] BYREF

  v4 = a3;
  v6 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 7778;
    return result;
  }
  *a4 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 7795;
    return 3223191554LL;
  }
  v8 = 1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7801;
  }
  v9 = *((_QWORD *)a1 + 390);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 7806;
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
  v10 = *(VIDPN_MGR **)(v9 + 104);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v16, (__int64)v10);
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v10);
    v12 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      WdLogSingleEntry1(7LL, ClientVidPnFromLastClientCommitedVidPn);
      WdLogGlobalForLineNumber = 7840;
      goto LABEL_13;
    }
    v13 = VIDPN_MGR::AddPathToVidPnTopology(
            v10,
            (struct DMMVIDPNTOPOLOGY *const)0x60,
            v6,
            v4,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
            0xFFFFu,
            0,
            D3DKMDT_MCC_ENFORCE);
    v14 = v13;
    if ( v13 == -1071774975 )
    {
      WdLogSingleEntry3(7LL, v6, v4, 96LL);
      WdLogGlobalForLineNumber = 7866;
    }
    else
    {
      if ( v13 != -1071774976 )
      {
        if ( v13 < 0 )
        {
          WdLogSingleEntry4(2LL, v6, v4, 96LL, v13);
          WdLogGlobalForLineNumber = 7884;
          v12 = v14;
          goto LABEL_13;
        }
        goto LABEL_12;
      }
      WdLogSingleEntry3(7LL, v6, v4, 96LL);
      WdLogGlobalForLineNumber = 7875;
    }
    v8 = 0;
LABEL_12:
    *a4 = v8;
    v12 = 0;
LABEL_13:
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v16 + 40));
    return v12;
  }
  WdLogSingleEntry1(2LL, a1);
  result = 3223192373LL;
  WdLogGlobalForLineNumber = 7820;
  return result;
}
