/*
 * XREFs of ?TerminateActiveCommand@InkDevice@@EEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1402EE310
 * Callers:
 *     <none>
 * Callees:
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1402ED628 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 */

void __fastcall InkDevice::TerminateActiveCommand(InkDevice *this, struct InkFeedbackProviderBase::ActiveCommand *a2)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this - 20) )
  {
    if ( *((_DWORD *)a2 + 4) == 1 )
    {
      v2 = *((_DWORD *)a2 + 5);
      InkDevice::DoSuperWetInkStop((__int64)this - 32, (const struct IFC_SUPERWET_INK_STOP_DATA *)&v2);
    }
  }
}
