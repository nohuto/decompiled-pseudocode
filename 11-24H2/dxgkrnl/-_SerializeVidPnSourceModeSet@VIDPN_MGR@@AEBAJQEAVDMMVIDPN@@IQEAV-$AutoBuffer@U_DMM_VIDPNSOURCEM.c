/*
 * XREFs of ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x14025D548
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140256108 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14000BD78 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z @ 0x140040B1C (-GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x140266A98 (-Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializeVidPnSourceModeSet(VIDPN_MGR *this, DMMVIDPN *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rsi
  DMMVIDPNTARGET *SourceFromId; // rax
  __int64 result; // rax
  struct DMMVIDPNTARGETMODESET *v10; // rbx
  int v11; // eax
  __int64 v12; // rdi
  struct DXGADAPTER *ContainingAdapter; // rax
  DMMVIDPNSOURCEMODESET *v14; // [rsp+38h] [rbp+10h] BYREF

  v4 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4089;
  }
  if ( (_DWORD)v4 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4090;
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4091;
  }
  SourceFromId = DMMVIDPN::GetSourceFromId(a2, v4);
  if ( SourceFromId )
  {
    v14 = 0LL;
    v10 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(SourceFromId);
    if ( !v10 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4114;
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v14, (__int64)v10);
    v11 = DMMVIDPNSOURCEMODESET::Serialize(v14);
    v12 = v11;
    if ( v11 >= 0 )
    {
      LODWORD(v12) = 0;
    }
    else
    {
      ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
      WdLogSingleEntry3(2LL, v4, ContainingAdapter, v12);
      WdLogGlobalForLineNumber = 4126;
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v14, 0LL);
    return (unsigned int)v12;
  }
  else
  {
    WdLogSingleEntry1(2LL, v4);
    result = 3223192324LL;
    WdLogGlobalForLineNumber = 4102;
  }
  return result;
}
