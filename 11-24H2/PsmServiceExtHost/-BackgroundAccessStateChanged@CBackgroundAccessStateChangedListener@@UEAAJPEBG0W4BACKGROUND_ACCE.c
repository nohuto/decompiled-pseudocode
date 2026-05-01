/*
 * XREFs of ?BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCESS_STATE@@@Z @ 0x18008F6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@43@Z @ 0x1800035BC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z @ 0x1800439E0 (-HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@K@Z @ 0x1800839C4 (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 *     CempPackageFamilyNameFromFullName @ 0x18009C8D0 (CempPackageFamilyNameFromFullName.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall CBackgroundAccessStateChangedListener::BackgroundAccessStateChanged(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        int a4)
{
  int v8; // ebx
  unsigned int v9; // ebx
  signed int LastError; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v17; // [rsp+58h] [rbp-A8h] BYREF
  PSID Sid; // [rsp+60h] [rbp-A0h] BYREF
  const wchar_t *v19; // [rsp+68h] [rbp-98h] BYREF
  const wchar_t *v20; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v21[144]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v22[208]; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 v23[72]; // [rsp+1E0h] [rbp+E0h] BYREF

  memset_0(v21, 0, 0x88uLL);
  memset_0(v22, 0, 0xCCuLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  Sid = 0LL;
  if ( (unsigned int)dword_1800E82B0 > 4 && tlgKeywordOn((__int64)&dword_1800E82B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E82B0,
      byte_1800DAE6A);
  v8 = CempPackageFamilyNameFromFullName(a3);
  if ( v8 >= 0 )
  {
    if ( ConvertStringSidToSidW(a2, &Sid) )
    {
      HampPkgInfoInitialize((char *)v23, Sid, *(_DWORD *)(a1 + 40), (struct _HAM_PACKAGE_INFO *)v22);
      HampPkgHandleBackgroundAccessStateChange(
        *(struct _HOST_ACTIVITY_MANAGER **)(a1 + 32),
        (struct _HAM_PACKAGE_INFO *)v22,
        (a4 & 1) == 0);
      v9 = 0;
    }
    else
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  else
  {
    v9 = v8 | 0x10000000;
  }
  if ( Sid )
    LocalFree(Sid);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E82B0 > 4 && tlgKeywordOn((__int64)&dword_1800E82B0, 8LL) )
  {
    v16 = *(_DWORD *)(a1 + 40);
    v15 = a4;
    v19 = a3;
    v20 = a2;
    v17 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v11,
      (__int64)&unk_1800DAE9E,
      v12,
      v13,
      (__int64)&v17,
      (__int64)&v16,
      &v20,
      &v19,
      (__int64)&v15);
  }
  return v9;
}
