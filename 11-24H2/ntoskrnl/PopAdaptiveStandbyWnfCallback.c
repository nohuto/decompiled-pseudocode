/*
 * XREFs of PopAdaptiveStandbyWnfCallback @ 0x140762640
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     IoGetActivityIdThread @ 0x140435520 (IoGetActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x140451750 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140459F90 (IoClearActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D4DFC (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCalculateBatteryInformation @ 0x14075F448 (PopAdaptiveStandbyCalculateBatteryInformation.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140760484 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyTraceSessionSettings @ 0x14076215C (PopAdaptiveStandbyTraceSessionSettings.c)
 *     ExQueryWnfStateData @ 0x140A31340 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopAdaptiveStandbyWnfCallback(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  struct _LIST_ENTRY *v7; // rax
  __int64 v8; // rax
  int v9; // ebx
  int v10; // ecx
  struct _LIST_ENTRY *ActivityIdThread; // rax
  struct _LIST_ENTRY *v12; // rax
  int v13; // ebx
  struct _LIST_ENTRY *v14; // rax
  _BYTE v16[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  char v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+54h] [rbp-ACh] BYREF
  int v23; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  GUID ActivityId; // [rsp+70h] [rbp-90h] BYREF
  GUID *v27; // [rsp+80h] [rbp-80h]
  __int128 v28; // [rsp+88h] [rbp-78h] BYREF
  int v29; // [rsp+98h] [rbp-68h]
  __int128 v30; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-20h]
  int v34; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v35[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  __int64 *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  int *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+140h] [rbp+40h] BYREF
  char *v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h]
  int *v45; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+178h] [rbp+78h]
  int *v47; // [rsp+180h] [rbp+80h]
  __int64 v48; // [rsp+188h] [rbp+88h]
  int *v49; // [rsp+190h] [rbp+90h]
  __int64 v50; // [rsp+198h] [rbp+98h]
  int *v51; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h]
  _BYTE *v53; // [rsp+1B0h] [rbp+B0h]
  __int64 v54; // [rsp+1B8h] [rbp+B8h]
  __int64 *v55; // [rsp+1C0h] [rbp+C0h]
  __int64 v56; // [rsp+1C8h] [rbp+C8h]
  char *v57; // [rsp+1D0h] [rbp+D0h]
  __int64 v58; // [rsp+1D8h] [rbp+D8h]
  __int64 *v59; // [rsp+1E0h] [rbp+E0h]
  __int64 v60; // [rsp+1E8h] [rbp+E8h]
  int *v61; // [rsp+1F0h] [rbp+F0h]
  __int64 v62; // [rsp+1F8h] [rbp+F8h]
  __int64 *v63; // [rsp+200h] [rbp+100h]
  __int64 v64; // [rsp+208h] [rbp+108h]

  v27 = 0LL;
  v29 = 0;
  v33 = 0LL;
  v34 = 0;
  v20 = 0LL;
  ActivityId = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  memset(v31, 0, sizeof(v31));
  v32 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v7 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v27 = (GUID *)v7;
  if ( (unsigned int)dword_140E08218 > 5 )
  {
    v19 = a4;
    v38 = (__int64 *)&v19;
    v36 = a2;
    v37 = 8LL;
    v39 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)byte_14004EBA8,
      &ActivityId,
      (const GUID *)v7,
      4u,
      v35);
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock);
  v8 = *a2;
  if ( *a2 == WNF_PO_COMPOSITE_BATTERY )
  {
    v17 = 60;
    v9 = ExQueryWnfStateData(a1, &v19, v31, &v17);
    if ( v9 < 0 )
      goto LABEL_34;
    if ( v17 != 60 )
      goto LABEL_6;
    PopAdaptiveStandbyCalculateBatteryInformation(v31, (__int64)&v28);
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    {
      v10 = dword_140F071D8;
      xmmword_140F071DC = xmmword_140F071C8;
      dword_140F071EC = dword_140F071D8;
      dword_140F071D8 = v29;
      xmmword_140F071C8 = v28;
      if ( (unsigned int)dword_140E08218 > 5 )
      {
        v44 = 1LL;
        v18 = v28 & 1;
        v43 = &v18;
        v19 = DWORD1(v28);
        v45 = &v19;
        v17 = DWORD2(v28);
        v47 = &v17;
        v22 = HIDWORD(v28);
        v49 = &v22;
        v51 = &v23;
        v46 = 4LL;
        v16[0] = xmmword_140F071DC & 1;
        v53 = v16;
        v24 = *(_QWORD *)((char *)&xmmword_140F071DC + 4);
        v55 = &v24;
        v57 = (char *)&v24 + 4;
        LODWORD(v25) = HIDWORD(xmmword_140F071DC);
        v59 = &v25;
        v61 = &v21;
        LODWORD(v20) = dword_140F0722C;
        v63 = &v20;
        v48 = 4LL;
        v50 = 4LL;
        v23 = v29;
        v52 = 4LL;
        v54 = 1LL;
        v56 = 4LL;
        v58 = 4LL;
        v60 = 4LL;
        v21 = v10;
        v62 = 4LL;
        v64 = 4LL;
        ActivityIdThread = IoGetActivityIdThread();
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E08218,
          (unsigned __int8 *)word_14004EA62,
          (const GUID *)ActivityIdThread,
          0LL,
          0xDu,
          &v42);
      }
    }
    PopAdaptiveStandbyHandleBatteryUpdate((__int64)PopAdaptiveStandbyContext, (__int64)&v28);
    goto LABEL_32;
  }
  if ( v8 == WNF_SEB_AUDIO_ACTIVITY )
  {
    v17 = 8;
    v9 = ExQueryWnfStateData(a1, &v19, &v20, &v17);
    if ( v9 < 0 )
      goto LABEL_34;
    if ( v17 == 8 )
    {
      byte_140F07204 = (v20 & 2) != 0;
      if ( (unsigned int)dword_140E08218 > 5 )
      {
        v16[0] = (v20 & 2) != 0;
        *(_QWORD *)&v32 = v16;
        *((_QWORD *)&v32 + 1) = 1LL;
        v12 = IoGetActivityIdThread();
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E08218,
          (unsigned __int8 *)byte_14004E9C0,
          (const GUID *)v12,
          0LL,
          3u,
          v31);
      }
LABEL_32:
      v9 = 0;
      goto LABEL_34;
    }
LABEL_6:
    v9 = -1073741789;
    goto LABEL_34;
  }
  if ( v8 == WNF_PO_SLEEPSTUDY_SESSION_CHANGE )
  {
    v17 = 16;
    v9 = ExQueryWnfStateData(a1, &v19, &v30, &v17);
    if ( v9 < 0 )
      goto LABEL_34;
    if ( v17 != 16 )
      goto LABEL_6;
    v13 = DWORD2(v30);
    if ( (_DWORD)qword_140F07238 == 1 )
    {
      if ( DWORD2(v30) == 2 )
        goto LABEL_24;
    }
    else if ( (_DWORD)qword_140F07238 != 2 )
    {
      goto LABEL_24;
    }
    PopAdaptiveStandbyTraceSessionSettings();
LABEL_24:
    if ( !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() && v13 == 1 )
    {
      dword_140F0725C = dword_140F07164;
      *(_OWORD *)((char *)&qword_140F07238 + 4) = xmmword_140F07144;
      dword_140F07280 = dword_140F07198;
      xmmword_140F0724C = xmmword_140F07154;
      unk_140F07260 = unk_140F07178;
      xmmword_140F07270 = xmmword_140F07188;
    }
    qword_140F07230 = v30;
    LODWORD(qword_140F07238) = v13;
    if ( (unsigned int)dword_140E08218 > 5 )
    {
      v25 = v30;
      v36 = &v25;
      v38 = &v20;
      v21 = HIDWORD(v30);
      v40 = &v21;
      v37 = 8LL;
      LODWORD(v20) = v13;
      v39 = 4LL;
      v41 = 4LL;
      v14 = IoGetActivityIdThread();
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08218,
        (unsigned __int8 *)word_14004E96A,
        (const GUID *)v14,
        0LL,
        5u,
        v35);
    }
    if ( !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline()
      && (_DWORD)qword_140F07238 == 1 )
    {
      PopAdaptiveStandbyTraceSessionSettings();
    }
    goto LABEL_32;
  }
  v9 = -1073741811;
LABEL_34:
  PopReleaseRwLock(&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08218 > 5 )
  {
    *(_QWORD *)&v32 = &v20;
    LODWORD(v20) = v9;
    *((_QWORD *)&v32 + 1) = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)byte_14004EA1B,
      &ActivityId,
      v27,
      3u,
      v31);
  }
  IoClearActivityIdThread((struct _LIST_ENTRY *)v27);
  return (unsigned int)v9;
}
