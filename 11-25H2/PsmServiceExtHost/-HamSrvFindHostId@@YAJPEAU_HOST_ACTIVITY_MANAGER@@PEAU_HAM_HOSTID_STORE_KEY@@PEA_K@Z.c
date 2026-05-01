/*
 * XREFs of ?HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x1800591C0
 * Callers:
 *     HamRpcSrvFindHostId @ 0x180071160 (HamRpcSrvFindHostId.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostIdStoreCheckAndSanitizeKey@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z @ 0x180041EFC (-HampHostIdStoreCheckAndSanitizeKey@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180059348 (-HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSid@U_SID@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSid@U_SID@@@@3@Z @ 0x18005BC84 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSid@U_.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvFindHostId(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v6; // rdi
  int IdForKey; // eax
  unsigned int v8; // ebx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  char *v15; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  char *v17; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_HOSTID_STORE_KEY *v18; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v19[144]; // [rsp+80h] [rbp-80h] BYREF

  memset_0(v19, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v19);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E72B0,
      byte_1800D4115);
  v6 = -1LL;
  v13 = -1LL;
  if ( (unsigned int)HampHostIdStoreCheckAndSanitizeKey((const wchar_t *)a2) )
  {
    IdForKey = HampHostIdStoreFindIdForKey((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 800), a2, &v13);
    v6 = v13;
    v8 = IdForKey;
    if ( IdForKey >= 0 )
    {
      *a3 = v13;
      v8 = 0;
    }
  }
  else
  {
    v8 = -1073741585;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 8LL) )
  {
    v14 = *((_DWORD *)a2 + 133);
    v15 = (char *)a2 + 464;
    v17 = (char *)a2 + 536;
    v16 = v6;
    v18 = a2;
    LODWORD(v13) = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>>(
      v10,
      (unsigned int)&unk_1800D3D3E,
      v11,
      v12,
      (__int64)&v13,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14);
  }
  return v8;
}
