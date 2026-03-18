/*
 * XREFs of ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x14031AC7C
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402575C0 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x140319BE4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x140317D5C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x140318A20 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x140318AE0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x14031A9CC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x14031AF30 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 */

__int64 __fastcall VIDPN_MGR::_AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct DMMVIDPNPRESENTPATH *const a3,
        __int64 a4,
        char a5)
{
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v5; // r14d
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
  __int64 v22; // r9
  __int64 v23; // [rsp+20h] [rbp-88h]
  __int64 v24; // [rsp+20h] [rbp-88h]
  _BYTE v25[24]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v26[80]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v28; // [rsp+B8h] [rbp+10h] BYREF
  int v29; // [rsp+BCh] [rbp+14h]
  struct DMMVIDPNPRESENTPATH *v30; // [rsp+C0h] [rbp+18h] BYREF

  v5 = (int)a4;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2530;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2531;
  }
  v8 = (unsigned __int64)a2 + 56;
  v9 = *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL);
  v10 = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2541;
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v25,
    v8 & -(__int64)(a2 != 0LL),
    1u,
    a4,
    v23,
    1LL);
  v11 = DMMVIDPNTOPOLOGY::AddPath(a2, a3, v5);
  v16 = v11;
  if ( v11 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v18 = (ApplyPermissionWithinThisScope *)v25;
    v17[3] = v9;
    v17[4] = v10;
    v17[5] = a2;
    v17[6] = v16;
    WdLogGlobalForLineNumber = 2552;
LABEL_9:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(v18);
    return (unsigned int)v16;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v25);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v28 = -1;
  v29 = -1;
  v21 = VIDPN_MGR::FormalizeVidPnChange(
          this,
          (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
          1,
          a5,
          &v28);
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
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v26,
      v8 & -(__int64)(a2 != 0LL),
      2u,
      v22,
      v24,
      1LL);
    v30 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(a2, v9, v10, &v30) < 0 || v30 != a3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2601;
    }
    v18 = (ApplyPermissionWithinThisScope *)v26;
    goto LABEL_9;
  }
  return 0LL;
}
