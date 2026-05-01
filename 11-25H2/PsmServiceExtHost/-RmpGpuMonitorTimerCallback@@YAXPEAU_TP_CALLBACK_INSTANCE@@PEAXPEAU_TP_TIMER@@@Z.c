/*
 * XREFs of ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008EA90
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027700 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180043EDC (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180053020 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18005ADE0 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpObjectTableEnumerationEnd@@YAXPEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180062AC0 (-RmpObjectTableEnumerationEnd@@YAXPEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetBegin@@YAXPEAU_RM_ACTIVITY_HOST@@KPEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180066C1C (-RmpActivityHostEnumerateResourceSetBegin@@YAXPEAU_RM_ACTIVITY_HOST@@KPEAU_RM_ACTIVITY_HOST_RESO.c)
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18008E4F4 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x18008E98C (-RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall RmpGpuMonitorTimerCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  __int64 v4; // rcx
  char *v5; // rbx
  BOOL IsGpuBusy; // esi
  struct ExecutionModel::ResourceSet *v7; // rax
  __int64 v8; // rdx
  struct _RM_ACTIVITY_HOST *Next; // rax
  struct _RM_ACTIVITY_HOST *v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD v14[3]; // [rsp+20h] [rbp-91h] BYREF
  _OWORD v15[2]; // [rsp+38h] [rbp-79h] BYREF
  _BYTE v16[144]; // [rsp+58h] [rbp-59h] BYREF

  memset_0(v16, 0, 0x88uLL);
  memset(v15, 0, sizeof(v15));
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  if ( (unsigned int)dword_1800E7278 > 5 && tlgKeywordOn((__int64)&dword_1800E7278, 1LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v4,
      byte_1800D8E72);
  v5 = a2 + 48;
  RmpAcquireGlobalLock();
  if ( (a2[92] & 1) != 0 )
  {
    IsGpuBusy = RmpGpuMonitorIsGpuBusy((struct _RM_GPU_MONITOR *)(a2 + 48));
    RmpObjectTableEnumerationBegin(
      (struct _RM_OBJECT_TABLE *)(a2 + 16),
      (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v15);
    while ( 1 )
    {
      Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v15);
      v10 = Next;
      if ( !Next )
        break;
      *(_OWORD *)&v14[1] = 0LL;
      RmpActivityHostEnumerateResourceSetBegin(
        Next,
        2,
        (struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&v14[1]);
      while ( 1 )
      {
        v7 = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&v14[1]);
        if ( !v7 )
          break;
        if ( (*((_BYTE *)v7 + 1380) & 8) != 0 )
        {
          RmpActivityHostCheckAndUpdateGpuInterference(v10, IsGpuBusy);
          break;
        }
      }
      RmpObjectRelease((char *)v10, v8);
    }
    RmpObjectTableEnumerationEnd((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v15);
  }
  v11 = *((_DWORD *)v5 + 11);
  if ( (v11 & 1) != 0 )
  {
    TpSetTimer(*(_QWORD *)v5, v5 + 8, 0LL, *((unsigned int *)v5 + 10));
  }
  else
  {
    *((_DWORD *)v5 + 11) = v11 & 0xFFFFFFFD;
    if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 1LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v12,
        byte_1800D8DCD);
  }
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800E7278 > 5 && tlgKeywordOn((__int64)&dword_1800E7278, 1LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v13,
      byte_1800D8CBF);
  CempLockTrackerClearForThread(HampLockTrackerId);
}
