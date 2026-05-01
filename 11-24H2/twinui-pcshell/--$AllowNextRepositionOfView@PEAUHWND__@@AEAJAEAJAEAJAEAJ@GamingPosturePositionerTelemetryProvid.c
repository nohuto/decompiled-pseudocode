/*
 * XREFs of ??$AllowNextRepositionOfView@PEAUHWND__@@AEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAX$$QEAPEAUHWND__@@AEAJ111@Z @ 0x1804F3D34
 * Callers:
 *     ?AllowNextWindowPosChange@GamingPosturePositioner@@UEAAXPEAUIApplicationView@@UtagRECT@@@Z @ 0x1804FA410 (-AllowNextWindowPosChange@GamingPosturePositioner@@UEAAXPEAUIApplicationView@@UtagRECT@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1801C713C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall GamingPosturePositionerTelemetryProvider::AllowNextRepositionOfView<HWND__ *,long &,long &,long &,long &>(
        __int64 *a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5)
{
  const struct _tlgProvider_t *v9; // rax
  int v10; // r9d
  int v11; // r8d
  int v12; // r11d
  int v14; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+54h] [rbp-24h] BYREF
  int v16; // [rsp+58h] [rbp-20h] BYREF
  int v17; // [rsp+5Ch] [rbp-1Ch] BYREF
  __int64 v18; // [rsp+60h] [rbp-18h] BYREF

  v9 = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    v10 = *a4;
    v11 = *a3;
    v17 = *a2;
    v18 = *a1;
    v12 = *a5;
    v15 = v10;
    v16 = v11;
    v14 = v12;
    LODWORD(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)v9,
                    byte_18080880E,
                    0LL,
                    0LL,
                    (__int64)&v18,
                    (__int64)&v17,
                    (__int64)&v16,
                    (__int64)&v15,
                    (__int64)&v14);
  }
  return (int)v9;
}
