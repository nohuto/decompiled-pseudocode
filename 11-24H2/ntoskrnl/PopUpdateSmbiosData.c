/*
 * XREFs of PopUpdateSmbiosData @ 0x14075351C
 * Callers:
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 * Callees:
 *     PopTraceSmbiosChange @ 0x1405D3A98 (PopTraceSmbiosChange.c)
 */

void __fastcall PopUpdateSmbiosData(char a1, char a2, int a3, __int64 a4)
{
  int v4; // r10d
  __int64 v7; // rcx

  v4 = WmipSMBiosTableLength;
  BYTE2(WmipSMBiosVersionInfo) = a2;
  v7 = WmipSMBiosTablePhysicalAddress;
  BYTE1(WmipSMBiosVersionInfo) = a1;
  WmipSMBiosTablePhysicalAddress = a4;
  LODWORD(WmipSMBiosTableLength) = a3;
  if ( a4 != v7 || a3 != v4 )
    PopTraceSmbiosChange();
}
