/*
 * XREFs of ?CancelConnections@CAPONode@@QEAAJXZ @ 0x14006BBDC
 * Callers:
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x1400810F0 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Copy@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXAEBV12@@Z @ 0x14000C080 (-Copy@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXAEBV12@@Z.c)
 *     ?Copy@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAAXAEBV12@@Z @ 0x14000C2E0 (-Copy@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTION_P.c)
 */

__int64 __fastcall CAPONode::CancelConnections(CAPONode *this, __int64 a2, __int64 a3)
{
  char *v4; // rcx
  __int64 v5; // r8
  int v7; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+8h]

  v4 = (char *)this + 120;
  try
  {
    ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Copy((__int64)v4, (_QWORD *)this + 7, a3);
    ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Copy((__int64)this + 152, (_QWORD *)this + 11, v5);
    ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Copy(
      (__int64)this + 248,
      (_QWORD *)this + 23);
    ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Copy(
      (__int64)this + 280,
      (_QWORD *)this + 27);
  }
  catch ( ATL::CAtlException v7 )
  {
    v9 = v7;
    if ( v7 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x214,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
      (const char *)(unsigned int)v7);
    return v9;
  }
  return 0LL;
}
