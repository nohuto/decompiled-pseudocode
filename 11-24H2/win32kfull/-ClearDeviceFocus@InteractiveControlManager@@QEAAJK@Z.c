/*
 * XREFs of ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1402DE528
 * Callers:
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1402EC894 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1402EC5E4 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 */

__int64 __fastcall InteractiveControlManager::ClearDeviceFocus(
        InteractiveControlManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  const char *v11; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)dword_140398C28 > 4 )
  {
    v11 = "InteractiveControlManager::ClearDeviceFocus entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_140398C28,
      (__int64)&unk_140369034,
      a3,
      a4,
      &v11);
  }
  v5 = (_QWORD *)((char *)this + 40);
  v6 = 5LL;
  do
  {
    if ( *v5 )
      InteractiveControlDevice::SetFocus(*v5, 0LL, 0LL, 1LL);
    ++v5;
    --v6;
  }
  while ( v6 );
  v10[1] = 0LL;
  v10[0] = this;
  HMAssignmentLock(v10, 0LL);
  if ( (unsigned int)dword_140398C28 > 4 )
  {
    v11 = "InteractiveControlManager::ClearDeviceFocus exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_140398C28,
      (__int64)&unk_14036906E,
      v7,
      v8,
      &v11);
  }
  return 0LL;
}
