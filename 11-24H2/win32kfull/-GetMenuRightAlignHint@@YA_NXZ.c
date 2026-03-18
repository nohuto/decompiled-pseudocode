/*
 * XREFs of ?GetMenuRightAlignHint@@YA_NXZ @ 0x14026BDD0
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1400F7E44 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 * Callees:
 *     GetUserHandedness @ 0x1401FE310 (GetUserHandedness.c)
 */

bool __fastcall GetMenuRightAlignHint(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (((unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(UserSessionState + 3064)) - 11) & 0xFFFFFFFD) != 0 )
    return (unsigned int)RIMIsDefaultUILanguageRTL() != 0;
  else
    return (unsigned int)GetUserHandedness() == 1;
}
