/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180089A80
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456445@Z @ 0x180001858 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A4E0 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18003AE18 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044480 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180053964 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 */

char __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  const struct _tlgProvider_t *v4; // r9
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  int v10; // eax
  int v12; // [rsp+B0h] [rbp-80h] BYREF
  int v13; // [rsp+B4h] [rbp-7Ch] BYREF
  int v14; // [rsp+B8h] [rbp-78h] BYREF
  int v15; // [rsp+BCh] [rbp-74h] BYREF
  __int64 v16; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v17; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v18; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v19; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v22; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v24; // [rsp+100h] [rbp-30h] BYREF
  __int64 v25[3]; // [rsp+108h] [rbp-28h] BYREF
  RTL_SRWLOCK *v26; // [rsp+130h] [rbp+0h] BYREF
  int v27; // [rsp+138h] [rbp+8h] BYREF
  int v28; // [rsp+140h] [rbp+10h] BYREF
  int v29; // [rsp+148h] [rbp+18h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    v4 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider(a1);
    if ( *(_DWORD *)v4 > 2u )
    {
      v5 = a2[17];
      v6 = *((_QWORD *)a2 + 6);
      v7 = *(_QWORD *)(a1 + 272);
      v28 = a2[26];
      v19 = *((_QWORD *)a2 + 12);
      v20 = *((_QWORD *)a2 + 11);
      v29 = a2[20];
      v21 = *((_QWORD *)a2 + 9);
      v12 = a2[8];
      v22 = *((_QWORD *)a2 + 3);
      v13 = *a2;
      v23 = *((_QWORD *)a2 + 16);
      v14 = a2[16];
      v24 = *((_QWORD *)a2 + 7);
      v15 = a2[2];
      LODWORD(v26) = v5;
      v27 = a2[4];
      v17 = *((_QWORD *)a2 + 15);
      v8 = *((_QWORD *)a2 + 14);
      v16 = v6;
      v18 = v8;
      v25[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v4,
        (__int64)&unk_18015F0D6,
        v7 + 8,
        (__int64)v4,
        (__int64)v25,
        (__int64)&v15,
        &v24,
        (__int64)&v14,
        &v23,
        (__int64)&v13,
        &v22,
        (__int64)&v12,
        &v21,
        (__int64)&v29,
        &v20,
        &v19,
        (__int64)&v28,
        &v18,
        &v17,
        (__int64)&v27,
        (__int64)&v26,
        &v16);
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v26);
  v9 = *(_DWORD **)(a1 + 272);
  v10 = a2[2];
  if ( v10 != v9[22] && (v10 != v9[18] || (int)v9[18] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v9 + 20), (const struct wil::FailureInfo *)a2);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v26);
  return 1;
}
