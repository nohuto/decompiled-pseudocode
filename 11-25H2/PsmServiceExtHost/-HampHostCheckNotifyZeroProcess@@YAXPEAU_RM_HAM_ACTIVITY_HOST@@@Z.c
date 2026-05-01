/*
 * XREFs of ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180008C40
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180018448 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800090D0 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009140 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180009594 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001834C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HampHostCheckNotifyZeroProcess(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  DWORD v2; // edi
  unsigned int v3; // r15d
  _QWORD *Value; // rbx
  __int64 v5; // r14
  int v6; // r12d
  char *v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdx
  bool v10; // zf
  const wchar_t *v11; // rsi
  int v12; // r14d
  __int64 *v13; // rax
  __int64 v14; // rcx
  int v15; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v16; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v17; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR v19; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+90h] [rbp-78h] BYREF
  void *v22; // [rsp+A0h] [rbp-68h]
  int v23; // [rsp+A8h] [rbp-60h]
  int v24; // [rsp+ACh] [rbp-5Ch]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  void *v26; // [rsp+C8h] [rbp-40h]
  int v27; // [rsp+D0h] [rbp-38h]
  int v28; // [rsp+D4h] [rbp-34h]
  const wchar_t *v29; // [rsp+D8h] [rbp-30h]
  int v30; // [rsp+E0h] [rbp-28h]
  int v31; // [rsp+E4h] [rbp-24h]
  __int64 *v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  int *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]

  LODWORD(v17) = 0;
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
  {
    *(_DWORD *)&v19.Level = 260;
    v21.Ptr = (ULONGLONG)off_1800E72B8;
    *(_DWORD *)&v19.Id = 184549376;
    v19.Keyword = 64LL;
    v21.Size = *(unsigned __int16 *)off_1800E72B8;
    v22 = &unk_1800D2CE7;
    v21.Reserved = 2;
    v23 = 27;
    v24 = 1;
    v16 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v19, 0LL, 0LL, 2u, &v21);
  }
  v2 = HampLockTrackerId;
  v3 = 0;
  v16 = 0;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  v5 = -1LL;
  if ( (*((_QWORD *)a1 + 83) & 0x800000000LL) != 0 )
  {
    v6 = 1;
    v7 = (char *)a1 + 696;
  }
  else
  {
    v6 = 0;
    HampHostStartProcessPresenceChange(a1);
    if ( (*((_QWORD *)a1 + 83) & 0x2000000000000LL) != 0 )
    {
      if ( HampLockTrackerId != -1 )
      {
        v13 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v14 = *v13;
        if ( (*v13 & 2) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        v10 = v13[2]-- == 1;
        if ( v10 )
          *v13 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      *((_DWORD *)a1 + 2) = 0;
      RtlReleaseSRWLockExclusive(a1);
      (*(void (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, _QWORD, __int64 *))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL)
                                                                                             + 72LL))(
        (char *)a1 + 488,
        *((unsigned int *)a1 + 139),
        (char *)a1 + 24,
        *((unsigned int *)a1 + 140),
        *((_QWORD *)a1 - 4),
        *((_BYTE *)a1 + 592) != 0 ? 4 : 0,
        0LL,
        &v17);
      if ( (_DWORD)v17 )
      {
        HampHostAcquireLockExclusiveEx(a1, 0);
      }
      else
      {
        HampHostNotifyZeroProcess(a1, 0LL, 0LL, 0LL, &v16);
        v3 = v16;
      }
    }
    v7 = (char *)a1 + 696;
    *((_QWORD *)a1 + 83) &= ~0x1000000000000uLL;
    RtlWakeAllConditionVariable((char *)a1 + 696);
  }
  if ( HampLockTrackerId != -1 )
  {
    v8 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v9 = *v8;
    if ( (*v8 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v10 = v8[2]-- == 1;
    if ( v10 )
      *v8 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  if ( v6 )
    RtlWakeAllConditionVariable(v7);
  if ( v3 )
    RmHamHostDereference(a1);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 && (qword_1800E72C8 & 8) == qword_1800E72C8 )
  {
    LOBYTE(v15) = *((_BYTE *)a1 + 560);
    v18 = *((_QWORD *)a1 - 4);
    v34 = &v15;
    v32 = &v18;
    v35 = 1LL;
    v33 = 8LL;
    v11 = (const wchar_t *)((char *)a1 + 24);
    if ( v11 )
    {
      do
        ++v5;
      while ( v11[v5] );
      v12 = 2 * v5 + 2;
    }
    else
    {
      v11 = &word_1800C10AC;
      v12 = 2;
    }
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E72B8;
    EventDescriptor.Keyword = 8LL;
    v29 = v11;
    v30 = v12;
    v31 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E72B8;
    v26 = &unk_1800D2C3E;
    UserData.Reserved = 2;
    v27 = 53;
    v28 = 1;
    v16 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
}
