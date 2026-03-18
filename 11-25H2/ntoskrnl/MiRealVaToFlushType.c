/*
 * XREFs of MiRealVaToFlushType @ 0x14067440C
 * Callers:
 *     MiDbgCopyMemoryTarget @ 0x1406730E0 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1406738A0 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x140673E54 (MiDbgWriteCheck.c)
 * Callees:
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiHyperSpaceSize @ 0x1403E2A20 (MiHyperSpaceSize.c)
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
    if ( LeafVa < qword_140E2F048 )
      return 0;
    v2 = MiHyperSpaceSize();
    if ( v3 >= qword_140E2F048 + v2 )
      return 0;
  }
  return result;
}
