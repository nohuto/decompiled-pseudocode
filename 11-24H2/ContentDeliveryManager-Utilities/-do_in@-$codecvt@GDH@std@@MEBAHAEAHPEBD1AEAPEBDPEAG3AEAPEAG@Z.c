/*
 * XREFs of ?do_in@?$codecvt@GDH@std@@MEBAHAEAHPEBD1AEAPEBDPEAG3AEAPEAG@Z @ 0x18006A360
 * Callers:
 *     <none>
 * Callees:
 *     _Mbrtowc @ 0x1800049BC (_Mbrtowc.c)
 */

__int64 __fastcall std::codecvt<unsigned short,char,int>::do_in(
        __int64 a1,
        mbstate_t *a2,
        const char *a3,
        const char *a4,
        const char **a5,
        wchar_t *a6,
        wchar_t *a7,
        wchar_t **a8)
{
  wchar_t *v9; // rcx
  BOOL v12; // edi
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rcx
  int v16; // eax

  v9 = a6;
  *a5 = a3;
  *a8 = a6;
  v12 = *a5 != a4;
  while ( *a5 != a4 && v9 != a7 )
  {
    v13 = Mbrtowc(v9, *a5, a4 - *a5, a2, (const _Cvtvec *)(a1 + 16));
    v14 = v13;
    if ( v13 == -2 )
    {
      *a5 = a4;
      return v12;
    }
    if ( v13 == -1 )
      return 2LL;
    if ( !v13 && !**a8 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( (*a5)[v15] );
      v14 = v15 + 1;
    }
    v16 = 0;
    v12 = 0;
    if ( v14 != -3 )
      v16 = v14;
    *a5 += v16;
    v9 = ++*a8;
  }
  return v12;
}
