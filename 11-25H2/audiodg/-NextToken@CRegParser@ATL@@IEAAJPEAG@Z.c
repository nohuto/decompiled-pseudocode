/*
 * XREFs of ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x14008AE54
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140089FCC (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x14008B7C0 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14008BB20 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x14008C490 (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 * Callees:
 *     ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x14008C52C (-SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ.c)
 */

__int64 __fastcall ATL::CRegParser::NextToken(ATL::CRegParser *this, unsigned __int16 *a2)
{
  const WCHAR *v4; // rcx
  unsigned __int16 *v5; // r14
  unsigned __int16 *v6; // rbp
  const WCHAR *v7; // rcx
  const WCHAR *v8; // rsi
  LPWSTR v9; // rax
  __int64 v10; // rax
  signed __int64 v11; // rsi
  __int64 v12; // rcx
  char *v13; // rsi
  LPWSTR v14; // rax
  __int64 v15; // rax
  signed __int64 v16; // rsi
  __int64 v17; // rcx

  ATL::CRegParser::SkipWhiteSpace(this);
  v4 = *(const WCHAR **)this;
  if ( **(_WORD **)this )
  {
    v5 = a2;
    v6 = a2 + 4096;
    if ( *v4 == 39 )
    {
      *(_QWORD *)this = CharNextW(v4);
      while ( 1 )
      {
        v7 = *(const WCHAR **)this;
        if ( !**(_WORD **)this || *v7 == 39 && *CharNextW(v7) != 39 )
          break;
        v8 = *(const WCHAR **)this;
        if ( **(_WORD **)this == 39 )
        {
          v8 = CharNextW(*(LPCWSTR *)this);
          *(_QWORD *)this = v8;
        }
        v9 = CharNextW(v8);
        *(_QWORD *)this = v9;
        v10 = v9 - v8;
        if ( &a2[v10 + 1] >= v5 + 4096 )
          return 2147614729LL;
        if ( (int)v10 > 0 )
        {
          v11 = (char *)v8 - (char *)a2;
          v12 = (unsigned int)v10;
          do
          {
            *a2 = *(unsigned __int16 *)((char *)a2 + v11);
            ++a2;
            --v12;
          }
          while ( v12 );
        }
      }
      if ( **(_WORD **)this && a2 < v6 )
      {
        *a2 = 0;
        *(_QWORD *)this = CharNextW(*(LPCWSTR *)this);
        return 0LL;
      }
    }
    else
    {
      while ( 1 )
      {
        v13 = *(char **)this;
        if ( !**(_WORD **)this
          || *(_WORD *)v13 == 9
          || *(_WORD *)v13 == 10
          || *(_WORD *)v13 == 13
          || *(_WORD *)v13 == 32 )
        {
          break;
        }
        v14 = CharNextW(*(LPCWSTR *)this);
        *(_QWORD *)this = v14;
        v15 = ((char *)v14 - v13) >> 1;
        if ( &a2[v15 + 1] >= v5 + 4096 )
          return 2147614729LL;
        if ( (int)v15 > 0 )
        {
          v16 = v13 - (char *)a2;
          v17 = (unsigned int)v15;
          do
          {
            *a2 = *(unsigned __int16 *)((char *)a2 + v16);
            ++a2;
            --v17;
          }
          while ( v17 );
        }
      }
      if ( a2 < v6 )
      {
        *a2 = 0;
        return 0LL;
      }
    }
  }
  return 2147614729LL;
}
