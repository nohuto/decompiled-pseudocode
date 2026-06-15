/*
 * XREFs of ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140048F00
 * Callers:
 *     ?Run@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14001D3A8 (-Run@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14000211C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x140035714 (_tlgKeywordOn.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x1400495FC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x140057C88 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     WPP_SF_ @ 0x1400659D0 (WPP_SF_.c)
 */

__int64 __fastcall CAudioDGModule::RunMessageLoop(HANDLE *this, __int64 a2)
{
  void *v3; // rcx
  DWORD v4; // eax
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  HANDLE CurrentProcess; // rax
  __int64 v10; // rcx
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  HANDLE v14; // rax
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  int v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids);
  }
  Handles[0] = this[15];
  Handles[1] = this[17];
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v3, a2, *((unsigned int *)this + 38));
  do
  {
    while ( 1 )
    {
      v4 = WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0);
      if ( v4 != 1 )
        break;
      *((_BYTE *)this + 148) = 1;
      v6 = AudioDgTelemetryProvider::Provider(v5);
      if ( *(_DWORD *)v6 > 2u )
      {
        if ( tlgKeywordOn((__int64)v6, 0x400000000000LL) )
        {
          v17 = *((_DWORD *)this + 36);
          v18 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            v8,
            (int)&unk_1400AFFEB,
            v7,
            v8,
            (__int64)&v18,
            (__int64)&v17);
        }
      }
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0x64u);
    }
  }
  while ( v4 );
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids);
  }
  if ( qword_1400C3C68 || dword_1400C4758 > 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgs("AudioDg.exe", qword_1400C3C68, (unsigned int)dword_1400C4758);
    v11 = AudioDgTelemetryProvider::Provider(v10);
    if ( *(_DWORD *)v11 > 4u )
    {
      if ( tlgKeywordOn((__int64)v11, 4LL) )
      {
        v17 = dword_1400C4758;
        v18 = qword_1400C3C68;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v13,
          (int)&unk_1400AFFB4,
          v12,
          v13,
          (__int64)&v18,
          (__int64)&v17);
      }
    }
  }
  v14 = GetCurrentProcess();
  TerminateProcess(v14, 0);
  return 0LL;
}
