/*
 * XREFs of ?HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180007600
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180008680 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800058A0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?RmpSystemWerAddTerminationReason@@YAJKW4_TerminationReason@@PEAG@Z @ 0x180006E8C (-RmpSystemWerAddTerminationReason@@YAJKW4_TerminationReason@@PEAG@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

__int64 __fastcall HampHostQueryAndLogTerminatingProcessCount(__int64 a1, int a2)
{
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 i; // rdi
  __int64 v8; // rdx
  _BYTE ProcessInformation[104]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v12; // [rsp+B0h] [rbp+18h] BYREF

  memset_0(ProcessInformation, 0, 0x40uLL);
  v5 = *(unsigned int *)(a1 + 16);
  v6 = 0;
  for ( i = 0LL; (unsigned int)i < (unsigned int)v5; i = (unsigned int)(i + 1) )
  {
    NtQueryInformationProcess(
      *(HANDLE *)(*(_QWORD *)a1 + 8 * i),
      ProcessBasicInformation,
      ProcessInformation,
      0x40u,
      0LL);
    if ( (ProcessInformation[56] & 4) != 0 )
    {
      ++v6;
    }
    else
    {
      if ( a2 == 256 )
      {
        v8 = 0LL;
      }
      else if ( a2 == 512 )
      {
        v8 = 4LL;
      }
      else
      {
        v8 = 2LL;
        if ( a2 != 2048 )
          v8 = 4LL;
      }
      RmpSystemWerAddTerminationReason(*(unsigned int *)(*(_QWORD *)(a1 + 8) + 4 * i), v8);
    }
    v5 = *(unsigned int *)(a1 + 16);
  }
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
  {
    v11 = (unsigned int)v5;
    v12 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800E82B0,
      byte_1800D37C9,
      v5,
      v4,
      (__int64)&v12,
      (__int64)&v11);
  }
  return v6;
}
