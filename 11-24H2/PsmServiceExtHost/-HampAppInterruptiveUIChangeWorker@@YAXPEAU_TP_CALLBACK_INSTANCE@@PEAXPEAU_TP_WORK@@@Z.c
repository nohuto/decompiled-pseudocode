/*
 * XREFs of ?HampAppInterruptiveUIChangeWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005F560
 * Callers:
 *     <none>
 * Callees:
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009F48 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002BF20 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampSystemNotifyResourcePolicyInterruptiveUIChange@@YAXPEAU_HAM_APPLICATION@@H@Z @ 0x18005F6C8 (-HampSystemNotifyResourcePolicyInterruptiveUIChange@@YAXPEAU_HAM_APPLICATION@@H@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18005F734 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall HampAppInterruptiveUIChangeWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _HAM_APPLICATION *a2,
        struct _TP_WORK *a3)
{
  unsigned int v4; // ecx
  int v5; // edi
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // rcx
  _BYTE v10[4]; // [rsp+40h] [rbp-C8h] BYREF
  int v11; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  char *v13; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v14[144]; // [rsp+60h] [rbp-A8h] BYREF

  memset_0(v14, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  while ( 1 )
  {
    HampAppAcquireLockExclusive(a2);
    v4 = *((_DWORD *)a2 + 154);
    v5 = (v4 >> 18) & 1;
    if ( ((v4 >> 17) & 1) == v5 )
      break;
    *((_DWORD *)a2 + 154) = (v5 << 17) | v4 & 0xFFFDFFFF;
    HampAppReleaseLockExclusive(a2);
    if ( (unsigned int)dword_1800E82B0 > 4
      && (qword_1800E82C0 & 0x40) != 0
      && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
    {
      v8 = *((_QWORD *)a2 + 11);
      v10[0] = v5;
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 88) + 160LL);
      v11 = *(_DWORD *)(v9 + 88);
      v12 = v8 + 228;
      v13 = (char *)a2 + 96;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v9,
        (unsigned int)&unk_1800D6F0C,
        v6,
        v7,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)v10);
    }
    HampSystemNotifyResourcePolicyInterruptiveUIChange(a2, v5);
  }
  *((_DWORD *)a2 + 154) = v4 & 0xFFF7FFFF;
  HampAppReleaseLockExclusive(a2);
  CemRcObjectDereference(a2);
  CempLockTrackerClearForThread(HampLockTrackerId);
}
