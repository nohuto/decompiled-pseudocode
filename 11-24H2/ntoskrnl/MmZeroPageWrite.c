/*
 * XREFs of MmZeroPageWrite @ 0x140493B8C
 * Callers:
 *     MiZeroPageFile @ 0x14066BEC0 (MiZeroPageFile.c)
 *     PopZeroHiberFile @ 0x14075333C (PopZeroHiberFile.c)
 * Callees:
 *     MiZeroPageWrite @ 0x140268964 (MiZeroPageWrite.c)
 */

__int64 __fastcall MmZeroPageWrite(__int64 a1, _QWORD *a2, __int64 *a3, unsigned int a4)
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
