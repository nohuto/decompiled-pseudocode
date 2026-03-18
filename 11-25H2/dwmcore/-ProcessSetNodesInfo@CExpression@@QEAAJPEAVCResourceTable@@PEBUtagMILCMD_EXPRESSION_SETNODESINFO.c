/*
 * XREFs of ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x180245314
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800331B0 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800604F0 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B80C0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     ??$reset@PEAE$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAXPEAE@Z @ 0x1801D5AF8 (--$reset@PEAE$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@QEAAXPEAE@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801EBE64 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x1801EF898 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z @ 0x1802A521C (-ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x1802AFDFC (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall CExpression::ProcessSetNodesInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EXPRESSION_SETNODESINFO *a3)
{
  void **v3; // r15
  unsigned int v7; // edi
  unsigned int v8; // edx
  CSharedSectionBase *Resource; // r12
  void *v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  void *v13; // rbx
  const void *v14; // rax
  size_t v15; // r8
  int v16; // eax
  _DWORD *v17; // rbx
  void *v18; // rax
  int v19; // r9d
  __int64 v20; // r8
  __int64 v21; // r9
  int v23; // [rsp+20h] [rbp-20h]
  unsigned int v24; // [rsp+20h] [rbp-20h]
  int TracingCookie; // [rsp+30h] [rbp-10h] BYREF
  void *v26; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  SIZE_T dwBytes; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v29; // [rsp+98h] [rbp+58h] BYREF

  v3 = (void **)((char *)this + 328);
  v7 = 0;
  LODWORD(dwBytes) = 0;
  if ( *((_QWORD *)this + 41) || (v8 = *((_DWORD *)a3 + 2)) == 0 )
  {
    v24 = 183;
    goto LABEL_24;
  }
  Resource = (CSharedSectionBase *)CResourceTable::GetResource((__int64)a2, v8, 0x9Cu);
  if ( !Resource || *((_DWORD *)a3 + 4) < 4u )
  {
    v24 = 189;
LABEL_24:
    v19 = -2003303421;
    v7 = -2003303421;
    goto LABEL_25;
  }
  v10 = operator new[](*((unsigned int *)a3 + 4));
  v11 = *((unsigned int *)a3 + 4);
  v12 = *((unsigned int *)a3 + 3);
  v13 = v10;
  v26 = v10;
  v14 = CSharedSectionBase::ResolveAllocation(Resource, v12, v11);
  if ( !v14 )
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xC7u, 0LL);
LABEL_7:
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v26);
    goto LABEL_26;
  }
  memcpy_0(v13, v14, v15);
  if ( CExpression::ValidateNodes(this, *((_DWORD *)a3 + 4), (const unsigned __int8 *)v13, (unsigned int *)&dwBytes) < 0 )
    goto LABEL_7;
  if ( v3 != &v26 )
  {
    v26 = 0LL;
    std::unique_ptr<unsigned char [0]>::reset<unsigned char *,0>(v3, v13);
  }
  *((_DWORD *)this + 90) = *((_DWORD *)a3 + 4);
  std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v26);
  v16 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  v7 = v16;
  if ( v16 < 0 )
  {
    v24 = 216;
    goto LABEL_20;
  }
  v17 = (_DWORD *)((char *)this + 364);
  if ( *((_QWORD *)this + 42) || *v17 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0xDB,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
      (const char *)0x8007029CLL,
      v23);
  if ( (_DWORD)dwBytes )
  {
    v18 = operator new[]((unsigned int)dwBytes);
    std::unique_ptr<unsigned char [0]>::reset<unsigned char *,0>((void **)this + 42, v18);
    *v17 = dwBytes;
  }
  if ( (*((_BYTE *)this + 224) & 0x20) == 0 )
  {
    v16 = CBaseExpression::TryRegisterWithExpressionManager(this);
    v7 = v16;
    if ( v16 < 0 )
    {
      v24 = 228;
LABEL_20:
      v19 = v16;
LABEL_25:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, v24, 0LL);
    }
  }
LABEL_26:
  if ( (*(_DWORD *)(*((_QWORD *)this + 39) + 4LL) & 0x40000000) != 0
    && (unsigned int)dword_180404D18 > 4
    && tlgKeywordOn((__int64)&dword_180404D18, 1LL) )
  {
    v29 = v7;
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_180404D18,
      byte_1803D8EEA,
      v20,
      v21,
      (__int64)&TracingCookie,
      (__int64)&v29);
  }
  return v7;
}
