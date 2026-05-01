/*
 * XREFs of ??$OnPriorityBoostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z @ 0x1800AB4E8
 * Callers:
 *     ?BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ @ 0x1800AB160 (-BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800ACA2C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?get@?$static_lazy@VExperienceHostLogging@@@details@wil@@QEAAPEAVExperienceHostLogging@@P6AXXZ@Z @ 0x1800ACDE0 (-get@-$static_lazy@VExperienceHostLogging@@@details@wil@@QEAAPEAVExperienceHostLogging@@P6AXXZ@Z.c)
 */

__int64 __fastcall ExperienceHostLoggingTelemetry::OnPriorityBoostProcessed<long &,unsigned int &>(int *a1, int *a2)
{
  __int64 result; // rax
  int v5; // r9d
  _DWORD *v6; // rcx
  __int64 v7[3]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  result = wil::details::static_lazy<ExperienceHostLogging>::get(
             a1,
             _lambda_85ce8dc69fb31a5df73cef2b402bbb84_::_lambda_invoker_cdecl_);
  v6 = *(_DWORD **)(result + 8);
  if ( *v6 > 5u )
  {
    v8 = *a2;
    v9 = *a1;
    v7[0] = 0x1000000LL;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
             (_DWORD)v6,
             (unsigned int)&unk_1807F3BE0,
             0,
             v5,
             (__int64)&v9,
             (__int64)&v8,
             (__int64)v7);
  }
  return result;
}
