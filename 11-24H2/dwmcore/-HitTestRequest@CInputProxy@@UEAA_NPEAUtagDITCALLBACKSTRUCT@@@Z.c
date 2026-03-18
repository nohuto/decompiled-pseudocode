/*
 * XREFs of ?HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180090C20
 * Callers:
 *     <none>
 * Callees:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180090C40 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 */

bool __fastcall CInputProxy::HitTestRequest(CInputProxy *this, struct tagDITCALLBACKSTRUCT *a2)
{
  return (unsigned int)CInputManager::s_HitTestRequest(a2) != 0;
}
