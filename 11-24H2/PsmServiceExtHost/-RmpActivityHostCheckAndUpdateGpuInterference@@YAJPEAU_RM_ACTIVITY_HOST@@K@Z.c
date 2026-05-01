/*
 * XREFs of ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18008E954
 * Callers:
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008EEF0 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180056EF0 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180060D18 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x18008EA44 (-RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z.c)
 */

__int64 __fastcall RmpActivityHostCheckAndUpdateGpuInterference(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  bool v2; // zf
  __int64 v4; // r8
  __int64 v5; // r9
  int IsGpuInterfering; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*((_BYTE *)a1 + 1264) & 1) == 0;
  LOBYTE(v10) = 0;
  if ( !v2 )
  {
    if ( !a2 )
    {
      if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
      {
        v10 = *((_QWORD *)a1 + 4);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          (__int64)&dword_1800E8278,
          byte_1800D9D9F,
          v4,
          v5,
          (__int64)&v10);
      }
      *((_DWORD *)a1 + 316) &= ~1u;
    }
LABEL_13:
    IsGpuInterfering = 0;
    goto LABEL_14;
  }
  IsGpuInterfering = RmpActivityHostIsGpuInterfering(a1, (unsigned __int8 *)&v10);
  if ( IsGpuInterfering >= 0 )
  {
    if ( (_BYTE)v10 )
    {
      if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
      {
        v10 = *((_QWORD *)a1 + 4);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          (__int64)&dword_1800E8278,
          byte_1800D9C92,
          v7,
          v8,
          (__int64)&v10);
      }
      *((_DWORD *)a1 + 316) |= 1u;
    }
    goto LABEL_13;
  }
LABEL_14:
  RmpActivityHostCheckQueueWork(a1);
  return (unsigned int)IsGpuInterfering;
}
