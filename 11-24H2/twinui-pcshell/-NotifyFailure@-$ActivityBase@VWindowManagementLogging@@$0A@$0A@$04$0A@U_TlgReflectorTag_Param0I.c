/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18017B100
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B4480 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180175940 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18017FA60 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

char __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  const struct _tlgProvider_t *v4; // r9
  const wchar_t *v5; // rcx
  __int64 v6; // r8
  _DWORD *v7; // rcx
  int v8; // eax
  int v10; // [rsp+B0h] [rbp-80h] BYREF
  int v11; // [rsp+B4h] [rbp-7Ch] BYREF
  int v12; // [rsp+B8h] [rbp-78h] BYREF
  int v13; // [rsp+BCh] [rbp-74h] BYREF
  int v14; // [rsp+C0h] [rbp-70h] BYREF
  int v15; // [rsp+C4h] [rbp-6Ch] BYREF
  int v16; // [rsp+C8h] [rbp-68h] BYREF
  const wchar_t *v17; // [rsp+D0h] [rbp-60h] BYREF
  const WCHAR *v18; // [rsp+D8h] [rbp-58h] BYREF
  const wchar_t *v19; // [rsp+E0h] [rbp-50h] BYREF
  const WCHAR *v20; // [rsp+E8h] [rbp-48h] BYREF
  const wchar_t *v21; // [rsp+F0h] [rbp-40h] BYREF
  const wchar_t *v22; // [rsp+F8h] [rbp-38h] BYREF
  const WCHAR *v23; // [rsp+100h] [rbp-30h] BYREF
  const wchar_t *v24; // [rsp+108h] [rbp-28h] BYREF
  const wchar_t *v25; // [rsp+110h] [rbp-20h] BYREF
  __int64 v26; // [rsp+118h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+120h] [rbp-10h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    v4 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v4 > 2u )
    {
      v5 = (const wchar_t *)*((_QWORD *)a2 + 6);
      v6 = *(_QWORD *)(a1 + 272);
      v12 = a2[26];
      v20 = (const WCHAR *)*((_QWORD *)a2 + 12);
      v21 = (const wchar_t *)*((_QWORD *)a2 + 11);
      v13 = a2[20];
      v22 = (const wchar_t *)*((_QWORD *)a2 + 9);
      v14 = a2[8];
      v23 = (const WCHAR *)*((_QWORD *)a2 + 3);
      v15 = *a2;
      v24 = (const wchar_t *)*((_QWORD *)a2 + 16);
      v16 = a2[16];
      v25 = (const wchar_t *)*((_QWORD *)a2 + 7);
      LODWORD(SRWLock) = a2[2];
      v17 = v5;
      v10 = a2[17];
      v11 = a2[4];
      v18 = (const WCHAR *)*((_QWORD *)a2 + 15);
      v19 = (const wchar_t *)*((_QWORD *)a2 + 14);
      v26 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v4,
        byte_1807E0ECF,
        (const GUID *)(v6 + 8),
        (__int64)v4,
        (__int64)&v26,
        (__int64)&SRWLock,
        &v25,
        (__int64)&v16,
        &v24,
        (__int64)&v15,
        &v23,
        (__int64)&v14,
        &v22,
        (__int64)&v13,
        &v21,
        &v20,
        (__int64)&v12,
        &v19,
        &v18,
        (__int64)&v11,
        (__int64)&v10,
        &v17);
    }
  }
  SRWLock = 0LL;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v7 = *(_DWORD **)(a1 + 272);
  v8 = a2[2];
  if ( v8 != v7[22] && (v8 != v7[18] || (int)v7[18] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v7 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
