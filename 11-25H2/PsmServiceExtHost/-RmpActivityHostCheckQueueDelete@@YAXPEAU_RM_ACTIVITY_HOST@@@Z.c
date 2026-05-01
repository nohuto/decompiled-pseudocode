/*
 * XREFs of ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800190E4
 * Callers:
 *     ?RmHamHostDereferenceUnsafe@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D9F8 (-RmHamHostDereferenceUnsafe@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180010300 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001834C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180026BA4 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005FB08 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTerminateWatchdog@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18007DDB0 (-HampHostTerminateWatchdog@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800192E8 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180028750 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall RmpActivityHostCheckQueueDelete(struct _RM_ACTIVITY_HOST *a1)
{
  DWORD v1; // esi
  char *v2; // rbx
  _QWORD *Value; // rdi
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  __int64 *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]

  v1 = HampLockTrackerId;
  v2 = (char *)a1 + 64;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v2);
  *((_DWORD *)v2 + 2) = GetCurrentThreadId();
  if ( RmpActivityHostCanDelete(a1) )
  {
    if ( (unsigned int)dword_1800E72B0 > 4
      && (qword_1800E72C0 & 0x40) != 0
      && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
    {
      v8 = *((_QWORD *)a1 + 4);
      v17 = 0;
      v9 = v8;
      v16 = 8;
      v15 = &v9;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E72B8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 64LL;
      UserData.Size = *(unsigned __int16 *)off_1800E72B8;
      v12 = &unk_1800D7508;
      UserData.Reserved = 2;
      v13 = 28;
      v14 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
    }
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v2, 1u);
  }
  if ( HampLockTrackerId != -1 )
  {
    v5 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v6 = *v5;
    if ( (*v5 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v5[2]-- == 1 )
      *v5 = v6 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)v2 + 2) = 0;
  RtlReleaseSRWLockExclusive(v2);
}
