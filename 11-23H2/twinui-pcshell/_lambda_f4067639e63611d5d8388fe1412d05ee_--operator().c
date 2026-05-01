/*
 * XREFs of _lambda_f4067639e63611d5d8388fe1412d05ee_::operator() @ 0x180576C68
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___::Run @ 0x1805773A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___--Run.c)
 * Callees:
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x18003B970 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1803C907C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 */

char __fastcall lambda_f4067639e63611d5d8388fe1412d05ee_::operator()(_QWORD *a1)
{
  int v2; // edi
  const unsigned __int16 *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, a1[1]);
  v3 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath((LPCWSTR)a1[2]);
  v5 = wil::details::static_lazy<WindowManagementLogging>::get(
         v4,
         (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v6 = (_DWORD *)v5[1];
  if ( *v6 > 5u )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)v6, 0x400000000000LL);
    if ( (_BYTE)v5 )
    {
      v12 = 0x2000000LL;
      v13 = (__int64)v3;
      LODWORD(v11) = v2;
      LOBYTE(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v7,
                     (unsigned __int8 *)dword_180866A14,
                     v8,
                     v9,
                     (__int64)&v11,
                     (const WCHAR **)&v13,
                     (__int64)&v12);
    }
  }
  return (char)v5;
}
