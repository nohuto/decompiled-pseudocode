/*
 * XREFs of VidSchCreatePeriodicFrameNotification @ 0x140002B20
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x14000304C (-VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x14003D350 (VidSchDestroyPeriodicFrameNotification.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x140050C7C (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 *     McTemplateK0pqxxqpp_EtwWriteTransfer @ 0x140051180 (McTemplateK0pqxxqpp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     VidSchControlVSyncAdapter @ 0x1400D92A0 (VidSchControlVSyncAdapter.c)
 *     VidSchIsVSyncAvailable @ 0x1400EBC50 (VidSchIsVSyncAvailable.c)
 */

__int64 __fastcall VidSchCreatePeriodicFrameNotification(
        struct _VIDSCH_GLOBAL *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v7; // rbx
  __int64 v8; // r13
  char v10; // r14
  __int64 Pool2; // rdi
  void (__fastcall *v12)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  int v13; // ebx
  bool v14; // r8
  unsigned __int64 CurrentVSyncPeriod100ns; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ecx
  int v19; // r8d
  unsigned int i; // ecx
  bool v21; // zf
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  int v25; // ecx
  int v26; // r8d
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 Timer; // rax
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // rdx
  void (__fastcall *v35)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-29h] BYREF
  __int128 v38; // [rsp+68h] [rbp-11h] BYREF
  __int128 v39; // [rsp+78h] [rbp-1h]
  __int64 v40; // [rsp+88h] [rbp+Fh]
  __int64 v41; // [rsp+D0h] [rbp+57h]

  v7 = a4;
  v40 = 0LL;
  v8 = *((_QWORD *)a1 + a4 + 429);
  v10 = 0;
  v38 = 0LL;
  v39 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned __int8)VidSchIsVSyncAvailable(a1, a4) && (int)VidSchControlVSyncAdapter(a1) >= 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 64LL, 1650551126LL);
    if ( !Pool2 )
    {
      _InterlockedIncrement(&dword_140081884);
      WdLogSingleEntry1(6LL, 14466LL);
      v12 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
      WdLogGlobalForLineNumber = 14466;
      v12(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"ExAllocatePool for VIDSCH_PERIODIC_FRAME_NOTIFICATION_STORAGE failed, returning STATUS_NO_MEMORY.",
        14466LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v13 = -1073741801;
      VidSchControlVSyncAdapter(a1);
LABEL_38:
      *a6 = 0LL;
      return (unsigned int)v13;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 248, &LockHandle);
    *(_BYTE *)(Pool2 + 25) = *(_BYTE *)(v8 + 83088) + 1;
    CurrentVSyncPeriod100ns = VidSchiGetCurrentVSyncPeriod100ns(a1, a4, v14);
    v16 = *(_QWORD *)(v8 + 78960);
    v41 = CurrentVSyncPeriod100ns;
    if ( v16 )
    {
      for ( i = 0; i < 8; ++i )
      {
        if ( !*(_QWORD *)(v16 + 8LL * i) )
          goto LABEL_9;
      }
      _InterlockedIncrement(&dword_140081884);
      WdLogSingleEntry1(6LL, 14509LL);
      v35 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
      WdLogGlobalForLineNumber = 14509;
      v35(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Cap for ppPeriodicFrameNotificationStorageArray reached, returning STATUS_NO_MEMORY.",
        14509LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_33;
    }
    v17 = ExAllocatePool2(64LL, 64LL, 1650551126LL);
    *(_QWORD *)(v8 + 78960) = v17;
    if ( !v17 )
    {
      _InterlockedIncrement(&dword_140081884);
      WdLogSingleEntry1(6LL, 14485LL);
      WdLogGlobalForLineNumber = 14485;
      DxgkLogInternalTriageEvent(
        v18,
        262145,
        v19,
        (unsigned int)L"ExAllocatePool for ppPeriodicFrameNotificationStorageArray failed, returning STATUS_NO_MEMORY.",
        14485LL,
        0LL,
        0LL,
        0LL);
LABEL_33:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      goto LABEL_34;
    }
    LOBYTE(i) = 0;
LABEL_9:
    *(_BYTE *)(Pool2 + 24) = i;
    *(_QWORD *)(*(_QWORD *)(v8 + 78960) + 8LL * (unsigned __int8)*(_DWORD *)(Pool2 + 24)) = Pool2;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 36));
    v21 = *((_DWORD *)a1 + 62) == 1;
    v22 = *((_QWORD *)a1 + 2);
    *(_QWORD *)Pool2 = a2;
    *(_QWORD *)(Pool2 + 56) = v22;
    *(_DWORD *)(Pool2 + 8) = a4;
    v23 = *(_QWORD *)(a5 + 16);
    *(_QWORD *)(Pool2 + 16) = v23;
    if ( v21 )
    {
      v13 = -1073741822;
    }
    else
    {
      DWORD2(v38) = *(_DWORD *)(3984 * v7 + *(_QWORD *)(*(_QWORD *)(v22 + 3120) + 128LL) + 1072);
      DWORD2(v39) = *(_DWORD *)(Pool2 + 24);
      *(_QWORD *)&v39 = v23;
      v24 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[74])(*(_QWORD *)(v22 + 3120), &v38);
      v13 = v24;
      if ( v24 >= 0 )
      {
        v25 = v40;
        *(_QWORD *)(Pool2 + 32) = v40;
        goto LABEL_28;
      }
      if ( (unsigned int)(v24 + 0x3FFFFFFF) > 1 )
        goto LABEL_28;
    }
    v27 = *((_DWORD *)a1 + 62);
    if ( v27 == 2 )
    {
      WdLogSingleEntry1(3LL, v13);
      v10 = 1;
      WdLogGlobalForLineNumber = 14549;
      v13 = -1073741822;
      goto LABEL_35;
    }
    if ( v27 != 1 )
    {
      WdLogSingleEntry1(3LL, v13);
      WdLogGlobalForLineNumber = 14556;
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, "h", v29, 25LL);
    }
    v30 = VidSchCalculatePeriodicMonitoredFenceTimerDueTime(*(_QWORD *)(v8 + 44368), v41, *(_QWORD *)(Pool2 + 16), -1);
    Timer = ExAllocateTimer(VidSchPeriodicMonitoredFenceTimerCallback, Pool2, 4LL);
    *(_QWORD *)(Pool2 + 40) = Timer;
    if ( !Timer )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 14571;
      DxgkLogInternalTriageEvent(
        v32,
        0x40000,
        v33,
        (unsigned int)L"ExAllocateTimer for VIDSCH_PERIODIC_FRAME_NOTIFICATION_STORAGE failed, returning STATUS_NO_MEMORY.",
        14571LL,
        0LL,
        0LL,
        0LL);
      v10 = 1;
