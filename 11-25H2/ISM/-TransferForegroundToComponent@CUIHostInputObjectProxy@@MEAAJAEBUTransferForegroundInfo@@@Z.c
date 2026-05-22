/*
 * XREFs of ?TransferForegroundToComponent@CUIHostInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z @ 0x18012F660
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002582C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIComponentInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1800A9910 (--$GetAttachedObject@UICUIComponentInputObjectProxy@@VCUIComponentInputObjectProxy@@@InputSite@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CUIHostInputObjectProxy::TransferForegroundToComponent(
        CUIHostInputObjectProxy *this,
        const struct TransferForegroundInfo *a2)
{
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v5; // rsi
  __int64 *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  InputSiteManager = ISMStatics::GetInputSiteManager();
  v5 = (__int64 *)*((_QWORD *)InputSiteManager + 7);
  v6 = (__int64 *)*((_QWORD *)InputSiteManager + 8);
  while ( v5 != v6 )
  {
    InputSite::GetAttachedObject<ICUIComponentInputObjectProxy,CUIComponentInputObjectProxy>(*v5, &v11);
    v7 = v11;
    if ( v11 )
    {
      v8 = v11 + 8;
      v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
      if ( v9 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v7 + 8) )
      {
        (*(void (__fastcall **)(__int64, const struct TransferForegroundInfo *))(*(_QWORD *)v8 + 24LL))(v7 + 8, a2);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        return 0LL;
      }
    }
    if ( v7 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
    ++v5;
  }
  return 0LL;
}
