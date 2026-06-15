/*
 * XREFs of ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180055788
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x18000DE88 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180055024 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     _lambda_4f236b1e81c6618792afd531ba269699_::operator() @ 0x180150058 (_lambda_4f236b1e81c6618792afd531ba269699_--operator().c)
 *     _lambda_5df9067949f64781414217de856cf4be_::operator() @ 0x1801501A4 (_lambda_5df9067949f64781414217de856cf4be_--operator().c)
 *     _lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_::operator() @ 0x1801502E4 (_lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_--operator().c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180150BEC (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z @ 0x18015110C (-IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x180151E60 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x18015EEB0 (-StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z.c)
 *     ?UnregisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18015F1DC (-UnregisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18004FE64 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

void __fastcall AtmosCheck::Trace(AtmosCheck *this, const char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+64h] [rbp-1Ch]
  const char *v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+74h] [rbp-Ch]

  if ( (_DWORD)a3 )
  {
    if ( (unsigned int)CallbackContext > 2 )
    {
      *(_QWORD *)&EventDescriptor.Id = a2;
      v6 = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&CallbackContext,
        byte_1801B2F4F,
        a3,
        a4,
        (const CHAR **)&EventDescriptor,
        (__int64)&v6);
    }
  }
  else if ( (unsigned int)CallbackContext > 5 )
  {
    if ( a2 )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( a2[v4] );
      v5 = v4 + 1;
    }
    else
    {
      a2 = MultiByteStr;
      v5 = 1;
    }
    v13 = v5;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1801D8380;
    v14 = 0;
    EventDescriptor.Keyword = 0LL;
    v12 = a2;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1801D8380;
    v9 = &unk_1801B30F9;
    v11 = 1;
    UserData.Reserved = 2;
    v10 = 23;
    v6 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1801D8398, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
