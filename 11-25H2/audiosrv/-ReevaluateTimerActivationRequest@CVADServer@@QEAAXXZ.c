/*
 * XREFs of ?ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x180107170
 * Callers:
 *     ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x180081FBC (-ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?QueryState@CVADServer@@QEAAJPEAH00@Z @ 0x180080520 (-QueryState@CVADServer@@QEAAJPEAH00@Z.c)
 *     ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x180080E44 (-Renew@CPdcTimerActivation@@QEAAXXZ.c)
 */

void __fastcall CVADServer::ReevaluateTimerActivationRequest(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r11
  CPdcTimerActivation **v4; // r11
  int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+58h] [rbp+20h] BYREF

  v1 = this + 11;
  EnterCriticalSection(this + 11);
  DebugInfo = this[12].DebugInfo;
  v8 = v1;
  if ( DebugInfo )
  {
    v6 = 0;
    v5 = 0;
    v7 = 0;
    CVADServer::QueryState((CVADServer *)this, &v6, &v5, &v7);
    if ( v5 )
    {
      if ( !v7 )
        goto LABEL_8;
    }
    else if ( !v6 )
    {
      goto LABEL_8;
    }
    if ( *v4 )
      CPdcTimerActivation::Renew(*v4);
  }
LABEL_8:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
}
