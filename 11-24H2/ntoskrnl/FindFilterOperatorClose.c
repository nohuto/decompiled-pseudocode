/*
 * XREFs of FindFilterOperatorClose @ 0x1409E4E30
 * Callers:
 *     FilterEvalStrict @ 0x1408CA150 (FilterEvalStrict.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindFilterOperatorClose(unsigned int a1, __int64 a2, unsigned int *a3)
{
  int v3; // r10d
  int v4; // r11d
  unsigned int i; // r9d
  int v6; // eax

  v3 = 0;
  v4 = 0;
  *a3 = 0;
  for ( i = 0; i < a1; *a3 = i )
  {
    v6 = *(_DWORD *)(56LL * i + a2) & 0xFF00000;
    if ( v6 == 3145728 )
      goto LABEL_11;
    if ( v6 != 0x400000 )
    {
      if ( v6 == 0x100000 )
        goto LABEL_11;
      if ( v6 != 0x200000 )
      {
        if ( v6 == 5242880 )
        {
LABEL_11:
          ++v3;
          goto LABEL_9;
        }
        if ( v6 != 6291456 )
          goto LABEL_9;
      }
    }
    ++v4;
LABEL_9:
    if ( v3 == v4 )
      return 0LL;
    ++i;
  }
  return 3221225485LL;
}
