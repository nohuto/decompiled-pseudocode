/*
 * XREFs of ?RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005682C
 * Callers:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800286D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180056EF0 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall RmHamEnforcementEmptySignalAbort(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  char *v2; // rax
  bool v3; // zf
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)a1 + 1264;
  v3 = a1 == 0LL;
  v4 = 1328LL;
  if ( !v3 )
    v4 = (__int64)v2;
  NtSetEvent(*(HANDLE *)v4, 0LL);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
  {
    v7 = 32LL;
    if ( a1 )
      v7 = (__int64)a1 - 32;
    v8 = *(_QWORD *)v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800E82B0,
      (unsigned int)&unk_1800D7612,
      v5,
      v6,
      (__int64)&v8);
  }
}
