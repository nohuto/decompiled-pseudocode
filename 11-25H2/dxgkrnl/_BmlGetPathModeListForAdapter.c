/*
 * XREFs of _BmlGetPathModeListForAdapter @ 0x140262BDC
 * Callers:
 *     ?BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x140262824 (-BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x140045D68 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1402C2518 (_BmlLogDiagnosticsPacket.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1402C4010 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1402C51C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1402C5BC0 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     _BmlGetPathModeListForPath @ 0x14039C1C8 (_BmlGetPathModeListForPath.c)
 *     __BmlGetPathModeListForAdapter_::_2_::_AUTO::__AUTO @ 0x1403F8958 (__BmlGetPathModeListForAdapter_--_2_--_AUTO--__AUTO.c)
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
    WdLogGlobalForLineNumber = 6922;
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
        PathModeListForPath = BmlGetPathModeListForPath(v23, (_DWORD)v22);
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
              WdLogGlobalForLineNumber = 6988;
            }
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = ClientVidPn;
    WdLogGlobalForLineNumber = 6946;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v27, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v28 + 40));
  _BmlGetPathModeListForAdapter_::_2_::_AUTO::__AUTO(&a8);
  return (unsigned int)PathModeListForPath;
}
