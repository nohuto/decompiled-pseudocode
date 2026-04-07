/*
 * XREFs of ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x1800E5B24
 * Callers:
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18006CF48 (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800C9578 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18006D732 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 */

struct tagRECT *__fastcall CTopLevelWindow::GetLivePreviewWindowRect(
        CTopLevelWindow *this,
        struct tagRECT *__return_ptr retstr,
        char a3)
{
  CTopLevelWindow::GetActualWindowRect(this, retstr, 0, 1, 1);
  if ( a3 && (*((_BYTE *)this + 248) & 4) == 0 )
  {
    retstr->left -= *((_DWORD *)this + 173);
    retstr->top -= *((_DWORD *)this + 175);
    retstr->right += *((_DWORD *)this + 174);
    retstr->bottom += *((_DWORD *)this + 176);
  }
  return retstr;
}
