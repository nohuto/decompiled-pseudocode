/*
 * XREFs of MmZeroPageWrite @ 0x1402604EC
 * Callers:
 *     MiZeroPageFile @ 0x14066D090 (MiZeroPageFile.c)
 *     PopZeroHiberFile @ 0x14075165C (PopZeroHiberFile.c)
 * Callees:
 *     MiZeroPageWrite @ 0x14025FE14 (MiZeroPageWrite.c)
 */

__int64 __fastcall MmZeroPageWrite(struct _FILE_OBJECT *a1, LARGE_INTEGER *a2, __int64 *a3, unsigned int a4)
{
  __int64 v4; // rbx
  unsigned int v8; // r10d
  __int64 result; // rax
  unsigned int i; // edi

  v4 = *a3;
  v8 = 0;
  while ( HIDWORD(v4) )
  {
    for ( i = 0; i < 4; ++i )
    {
      result = MiZeroPageWrite(a1, a2, 0x40000000u, a4);
      v8 = result;
      if ( (int)result < 0 )
        return result;
      v4 -= 0x40000000LL;
    }
  }
  if ( !(_DWORD)v4 )
    return v8;
  result = MiZeroPageWrite(a1, a2, v4, a4);
  v8 = result;
  if ( (int)result >= 0 )
    return v8;
  return result;
}
