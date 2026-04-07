/*
 * XREFs of ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800E3F40
 * Callers:
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800B1050 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800B14D4 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800E3AC8 (-Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800E3CC4 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTetherVisual::UpdatePosition(
        struct tagPOINT *this,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3)
{
  unsigned int v3; // ebx
  int updated; // eax

  v3 = 0;
  if ( a3 )
    this[39] = *a3;
  if ( a2 )
    this[38] = *a2;
  if ( a3 || a2 )
  {
    updated = CTetherVisual::UpdateInstructions((CTetherVisual *)this);
    v3 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x53u);
  }
  return v3;
}
