/*
 * XREFs of ??1CMagnifierControl@@EEAA@XZ @ 0x1800C8A00
 * Callers:
 *     ??_ECMagnifierControl@@EEAAPEAXI@Z @ 0x1800C8AE0 (--_ECMagnifierControl@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListener@@@Z @ 0x18008458C (-UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListen.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x1800C8F78 (-RemoveElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHP.c)
 */

void __fastcall CMagnifierControl::~CMagnifierControl(CMagnifierControl *this)
{
  const struct std::nothrow_t *v2; // rdx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  void *v6; // rcx
  CMagnifierControl::MagnifierTableElement *v7; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CMagnifierControl::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CMagnifierControl::`vftable'{for `ISoftwareCursorChangeListener'};
  CWindowList::UnregisterForSoftwareCursorChangeNotification(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
    (struct ISoftwareCursorChangeListener *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  v3 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 3) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 6) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = 0LL;
  if ( v6 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(v6, v2);
  while ( 1 )
  {
    RestartKey = 0LL;
    v7 = (CMagnifierControl::MagnifierTableElement *)RtlEnumerateGenericTableWithoutSplaying(
                                                       (PRTL_GENERIC_TABLE)((char *)this + 56),
                                                       &RestartKey);
    if ( !v7 )
      break;
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 56),
      v7);
  }
  CBaseObject::~CBaseObject(this);
}
