/*
 * XREFs of ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1401B6CF4
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401CF3EC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     McGenEventRegister_EtwRegister @ 0x140064940 (McGenEventRegister_EtwRegister.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

void __fastcall DXGGLOBAL::SubscribeWNFForCSAccounting(PVOID *this)
{
  __int64 *v1; // rbx
  int v3; // eax
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF

  v1 = (__int64 *)(this + 255);
  v7 = WNF_PO_SCENARIO_CHANGE;
  v3 = ExSubscribeWnfStateChange(this + 255, &v7, 1LL);
  if ( v3 >= 0 )
  {
    v4 = PoRegisterPowerSettingCallback(
           0LL,
           &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
           PDCIdleResiliencyEngagedCallBackFn,
           0LL,
           this + 256);
    if ( v4 >= 0 )
    {
      McGenEventRegister_EtwRegister(
        &SLEEPSTUDY_ETW_PROVIDER,
        v5,
        SLEEPSTUDY_ETW_PROVIDER_Context,
        SLEEPSTUDY_ETW_PROVIDER_Context);
      *((_DWORD *)this + 515) = 1;
    }
    else
    {
      WdLogSingleEntry1(3LL, v4);
      v6 = *v1;
      WdLogGlobalForLineNumber = 161;
      ExUnsubscribeWnfStateChange(v6);
      *v1 = 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, v3);
    WdLogGlobalForLineNumber = 146;
  }
}
