/*
 * XREFs of KeClearBitGroupMask @ 0x140454108
 * Callers:
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     KeInitializeProcess @ 0x140A45798 (KeInitializeProcess.c)
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
