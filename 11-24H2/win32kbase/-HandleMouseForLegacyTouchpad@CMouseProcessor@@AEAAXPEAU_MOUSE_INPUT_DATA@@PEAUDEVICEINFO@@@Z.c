/*
 * XREFs of ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1400EF498
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x14018D338 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ApiSetEditionLegacyTouchPadMouseAllowTap @ 0x14019273C (ApiSetEditionLegacyTouchPadMouseAllowTap.c)
 */

void __fastcall CMouseProcessor::HandleMouseForLegacyTouchpad(
        CMouseProcessor *this,
        struct _MOUSE_INPUT_DATA *a2,
        struct DEVICEINFO *a3)
{
  USHORT ButtonFlags; // cx

  if ( (*((_BYTE *)a3 + 864) & 1) != 0 )
  {
    if ( (a2->Buttons & 1) != 0 )
    {
      if ( (unsigned int)ApiSetEditionLegacyTouchPadMouseAllowTap(this) )
      {
        *((_DWORD *)a3 + 223) &= ~1u;
      }
      else
      {
        a2->ButtonFlags &= ~1u;
        *((_DWORD *)a3 + 223) |= 1u;
      }
    }
    ButtonFlags = a2->ButtonFlags;
    if ( (ButtonFlags & 2) != 0 && (*((_DWORD *)a3 + 223) & 1) != 0 )
    {
      a2->ButtonFlags = ButtonFlags & 0xFFFD;
      *((_DWORD *)a3 + 223) &= ~1u;
    }
  }
}
