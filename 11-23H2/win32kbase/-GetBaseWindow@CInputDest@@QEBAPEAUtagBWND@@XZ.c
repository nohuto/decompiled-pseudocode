/*
 * XREFs of ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x1C01B5514
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C0055BE0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1C005808C (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     <none>
 */

struct tagBWND *__fastcall CInputDest::GetBaseWindow(CInputDest *this)
{
  if ( *((_DWORD *)this + 23) == 1 )
    return (struct tagBWND *)*((_QWORD *)this + 10);
  else
    return 0LL;
}
