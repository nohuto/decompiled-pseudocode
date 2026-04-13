/*
 * XREFs of ?do_length@?$codecvt@GDH@std@@MEBAHAEAHPEBD1_K@Z @ 0x18006A0F0
 * Callers:
 *     <none>
 * Callees:
 *     _Mbrtowc @ 0x1800049AC (_Mbrtowc.c)
 */

__int64 __fastcall std::codecvt<unsigned short,char,int>::do_length(
        __int64 a1,
        unsigned int *a2,
        const char *a3,
        const char *a4,
        unsigned __int64 a5)
{
  unsigned int v5; // edi
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // eax
  wchar_t v14; // [rsp+58h] [rbp+10h] BYREF
  mbstate_t v15; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  v15._Wchar = *a2;
  while ( (int)v5 < a5 )
  {
    if ( a3 == a4 )
      break;
    v14 = 0;
    v9 = Mbrtowc(&v14, a3, a4 - a3, &v15, (const _Cvtvec *)(a1 + 16));
    v10 = v9;
    if ( v9 == -2 || v9 == -1 )
      break;
    if ( !v9 && !v14 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a3[v11] );
      v10 = v11 + 1;
    }
    v12 = 0;
    if ( v10 != -3 )
      v12 = v10;
    a3 += v12;
    ++v5;
  }
  return v5;
}
