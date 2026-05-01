/*
 * XREFs of ??$ReleasingPrimaryView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEB_NAEB_NAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAPEBG1AEAKAEB_N3AEAJ444@Z @ 0x1804F6B50
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_030443309e8fdde3675dd2b4bd97a83e__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT_::_Do_call @ 0x180507660 (std--_Func_impl_no_alloc__lambda_030443309e8fdde3675dd2b4bd97a83e__void_HWND_____un_ea_180507660.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U4@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@65555@Z @ 0x18000BA2C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByV.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall GamingPosturePositionerTelemetryProvider::ReleasingPrimaryView<HWND__ * &,unsigned short const * &,unsigned short const * &,unsigned long &,bool const &,bool const &,long &,long &,long &,long &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int *a9)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v13; // r8
  __int64 v14; // [rsp+90h] [rbp-1h] BYREF
  __int64 v15; // [rsp+98h] [rbp+7h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+Fh] BYREF

  result = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v13 = *a9;
    v14 = *a3;
    v15 = *a2;
    v16 = *a1;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                            (__int64)result,
                                            (__int64)&unk_180808259,
                                            v13,
                                            (__int64)a9,
                                            (__int64)&v16,
                                            &v15,
                                            &v14);
  }
  return result;
}
