/*
 * XREFs of ?ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z @ 0x180055930
 * Callers:
 *     ?HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x1800541C8 (-HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180054D94 (-HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180055894 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 * Callees:
 *     ?ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180005A40 (-ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180005A98 (-ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800067CC (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall ArManagerUpdateCsState(union _HAM_PDC_STATE_UPDATE *a1)
{
  int v2; // edi
  struct _ACTIVITY_RESTARTER *v3; // rbx
  int v4; // r8d
  int v5; // eax
  int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rcx
  _BYTE v9[144]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(v9, 0, 0x88uLL);
  v2 = 0;
  if ( ArLockTrackerId != -1 )
  {
    v2 = 1;
    ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v9);
    v3 = ArGlobals;
    if ( ArGlobals )
    {
      ArManagerAcquireLockExclusive(ArGlobals);
      v4 = *(unsigned __int8 *)a1;
      v5 = *((_DWORD *)v3 + 18) ^ ((unsigned __int8)v4 ^ (unsigned __int8)*((_DWORD *)v3 + 18)) & 2;
      v6 = v5 ^ (v5 ^ v4) & 1 | 4;
      *((_DWORD *)v3 + 18) = v6;
      if ( (v6 & 0x18) == 0 )
      {
        v7 = *((_QWORD *)v3 + 8);
        if ( v7 )
        {
          *((_DWORD *)v3 + 18) = v6 | 8;
          TpPostWork(v7);
        }
      }
      ArManagerReleaseLockExclusive(v3);
    }
  }
  if ( (unsigned int)dword_1800E72B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E72B0, 8LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v8,
      byte_1800D0E9D);
  if ( v2 )
    CempLockTrackerClearForThread(ArLockTrackerId);
}
