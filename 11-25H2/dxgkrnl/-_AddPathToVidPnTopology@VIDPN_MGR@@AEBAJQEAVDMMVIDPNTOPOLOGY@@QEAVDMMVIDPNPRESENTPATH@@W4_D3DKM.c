/*
 * XREFs of ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1402CE0CC
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x140250790 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402CFC04 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402A3F00 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402CE380 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1402CE928 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402D12C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402D1388 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

__int64 __fastcall VIDPN_MGR::_AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct DMMVIDPNPRESENTPATH *const a3,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a4,
        char a5)
{
  struct DMMVIDPNPRESENTPATH *v6; // rdi
  unsigned __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  _QWORD *v17; // rax
  ApplyPermissionWithinThisScope *v18; // rcx
  __int64 Container; // r13
  int v21; // eax
  __int64 v22; // r8
  _BYTE v23[24]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v24[80]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp+10h] BYREF
  int v27; // [rsp+BCh] [rbp+14h]
  struct DMMVIDPNPRESENTPATH *v28; // [rsp+C0h] [rbp+18h] BYREF

  v6 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2530;
  }
  if ( !v6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2531;
  }
  v8 = (unsigned __int64)a2 + 56;
  v9 = *(unsigned int *)(*((_QWORD *)v6 + 11) + 24LL);
  v10 = *(unsigned int *)(*((_QWORD *)v6 + 12) + 24LL);
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2541;
  }
  LOBYTE(a3) = 1;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v23, v8 & -(__int64)(a2 != 0LL), a3);
  v11 = DMMVIDPNTOPOLOGY::AddPath(a2, v6, a4);
  v16 = v11;
  if ( v11 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v18 = (ApplyPermissionWithinThisScope *)v23;
    v17[3] = v9;
    v17[4] = v10;
    v17[5] = a2;
    v17[6] = v16;
    WdLogGlobalForLineNumber = 2552;
LABEL_9:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(v18);
    return (unsigned int)v16;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v23);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v26 = -1;
  v27 = -1;
  v21 = VIDPN_MGR::FormalizeVidPnChange(
          this,
          (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
          1,
          a5,
          &v26);
  LODWORD(v16) = v21;
  if ( v21 < 0 )
  {
    if ( v21 == -1071774975 )
    {
      WdLogSingleEntry2(7LL, v9, v10);
      WdLogGlobalForLineNumber = 2577;
    }
    else
    {
      WdLogSingleEntry4(2LL, v9, v10, Container & -(__int64)(Container != -88), v21);
      WdLogGlobalForLineNumber = 2582;
    }
    if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2592;
    }
    LOBYTE(v22) = 2;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v24, v8 & -(__int64)(a2 != 0LL), v22);
    v28 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(a2, v9, v10, &v28) < 0 || v28 != v6 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2601;
    }
    v18 = (ApplyPermissionWithinThisScope *)v24;
    goto LABEL_9;
  }
  return 0LL;
}
