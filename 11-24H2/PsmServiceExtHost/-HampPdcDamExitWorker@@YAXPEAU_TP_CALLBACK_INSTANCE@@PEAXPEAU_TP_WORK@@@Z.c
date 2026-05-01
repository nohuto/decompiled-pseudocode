/*
 * XREFs of ?HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003B0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002B184 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002B1E0 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18003B520 (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BB68 (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z @ 0x18003C14C (-HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041644 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043E08 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampSystemCheckNotifyForPowerChange@@YAXE@Z @ 0x180055574 (-HampSystemCheckNotifyForPowerChange@@YAXE@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180066588 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?HampPdcEndBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18006C30C (-HampPdcEndBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall HampPdcDamExitWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  struct _HOST_ACTIVITY_MANAGER *v4; // rdi
  int v5; // ebx
  char *v6; // r12
  struct _HOST_ACTIVITY_MANAGER *v7; // rcx
  int v8; // r14d
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rdi
  int v10; // edx
  DWORD v11; // ebp
  _QWORD *Value; // rbx
  __int64 *v13; // rax
  __int64 v14; // rcx
  unsigned int IsResumed; // ebx
  unsigned int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  int v21; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-D8h] BYREF
  char *v24; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v25[144]; // [rsp+60h] [rbp-C8h] BYREF

  memset_0(v25, 0, 0x88uLL);
  v22 = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E82B0,
      byte_1800D691A);
  v4 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  HampManagerAcquireLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2);
  v5 = *((_DWORD *)a2 + 28);
  HampManagerReleaseLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2);
  if ( !v5 )
  {
    v6 = (char *)v4 + 352;
    while ( 1 )
    {
      HampManagerAcquireLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2);
      v7 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
      v22 = *((_QWORD *)a2 + 15);
      HampManagerReleaseLockShared(v7);
      v8 = 1;
      NextHost = (struct _RM_HAM_ACTIVITY_HOST *)HampHostEnumerateHostsInNode(v6, 0LL);
      if ( !NextHost )
        break;
      do
      {
        v11 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          Value = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v11) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
          *Value |= 2uLL;
          ++Value[2];
        }
        RtlAcquireSRWLockShared(NextHost);
        if ( (*((_BYTE *)NextHost + 672) & 0x20) == 0 || (*((_DWORD *)NextHost + 166) & 0x30000) != 0 )
        {
          if ( HampLockTrackerId != -1 )
          {
            v13 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v14 = *v13;
            if ( (*v13 & 2) == 0 )
              NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
            if ( v13[2]-- == 1 )
              *v13 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          RtlReleaseSRWLockShared(NextHost);
        }
        else
        {
          IsResumed = HampHostIsResumed(NextHost);
          HampHostReleaseLockSharedEx(NextHost, v17);
          v8 &= IsResumed;
          if ( !IsResumed
            && (unsigned int)dword_1800E82B0 > 4
            && (qword_1800E82C0 & 0x40) != 0
            && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
          {
            v23 = *((_QWORD *)NextHost - 4);
            v21 = *((_DWORD *)NextHost + 140);
            v24 = (char *)NextHost + 24;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v18,
              (unsigned int)&unk_1800D6B60,
              v19,
              v20,
              (__int64)&v24,
              (__int64)&v21,
              (__int64)&v23);
          }
        }
        NextHost = HampManagerGetNextHost(NextHost);
      }
      while ( NextHost );
      if ( v8 )
        break;
      RtlWaitOnAddress(a2 + 120, &v22, 8LL);
    }
  }
  HampSystemCheckNotifyForPowerChange(0);
  HampSystemNotificationClientAcknowledge(*((void **)a2 + 2), v10);
  HampPdcEndBoostForPhaseExit((struct _HAM_PDC_CONTEXT *)a2);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E82B0,
      byte_1800D6ADC);
}
