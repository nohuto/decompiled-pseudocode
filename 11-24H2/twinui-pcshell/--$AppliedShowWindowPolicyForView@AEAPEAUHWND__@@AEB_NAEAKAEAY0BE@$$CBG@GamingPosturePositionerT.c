/*
 * XREFs of ??$AppliedShowWindowPolicyForView@AEAPEAUHWND__@@AEB_NAEAKAEAY0BE@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEB_NAEAKAEAY0BE@$$CBG@Z @ 0x1804F4778
 * Callers:
 *     ?OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x180504C90 (-OnShowWindowPolicy@GamingPosturePositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18000BDC0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapS.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *GamingPosturePositionerTelemetryProvider::AppliedShowWindowPolicyForView<HWND__ * &,bool const &,unsigned long &,unsigned short const (&)[20]>(
        _QWORD *a1,
        char *a2,
        unsigned int *a3,
        ...)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v7; // r9
  char v8; // dl
  __int64 v9; // r8
  int v10; // [rsp+40h] [rbp-28h] BYREF
  const wchar_t *v11; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v12[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  result = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v8 = *a2;
    v9 = *a3;
    v11 = L"Minimize disallowed";
    v12[0] = *a1;
    LOBYTE(v13) = v8;
    v10 = v9;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                                            (__int64)result,
                                            (__int64)&unk_180807CA2,
                                            v9,
                                            v7,
                                            (__int64)v12,
                                            (__int64)va,
                                            (__int64)&v10,
                                            &v11);
  }
  return result;
}
