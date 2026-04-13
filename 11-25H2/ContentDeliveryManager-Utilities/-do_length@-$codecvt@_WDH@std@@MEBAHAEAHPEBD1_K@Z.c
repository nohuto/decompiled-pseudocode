/*
 * XREFs of ?do_length@?$codecvt@_WDH@std@@MEBAHAEAHPEBD1_K@Z @ 0x1800198D0
 * Callers:
 *     <none>
 * Callees:
 *     _Mbrtowc @ 0x1800049AC (_Mbrtowc.c)
 */

__int64 __fastcall std::codecvt<wchar_t,char,int>::do_length(
        __int64 a1,
        unsigned int *a2,
        const char *a3,
        const char *a4,
        unsigned __int64 a5)
{
  unsigned int i; // ebx
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // eax
  wchar_t v13; // [rsp+58h] [rbp+10h] BYREF
  mbstate_t v14; // [rsp+60h] [rbp+18h] BYREF

  v14._Wchar = *a2;
  for ( i = 0; (int)i < a5; a3 += v11 )
  {
    if ( a3 == a4 )
      break;
    v13 = 0;
    v9 = Mbrtowc(&v13, a3, a4 - a3, &v14, (const _Cvtvec *)(a1 + 16));
    if ( (unsigned int)(v9 + 2) <= 1 )
      break;
    if ( !v9 && !v13 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a3[v10] );
      v9 = v10 + 1;
    }
    v11 = 0;
    if ( v9 != -3 )
      v11 = v9;
    ++i;
  }
  return i;
}
