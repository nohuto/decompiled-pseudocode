/*
 * XREFs of _BmlGetPathModeListForAdapter @ 0x140269ADC
 * Callers:
 *     ?BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x140269724 (-BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14004575C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _BmlGetPathModeListForPath @ 0x1402DC9A4 (_BmlGetPathModeListForPath.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x14031638C (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1403623E8 (_BmlLogDiagnosticsPacket.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1403639F0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x140364BA4 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     __BmlGetPathModeListForAdapter_::_2_::_AUTO::__AUTO @ 0x1403F2748 (__BmlGetPathModeListForAdapter_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall BmlGetPathModeListForAdapter(
        unsigned __int16 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        int a7,
        struct BML_VIDPN_PATH_ORDER *a8)
{
  struct BML_VIDPN_PATH_ORDER *v8; // rsi
  __int64 v13; // rax
  struct VIDPN_MGR *v14; // r14
  int ClientVidPn; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int PathModeListForPath; // edi
  __int64 v21; // r8
  struct DMMVIDPN *v22; // rbx
  int v23; // ecx
  bool v24; // zf
  int v25; // eax
  struct DMMVIDPN *v27; // [rsp+90h] [rbp+50h] BYREF
  __int64 v28; // [rsp+98h] [rbp+58h] BYREF

  v8 = a8;
  *(_BYTE *)a8 = 0;
  if ( !*(_WORD *)(a3 + 20) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6964;
  }
  v13 = *(_QWORD *)(a4 + 3120);
  a8 = 0LL;
  v14 = *(struct VIDPN_MGR **)(v13 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v28, (__int64)v14);
  v27 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v14);
  PathModeListForPath = ClientVidPn;
  if ( ClientVidPn >= 0 )
  {
    v21 = a3;
    v22 = v27;
    PathModeListForPath = BmlPreparePathOrderAndVidPn(&a8, v27, v21, a1, a2, a6, a7);
    if ( PathModeListForPath >= 0 )
    {
      v23 = (int)a8;
      if ( *(_BYTE *)a8 <= 1u
        || (--*(_BYTE *)a8,
            PathModeListForPath = BmlFunctionalizeVidPn(a8, v22),
            ++*(_BYTE *)a8,
            v23 = (int)a8,
            PathModeListForPath >= 0) )
      {
        PathModeListForPath = BmlGetPathModeListForPath(v23, (int)v22);
      }
      else
      {
        v24 = a5 == 0;
        *(_BYTE *)v8 = 1;
        if ( !v24 )
        {
          if ( v22 )
          {
            v25 = BmlLogDiagnosticsPacket(v14);
            if ( v25 < 0 )
            {
              WdLogSingleEntry3(3LL, v22, a8, v25);
              WdLogGlobalForLineNumber = 7030;
            }
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = ClientVidPn;
    WdLogGlobalForLineNumber = 6988;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v27, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v28 + 40));
  _BmlGetPathModeListForAdapter_::_2_::_AUTO::__AUTO(&a8);
  return (unsigned int)PathModeListForPath;
}
