/*
 * XREFs of MiRealVaToFlushType @ 0x14067FC2C
 * Callers:
 *     MiDbgCopyMemoryTarget @ 0x14067E900 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x14067F0C0 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x14067F674 (MiDbgWriteCheck.c)
 * Callees:
 *     MiHyperSpaceSize @ 0x140235D2C (MiHyperSpaceSize.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
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
    if ( LeafVa < qword_140E2F288 )
      return 0;
    v2 = MiHyperSpaceSize();
    if ( v3 >= qword_140E2F288 + v2 )
      return 0;
  }
  return result;
}