LABEL_34:
      v13 = -1073741801;
LABEL_35:
      if ( v10 )
      {
        VidSchDestroyPeriodicFrameNotification(*(PVOID *)(*(_QWORD *)(v8 + 78960)
                                                        + 8LL * (unsigned __int8)*(_DWORD *)(Pool2 + 24)));
      }
      else
      {
        VidSchControlVSyncAdapter(a1);
        ExFreePoolWithTag((PVOID)Pool2, 0x62616956u);
      }
      goto LABEL_38;
    }
    v34 = 0LL;
    if ( v30 <= 0 )
      v34 = v30;
    ExSetTimer(Timer, v34, 0LL, 0LL);
    v13 = 0;
LABEL_28:
    *a6 = Pool2;
    if ( (byte_140081241 & 4) != 0 )
      McTemplateK0pqxxqpp_EtwWriteTransfer(
        v25,
        (unsigned int)&EventCreatePeriodicFrameNotification,
        v26,
        *(_QWORD *)Pool2,
        *(_DWORD *)(Pool2 + 8),
        *(_QWORD *)(Pool2 + 16),
        v41,
        *(_DWORD *)(Pool2 + 24),
        *(_QWORD *)(Pool2 + 32),
        *(_QWORD *)(Pool2 + 40));
    if ( v13 >= 0 )
      return (unsigned int)v13;
    v10 = 1;
    goto LABEL_35;
  }
  return 3223191558LL;
}
