/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18067E3F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180175940 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18017FA60 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801CB1EC (-LockExclusive@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x1801D1A60 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1801D1A60.c)
 *     ?Provider@ImmersiveIconsLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1802BC2A8 (-Provider@ImmersiveIconsLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::ActivityBase<ImmersiveIconsLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r9
  const struct _tlgProvider_t *v7; // r9
  _DWORD *v8; // rcx
  int v9; // eax
  int v11; // [rsp+B0h] [rbp-80h] BYREF
  int v12; // [rsp+B4h] [rbp-7Ch] BYREF
  const wchar_t *v13; // [rsp+B8h] [rbp-78h] BYREF
  const WCHAR *v14; // [rsp+C0h] [rbp-70h] BYREF
  const WCHAR *v15; // [rsp+C8h] [rbp-68h] BYREF
  const wchar_t *v16; // [rsp+D0h] [rbp-60h] BYREF
  const wchar_t *v17; // [rsp+D8h] [rbp-58h] BYREF
  const WCHAR *v18; // [rsp+E0h] [rbp-50h] BYREF
  const wchar_t *v19; // [rsp+E8h] [rbp-48h] BYREF
  const WCHAR *v20; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v21; // [rsp+F8h] [rbp-38h] BYREF
  const wchar_t *v22; // [rsp+100h] [rbp-30h] BYREF
  const wchar_t *v23; // [rsp+108h] [rbp-28h] BYREF
  __int64 v24[4]; // [rsp+110h] [rbp-20h] BYREF
  RTL_SRWLOCK *v25; // [rsp+140h] [rbp+10h] BYREF
  int v26; // [rsp+148h] [rbp+18h] BYREF
  int v27; // [rsp+150h] [rbp+20h] BYREF
  int v28; // [rsp+158h] [rbp+28h] BYREF

  if ( (a2[1] & 2) == 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[4]) )
    {
      v7 = ImmersiveIconsLogging::Provider(v4);
      if ( *(_DWORD *)v7 > 2u )
      {
        v21 = *((_QWORD *)a2 + 6);
        LODWORD(v25) = a2[17];
        v26 = a2[4];
        v20 = (const WCHAR *)*((_QWORD *)a2 + 15);
        v19 = (const wchar_t *)*((_QWORD *)a2 + 14);
        v27 = a2[26];
        v18 = (const WCHAR *)*((_QWORD *)a2 + 12);
        v17 = (const wchar_t *)*((_QWORD *)a2 + 11);
        v28 = a2[20];
        v16 = (const wchar_t *)*((_QWORD *)a2 + 9);
        v12 = a2[8];
        v15 = (const WCHAR *)*((_QWORD *)a2 + 3);
        v11 = *a2;
        v22 = (const wchar_t *)*((_QWORD *)a2 + 16);
        LODWORD(v13) = a2[16];
        v23 = (const wchar_t *)*((_QWORD *)a2 + 7);
        LODWORD(v14) = a2[2];
        v24[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          (__int64)v7,
          byte_1807E0ECF,
          (const GUID *)(a1[34] + 8LL),
          (__int64)v7,
          (__int64)v24,
          (__int64)&v14,
          &v23,
          (__int64)&v13,
          &v22,
          (__int64)&v11,
          &v15,
          (__int64)&v12,
          &v16,
          (__int64)&v28,
          &v17,
          &v18,
          (__int64)&v27,
          &v19,
          &v20,
          (__int64)&v26,
          (__int64)&v25,
          (const wchar_t **)&v21);
      }
    }
    else
    {
      v5 = ImmersiveIconsLogging::Provider(v4);
      if ( *(_DWORD *)v5 > 2u && tlgKeywordOn((__int64)v5, 0x200000000000LL) )
      {
        v14 = (const WCHAR *)*((_QWORD *)a2 + 15);
        v13 = (const wchar_t *)*((_QWORD *)a2 + 14);
        LODWORD(v25) = a2[26];
        v15 = (const WCHAR *)*((_QWORD *)a2 + 12);
        v16 = (const wchar_t *)*((_QWORD *)a2 + 11);
        v26 = a2[20];
        v17 = (const wchar_t *)*((_QWORD *)a2 + 9);
        v27 = a2[8];
        v18 = (const WCHAR *)*((_QWORD *)a2 + 3);
        v28 = *a2;
        v19 = (const wchar_t *)*((_QWORD *)a2 + 16);
        v11 = a2[16];
        v20 = (const WCHAR *)*((_QWORD *)a2 + 7);
        v12 = a2[2];
        v21 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v6,
          byte_1807E072A,
          (const GUID *)(a1[34] + 8LL),
          v6,
          (__int64)&v21,
          (__int64)&v12,
          &v20,
          (__int64)&v11,
          &v19,
          (__int64)&v28,
          &v18,
          (__int64)&v27,
          &v17,
          (__int64)&v26,
          &v16,
          &v15,
          (__int64)&v25,
          &v13,
          &v14);
      }
    }
  }
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &v25);
  v8 = (_DWORD *)a1[34];
  v9 = a2[2];
  if ( v9 != v8[22] && (v9 != v8[18] || (int)v8[18] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v8 + 20), (const struct wil::FailureInfo *)a2);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
  return 1;
}
