/*
 * XREFs of KeSetBitGroupMask @ 0x1404BE850
 * Callers:
 *     KeInitializeProcess @ 0x140A4EB18 (KeInitializeProcess.c)
 *     KiConfigureProcessorBlock @ 0x140B55FA8 (KiConfigureProcessorBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetBitGroupMask(signed __int64 *a1, unsigned __int16 a2)
{
  __int64 result; // rax

  result = a2;
  _bittestandset64(a1, a2);
  return result;
}
