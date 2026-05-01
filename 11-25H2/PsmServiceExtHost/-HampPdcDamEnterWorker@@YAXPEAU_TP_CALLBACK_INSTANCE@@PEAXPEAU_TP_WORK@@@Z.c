/*
 * XREFs of ?HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003ADF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009140 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009DD0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002B204 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002B260 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C79C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA84 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18003B5A0 (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z @ 0x18003C1CC (-HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z.c)
 *     ?HampPdcResetWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18003C258 (-HampPdcResetWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18003C280 (-HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x1800416C4 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180044C40 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800566A4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180063D2C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTempl.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall HampPdcDamEnterWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  __int64 v4; // r13
  int v5; // r14d
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // r15d
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rsi
  struct _HAM_ACTIVITY *FirstActivity; // rdi
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  int v15; // [rsp+48h] [rbp-89h] BYREF
  int v16; // [rsp+4Ch] [rbp-85h] BYREF
  __int64 v17; // [rsp+50h] [rbp-81h] BYREF
  __int64 v18; // [rsp+58h] [rbp-79h] BYREF
  __int64 v19; // [rsp+60h] [rbp-71h] BYREF
  _BYTE v20[144]; // [rsp+68h] [rbp-69h] BYREF

  memset_0(v20, 0, 0x88uLL);
  v18 = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E72B0,
      byte_1800D597E);
  v4 = *(_QWORD *)a2;
  v5 = 0;
  HampPdcSetCurrentThreadWorker((struct _HAM_PDC_CONTEXT *)a2);
  while ( 1 )
  {
    HampManagerAcquireLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2);
    if ( !*((_DWORD *)a2 + 28) )
      break;
    v18 = *((_QWORD *)a2 + 15);
    v5 = CempQueryUnbiasedInterruptTimeMs64() - *((_DWORD *)a2 + 28);
    HampManagerReleaseLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2);
    v9 = 0;
    NextHost = (struct _RM_HAM_ACTIVITY_HOST *)HampHostEnumerateHostsInNode(v4 + 352, 0LL);
    if ( !NextHost )
      goto LABEL_5;
    do
    {
      HampHostAcquireLockExclusiveEx(NextHost, 0);
      FirstActivity = HampHostGetFirstActivity(NextHost);
      if ( FirstActivity )
      {
        do
        {
          if ( (*((_BYTE *)FirstActivity + 552) & 0x48) == 0
            && (unsigned __int8)(*((_BYTE *)FirstActivity + 562) - 2) <= 1u
            && (*((_DWORD *)FirstActivity + 30) & 0x200) != 0 )
          {
            v9 = 1;
            HampActRequestStopEx(FirstActivity, 3LL, 4LL);
            if ( (unsigned int)dword_1800E72B0 > 4
              && (qword_1800E72C0 & 0x40) != 0
              && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
            {
              v16 = 1;
              v19 = *((_QWORD *)NextHost - 4);
              v15 = *((_DWORD *)NextHost + 140);
              v17 = (__int64)NextHost + 24;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                (_DWORD)NextHost + 560,
                (unsigned int)&unk_1800D59A0,
                v13,
                v14,
                (__int64)&v17,
                (__int64)&v15,
                (__int64)&v19,
                (__int64)&v16);
            }
          }
          v12 = *((_QWORD *)FirstActivity + 12);
          if ( v12 == *((_QWORD *)FirstActivity + 10) + 608LL )
            break;
          FirstActivity = (struct _HAM_ACTIVITY *)(v12 - 96);
        }
        while ( v12 != 96 );
      }
      HampHostReleaseLockExclusive(NextHost);
      NextHost = HampManagerGetNextHost(NextHost);
    }
    while ( NextHost );
    if ( !v9 )
      goto LABEL_5;
    RtlWaitOnAddress(a2 + 120, &v18, 8LL);
  }
  HampManagerReleaseLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2);
LABEL_5:
  HampSystemNotificationClientAcknowledge(*((void **)a2 + 2), v6);
  if ( (unsigned int)dword_1800E72B0 > 4
    && (qword_1800E72C0 & 0x400000000008LL) != 0
    && (qword_1800E72C8 & 0x400000000008LL) == qword_1800E72C8 )
  {
    v17 = 0x1000000LL;
    v15 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800E72B0,
      (unsigned int)&unk_1800D5A2C,
      v7,
      v8,
      (__int64)&v15,
      (__int64)&v17);
  }
  HampPdcResetWorker((struct _HAM_PDC_CONTEXT *)a2);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 && (qword_1800E72C8 & 8) == qword_1800E72C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E72B0,
      byte_1800D57E1);
}
