/*
 * XREFs of KeSizeOfKProcessExtension @ 0x1404A7D08
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSizeOfKProcessExtension(char a1)
{
  __int64 result; // rax

  result = 24LL * (unsigned __int16)KiMaximumGroups + 616;
  if ( (a1 & 4) != 0 )
    result += 24LL * (((unsigned int)(KeMaximumProcessors - 1) >> 3) + 1);
  return result;
}
