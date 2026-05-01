/*
 * XREFs of ?HampSystemCheckNotifyForPowerChange@@YAXE@Z @ 0x180055574
 * Callers:
 *     ?HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003B0F0 (-HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180054D14 (-HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1800556DC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall HampSystemCheckNotifyForPowerChange(char a1)
{
  NTSTATUS v2; // eax
  int v3; // r8d
  int v4; // r9d
  ULONG v5; // r8d
  int v6; // r9d
  char v7; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v8[3]; // [rsp+41h] [rbp-2Fh] BYREF
  ULONG v9; // [rsp+44h] [rbp-2Ch] BYREF
  _DWORD InputBuffer[3]; // [rsp+48h] [rbp-28h] BYREF
  int v11; // [rsp+54h] [rbp-1Ch]
  int v12; // [rsp+58h] [rbp-18h]

  InputBuffer[1] = 0;
  v12 = -1;
  InputBuffer[0] = 90;
  InputBuffer[2] = 2;
  v11 = a1 == 0;
  v2 = NtPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x14u, 0LL, 0);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v9 = v2;
    v7 = a1;
    v8[0] = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      (unsigned int)&dword_1800E82B0,
      (unsigned int)&unk_1800DAD85,
      v3,
      v4,
      (__int64)&v9,
      (__int64)v8,
      (__int64)&v7);
  }
  if ( !a1 )
  {
    v11 = 2;
    NtPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x14u, 0LL, 0);
    if ( (unsigned int)dword_1800E82B0 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1800E82B0, 8LL) )
      {
        v8[0] = 0;
        v7 = 1;
        v9 = v5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          (unsigned int)&dword_1800E82B0,
          (unsigned int)&unk_1800DAD85,
          v5,
          v6,
          (__int64)&v9,
          (__int64)&v7,
          (__int64)v8);
      }
    }
  }
}
