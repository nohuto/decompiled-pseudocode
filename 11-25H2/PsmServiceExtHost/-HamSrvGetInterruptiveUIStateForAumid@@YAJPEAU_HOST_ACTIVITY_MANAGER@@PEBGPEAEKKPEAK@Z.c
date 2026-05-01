/*
 * XREFs of ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180068B18
 * Callers:
 *     HamRpcSrvGetInterruptiveUIStateForAumid @ 0x1800816B0 (HamRpcSrvGetInterruptiveUIStateForAumid.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180013E64 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x18003F424 (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180061280 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_t_ea_180061280.c)
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x180083434 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvGetInterruptiveUIStateForAumid(
        struct _HOST_ACTIVITY_MANAGER *a1,
        PCWSTR applicationUserModelId,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  char v10; // si
  int v11; // ebx
  struct _HAM_PACKAGE *v12; // rax
  struct _HAM_PACKAGE *v13; // rdi
  unsigned int InterruptiveUIState; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE v19[4]; // [rsp+50h] [rbp-B0h] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+54h] [rbp-ACh] BYREF
  UINT32 packageFamilyNameLength; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v22; // [rsp+5Ch] [rbp-A4h] BYREF
  int v23; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v24; // [rsp+68h] [rbp-98h] BYREF
  const wchar_t *v25; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v26[144]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v27[208]; // [rsp+110h] [rbp+10h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+1E0h] [rbp+E0h] BYREF
  WCHAR String2[72]; // [rsp+270h] [rbp+170h] BYREF

  memset_0(v26, 0, 0x88uLL);
  memset_0(v27, 0, 0xCCuLL);
  v10 = 0;
  if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E72B0,
      byte_1800D37A4);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v26);
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 65;
  if ( ParseApplicationUserModelId(
         applicationUserModelId,
         &packageFamilyNameLength,
         packageFamilyName,
         &packageRelativeApplicationIdLength,
         String2) )
  {
    v11 = -1073741585;
  }
  else
  {
    v11 = CempUtilValidateAndCapturePackageInfoWithFamilyName((__int64)packageFamilyName, a3, a4, a5, (__int64)v27);
    if ( v11 >= 0 )
    {
      v12 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v27);
      v13 = v12;
      if ( v12 )
      {
        InterruptiveUIState = HampPkgGetInterruptiveUIState(v12, String2);
        v10 = InterruptiveUIState;
        *a6 = InterruptiveUIState;
        v11 = 0;
        CemRcObjectDereference(v13);
      }
      else
      {
        v11 = -1073741275;
      }
    }
  }
  if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 8LL) )
  {
    v19[0] = v10;
    v22 = a5;
    v24 = a3;
    v25 = applicationUserModelId;
    v23 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v15,
      byte_1800D3590,
      v16,
      v17,
      (__int64)&v23,
      &v25,
      (__int64 *)&v24,
      (__int64)&v22,
      (__int64)v19);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v11;
}
