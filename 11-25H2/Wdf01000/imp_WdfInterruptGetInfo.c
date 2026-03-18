/*
 * XREFs of imp_WdfInterruptGetInfo @ 0x140070570
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

void __fastcall imp_WdfInterruptGetInfo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        _WDF_INTERRUPT_INFO *Info)
{
  unsigned int _a2; // eax
  unsigned int v6; // ebx
  void *retaddr; // [rsp+48h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxInterrupt *pFxInterrupt; // [rsp+60h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pFxInterrupt = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt,
    &pFxDriverGlobals);
  if ( !Info )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  _a2 = Info->Size;
  v6 = 56;
  if ( Info->Size == 56 || (v6 = 64, _a2 == 64) )
  {
    memmove(Info, &pFxInterrupt->m_InterruptInfo, v6);
    Info->Size = v6;
  }
  else
  {
    WPP_IFR_SF_qdd(pFxDriverGlobals, 2u, 0xCu, 0x19u, WPP_FxInterruptApi_cpp_Traceguids, Interrupt, _a2, 64);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
}
