/*
 * XREFs of ?zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1401F5048
 * Callers:
 *     NtConfigureInputSpace @ 0x1401B7710 (NtConfigureInputSpace.c)
 * Callees:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F427C (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1401F4A54 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1401F4E58 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 */

__int64 __fastcall CInputConfig::zzzConfigureInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  __int64 UserSessionState; // rbx
  CInputConfig *v5; // rcx
  int v6; // eax
  struct _ERESOURCE *v7; // rcx
  unsigned int v8; // esi

  UserSessionState = W32GetUserSessionState(this);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(UserSessionState + 18696));
  if ( *((_BYTE *)this + 1504) )
  {
    *((_BYTE *)this + 1504) = 0;
    while ( *(CInputConfig **)this != this )
      CInputConfig::_FreeInputSpace(v5, *(struct _LIST_ENTRY **)this);
  }
  *((_BYTE *)this + 1505) = 1;
  v6 = CInputConfig::_ConfigureInputSpace(this, a2);
  v7 = *(struct _ERESOURCE **)(UserSessionState + 18696);
  v8 = v6;
  if ( v6 >= 0 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    CInputConfig::_zzzNotifyExternalComponents(this);
    return 0LL;
  }
  else
  {
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    return v8;
  }
}
