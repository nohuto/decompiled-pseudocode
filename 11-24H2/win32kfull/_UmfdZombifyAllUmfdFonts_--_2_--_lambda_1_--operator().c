/*
 * XREFs of _UmfdZombifyAllUmfdFonts_::_2_::_lambda_1_::operator() @ 0x14025DB04
 * Callers:
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x140263C44 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030DCEC (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

void __fastcall UmfdZombifyAllUmfdFonts_::_2_::_lambda_1_::operator()(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // r10d
  struct PFF *i; // rcx
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // rcx
  struct PFF *v8; // rax
  int v9; // r10d
  __int64 v10; // r11

  v2 = a2;
  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 28) )
    {
      v3 = 0;
      if ( *(_DWORD *)(a2 + 24) )
      {
        do
        {
          for ( i = *(struct PFF **)(v2 + 8LL * v3 + 40); ; i = (struct PFF *)*((_QWORD *)v8 + 1) )
          {
            v8 = SkipInvalidPff(i);
            if ( !v8 )
              break;
            v5 = *((_QWORD *)v8 + 12);
            if ( v5 )
            {
              if ( (*(_DWORD *)(v5 + 40) & 0x8000) == 0 )
              {
                v6 = v10;
                for ( *(_BYTE *)(*((_QWORD *)v8 + 11) + 24LL) = 1;
                      v6 < *((_DWORD *)v8 + 9);
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 26) + 8 * v7) + 16LL) = v10 )
                {
                  v7 = v6++;
                }
              }
            }
          }
          v3 = v9 + 1;
        }
        while ( v3 < *(_DWORD *)(v2 + 24) );
      }
    }
  }
}
