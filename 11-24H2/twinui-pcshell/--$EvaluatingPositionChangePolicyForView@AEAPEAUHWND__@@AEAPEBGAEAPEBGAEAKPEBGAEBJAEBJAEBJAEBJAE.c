/*
 * XREFs of ??$EvaluatingPositionChangePolicyForView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKPEBGAEBJAEBJAEBJAEBJAEBH@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAPEBG1AEAK$$QEAPEBGAEBJ444AEBH@Z @ 0x1804F4DC4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7c3c4e67715d49f836fa4955fab08a4a__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Do_call @ 0x180507D10 (std--_Func_impl_no_alloc__lambda_7c3c4e67715d49f836fa4955fab08a4a__void_HWND_____un_ea_180507D10.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@455555@Z @ 0x18000B508 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall GamingPosturePositionerTelemetryProvider::EvaluatingPositionChangePolicyForView<HWND__ * &,unsigned short const * &,unsigned short const * &,unsigned long &,unsigned short const *,long const &,long const &,long const &,long const &,int const &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        int *a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int *a9)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // [rsp+8Ch] [rbp-15h] BYREF
  __int64 v17; // [rsp+90h] [rbp-11h] BYREF
  __int64 v18; // [rsp+98h] [rbp-9h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+7h] BYREF

  result = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v14 = *a9;
    v15 = *a5;
    v16 = *a4;
    v18 = *a3;
    v19 = *a2;
    v20 = *a1;
    v17 = v15;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                            (__int64)result,
                                            (__int64)&unk_180807CF5,
                                            v14,
                                            (__int64)a9,
                                            (__int64)&v20,
                                            &v19,
                                            &v18,
                                            (__int64)&v16,
                                            &v17);
  }
  return result;
}
