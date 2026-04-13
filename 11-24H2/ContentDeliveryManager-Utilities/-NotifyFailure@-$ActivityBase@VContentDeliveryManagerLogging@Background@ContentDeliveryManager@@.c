/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180062450
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456445@Z @ 0x180001858 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     _tlgKeywordOn @ 0x180001C8C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x1800023AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1800023AC.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A4B0 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18003AF58 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044660 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180053D14 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r9
  const wchar_t *v7; // rcx
  __int64 v8; // r8
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // rcx
  int v14; // eax
  int v16; // [rsp+B0h] [rbp-80h] BYREF
  int v17; // [rsp+B4h] [rbp-7Ch] BYREF
  const wchar_t *v18; // [rsp+B8h] [rbp-78h] BYREF
  const wchar_t *v19; // [rsp+C0h] [rbp-70h] BYREF
  const wchar_t *v20; // [rsp+C8h] [rbp-68h] BYREF
  const wchar_t *v21; // [rsp+D0h] [rbp-60h] BYREF
  const wchar_t *v22; // [rsp+D8h] [rbp-58h] BYREF
  const wchar_t *v23; // [rsp+E0h] [rbp-50h] BYREF
  const wchar_t *v24; // [rsp+E8h] [rbp-48h] BYREF
  const wchar_t *v25; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v27; // [rsp+100h] [rbp-30h] BYREF
  __int64 v28; // [rsp+108h] [rbp-28h] BYREF
  __int64 v29[4]; // [rsp+110h] [rbp-20h] BYREF
  RTL_SRWLOCK *v30; // [rsp+140h] [rbp+10h] BYREF
  int v31; // [rsp+148h] [rbp+18h] BYREF
  int v32; // [rsp+150h] [rbp+20h] BYREF
  int v33; // [rsp+158h] [rbp+28h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[4]) )
    {
      v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v4);
      if ( *(_DWORD *)v9 > 2u && tlgKeywordOn((__int64)v9, 0x200000000000LL) )
      {
        v11 = *((_QWORD *)a2 + 6);
        v31 = a2[4];
        v25 = (const wchar_t *)*((_QWORD *)a2 + 15);
        v12 = a1[34];
        v24 = (const wchar_t *)*((_QWORD *)a2 + 14);
        v32 = a2[26];
        v23 = (const wchar_t *)*((_QWORD *)a2 + 12);
        v22 = (const wchar_t *)*((_QWORD *)a2 + 11);
        v33 = a2[20];
        v21 = (const wchar_t *)*((_QWORD *)a2 + 9);
        v17 = a2[8];
        v20 = (const wchar_t *)*((_QWORD *)a2 + 3);
        v16 = *a2;
        v27 = *((_QWORD *)a2 + 16);
        LODWORD(v18) = a2[16];
        v28 = *((_QWORD *)a2 + 7);
        LODWORD(v19) = a2[2];
        v26 = v11;
        LODWORD(v30) = a2[17];
        v29[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          v10,
          (__int64)&unk_180161115,
          v12 + 8,
          v10,
          (__int64)v29,
          (__int64)&v19,
          &v28,
          (__int64)&v18,
          &v27,
          (__int64)&v16,
          &v20,
          (__int64)&v17,
          &v21,
          (__int64)&v33,
          &v22,
          &v23,
          (__int64)&v32,
          &v24,
          &v25,
          (__int64)&v31,
          (__int64)&v30,
          &v26);
      }
    }
    else
    {
      v5 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(v4);
      if ( *(_DWORD *)v5 > 2u && tlgKeywordOn((__int64)v5, 0x200000000000LL) )
      {
        v7 = (const wchar_t *)*((_QWORD *)a2 + 15);
        v8 = a1[34];
        LODWORD(v30) = a2[26];
        v20 = (const wchar_t *)*((_QWORD *)a2 + 12);
        v21 = (const wchar_t *)*((_QWORD *)a2 + 11);
        v31 = a2[20];
        v22 = (const wchar_t *)*((_QWORD *)a2 + 9);
        v32 = a2[8];
        v23 = (const wchar_t *)*((_QWORD *)a2 + 3);
        v33 = *a2;
        v24 = (const wchar_t *)*((_QWORD *)a2 + 16);
        v16 = a2[16];
        v25 = (const wchar_t *)*((_QWORD *)a2 + 7);
        v17 = a2[2];
        v19 = v7;
        v18 = (const wchar_t *)*((_QWORD *)a2 + 14);
        v26 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v6,
          byte_1801608F8,
          (const GUID *)(v8 + 8),
          v6,
          (__int64)&v26,
          (__int64)&v17,
          &v25,
          (__int64)&v16,
          &v24,
          (__int64)&v33,
          &v23,
          (__int64)&v32,
          &v22,
          (__int64)&v31,
          &v21,
          &v20,
          (__int64)&v30,
          &v18,
          &v19);
      }
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &v30);
  v13 = (_DWORD *)a1[34];
  v14 = a2[2];
  if ( v14 != v13[22] && (v14 != v13[18] || (int)v13[18] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v13 + 20), (const struct wil::FailureInfo *)a2);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v30);
  return 1;
}
