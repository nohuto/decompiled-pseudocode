/*
 * XREFs of MiHyperSpaceSize @ 0x1403E2A20
 * Callers:
 *     MiInitializeWalkBounds @ 0x140246D5C (MiInitializeWalkBounds.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiSystemFault @ 0x1403E1EBC (MiSystemFault.c)
 *     MiRealVaToFlushType @ 0x14067440C (MiRealVaToFlushType.c)
 *     MiDeleteVadBitmap @ 0x140A33648 (MiDeleteVadBitmap.c)
 *     MiAssignTopLevelRanges @ 0x140C435B0 (MiAssignTopLevelRanges.c)
 * Callees:
 *     <none>
 */

__int64 MiHyperSpaceSize()
{
  __int64 result; // rax
  unsigned __int64 v1; // r8
  unsigned int v2; // r9d
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx

  result = qword_140E2F060;
  if ( !qword_140E2F060 )
  {
    result = 0x10000000LL;
    v1 = 0x4000000LL;
    v2 = 0;
    do
    {
      v3 = (result + 4095) & 0xFFFFFFFFFFFFF000uLL;
      qword_140E2F068[1 - v2++] = v3;
      v4 = (v1 >> 6) + ((v1 & 0x3F) != 0);
      v1 >>= 9;
      result = v3 + 8 * v4;
    }
    while ( v2 < 2 );
    qword_140E2F060 = v3 + 8 * v4;
  }
  return result;
}
