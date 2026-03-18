/*
 * XREFs of ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x14019D408
 * Callers:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x140050B98 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1401F3550 (-GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x1401F3574 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401F7794 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x1400944F0 (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 */

const struct tagBASEWNDCONTAINERINFO *__fastcall CInputDest::GetContainerInfo(CInputDest *this)
{
  struct tagBWND *BaseWindow; // rax
  __int64 v2; // rdx

  BaseWindow = CInputDest::GetBaseWindow(this);
  if ( BaseWindow && *((_QWORD *)BaseWindow + 17) )
    return (const struct tagBASEWNDCONTAINERINFO *)*((_QWORD *)BaseWindow + 17);
  return (const struct tagBASEWNDCONTAINERINFO *)v2;
}
