/*
 * XREFs of ?HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003C8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180007190 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?RmActivityHostReleaseFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180008C28 (-RmActivityHostReleaseFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009140 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA84 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003C100 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?HampHostShouldSendPsmQuiesceAndQueryRestart@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003CC04 (-HampHostShouldSendPsmQuiesceAndQueryRestart@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043DFC (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043E88 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005627C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180056F70 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?HampHostShouldSendDesktopWindowClose@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180067A30 (-HampHostShouldSendDesktopWindowClose@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HampHostPlmServiceDesktopBridgeHost(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _TP_WORK *a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // edx
  int ProcessesInfo; // eax
  int v10; // r14d
  __int64 v11; // rcx
  _DWORD *v12; // r12
  _QWORD *v13; // r15
  unsigned int v14; // ebx
  __int64 v15; // r13
  int v16; // r8d
  int v17; // r9d
  HANDLE *v18; // r15
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // [rsp+38h] [rbp-99h] BYREF
  __int64 v22; // [rsp+40h] [rbp-91h] BYREF
  void *v23[2]; // [rsp+48h] [rbp-89h] BYREF
  __int64 v24; // [rsp+58h] [rbp-79h]
  struct _RM_HAM_ACTIVITY_HOST *v25; // [rsp+60h] [rbp-71h]
  _BYTE v26[144]; // [rsp+68h] [rbp-69h] BYREF

  v3 = a2;
  v25 = a2;
  memset_0(v26, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v26);
  LODWORD(v4) = 0;
  v5 = 0LL;
  *(_OWORD *)v23 = 0LL;
  v24 = 0LL;
  if ( (unsigned int)dword_1800E72B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E72B0, 64LL) )
  {
    v22 = *((_QWORD *)v3 + 71);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800E72B0,
      (unsigned int)&unk_1800D266F,
      v6,
      v7,
      (__int64)&v22);
  }
  HampHostAcquireLockSharedEx(v3, 0);
  if ( HampHostShouldSendPsmQuiesceAndQueryRestart(v3) )
  {
    LODWORD(v21) = 2;
  }
  else
  {
    if ( !HampHostShouldSendDesktopWindowClose(v3) )
    {
LABEL_24:
      v10 = -1058275324;
      HampHostReleaseLockSharedEx(v3, v8);
      goto LABEL_25;
    }
    LODWORD(v21) = 3;
  }
  HampHostReleaseLockSharedEx(v3, v8);
  ProcessesInfo = RmHamHostGetProcessesInfo(
                    (struct _RM_ACTIVITY_HOST *)(-(__int64)(v3 != 0LL) & ((unsigned __int64)v3 - 64)),
                    4112,
                    1,
                    (struct _HAM_PROCESS_SNAPSHOT *)v23);
  LODWORD(v4) = v24;
  v10 = ProcessesInfo;
  if ( ProcessesInfo < 0 )
    goto LABEL_25;
  if ( !(_DWORD)v24 )
  {
    v10 = -1073741275;
    goto LABEL_25;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 99) + 88LL) + 88LL) + 160LL);
  v5 = *(_QWORD *)(v11 + 136);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(v11 + 136));
  HampHostAcquireLockSharedEx(v3, 0);
  if ( !HampHostShouldSendDesktopWindowClose(v3) && !HampHostShouldSendPsmQuiesceAndQueryRestart(v3) )
    goto LABEL_24;
  HampHostReleaseLockSharedEx(v3, v8);
  if ( (_DWORD)v4 )
  {
    v12 = v23[1];
    v13 = v23[0];
    v14 = v21;
    v15 = (unsigned int)v4;
    do
    {
      if ( v5
        && (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, *v13, v14) < 0
        && (unsigned int)dword_1800E72B0 > 4
        && (unsigned __int8)tlgKeywordOn(&dword_1800E72B0, 64LL) )
      {
        LODWORD(v22) = *v12;
        LODWORD(v21) = v16;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1800E72B0,
          (unsigned int)&unk_1800D3230,
          v16,
          v17,
          (__int64)&v22,
          (__int64)&v21);
      }
      ++v13;
      ++v12;
      --v15;
    }
    while ( v15 );
    v3 = v25;
  }
LABEL_25:
  HampHostAcquireLockExclusiveEx(v3, 0);
  *((_QWORD *)v3 + 84) &= ~0x40uLL;
  HampHostReleaseLockExclusive(v3);
  if ( (_DWORD)v4 )
  {
    v18 = (HANDLE *)v23[0];
    v4 = (unsigned int)v4;
    do
    {
      NtClose(*v18++);
      --v4;
    }
    while ( v4 );
  }
  if ( v23[0] )
    HampFreeHeap(v23[0]);
  if ( v23[1] )
    HampFreeHeap(v23[1]);
  RmActivityHostReleaseFromHam(v3);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( (unsigned int)dword_1800E72B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E72B0, 64LL) )
  {
    LODWORD(v22) = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)&dword_1800E72B0,
      byte_1800D305E,
      v19,
      v20,
      (__int64)&v22);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
