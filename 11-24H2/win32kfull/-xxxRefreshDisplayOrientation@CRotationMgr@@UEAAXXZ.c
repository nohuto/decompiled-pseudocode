/*
 * XREFs of ?xxxRefreshDisplayOrientation@CRotationMgr@@UEAAXXZ @ 0x140270898
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CDispBrokerRotationMgr@@UEAAXXZ @ 0x140270870 (-xxxRefreshDisplayOrientation@CDispBrokerRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1401DE154 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?xxxSetAutoRotationConvertible@CRotationMgr@@QEAAXH@Z @ 0x1402709B8 (-xxxSetAutoRotationConvertible@CRotationMgr@@QEAAXH@Z.c)
 *     ?xxxSetAutoRotationDocked@CRotationMgr@@QEAAXH@Z @ 0x140270A34 (-xxxSetAutoRotationDocked@CRotationMgr@@QEAAXH@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall CRotationMgr::xxxRefreshDisplayOrientation(CRotationMgr *this, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // esi
  unsigned int v6; // ebx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned int)dword_140398BB8 > 5 && tlgKeywordOn((__int64)&dword_140398BB8, 0x200000000001LL) )
  {
    v11 = *((_DWORD *)this + 4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)&dword_140398BB8,
      byte_1403640FF,
      v3,
      v4,
      (__int64)&v11);
  }
  v5 = *((_DWORD *)this + 6);
  v6 = *((_DWORD *)this + 5);
  UserSessionState = W32GetUserSessionState(this, a2);
  CRotationMgr::xxxSetAutoRotationConvertible(
    this,
    (*(_DWORD *)(*(_QWORD *)(UserSessionState + 19928) + 2236LL) >> 3) & 1);
  v10 = W32GetUserSessionState(v9, v8);
  CRotationMgr::xxxSetAutoRotationDocked(this, (*(_DWORD *)(*(_QWORD *)(v10 + 19928) + 2236LL) >> 4) & 1);
  if ( !__PAIR64__(*((_DWORD *)this + 6), v6) )
  {
    if ( v5 )
      (*(void (__fastcall **)(CRotationMgr *))(*(_QWORD *)this + 8LL))(this);
  }
}
