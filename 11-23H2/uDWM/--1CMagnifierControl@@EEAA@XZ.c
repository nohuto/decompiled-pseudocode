/*
 * XREFs of ??1CMagnifierControl@@EEAA@XZ @ 0x1800CAA18
 * Callers:
 *     ??_ECMagnifierControl@@EEAAPEAXI@Z @ 0x1800CAB00 (--_ECMagnifierControl@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x1800CB99C (-RemoveElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHP.c)
 *     ?reset@?$unique_ptr@VMagnifierExperienceHelper@@U?$default_delete@VMagnifierExperienceHelper@@@wistd@@@wistd@@QEAAXPEAVMagnifierExperienceHelper@@@Z @ 0x1800CBB68 (-reset@-$unique_ptr@VMagnifierExperienceHelper@@U-$default_delete@VMagnifierExperienceHelper@@@w.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___ @ 0x180108434 (CWindowList--ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___.c)
 */

void __fastcall CMagnifierControl::~CMagnifierControl(CMagnifierControl *this)
{
  __int64 v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CMagnifierControl::MagnifierTableElement *v6; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  RestartKey = (char *)this + 16;
  *(_QWORD *)this = &CMagnifierControl::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CMagnifierControl::`vftable'{for `ISoftwareCursorChangeListener'};
  v2 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
  v7[0] = &RestartKey;
  v7[1] = v2;
  CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___(v2, v7);
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
  wistd::unique_ptr<MagnifierExperienceHelper,wistd::default_delete<MagnifierExperienceHelper>>::reset(
    (char *)this + 160,
    0LL);
  while ( 1 )
  {
    RestartKey = 0LL;
    v6 = (CMagnifierControl::MagnifierTableElement *)RtlEnumerateGenericTableWithoutSplaying(
                                                       (PRTL_GENERIC_TABLE)((char *)this + 56),
                                                       &RestartKey);
    if ( !v6 )
      break;
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 56),
      v6);
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
