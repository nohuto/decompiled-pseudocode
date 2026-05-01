/*
 * XREFs of ?RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18001D380
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001D790 (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemNotificationAcquireInputFocusLock@@YAXPEAU_RM_SYSTEM_NOTIFICATION_CONTEXT@@@Z @ 0x18001D7D4 (-RmpSystemNotificationAcquireInputFocusLock@@YAXPEAU_RM_SYSTEM_NOTIFICATION_CONTEXT@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemNotificationInputFocusChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        int *a5)
{
  int v7; // eax
  char i; // cl
  unsigned int v9; // ebx
  void *v10; // rdi
  int v11; // edi
  char v12; // cl
  bool v14; // dl
  bool v15; // al
  int v16; // eax
  bool v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD v21[2]; // [rsp+40h] [rbp-C0h] BYREF
  void *ProcessHandle; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-60h]
  struct _WNF_STATE_NAME v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  struct _WNF_STATE_NAME v29; // [rsp+B8h] [rbp-48h]
  _BYTE v30[144]; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+50h] BYREF
  void *v32; // [rsp+160h] [rbp+60h]
  int v33; // [rsp+168h] [rbp+68h]
  int v34; // [rsp+16Ch] [rbp+6Ch]
  _DWORD *v35; // [rsp+170h] [rbp+70h]
  __int64 v36; // [rsp+178h] [rbp+78h]
  int *v37; // [rsp+180h] [rbp+80h]
  __int64 v38; // [rsp+188h] [rbp+88h]
  int *v39; // [rsp+190h] [rbp+90h]
  __int64 v40; // [rsp+198h] [rbp+98h]
  int *v41; // [rsp+1A0h] [rbp+A0h]
  __int64 v42; // [rsp+1A8h] [rbp+A8h]
  bool *v43; // [rsp+1B0h] [rbp+B0h]
  __int64 v44; // [rsp+1B8h] [rbp+B8h]

  memset_0(v30, 0, 0x88uLL);
  ProcessHandle = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v30);
  RmpSystemNotificationAcquireInputFocusLock((struct _RM_SYSTEM_NOTIFICATION_CONTEXT *)(a4 + 576));
  v26 = WNF_SHEL_FOCUS_CHANGE;
  v27 = a1;
  if ( a1 == WNF_SHEL_FOCUS_CHANGE )
  {
    if ( a5 )
      v7 = *a5;
    else
      v7 = 0;
    if ( v7 != *((_DWORD *)a4 + 156) )
    {
      *((_DWORD *)a4 + 156) = v7;
LABEL_6:
      a4[644] |= 1u;
    }
  }
  else
  {
    v28 = WNF_HOLO_SYSTEM_DISPLAY_CONTEXT_CHANGE;
    v29 = a1;
    if ( a1 == WNF_HOLO_SYSTEM_DISPLAY_CONTEXT_CHANGE )
    {
      if ( a5 )
        v14 = *a5 == 1;
      else
        v14 = 0;
      if ( v14 != ((a4[644] & 4) != 0) )
        a4[644] = (4 * v14) | a4[644] & 0xFB | 1;
    }
    else
    {
      if ( a5 )
        v16 = a5[4];
      else
        v16 = 0;
      if ( v16 != *((_DWORD *)a4 + 157) )
      {
        *((_DWORD *)a4 + 157) = v16;
        goto LABEL_6;
      }
    }
  }
  if ( (a4[644] & 3) == 1 )
  {
    for ( i = a4[644] | 2; (i & 1) != 0; i = a4[644] )
    {
      v11 = *((_DWORD *)a4 + 160);
      v12 = i & 0xFE;
      a4[644] = v12;
      if ( (v12 & 4) != 0 )
        v9 = *((_DWORD *)a4 + 157);
      else
        v9 = *((_DWORD *)a4 + 156);
      if ( v9 != v11 )
      {
        if ( !v9
          || (ClientId.UniqueProcess = (HANDLE)v9,
              *(_QWORD *)&ObjectAttributes.Length = 48LL,
              ClientId.UniqueThread = 0LL,
              memset(&ObjectAttributes.RootDirectory, 0, 40),
              NtOpenProcess(&ProcessHandle, 0x2000u, &ObjectAttributes, &ClientId) >= 0)
          || (v9 = 0, v11) )
        {
          if ( (unsigned int)dword_1800E8278 > 5
            && (byte_1800E8288 & 1) != 0
            && (qword_1800E8290 & 1) == qword_1800E8290 )
          {
            v15 = (a4[644] & 4) != 0;
            v21[0] = v9;
            v17 = v15;
            v18 = *((_DWORD *)a4 + 157);
            v19 = *((_DWORD *)a4 + 156);
            v20 = *((_DWORD *)a4 + 160);
            v43 = &v17;
            v41 = &v18;
            v39 = &v19;
            v37 = &v20;
            v35 = v21;
            *(_DWORD *)&EventDescriptor.Level = 5;
            UserData.Ptr = (ULONGLONG)off_1800E8280;
            v44 = 1LL;
            v42 = 4LL;
            v40 = 4LL;
            v38 = 4LL;
            v36 = 4LL;
            *(_DWORD *)&EventDescriptor.Id = 184549376;
            EventDescriptor.Keyword = 1LL;
            UserData.Size = *(unsigned __int16 *)off_1800E8280;
            v32 = &unk_1800D95B7;
            UserData.Reserved = 2;
            v33 = 104;
            v34 = 1;
            v21[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EventWriteTransfer(qword_1800E8298, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
          }
          v10 = (void *)*((_QWORD *)a4 + 79);
          *((_QWORD *)a4 + 79) = ProcessHandle;
          *((_DWORD *)a4 + 160) = v9;
          *((_DWORD *)a4 + 162) = 0;
          ProcessHandle = 0LL;
          RtlReleaseSRWLockExclusive(a4 + 592);
          if ( v10 )
            NtClose(v10);
          RtlAcquireSRWLockExclusive(a4 + 2168);
          *((_DWORD *)a4 + 544) = GetCurrentThreadId();
          RmpGameModeQueuePolicyWorkerWithLock((struct _RM_GAME_MODE_CONTEXT *)(a4 + 2096));
          *((_DWORD *)a4 + 544) = 0;
          RtlReleaseSRWLockExclusive(a4 + 2168);
          RtlAcquireSRWLockExclusive(a4 + 592);
          *((_DWORD *)a4 + 162) = GetCurrentThreadId();
        }
      }
    }
    a4[644] = i & 0xFD;
  }
  *((_DWORD *)a4 + 162) = 0;
  RtlReleaseSRWLockExclusive(a4 + 592);
  CempLockTrackerClearForThread(HampLockTrackerId);
  return 0LL;
}
