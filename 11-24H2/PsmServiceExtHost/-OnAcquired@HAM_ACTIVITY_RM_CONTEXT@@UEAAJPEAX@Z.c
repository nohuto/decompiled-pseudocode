/*
 * XREFs of ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x18005D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampActNotifyResourcesAcquired@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18005D71C (-HampActNotifyResourcesAcquired@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HAM_ACTIVITY_RM_CONTEXT::OnAcquired(HAM_ACTIVITY_RM_CONTEXT *this, void *a2)
{
  DWORD v4; // esi
  __int64 v5; // r14
  _QWORD *Value; // rbx
  char v7; // si
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v12; // rcx
  char v14; // [rsp+38h] [rbp-99h] BYREF
  char v15; // [rsp+39h] [rbp-98h] BYREF
  char v16; // [rsp+3Ah] [rbp-97h] BYREF
  unsigned int v17; // [rsp+3Ch] [rbp-95h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-91h] BYREF
  __int64 v19; // [rsp+50h] [rbp-81h] BYREF
  EVENT_DESCRIPTOR v20; // [rsp+58h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-69h] BYREF
  void *v22; // [rsp+78h] [rbp-59h]
  int v23; // [rsp+80h] [rbp-51h]
  int v24; // [rsp+84h] [rbp-4Dh]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+88h] [rbp-49h] BYREF
  void *v26; // [rsp+98h] [rbp-39h]
  int v27; // [rsp+A0h] [rbp-31h]
  int v28; // [rsp+A4h] [rbp-2Dh]
  __int64 *v29; // [rsp+A8h] [rbp-29h]
  __int64 v30; // [rsp+B0h] [rbp-21h]
  char *v31; // [rsp+B8h] [rbp-19h]
  __int64 v32; // [rsp+C0h] [rbp-11h]
  char *v33; // [rsp+C8h] [rbp-9h]
  __int64 v34; // [rsp+D0h] [rbp-1h]
  char *v35; // [rsp+D8h] [rbp+7h]
  __int64 v36; // [rsp+E0h] [rbp+Fh]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+E8h] [rbp+17h]
  __int64 v38; // [rsp+F0h] [rbp+1Fh]

  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E82B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E82B8;
    v22 = &unk_1800D714F;
    UserData.Reserved = 2;
    v23 = 30;
    v24 = 1;
    v17 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v4 = HampLockTrackerId;
  v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 80LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v5);
  *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
  if ( a2 == *((void **)this + 2) )
    v7 = HampActNotifyResourcesAcquired(*((_QWORD *)this + 1));
  else
    v7 = 1;
  v8 = *(_QWORD *)(*((_QWORD *)this + 1) + 80LL);
  if ( HampLockTrackerId != -1 )
  {
    v9 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v10 = *v9;
    if ( (*v9 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v9[2]-- == 1 )
      *v9 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v8 + 8) = 0;
  RtlReleaseSRWLockExclusive(v8);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v12 = *((_QWORD *)this + 1);
    *(_QWORD *)&EventDescriptor.Id = a2;
    v38 = 8LL;
    v30 = 8LL;
    v14 = *(_BYTE *)(v12 + 563);
    v15 = *(_BYTE *)(v12 + 562);
    v16 = v7;
    v19 = *(_QWORD *)(v12 + 40);
    p_EventDescriptor = &EventDescriptor;
    v35 = &v14;
    v33 = &v15;
    v31 = &v16;
    v29 = &v19;
    *(_DWORD *)&v20.Level = 516;
    v25.Ptr = (ULONGLONG)off_1800E82B8;
    v20.Keyword = 8LL;
    v36 = 1LL;
    v34 = 1LL;
    v32 = 1LL;
    *(_DWORD *)&v20.Id = 184549376;
    v25.Size = *(unsigned __int16 *)off_1800E82B8;
    v26 = &unk_1800D719F;
    v25.Reserved = 2;
    v27 = 92;
    v28 = 1;
    v17 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v20, 0LL, 0LL, 7u, &v25);
  }
  return 0LL;
}
