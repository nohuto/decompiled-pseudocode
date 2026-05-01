/*
 * XREFs of ?RmpMemoryMonitorInstanceOnSystemStateChanged@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x1800559D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x180055AB4 (-RmpMemoryMonitorGetIdealTimerState@@YA-AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_.c)
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180055AD0 (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_S.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800561FC (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall RmpMemoryMonitorInstanceOnSystemStateChanged(struct _RM_PARTITION *a1, unsigned int *a2)
{
  char *v2; // rsi
  __int64 v3; // rdx
  int IdealTimerState; // edi
  unsigned int v5; // eax
  __int64 v6; // r8
  int v7; // r9d
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = (char *)a1 + 40;
  IdealTimerState = RmpMemoryMonitorGetIdealTimerState(*a2);
  v5 = RmpMemoryMonitorGetIdealTimerState(*(unsigned int *)(v3 + 4));
  v8 = v5;
  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
  {
    v10 = v5;
    v11 = IdealTimerState;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1800E8278,
      (unsigned int)&unk_1800DA43F,
      v6,
      v7,
      (__int64)&v11,
      (__int64)&v10);
  }
  if ( IdealTimerState )
  {
    if ( !v8 )
    {
      TpSetTimer(*((_QWORD *)v2 + 8), 0LL, 0LL, 0LL);
      TpWaitForTimer(*((_QWORD *)v2 + 8), 1LL);
      return 0LL;
    }
  }
  else if ( !v8 )
  {
    return 0LL;
  }
  if ( v8 != IdealTimerState )
  {
    LOBYTE(v6) = 4;
    RmpMemoryMonitorSetTimer(v2, v8, v6);
  }
  return 0LL;
}
