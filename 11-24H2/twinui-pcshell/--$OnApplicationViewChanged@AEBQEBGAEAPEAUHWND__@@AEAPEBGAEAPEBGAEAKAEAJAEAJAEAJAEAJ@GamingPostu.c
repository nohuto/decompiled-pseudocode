/*
 * XREFs of ??$OnApplicationViewChanged@AEBQEBGAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEBQEBGAEAPEAUHWND__@@AEAPEBG2AEAKAEAJ444@Z @ 0x1804F61EC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d09352285264e53791bf82adf163e841__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT_::_Do_call @ 0x180508080 (std--_Func_impl_no_alloc__lambda_d09352285264e53791bf82adf163e841__void_HWND_____un_ea_180508080.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x18000AE18 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@-.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall GamingPosturePositionerTelemetryProvider::OnApplicationViewChanged<unsigned short const * const &,HWND__ * &,unsigned short const * &,unsigned short const * &,unsigned long &,long &,long &,long &,long &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int *a8)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v13; // r8
  __int64 v14; // [rsp+90h] [rbp-9h] BYREF
  __int64 v15; // [rsp+98h] [rbp-1h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+Fh] BYREF

  result = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v13 = *a8;
    v14 = *a4;
    v15 = *a3;
    v16 = *a2;
    v17 = *a1;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                            (__int64)result,
                                            (__int64)&unk_1808086C8,
                                            v13,
                                            (__int64)a8,
                                            &v17,
                                            (__int64)&v16,
                                            &v15,
                                            &v14);
  }
  return result;
}
