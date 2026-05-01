/*
 * XREFs of ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18001B3A0
 * Callers:
 *     HamRpcSrvGetApplicationInterruptiveUIState @ 0x180066BA0 (HamRpcSrvGetApplicationInterruptiveUIState.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x180043CC8 (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x18005846C (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvGetApplicationInterruptiveUIState(
        struct _HOST_ACTIVITY_MANAGER *a1,
        char *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  char v9; // r15
  DWORD v10; // ebx
  unsigned int v11; // ebx
  _WORD *v12; // rdx
  __int64 v13; // r8
  __int16 v14; // ax
  _WORD *v15; // rax
  struct _HAM_APPLICATION *v16; // rax
  struct _HAM_APPLICATION *v17; // r14
  unsigned int InterruptiveUIState; // eax
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  char v23; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v25; // [rsp+38h] [rbp-C8h] BYREF
  struct _HOST_ACTIVITY_MANAGER *v26; // [rsp+40h] [rbp-C0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[464]; // [rsp+F0h] [rbp-10h] BYREF
  char DestinationSid[68]; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned int v31; // [rsp+304h] [rbp+204h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+310h] [rbp+210h] BYREF
  void *v33; // [rsp+320h] [rbp+220h]
  int v34; // [rsp+328h] [rbp+228h]
  int v35; // [rsp+32Ch] [rbp+22Ch]
  unsigned int *v36; // [rsp+330h] [rbp+230h]
  __int64 v37; // [rsp+338h] [rbp+238h]
  char *v38; // [rsp+340h] [rbp+240h]
  int v39; // [rsp+348h] [rbp+248h]
  int v40; // [rsp+34Ch] [rbp+24Ch]
  unsigned __int8 *v41; // [rsp+350h] [rbp+250h]
  int v42; // [rsp+358h] [rbp+258h]
  int v43; // [rsp+35Ch] [rbp+25Ch]
  unsigned int *v44; // [rsp+360h] [rbp+260h]
  __int64 v45; // [rsp+368h] [rbp+268h]
  char *v46; // [rsp+370h] [rbp+270h]
  __int64 v47; // [rsp+378h] [rbp+278h]

  v26 = a1;
  memset_0(v29, 0, 0x218uLL);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E72B0,
      byte_1800D34D0);
  v9 = 0;
  memset_0(TlsValue, 0, 0x88uLL);
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v10, TlsValue);
  }
  v11 = 0;
  if ( (unsigned __int8)PsmIsValidKey(a2) )
  {
    if ( a4 >= 0xC && RtlValidSid(a3) && RtlLengthSid(a3) == a4 )
    {
      memset_0(v29, 0, 0x218uLL);
      if ( (unsigned __int8)PsmIsValidKey(a2) && RtlValidSid(a3) )
        RtlLengthSid(a3);
      v12 = v29;
      v13 = 232LL;
      do
      {
        if ( v13 == -2147483414 )
          break;
        v14 = *(_WORD *)((char *)v12 + a2 - v29);
        if ( !v14 )
          break;
        *v12++ = v14;
        --v13;
      }
      while ( v13 );
      v15 = v12 - 1;
      if ( v13 )
        v15 = v12;
      *v15 = 0;
      RtlCopySid(0x44u, DestinationSid, a3);
      v31 = a5;
      v16 = HampAppFind(v26, (struct _HAM_APPLICATION_INFO *)v29);
      v17 = v16;
      if ( v16 )
      {
        InterruptiveUIState = HampAppGetInterruptiveUIState(v16);
        v9 = InterruptiveUIState;
        *a6 = InterruptiveUIState;
        CemRcObjectDereference(v17);
      }
      else
      {
        v11 = -1073741275;
      }
    }
    else
    {
      v11 = -1073741584;
    }
  }
  else
  {
    v11 = -1073741585;
  }
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 && (qword_1800E72C8 & 8) == qword_1800E72C8 )
  {
    v24 = a5;
    v46 = &v23;
    v23 = v9;
    v44 = &v24;
    v25 = v11;
    v47 = 1LL;
    v45 = 4LL;
    v20 = a3[1];
    v41 = a3;
    v43 = 0;
    v42 = 4 * v20 + 8;
    if ( a2 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( *(_WORD *)&a2[2 * v21] );
      v22 = 2 * v21 + 2;
    }
    else
    {
      a2 = (char *)&word_1800C10AC;
      v22 = 2;
    }
    v39 = v22;
    v37 = 4LL;
    v36 = &v25;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E72B8;
    v38 = a2;
    v40 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800E72B8;
    v33 = &unk_1800D44A2;
    UserData.Reserved = 2;
    v34 = 96;
    v35 = 1;
    LODWORD(v26) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return v11;
}
