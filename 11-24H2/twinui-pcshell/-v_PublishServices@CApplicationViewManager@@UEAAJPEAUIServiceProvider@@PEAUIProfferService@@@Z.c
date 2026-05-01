/*
 * XREFs of ?v_PublishServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180205190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InitializeGlobals@PEAVCApplicationViewManager@@@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SAJPEAVCApplicationViewManager@@@Z @ 0x1802051D0 (--$InitializeGlobals@PEAVCApplicationViewManager@@@-$CGlobals@V0ApplicationViewManagement@@@Glob.c)
 */

__int64 __fastcall CApplicationViewManager::v_PublishServices(
        CApplicationViewManager *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::InitializeGlobals<CApplicationViewManager *>(
         (char *)this - 72,
         a2,
         a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
