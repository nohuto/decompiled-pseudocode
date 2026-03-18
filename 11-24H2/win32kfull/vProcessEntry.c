/*
 * XREFs of vProcessEntry @ 0x1400C1270
 * Callers:
 *     QueryRegistryFontSubstituteListRoutine @ 0x1403EA820 (QueryRegistryFontSubstituteListRoutine.c)
 * Callees:
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x1400B94E0 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400BFAE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     vCheckCharSet @ 0x1400C1340 (vCheckCharSet.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall vProcessEntry(unsigned __int16 *a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  unsigned __int16 *v4; // rbx
  unsigned __int16 *v5; // rcx
  unsigned int v7; // edi
  unsigned __int16 v9; // ax
  __int64 v10; // rsi

  v4 = a1;
  v5 = a1 + 32;
  v7 = 0;
  do
  {
    v9 = *v4;
    if ( !*v4 || v4 >= v5 )
    {
      v4 = 0LL;
      goto LABEL_10;
    }
    ++v4;
  }
  while ( v9 != 44 );
  if ( v4 )
  {
    v10 = v4 - a1;
    vCheckCharSet(a2, v4);
    goto LABEL_7;
  }
LABEL_10:
  LODWORD(v10) = 32;
  a2[32] = 257;
LABEL_7:
  cCapString(a2, a1, v10);
  if ( a3 )
  {
    if ( v4 )
    {
      memmove(a3, a1, 2LL * (int)v10 - 2);
      a3[(int)v10 - 1] = 0;
    }
    else
    {
      return (unsigned int)StringCchCopyW((char *)a3, (int)v10, (char *)a1);
    }
  }
  return v7;
}
