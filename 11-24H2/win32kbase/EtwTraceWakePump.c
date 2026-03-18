/*
 * XREFs of EtwTraceWakePump @ 0x1400A4BC0
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140062790 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018C758 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     McTemplateK0cppppqq_EtwWriteTransfer @ 0x14003365C (McTemplateK0cppppqq_EtwWriteTransfer.c)
 *     ?GetCallbackCount@@YACXZ @ 0x1400A5190 (-GetCallbackCount@@YACXZ.c)
 */

void __fastcall EtwTraceWakePump(char a1, __int64 *a2, char a3)
{
  __int64 v5; // rbx
  char CallbackCount; // al
  __int64 v7; // rcx
  __int64 v8; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    if ( a2 )
      v5 = *a2;
    else
      LOBYTE(v5) = 0;
    CallbackCount = GetCallbackCount();
    McTemplateK0cppppqq_EtwWriteTransfer(v7, (const EVENT_DESCRIPTOR *)"A", v8, CallbackCount, a1, v5, 0, 0, a3, 0);
  }
}
