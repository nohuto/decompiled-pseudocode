/*
 * XREFs of ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180056DB4
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B244 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AF80 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B028 (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180056EF0 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180056FC4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall RmpEmptyWorkerWaitForCompleteOrAbort(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // r8d
  int v3; // r9d
  unsigned int v4; // ebx
  NTSTATUS v5; // esi
  int v6; // r8d
  int v7; // r9d
  void *v8; // rcx
  HANDLE Object[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  RmReleaseEnforcementLocks(a1);
  Object[0] = *((HANDLE *)a1 + 167);
  Object[1] = *((HANDLE *)a1 + 166);
  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
  {
    v11 = *((_QWORD *)a1 + 4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800E8278,
      (unsigned int)&unk_1800D892E,
      v2,
      v3,
      (__int64)&v11);
  }
  v4 = 0;
  v5 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
  RmAcquireEnforcementLocks(a1);
  if ( !v5 )
  {
    v8 = (void *)*((_QWORD *)a1 + 167);
    *((_DWORD *)a1 + 336) = 0;
    NtClearEvent(v8);
    v4 = 1;
  }
  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
  {
    v12 = *((_QWORD *)a1 + 4);
    LODWORD(v11) = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1800E8278,
      (unsigned int)&unk_1800D888E,
      v6,
      v7,
      (__int64)&v12,
      (__int64)&v11);
  }
  return v4;
}
