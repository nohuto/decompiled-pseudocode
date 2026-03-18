/*
 * XREFs of ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1402DCF3C
 * Callers:
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x14025B514 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     _BmlGetPathModeListForPath @ 0x1402DC9A4 (_BmlGetPathModeListForPath.c)
 *     ?PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@Z @ 0x1402DCD50 (-PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x140310868 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1403639F0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlFunctionalizePath @ 0x140365024 (BmlFunctionalizePath.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x140058BD8 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1402DD1B4 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x140317D5C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnSourceMode(
        VIDPN_MGR *this,
        struct DMMVIDPNSOURCEMODESET *const a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rsi
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 Container; // rax
  int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // r13
  int v16; // eax
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DXGADAPTER *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // [rsp+68h] [rbp+10h] BYREF
  int v24; // [rsp+6Ch] [rbp+14h]

  v4 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3292;
  }
  if ( (_DWORD)v4 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3293;
  }
  v8 = *((_QWORD *)a2 + 18);
  v9 = DMMVIDPNSOURCEMODESET::PinMode(a2, v4);
  v10 = v9;
  if ( v9 < 0 )
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry4(2LL, v4, a2, ContainingAdapter, v10);
    WdLogGlobalForLineNumber = 3306;
  }
  else
  {
    v11 = *((_QWORD *)a2 + 14);
    if ( !v11 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3321;
    }
    if ( !*(_QWORD *)(v11 + 40) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v11 + 40) + 64LL);
    v13 = *(_DWORD *)(v11 + 24);
    LOBYTE(v14) = a4;
    v24 = -1;
    v15 = Container;
    v23 = v13;
    v16 = VIDPN_MGR::FormalizeVidPnChange(this, Container & -(__int64)(Container != -88), 3LL, v14, &v23);
    LODWORD(v10) = v16;
    if ( v16 >= 0 )
      return 0LL;
    if ( v16 == -1071774970 )
    {
      WdLogSingleEntry2(3LL, v4, a2);
      WdLogGlobalForLineNumber = 3344;
    }
    else
    {
      WdLogSingleEntry3(2LL, v4, a2, v16);
      WdLogGlobalForLineNumber = 3349;
    }
    v19 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry4(7LL, v4, *(unsigned int *)(v11 + 24), v15, v19);
    WdLogGlobalForLineNumber = 3355;
    if ( v8 )
    {
      if ( (int)DMMVIDPNSOURCEMODESET::PinMode(a2, *(_DWORD *)(v8 + 24)) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3364;
      }
    }
    else if ( (int)DMMVIDPNSOURCEMODESET::UnpinMode(a2, v20, v21, v22) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3371;
    }
  }
  return (unsigned int)v10;
}
