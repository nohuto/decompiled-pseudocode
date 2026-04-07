/*
 * XREFs of ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x18000DF78
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18000B658 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18000F274 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K.c)
 * Callees:
 *     ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x18000D574 (--$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18000DD7C (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180012590 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z @ 0x18006F8D8 (-ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CContactManager::StartPenBarrelVisual(
        CContactManager *this,
        struct CPenContact *a2,
        unsigned __int64 a3)
{
  unsigned int v3; // edi
  CPenBarrelKeyVisual **v4; // rsi
  int Touch; // eax
  CContactManager *v9; // rcx

  v3 = 0;
  v4 = (CPenBarrelKeyVisual **)((char *)a2 + 8);
  if ( !*((_QWORD *)a2 + 1) )
  {
    Touch = CreateTouchVisual<CPenBarrelKeyVisual>(a3, (CBaseObject **)a2 + 1);
    v3 = Touch;
    if ( Touch < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Touch, 0x7CBu, 0LL);
      return v3;
    }
    CPenBarrelKeyVisual::ShowBarrel(*v4, (*((_DWORD *)a2 + 6) & 0x10) != 0);
    CContactManager::AddToTouchNode(v9, a3, *v4);
  }
  CPenBarrelKeyVisual::Start(*v4, (const struct tagPOINT *)((char *)a2 + 28), *((_DWORD *)a2 + 1), *(_DWORD *)a2);
  return v3;
}
