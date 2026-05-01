/*
 * XREFs of ?RaiseCPCProviderAppClosedTelemetryEvent@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DisconnectSource@23456@AEBUhstring@6@1_N@Z @ 0x18066E4E8
 * Callers:
 *     _lambda_67f0fced1d981ef80ea3a06f45134b83_::operator() @ 0x18066CA98 (_lambda_67f0fced1d981ef80ea3a06f45134b83_--operator().c)
 *     _lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::operator() @ 0x18066CBAC (_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x18066CF00 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_18066CF00.c)
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ @ 0x18064C2C8 (-GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ.c)
 *     ??$CPCProviderAppClose@IHPEBGPEBGAEA_NAEAW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI$$QEAH$$QEAPEBG2AEA_NAEAW4SourceOfDisconnect@0@@Z @ 0x180656418 (--$CPCProviderAppClose@IHPEBGPEBGAEA_NAEAW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTele.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::RaiseCPCProviderAppClosedTelemetryEvent(
        __int64 a1,
        int a2,
        __int64 a3,
        winrt::hstring *a4,
        BOOL a5)
{
  winrt::hstring *v5; // r8
  const unsigned __int16 *v6; // rax
  const unsigned __int16 *v8; // [rsp+38h] [rbp-18h] BYREF
  const unsigned __int16 *v9; // [rsp+40h] [rbp-10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+10h] BYREF
  int v11; // [rsp+68h] [rbp+18h] BYREF

  v10 = a1;
  a5 = a2 == 1;
  v8 = winrt::hstring::c_str(a4);
  v6 = winrt::hstring::c_str(v5);
  v11 = 0;
  v9 = v6;
  LODWORD(v10) = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode();
  return CloudPCTelemetryCore::CPCProviderAppClose<unsigned int,int,unsigned short const *,unsigned short const *,bool &,enum CloudPCTelemetryCore::SourceOfDisconnect &>(
           (int *)&v10,
           &v11,
           (__int64 *)&v9,
           (__int64 *)&v8);
}
