/*
 * XREFs of ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x1800781C0
 * Callers:
 *     ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180078138 (-ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     ?ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180005A40 (-ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180005A98 (-ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CemRcTableGetNext @ 0x180016FA0 (CemRcTableGetNext.c)
 *     CemRcTableGetFirst @ 0x1800433F0 (CemRcTableGetFirst.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?ArHostRundownActivities@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800783D8 (-ArHostRundownActivities@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     CemRcTableBeginRundown @ 0x18009C51C (CemRcTableBeginRundown.c)
 *     CemRcTableWaitForEmpty @ 0x18009C56C (CemRcTableWaitForEmpty.c)
 */

void __fastcall ArManagerRundown(struct _ACTIVITY_RESTARTER *a1)
{
  struct _AR_ACTIVITY_HOST *i; // rax
  struct _AR_ACTIVITY_HOST *v3; // rdi

  if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E72B0,
      byte_1800D0F19);
  ArManagerAcquireLockExclusive(a1);
  *((_DWORD *)a1 + 18) |= 0x10u;
  ArManagerReleaseLockExclusive(a1);
  TpWaitForWork(*((_QWORD *)a1 + 8), 0LL);
  for ( i = (struct _AR_ACTIVITY_HOST *)CemRcTableGetFirst((__int64)a1);
        ;
        i = (struct _AR_ACTIVITY_HOST *)CemRcTableGetNext(v3) )
  {
    v3 = i;
    if ( !i )
      break;
    ArHostRundownActivities(i);
  }
  CemRcTableBeginRundown(a1);
  CemRcTableWaitForEmpty(a1);
  if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 8LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E72B0,
      byte_1800D0EC5);
}
