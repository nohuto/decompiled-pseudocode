/*
 * XREFs of ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18006D1A0
 * Callers:
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18006C304 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x1800CCD90 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 * Callees:
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18005398C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800539C8 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x18006C222 (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::PlaceVisuals(CPenBarrelKeyVisual *this)
{
  int v2; // r8d
  CContactManager *v3; // rcx
  unsigned int v4; // edx
  struct tagPOINT v6; // [rsp+40h] [rbp+8h] BYREF

  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 41), *((_DWORD *)this + 77) - *((_DWORD *)this + 84) / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 41), *((_DWORD *)this + 78) - *((_DWORD *)this + 85) / 2);
  v2 = *((_DWORD *)this + 79);
  v6.x = *((_DWORD *)this + 77);
  v3 = (CContactManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20);
  v4 = *((_DWORD *)this + 76);
  v6.y = *((_DWORD *)this + 78) + *((_DWORD *)this + 86) + *((_DWORD *)this + 85) / 2;
  CContactManager::PostKeystateFeedbackUpdate(v3, v4, v2, &v6, (v2 & 0x1F) != 0);
  return 0LL;
}
