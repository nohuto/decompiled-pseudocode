/*
 * XREFs of mbstowcs @ 0x180124E90
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x18000C0D0 (RtlMultiByteToUnicodeN.c)
 *     _errno @ 0x18010D560 (_errno.c)
 *     _mbstrlen @ 0x18012B478 (_mbstrlen.c)
 */

size_t __cdecl mbstowcs(wchar_t *Dest, const char *Source, size_t MaxCount)
{
  int v3; // edi
  int *v7; // rax
  unsigned __int64 v8; // rdx
  size_t v9; // rdx
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = MaxCount;
  if ( Dest && !MaxCount )
    return 0LL;
  if ( MaxCount > 0x7FFFFFFF )
    return -1LL;
  if ( Dest )
  {
    v10 = mbstrlen(Source);
    if ( (int)RtlMultiByteToUnicodeN(Dest, 2 * v3, (unsigned int *)&v10, (unsigned __int8 *)Source, v10 + 1) >= 0 )
    {
      v8 = (unsigned __int64)v10 >> 1;
      v10 = v8;
      if ( !Dest[(int)v8 - 1] )
        LODWORD(v8) = v8 - 1;
    }
    else
    {
      v7 = errno();
      LODWORD(v8) = -1;
      *v7 = 42;
      *Dest = 0;
    }
    return (int)v8;
  }
  else
  {
    v9 = -1LL;
    do
      ++v9;
    while ( Source[v9] );
    return v9;
  }
}
