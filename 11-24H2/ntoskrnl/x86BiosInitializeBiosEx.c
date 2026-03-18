/*
 * XREFs of x86BiosInitializeBiosEx @ 0x140546558
 * Callers:
 *     HalInitializeBios @ 0x14053BD40 (HalInitializeBios.c)
 * Callees:
 *     x86BiosInitializeBiosShadowed @ 0x1405465DC (x86BiosInitializeBiosShadowed.c)
 */

char __fastcall x86BiosInitializeBiosEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al

  result = x86BiosInitializeBiosShadowed();
  x86BiosTransferMemory = a4;
  x86BiosTransferLength = 0x2000;
  if ( !XmPciBiosPresent )
  {
    if ( qword_140E00870 )
    {
      XmPciBiosPresent = 1;
      XmGetPciData = (__int64)x86BiosGetPciBusData;
      XmSetPciData = (__int64)x86BiosSetPciBusData;
      result = HalpMaxPciBus;
      XmNumberPciBusses = -1;
      if ( HalpMaxPciBus )
      {
        if ( HalpMaxPciBus != 255 )
        {
          result = HalpMaxPciBus + 1;
          XmNumberPciBusses = HalpMaxPciBus + 1;
        }
      }
    }
  }
  return result;
}
