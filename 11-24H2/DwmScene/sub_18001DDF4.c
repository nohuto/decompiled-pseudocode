/*
 * XREFs of sub_18001DDF4 @ 0x18001DDF4
 * Callers:
 *     sub_180086DBC @ 0x180086DBC (sub_180086DBC.c)
 * Callees:
 *     memcmp @ 0x18000CE3D (memcmp.c)
 *     memchr @ 0x1800D4FAC (memchr.c)
 */

__int64 __fastcall sub_18001DDF4(char *Buf, size_t a2, __int64 a3, char *a4, size_t Size)
{
  int v8; // r15d
  char *v9; // rbx
  char *v10; // r14
  char *v11; // rax
  char *v12; // rbx

  if ( Size <= a2 )
  {
    if ( !Size )
      return 0LL;
    v8 = *a4;
    v9 = Buf;
    v10 = &Buf[a2 - Size];
    while ( 1 )
    {
      v11 = (char *)memchr(v9, v8, v10 + 1 - v9);
      v12 = v11;
      if ( !v11 )
        break;
      if ( !memcmp(v11, a4, Size) )
        return v12 - Buf;
      v9 = v12 + 1;
    }
  }
  return -1LL;
}
