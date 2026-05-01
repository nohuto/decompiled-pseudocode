/*
 * XREFs of ?HampClientRundownTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18006D460
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800028A4 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C3E0 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C43C (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall HampClientRundownTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _HAM_CLIENT_CONTEXT *a2,
        struct _TP_TIMER *a3)
{
  __int64 v4; // rsi
  int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v10[8]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v12[144]; // [rsp+40h] [rbp-A8h] BYREF

  memset_0(v12, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E82B0 > 4 && tlgKeywordOn((__int64)&dword_1800E82B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E82B0,
      byte_1800D707D);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  v4 = *((_QWORD *)a2 + 19);
  v5 = 0;
  HampClientAcquireLockExclusive(a2);
  v6 = *((_DWORD *)a2 + 36);
  if ( (v6 & 2) != 0 )
  {
    v5 = 1;
    *((_DWORD *)a2 + 36) = v6 & 0xFFFFFFFD;
  }
  HampClientReleaseLockExclusive(a2);
  if ( v5 )
    CemRcObjectDereference(a2);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E82B0 > 4 && tlgKeywordOn((__int64)&dword_1800E82B0, 8LL) )
  {
    v11 = v4;
    v10[0] = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v7,
      (__int64)&unk_1800D70A8,
      v8,
      v9,
      (__int64)v10,
      (__int64)&v11);
  }
}
