/*
 * XREFs of MiRealVaToFlushType @ 0x140680E2C
 * Callers:
 *     MiDbgCopyMemoryTarget @ 0x14067FB00 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1406802C0 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x140680874 (MiDbgWriteCheck.c)
 * Callees:
 *     MiHyperSpaceSize @ 0x14020FEBC (MiHyperSpaceSize.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 */

_BOOL8 __fastcall MiRealVaToFlushType(unsigned __int64 a1)
{
  unsigned __int64 LeafVa; // r10
  __int64 v2; // rax
  unsigned __int64 v3; // r10
  _BOOL8 result; // rax

  LeafVa = MiGetLeafVa(a1);
  result = 1;
  if ( LeafVa >= 0xFFFF800000000000uLL )
  {
    if ( LeafVa < qword_140E2F3C8 )
      return 0;
    v2 = MiHyperSpaceSize();
    if ( v3 >= qword_140E2F3C8 + v2 )
      return 0;
  }
  return result;
}
