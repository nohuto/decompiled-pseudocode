/*
 * XREFs of ?HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18006CE78
 * Callers:
 *     HamRpcSrvQueryPackageStateSummary @ 0x180081780 (HamRpcSrvQueryPackageStateSummary.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@33@Z @ 0x180002280 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U1@@-$_tlgWriteTem.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180013E64 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x18003F424 (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18005A12C (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18005A1A8 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvQueryPackageStateSummary(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        union _HAM_EXTERNAL_STATE_SUMMARY *a5)
{
  char *v9; // r14
  int v10; // edi
  struct _HAM_PACKAGE *v11; // rax
  struct _HAM_PACKAGE *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+54h] [rbp-ACh] BYREF
  int v19; // [rsp+58h] [rbp-A8h] BYREF
  char *v20; // [rsp+60h] [rbp-A0h] BYREF
  const wchar_t *v21; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v22[132]; // [rsp+70h] [rbp-90h] BYREF
  char v23; // [rsp+F4h] [rbp-Ch] BYREF
  _BYTE v24[144]; // [rsp+140h] [rbp+40h] BYREF

  memset_0(v24, 0, 0x88uLL);
  memset_0(v22, 0, 0xCCuLL);
  if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E72B0,
      byte_1800D499C);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  v9 = (char *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *((unsigned __int8 *)a1 + 164) + 1196);
  v10 = CempUtilValidateAndCapturePackageInfoWithFamilyName((__int64)a2, a3, a4, *((_DWORD *)a1 + 42), (__int64)v22);
  if ( v10 >= 0 )
  {
    v9 = &v23;
    v11 = HampPkgFindInManager(
            (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                            - 48LL * *((unsigned __int8 *)a1 + 164)
                                            - 16),
            (struct _HAM_PACKAGE_INFO *)v22);
    v12 = v11;
    if ( v11 )
    {
      HampPkgAcquireLockShared(v11);
      *(_DWORD *)a5 = *((_DWORD *)v12 + 86);
      HampPkgReleaseLockShared(v12);
      v10 = 0;
      CemRcObjectDereference(v12);
    }
    else
    {
      v10 = -1073741275;
    }
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 8LL) )
  {
    v17 = *(_DWORD *)a5;
    v18 = *((_DWORD *)a1 + 42);
    v20 = v9;
    v21 = a2;
    v19 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      (__int64)&unk_1800D4184,
      v14,
      v15,
      (__int64)&v19,
      &v21,
      (__int64 *)&v20,
      (__int64)&v18,
      (__int64)&v17);
  }
  return (unsigned int)v10;
}
