/*
 * XREFs of PopAdaptiveStandbyWnfCallback @ 0x140762DD0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     EtwActivityIdControl @ 0x14041E010 (EtwActivityIdControl.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     IoGetActivityIdThread @ 0x14043F3F0 (IoGetActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x14045C3B0 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140463690 (IoClearActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D787C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCalculateBatteryInformation @ 0x140760448 (PopAdaptiveStandbyCalculateBatteryInformation.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140761118 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyTraceSessionSettings @ 0x14076298C (PopAdaptiveStandbyTraceSessionSettings.c)
 *     ExQueryWnfStateData @ 0x140A3BB60 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopAdaptiveStandbyWnfCallback(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  struct _LIST_ENTRY *v7; // rax
  __int64 v8; // rax
  int v9; // ebx
  struct _LIST_ENTRY *ActivityIdThread; // rax
  int v11; // ebx
  struct _LIST_ENTRY *v12; // rax
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  bool v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-B0h] BYREF
  GUID *v19; // [rsp+60h] [rbp-A0h]
  __int128 v20; // [rsp+68h] [rbp-98h] BYREF
  __int128 v21; // [rsp+78h] [rbp-88h] BYREF
  int v22; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v23[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+C0h] [rbp-40h]
  int v26; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v27[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v28; // [rsp+F0h] [rbp-10h]
  int v29; // [rsp+F8h] [rbp-8h]
  int v30; // [rsp+FCh] [rbp-4h]
  int *v31; // [rsp+100h] [rbp+0h]
  int v32; // [rsp+108h] [rbp+8h]
  int v33; // [rsp+10Ch] [rbp+Ch]
  int *v34; // [rsp+110h] [rbp+10h]
  int v35; // [rsp+118h] [rbp+18h]
  int v36; // [rsp+11Ch] [rbp+1Ch]

  v17 = 0LL;
  v19 = 0LL;
  v22 = 0;
  v25 = 0LL;
  v26 = 0;
  ActivityId = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v7 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v19 = (GUID *)v7;
  if ( (unsigned int)dword_140E08258 > 5 )
  {
    v30 = 0;
    v33 = 0;
    v31 = &v15;
    v28 = a2;
    v29 = 8;
    v15 = a4;
    v32 = 4;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08258,
      (unsigned __int8 *)&byte_14004DDD7,
      &ActivityId,
      (const GUID *)v7,
      4u,
      v27);
  }
  PopAcquireRwLockExclusive(&PopAdaptiveStandbyLock);
  v8 = *a2;
  if ( *a2 == WNF_PO_COMPOSITE_BATTERY )
  {
    v14 = 60;
    v9 = ExQueryWnfStateData(a1, &v15, v23, &v14);
    if ( v9 < 0 )
      goto LABEL_32;
    if ( v14 != 60 )
      goto LABEL_6;
    PopAdaptiveStandbyCalculateBatteryInformation(v23, (__int64)&v21);
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    {
      dword_140F06ED8 = v22;
      xmmword_140F06EC8 = v21;
    }
    PopAdaptiveStandbyHandleBatteryUpdate((__int64)PopAdaptiveStandbyContext, (NTSTATUS *)&v21);
    goto LABEL_30;
  }
  if ( v8 == WNF_SEB_AUDIO_ACTIVITY )
  {
    v14 = 8;
    v9 = ExQueryWnfStateData(a1, &v15, &v17, &v14);
    if ( v9 < 0 )
      goto LABEL_32;
    if ( v14 == 8 )
    {
      byte_140F06EF0 = (v17 & 2) != 0;
      if ( (unsigned int)dword_140E08258 > 5 )
      {
        v16 = (v17 & 2) != 0;
        *(_QWORD *)&v24 = &v16;
        *((_QWORD *)&v24 + 1) = 1LL;
        ActivityIdThread = IoGetActivityIdThread();
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E08258,
          (unsigned __int8 *)&word_14004DD9E,
          (const GUID *)ActivityIdThread,
          0LL,
          3u,
          v23);
      }
LABEL_30:
      v9 = 0;
      goto LABEL_32;
    }
LABEL_6:
    v9 = -1073741789;
    goto LABEL_32;
  }
  if ( v8 == WNF_PO_SLEEPSTUDY_SESSION_CHANGE )
  {
    v14 = 16;
    v9 = ExQueryWnfStateData(a1, &v15, &v20, &v14);
    if ( v9 < 0 )
      goto LABEL_32;
    if ( v14 != 16 )
      goto LABEL_6;
    v11 = DWORD2(v20);
    if ( (_DWORD)qword_140F06F28 == 1 )
    {
      if ( DWORD2(v20) == 2 )
        goto LABEL_23;
    }
    else if ( (_DWORD)qword_140F06F28 != 2 )
    {
      goto LABEL_23;
    }
    PopAdaptiveStandbyTraceSessionSettings();
LABEL_23:
    if ( !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() && v11 == 1 )
    {
      dword_140F06F4C = dword_140F06E64;
      *(_OWORD *)((char *)&qword_140F06F28 + 4) = xmmword_140F06E44;
      dword_140F06F70 = dword_140F06E98;
      xmmword_140F06F3C = xmmword_140F06E54;
      unk_140F06F50 = unk_140F06E78;
      xmmword_140F06F60 = xmmword_140F06E88;
    }
    qword_140F06F20 = v20;
    LODWORD(qword_140F06F28) = v11;
    if ( (unsigned int)dword_140E08258 > 5 )
    {
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v17 = v20;
      v28 = &v17;
      v31 = &v15;
      v14 = HIDWORD(v20);
      v34 = &v14;
      v29 = 8;
      v15 = v11;
      v32 = 4;
      v35 = 4;
      v12 = IoGetActivityIdThread();
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08258,
        (unsigned __int8 *)byte_14004DD48,
        (const GUID *)v12,
        0LL,
        5u,
        v27);
    }
    if ( (_DWORD)qword_140F06F28 == 1 )
      PopAdaptiveStandbyTraceSessionSettings();
    goto LABEL_30;
  }
  v9 = -1073741811;
LABEL_32:
  PopReleaseRwLock((signed __int64 *)&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08258 > 5 )
  {
    *(_QWORD *)&v24 = &v15;
    v15 = v9;
    *((_QWORD *)&v24 + 1) = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08258,
      (unsigned __int8 *)byte_14004DD23,
      &ActivityId,
      v19,
      3u,
      v23);
  }
  IoClearActivityIdThread((struct _LIST_ENTRY *)v19);
  return (unsigned int)v9;
}
