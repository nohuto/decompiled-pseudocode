/*
 * XREFs of KeClearBitGroupMask @ 0x14046509C
 * Callers:
 *     KeInitializeProcess @ 0x1409BE04C (KeInitializeProcess.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeClearBitGroupMask(signed __int64 *a1, unsigned __int16 a2)
{
  __int64 result; // rax

  result = a2;
  _bittestandreset64(a1, a2);
  return result;
}
