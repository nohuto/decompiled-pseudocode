/*
 * XREFs of ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x14025C1EC
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140256108 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x14040205C (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x140264A14 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x140317D5C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall VIDPN_MGR::UnpinPathModalityFromSource(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  _QWORD *v12; // rax
  __int64 result; // rax
  __int64 Container; // rax
  __int64 v15; // rbp
  __int64 v16; // r9
  __int64 v17; // rsi
  int v18; // eax
  unsigned int v19; // edi
  int v20; // [rsp+58h] [rbp+10h] BYREF
  int v21; // [rsp+5Ch] [rbp+14h]

  v3 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3234;
  }
  if ( (_DWORD)v3 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3235;
  }
  v6 = DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(a2, v3);
  v11 = v6;
  if ( v6 >= 0 )
  {
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    v20 = -1;
    v15 = Container;
    v21 = -1;
    LOBYTE(v16) = 1;
    v17 = Container + 88;
    v18 = VIDPN_MGR::FormalizeVidPnChange(this, Container & -(__int64)(Container != -88), 11LL, v16, &v20);
    v19 = v18;
    if ( v18 >= 0 )
    {
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v3, v15 & -(__int64)(v17 != 0), v18);
      result = v19;
      WdLogGlobalForLineNumber = 3268;
    }
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    v12[3] = v3;
    v12[4] = a2;
    v12[5] = v11;
    result = (unsigned int)v11;
    WdLogGlobalForLineNumber = 3245;
  }
  return result;
}
