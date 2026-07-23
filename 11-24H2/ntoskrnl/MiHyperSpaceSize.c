/*
 * XREFs of MiHyperSpaceSize @ 0x14020FEBC
 * Callers:
 *     MiInitializeWalkBounds @ 0x14020FC8C (MiInitializeWalkBounds.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 *     MiRealVaToFlushType @ 0x140680E2C (MiRealVaToFlushType.c)
 *     MiDeleteVadBitmap @ 0x140A2CD84 (MiDeleteVadBitmap.c)
 *     MiAssignTopLevelRanges @ 0x140C569B8 (MiAssignTopLevelRanges.c)
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

  result = qword_140E2F3E0;
  if ( !qword_140E2F3E0 )
  {
    result = 0x10000000LL;
    v1 = 0x4000000LL;
    v2 = 0;
    do
    {
      v3 = (result + 4095) & 0xFFFFFFFFFFFFF000uLL;
      qword_140E2F3E8[1 - v2++] = v3;
      v4 = (v1 >> 6) + ((v1 & 0x3F) != 0);
      v1 >>= 9;
      result = v3 + 8 * v4;
    }
    while ( v2 < 2 );
    qword_140E2F3E0 = v3 + 8 * v4;
  }
  return result;
}
