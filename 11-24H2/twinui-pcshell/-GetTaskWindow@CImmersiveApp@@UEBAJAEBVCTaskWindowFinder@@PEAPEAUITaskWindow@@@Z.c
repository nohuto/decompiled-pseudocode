/*
 * XREFs of ?GetTaskWindow@CImmersiveApp@@UEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180303130
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x1802C55F8 (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 */

__int64 __fastcall CImmersiveApp::GetTaskWindow(
        CImmersiveApp *this,
        const struct CTaskWindowFinder *a2,
        struct ITaskWindow **a3)
{
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  return CImmersiveApp::CImmersiveWindowCollection::_GetWindow((CImmersiveApp *)((char *)this + 176), a2, a3, &v4);
}
