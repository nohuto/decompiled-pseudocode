/*
 * XREFs of ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x140084D80
 * Callers:
 *     ?ReportMdmConnectionChange@DISPLAY_MUX_MGR@@QEAAXU_LUID@@IPEBU_DXGKARG_QUERYCONNECTIONCHANGE@@@Z @ 0x140086E3C (-ReportMdmConnectionChange@DISPLAY_MUX_MGR@@QEAAXU_LUID@@IPEBU_DXGKARG_QUERYCONNECTIONCHANGE@@@Z.c)
 *     ?SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z @ 0x1400877FC (-SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z.c)
 *     DpiMdmProcessAdapterBrightness @ 0x140088794 (DpiMdmProcessAdapterBrightness.c)
 *     DpiMdmProcessStartAdapter @ 0x140088D14 (DpiMdmProcessStartAdapter.c)
 *     DpiFdoSetAdapterPowerState @ 0x14040AB28 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoCreateRelatedObjects @ 0x14040B520 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?IsTargetPartOfMux@DISPLAY_MUX_PAIRING@@QEBAJU_LUID@@IPEAE1@Z @ 0x140084DCC (-IsTargetPartOfMux@DISPLAY_MUX_PAIRING@@QEBAJU_LUID@@IPEAE1@Z.c)
 */

__int64 __fastcall DISPLAY_MUX_MGR::IsTargetPartOfMux(
        DISPLAY_MUX_MGR *this,
        struct _LUID a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  DISPLAY_MUX_PAIRING *v5; // rcx
  __int64 result; // rax

  v5 = (DISPLAY_MUX_PAIRING *)*((_QWORD *)this + 9);
  if ( v5 )
    return DISPLAY_MUX_PAIRING::IsTargetPartOfMux(v5, a2, a3, a4, a5);
  WdLogSingleEntry0(2LL);
  result = 3221225473LL;
  WdLogGlobalForLineNumber = 2847;
  return result;
}
