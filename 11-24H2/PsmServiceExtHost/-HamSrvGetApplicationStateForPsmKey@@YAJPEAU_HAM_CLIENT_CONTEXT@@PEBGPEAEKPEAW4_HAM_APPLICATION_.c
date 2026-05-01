/*
 * XREFs of ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180057E50
 * Callers:
 *     HamRpcSrvGetApplicationStateForPsmKey @ 0x18006C300 (HamRpcSrvGetApplicationStateForPsmKey.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180017520 (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18001E74C (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x1800583EC (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800588E4 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvGetApplicationStateForPsmKey(
        struct _HAM_CLIENT_CONTEXT *a1,
        char *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        enum _HAM_APPLICATION_EXECUTION_STATE *a5,
        enum _HAM_TERMINATE_REASON *a6)
{
  int v9; // edi
  int v10; // esi
  DWORD v11; // ebx
  int v12; // ebx
  unsigned __int16 *v13; // rcx
  __int64 v14; // rdx
  unsigned __int16 v15; // ax
  unsigned __int16 *v16; // rax
  struct _HAM_APPLICATION *v17; // rax
  struct _HAM_APPLICATION *v18; // r14
  _DWORD *v19; // rax
  unsigned int v20; // ebx
  DWORD v21; // r14d
  struct _HAM_CLIENT_CONTEXT *v23; // rax
  __int64 v24; // rax
  int v25; // eax
  int RegistryTerminateReason; // eax
  unsigned int v27; // [rsp+30h] [rbp-D0h] BYREF
  char v28; // [rsp+34h] [rbp-CCh] BYREF
  struct _HAM_CLIENT_CONTEXT *v29; // [rsp+38h] [rbp-C8h] BYREF
  enum _HAM_TERMINATE_REASON *v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR v32; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v34[232]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE DestinationSid[68]; // [rsp+240h] [rbp+140h] BYREF
  int v36; // [rsp+284h] [rbp+184h]
  _BYTE TlsValue[144]; // [rsp+290h] [rbp+190h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+320h] [rbp+220h] BYREF
  void *v39; // [rsp+330h] [rbp+230h]
  int v40; // [rsp+338h] [rbp+238h]
  int v41; // [rsp+33Ch] [rbp+23Ch]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+340h] [rbp+240h] BYREF
  void *v43; // [rsp+350h] [rbp+250h]
  int v44; // [rsp+358h] [rbp+258h]
  int v45; // [rsp+35Ch] [rbp+25Ch]
  struct _HAM_CLIENT_CONTEXT **v46; // [rsp+360h] [rbp+260h]
  __int64 v47; // [rsp+368h] [rbp+268h]
  char *v48; // [rsp+370h] [rbp+270h]
  int v49; // [rsp+378h] [rbp+278h]
  int v50; // [rsp+37Ch] [rbp+27Ch]
  unsigned __int8 *v51; // [rsp+380h] [rbp+280h]
  int v52; // [rsp+388h] [rbp+288h]
  int v53; // [rsp+38Ch] [rbp+28Ch]
  enum _HAM_TERMINATE_REASON **v54; // [rsp+390h] [rbp+290h]
  __int64 v55; // [rsp+398h] [rbp+298h]
  char *v56; // [rsp+3A0h] [rbp+2A0h]
  __int64 v57; // [rsp+3A8h] [rbp+2A8h]
  int *v58; // [rsp+3B0h] [rbp+2B0h]
  __int64 v59; // [rsp+3B8h] [rbp+2B8h]

  v29 = a1;
  v30 = a6;
  memset_0(v34, 0, 0x218uLL);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
  {
    *(_DWORD *)&v32.Level = 260;
    v38.Ptr = (ULONGLONG)off_1800E82B8;
    *(_DWORD *)&v32.Id = 184549376;
    v32.Keyword = 64LL;
    v38.Size = *(unsigned __int16 *)off_1800E82B8;
    v39 = &unk_1800D4FF0;
    v38.Reserved = 2;
    v40 = 24;
    v41 = 1;
    v27 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v32, 0LL, 0LL, 2u, &v38);
  }
  v9 = 6912;
  v27 = 6912;
  LOBYTE(v10) = 4;
  memset_0(TlsValue, 0, 0x88uLL);
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v11, TlsValue);
  }
  v12 = *((_DWORD *)v29 + 42);
  if ( (unsigned __int8)PsmIsValidKey(a2) )
  {
    if ( a4 >= 0xC && RtlValidSid(a3) && RtlLengthSid(a3) == a4 )
    {
      memset_0(v34, 0, 0x218uLL);
      if ( (unsigned __int8)PsmIsValidKey(a2) && RtlValidSid(a3) )
        RtlLengthSid(a3);
      v13 = v34;
      v14 = 232LL;
      do
      {
        if ( v14 == -2147483414 )
          break;
        v15 = *(unsigned __int16 *)((char *)v13 + a2 - (char *)v34);
        if ( !v15 )
          break;
        *v13++ = v15;
        --v14;
      }
      while ( v14 );
      v16 = v13 - 1;
      if ( v14 )
        v16 = v13;
      *v16 = 0;
      RtlCopySid(0x44u, DestinationSid, a3);
      v36 = v12;
      v17 = HampAppFind(
              (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)v29 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                              - 48LL * *((unsigned __int8 *)v29 + 164)
                                              - 16),
              (struct _HAM_APPLICATION_INFO *)v34);
      v18 = v17;
      if ( v17 )
      {
        HampAppAcquireLockShared(v17);
        v9 = *((unsigned __int16 *)v18 + 308);
        v10 = (*((_DWORD *)v18 + 155) >> 5) & 7;
        v27 = (unsigned __int16)v9;
        HampAppReleaseLockShared(v18);
        if ( v10 == 4 )
          v10 = 3;
        v19 = v30;
        *(_DWORD *)a5 = v10;
        v20 = 0;
        *v19 = v9;
        CemRcObjectDereference(v18);
      }
      else
      {
        RegistryTerminateReason = HampUtilQueryRegistryTerminateReason(
                                    v34,
                                    DestinationSid,
                                    (enum _HAM_TERMINATE_REASON *)&v27);
        v9 = v27;
        v20 = RegistryTerminateReason;
        if ( RegistryTerminateReason >= 0 )
        {
          *(_DWORD *)a5 = 3;
          LOBYTE(v10) = 3;
          v20 = 0;
          *(_DWORD *)v30 = v9;
        }
      }
    }
    else
    {
      v20 = -1073741584;
    }
  }
  else
  {
    v20 = -1073741585;
  }
  v21 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v21, 0LL);
  }
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v23 = v29;
    v31 = v9;
    v28 = v10;
    LODWORD(v29) = v20;
    LODWORD(v30) = *((_DWORD *)v23 + 42);
    v58 = &v31;
    v56 = &v28;
    v54 = &v30;
    v59 = 4LL;
    v57 = 1LL;
    v55 = 4LL;
    LODWORD(v23) = a3[1];
    v51 = a3;
    v53 = 0;
    v52 = 4 * (_DWORD)v23 + 8;
    if ( a2 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( *(_WORD *)&a2[2 * v24] );
      v25 = 2 * v24 + 2;
    }
    else
    {
      a2 = (char *)&word_1800C1FFC;
      v25 = 2;
    }
    v49 = v25;
    v47 = 4LL;
    v46 = &v29;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E82B8;
    EventDescriptor.Keyword = 8LL;
    v48 = a2;
    v50 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E82B8;
    v43 = &unk_1800D446F;
    UserData.Reserved = 2;
    v44 = 96;
    v45 = 1;
    v27 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  return v20;
}
