/*
 * XREFs of Register_DisableComplianceModeCapability @ 0x140034CB4
 * Callers:
 *     Register_ControllerReset @ 0x14001C654 (Register_ControllerReset.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     XilRegister_WriteUlong @ 0x14001BA28 (XilRegister_WriteUlong.c)
 */

void __fastcall Register_DisableComplianceModeCapability(__int64 a1)
{
  __int64 v2; // rcx
  int Ulong; // eax

  v2 = *(_QWORD *)(a1 + 8);
  if ( (*(_QWORD *)(v2 + 744) & 0x8000LL) != 0 )
  {
    if ( *(_DWORD *)(a1 + 20) < 0x80F0u || *(_BYTE *)(v2 + 721) || *(_BYTE *)(v2 + 720) != 1 )
    {
      Debug_FreAssertMsg(
        (__int64)"MMIO Offset 0x80EC is unexpectedly out of range",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\register.c",
        2920);
    }
    else
    {
      Ulong = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 33004LL));
      XilRegister_WriteUlong(a1, (_DWORD *)(*(_QWORD *)(a1 + 24) + 33004LL), Ulong | 1);
    }
  }
}
