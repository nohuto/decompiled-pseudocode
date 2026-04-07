/*
 * XREFs of ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x1800EEE78
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180090650 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z @ 0x18003318C (-FindElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?DestroyRootVisualForDesktop@CWindowList@@AEAAXPEAUCDesktop@@@Z @ 0x1800EF1FC (-DestroyRootVisualForDesktop@CWindowList@@AEAAXPEAUCDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowList::DesktopFree(CWindowList *this, const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE *a2)
{
  PVOID Element; // rax
  struct CDesktop *v5; // rbx
  CWindowList *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Element = CGenericTableMap<unsigned __int64,CDesktop>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
              *(_QWORD *)((char *)a2 + 4));
  v5 = (struct CDesktop *)Element;
  if ( Element )
  {
    CContainerVisual::RemoveChild(*((CContainerVisual **)this + 10), *((struct CVisual **)Element + 1));
    CWindowList::DestroyRootVisualForDesktop(v6, v5);
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v5);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
}
