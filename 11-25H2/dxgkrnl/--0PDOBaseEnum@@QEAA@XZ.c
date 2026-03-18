/*
 * XREFs of ??0PDOBaseEnum@@QEAA@XZ @ 0x1401B6AFC
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1401B6C0C (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

PDOBaseEnum *__fastcall PDOBaseEnum::PDOBaseEnum(PDOBaseEnum *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  struct DXGGLOBAL *v6; // rax

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 1) = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(Global, PDOBaseEnum::CountPDOs, this, 0LL);
  v4 = 8LL * *(unsigned int *)this;
  if ( !is_mul_ok(*(unsigned int *)this, 8uLL) )
    v4 = -1LL;
  v5 = operator new[](v4, 0x4B677844u, 256LL, v3);
  *((_QWORD *)this + 1) = v5;
  if ( v5 )
  {
    v6 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(v6, PDOBaseEnum::EnumPDOs, this, 0LL);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 263;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to allocate PDOBase array",
      263LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return this;
}
