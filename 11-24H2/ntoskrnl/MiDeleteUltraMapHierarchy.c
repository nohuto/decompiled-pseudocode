/*
 * XREFs of MiDeleteUltraMapHierarchy @ 0x140462310
 * Callers:
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 */

void __fastcall MiDeleteUltraMapHierarchy(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  BOOL v2; // edi
  unsigned __int64 v3; // rcx
  ULONG_PTR v4; // r9

  v1 = a1;
  v2 = 0;
  v3 = (__int64)(a1 << 25) >> 16;
  if ( v3 >= 0xFFFFF68000000000uLL )
    v2 = v3 <= 0xFFFFF6FFFFFFFFFFuLL;
  v4 = CLFS_LSN_NULL_EXT;
  while ( 1 )
  {
    if ( v2 )
    {
      MiRewritePteWithLockBit(0LL, 0, (volatile __int64 *)v1, v4);
      v4 = CLFS_LSN_NULL_EXT;
    }
    else
    {
      *(_QWORD *)v1 = v4;
      v2 = 1;
    }
    if ( v1 >= qword_140E36070 && v1 <= qword_140E36078 )
      break;
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
}
