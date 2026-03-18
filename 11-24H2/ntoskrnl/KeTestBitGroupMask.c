/*
 * XREFs of KeTestBitGroupMask @ 0x140428520
 * Callers:
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeTestBitGroupMask(const signed __int64 *a1, unsigned __int16 a2)
{
  return _bittest64(a1, a2);
}
