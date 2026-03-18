/*
 * XREFs of ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1401894F8
 * Callers:
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___ @ 0x1400650D8 (DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___.c)
 *     _DXGKCALLONEXIT__lambda_fde23358e365dc4fa0dbed7c255181d0____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1400651B8 (_DXGKCALLONEXIT__lambda_fde23358e365dc4fa0dbed7c255181d0____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     _lambda_c7448c75b3dac8478dfa1698e822be3e_::_lambda_c7448c75b3dac8478dfa1698e822be3e_ @ 0x14018D100 (_lambda_c7448c75b3dac8478dfa1698e822be3e_--_lambda_c7448c75b3dac8478dfa1698e822be3e_.c)
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x14018EFE4 (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1401AF7FC (DxgkSetIndirectDisplayRenderAdapter.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgIsRemoteSession@@YAHXZ @ 0x140320164 (-DxgIsRemoteSession@@YAHXZ.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x14038F25C (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 */

__int64 DxgkpProcessBddFallbackRequest(void)
{
  unsigned int v0; // edi
  __int64 v1; // rbx
  __int128 *v2; // rax
  __int128 v3; // xmm1
  unsigned int v4; // ebx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v8; // rax
  struct DXGGLOBAL *v9; // rax
  unsigned int v10; // esi
  struct DXGADAPTER **v11; // rbx
  int v12; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v13[2]; // [rsp+58h] [rbp-71h] BYREF
  char *v14; // [rsp+60h] [rbp-69h]
  struct _LUID v15; // [rsp+68h] [rbp-61h] BYREF
  __int128 v16[2]; // [rsp+70h] [rbp-59h] BYREF
  _BYTE v17[40]; // [rsp+90h] [rbp-39h] BYREF
  char v18; // [rsp+B8h] [rbp-11h] BYREF
  char v19; // [rsp+C8h] [rbp-1h] BYREF
  bool v20; // [rsp+138h] [rbp+6Fh] BYREF
  int v21; // [rsp+140h] [rbp+77h] BYREF
  int v22; // [rsp+148h] [rbp+7Fh] BYREF

  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304882)
    && !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304880)
    && !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 13156;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"Investigate why DWM failed to initialize, contact basevid",
      13156LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v0 = -1073741823;
    v21 = 1;
    v22 = -1073741823;
    v12 = 0;
    v1 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 124);
    v20 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 125) == v1;
    v2 = (__int128 *)lambda_c7448c75b3dac8478dfa1698e822be3e_::_lambda_c7448c75b3dac8478dfa1698e822be3e_(
                       (unsigned int)&v19,
                       (unsigned int)&v22,
                       (unsigned int)&v21,
                       (unsigned int)&v20,
                       (__int64)&v12);
    v3 = v2[1];
    v16[0] = *v2;
    v16[1] = v3;
    DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e_((__int64)v17, v16);
    if ( ((dword_140161378 - 10) & 0xFFFFFFF9) == 0 && dword_140161378 != 12 )
    {
      v21 = 2;
      v4 = -1073741637;
LABEL_21:
      v22 = v4;
      goto LABEL_22;
    }
    if ( !(unsigned int)DxgIsRemoteSession() )
    {
      v12 = 1;
LABEL_9:
      v0 = DxgkpStopRenderAndSessionDisplayAdapters((enum _DXGK_DIAG_BDD_FALLBACK_STAGE *)&v21);
LABEL_10:
      v22 = v0;
      DXGKCALLONEXIT__lambda_fde23358e365dc4fa0dbed7c255181d0____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v17);
      return v0;
    }
    if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors() )
    {
      v12 = 2;
      Global = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(Global);
      if ( SessionData )
        *((_BYTE *)SessionData + 18505) = 0;
      v8 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 123);
      if ( !v8 )
      {
        v21 = 2;
LABEL_20:
        v4 = -1073741275;
        goto LABEL_21;
      }
      v15 = *(struct _LUID *)(v8 + 412);
      v14 = &v18;
      v13[0] = 0;
      v13[1] = 1;
      v9 = DXGGLOBAL::GetGlobal();
      v22 = DXGGLOBAL::IterateAdaptersWithCallback(v9, DxgkpAdapterRefCallback, v13, 4LL);
      if ( v22 < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 13241;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"As we do not support more than one remote ID adapter we would not expect the search to fail",
          13241LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v21 = 4;
        v4 = v22;
LABEL_22:
        DXGKCALLONEXIT__lambda_fde23358e365dc4fa0dbed7c255181d0____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v17);
        return v4;
      }
      if ( !v13[0] )
      {
        v21 = 6;
        goto LABEL_20;
      }
      v10 = 0;
      do
      {
        v11 = (struct DXGADAPTER **)&v14[16 * v10];
        v22 = DxgkSetIndirectDisplayRenderAdapter(*v11, &v15);
        DXGADAPTER::ReleaseReference(*v11);
        ++v10;
      }
      while ( v10 < v13[0] );
    }
    else
    {
      v12 = 3;
      if ( v20 )
        goto LABEL_9;
    }
    v21 = 7;
    goto LABEL_10;
  }
  return 0LL;
}
