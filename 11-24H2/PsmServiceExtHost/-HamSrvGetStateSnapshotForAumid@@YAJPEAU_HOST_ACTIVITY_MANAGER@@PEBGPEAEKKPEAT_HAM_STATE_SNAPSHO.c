/*
 * XREFs of ?HamSrvGetStateSnapshotForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAT_HAM_STATE_SNAPSHOT@@@Z @ 0x18001C4C4
 * Callers:
 *     HamRpcSrvGetStateSnapshotForAumid @ 0x180066870 (HamRpcSrvGetStateSnapshotForAumid.c)
 * Callees:
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180013DE4 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     CempUtilValidateSid @ 0x18001C8B4 (CempUtilValidateSid.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampPkgGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z @ 0x180044384 (-HampPkgGetStateSnapshot@@YA-AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@6@Z @ 0x18005FDD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_t_ea_18005FDD8.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvGetStateSnapshotForAumid(
        struct _HOST_ACTIVITY_MANAGER *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned int a5,
        union _HAM_STATE_SNAPSHOT *a6)
{
  unsigned int v8; // edi
  unsigned __int8 StateSnapshot; // bl
  __int64 v10; // rsi
  _WORD *v11; // rcx
  __int16 v12; // ax
  _WORD *v13; // rax
  struct _HAM_PACKAGE *v14; // rax
  struct _HAM_PACKAGE *v15; // rsi
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  bool v20; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[3]; // [rsp+51h] [rbp-AFh] BYREF
  unsigned int v22; // [rsp+54h] [rbp-ACh] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+58h] [rbp-A8h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+5Ch] [rbp-A4h] BYREF
  struct _HOST_ACTIVITY_MANAGER *v25; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v26; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v28[8]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v29[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v30; // [rsp+140h] [rbp+40h]
  unsigned int v31; // [rsp+148h] [rbp+48h]
  _BYTE v32[144]; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v33[12]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v34; // [rsp+2A0h] [rbp+1A0h]
  unsigned int v35; // [rsp+2A8h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2B0h] [rbp+1B0h] BYREF
  void *v37; // [rsp+2C0h] [rbp+1C0h]
  int v38; // [rsp+2C8h] [rbp+1C8h]
  int v39; // [rsp+2CCh] [rbp+1CCh]
  WCHAR packageFamilyName[72]; // [rsp+2D0h] [rbp+1D0h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+360h] [rbp+260h] BYREF

  v25 = a1;
  v26 = (unsigned __int8 *)a6;
  memset_0(v32, 0, 0x88uLL);
  memset_0(v33, 0, 0xCCuLL);
  v8 = 0;
  StateSnapshot = 0;
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E82B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E82B8;
    v37 = &unk_1800D5BFE;
    UserData.Reserved = 2;
    v38 = 39;
    v39 = 1;
    v22 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v32);
  v10 = 65LL;
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 65;
  if ( ParseApplicationUserModelId(
         a2,
         &packageFamilyNameLength,
         packageFamilyName,
         &packageRelativeApplicationIdLength,
         packageRelativeApplicationId) )
  {
    v8 = -1073741585;
  }
  else if ( (int)CempUtilValidateSid(a3) < 0 )
  {
    v8 = -1073741584;
  }
  else
  {
    memset_0(v28, 0, 0xCCuLL);
    v11 = v28;
    do
    {
      if ( v10 == -2147483581 )
        break;
      v12 = v11[296];
      if ( !v12 )
        break;
      *v11++ = v12;
      --v10;
    }
    while ( v10 );
    v13 = v11 - 1;
    if ( v10 )
      v13 = v11;
    *v13 = 0;
    RtlCopySid(0x44u, (char *)v29 + 4, a3);
    v31 = a5;
    v33[0] = v28[0];
    v33[1] = v28[1];
    v33[2] = v28[2];
    v33[3] = v28[3];
    v33[4] = v28[4];
    v33[5] = v28[5];
    v33[6] = v28[6];
    v33[7] = v28[7];
    v33[8] = v29[0];
    v33[9] = v29[1];
    v33[10] = v29[2];
    v33[11] = v29[3];
    v34 = v30;
    v35 = a5;
    v14 = HampPkgFindInManager(v25, (struct _HAM_PACKAGE_INFO *)v33);
    v15 = v14;
    if ( v14 )
    {
      StateSnapshot = HampPkgGetStateSnapshot(v14, packageRelativeApplicationId);
      *v26 = StateSnapshot;
      CemRcObjectDereference(v15);
    }
    else
    {
      v8 = -1073741275;
    }
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v22 = a5;
    v26 = a3;
    v20 = (StateSnapshot & 2) != 0;
    v21[0] = StateSnapshot & 1;
    *(_QWORD *)&EventDescriptor.Id = a2;
    LODWORD(v25) = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v16,
      (unsigned int)&unk_1800D5009,
      v17,
      v18,
      (__int64)&v25,
      (__int64)&EventDescriptor,
      (__int64)&v26,
      (__int64)&v22,
      (__int64)v21,
      (__int64)&v20);
  }
  return v8;
}
