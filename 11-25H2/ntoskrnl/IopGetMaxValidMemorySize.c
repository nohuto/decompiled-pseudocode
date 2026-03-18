/*
 * XREFs of IopGetMaxValidMemorySize @ 0x140590E4C
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x14058DA9C (IoFillTriageDumpBuffer.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x14058FEE4 (IopAddRunTimeTriageDataBlocks.c)
 *     IopUpdateMinidumpContext @ 0x140591C0C (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckTriageThread @ 0x14059C528 (IopAddBugcheckTriageThread.c)
 *     IopCalculateStackInformation @ 0x14059D184 (IopCalculateStackInformation.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x14059DBB8 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402AA5A0 (MmIsAddressValidEx.c)
 */

__int64 __fastcall IopGetMaxValidMemorySize(__int64 a1, unsigned int a2)
{
  int v2; // ebp
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi

  v2 = 4096 - (a1 & 0xFFF);
  v3 = 0;
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( !a2 )
    return a2;
  do
  {
    if ( !MmIsAddressValidEx(v4) )
      break;
    v3 += v2;
    v4 += 4096LL;
    if ( !v4 )
      break;
    v2 = 4096;
  }
  while ( v3 < a2 );
  if ( v3 >= a2 )
    return a2;
  return v3;
}
