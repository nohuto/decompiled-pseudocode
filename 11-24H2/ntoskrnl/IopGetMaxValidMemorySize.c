/*
 * XREFs of IopGetMaxValidMemorySize @ 0x14059464C
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1405912CC (IoFillTriageDumpBuffer.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1405936DC (IopAddRunTimeTriageDataBlocks.c)
 *     IopUpdateMinidumpContext @ 0x14059540C (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckTriageThread @ 0x14059FD0C (IopAddBugcheckTriageThread.c)
 *     IopCalculateStackInformation @ 0x1405A0964 (IopCalculateStackInformation.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x1405A1398 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140262FC0 (MmIsAddressValidEx.c)
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
