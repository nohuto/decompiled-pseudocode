/*
 * XREFs of ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x14008B7C0
 * Callers:
 *     ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z @ 0x14008B94C (-RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x14008AE54 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x14008B070 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14008BB20 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 *     ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x14008C52C (-SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ.c)
 *     _alloca_probe @ 0x140091990 (_alloca_probe.c)
 */

__int64 __fastcall ATL::CRegParser::RegisterBuffer(ATL::CRegObject **this, unsigned __int16 *a2, int a3)
{
  __int64 result; // rax
  int Token; // ebx
  void *v7; // rbp
  unsigned int v8; // esi
  __int64 v9; // rbx
  LPCWSTR *i; // r14
  HKEY v11; // rsi
  ATL::CRegObject *v12; // r14
  LPVOID pv; // [rsp+30h] [rbp-2058h] BYREF
  WCHAR String1[4096]; // [rsp+40h] [rbp-2048h] BYREF

  pv = 0LL;
  result = ATL::CRegParser::PreProcessBuffer(this, a2, (unsigned __int16 **)&pv);
  Token = result;
  if ( (int)result >= 0 )
  {
    v7 = pv;
    *this = (ATL::CRegObject *)pv;
    while ( *(_WORD *)*this )
    {
      Token = ATL::CRegParser::NextToken((ATL::CRegParser *)this, String1);
      if ( Token < 0 )
        break;
      v8 = 0;
      v9 = 0LL;
      for ( i = (LPCWSTR *)&`ATL::CRegParser::HKeyFromString'::`2'::map; ; i += 2 )
      {
        if ( v8 >= 0xE )
          goto LABEL_17;
        if ( !lstrcmpiW(String1, *i) )
          break;
        ++v8;
        ++v9;
      }
      v11 = (HKEY)*(&`ATL::CRegParser::HKeyFromString'::`2'::map + 2 * v9 + 1);
      if ( !v11 )
        goto LABEL_17;
      Token = ATL::CRegParser::NextToken((ATL::CRegParser *)this, String1);
      if ( Token < 0 )
        break;
      if ( String1[0] != 123 )
      {
LABEL_17:
        Token = -2147352567;
        break;
      }
      if ( a3 )
      {
        v12 = *this;
        Token = ATL::CRegParser::RegisterSubkeys((ATL::CRegParser *)this, String1, v11, a3, 0);
        if ( Token < 0 )
        {
          *this = v12;
          ATL::CRegParser::RegisterSubkeys((ATL::CRegParser *)this, String1, v11, 0, 0);
          break;
        }
      }
      else
      {
        Token = ATL::CRegParser::RegisterSubkeys((ATL::CRegParser *)this, String1, v11, 0, 0);
        if ( Token < 0 )
          break;
      }
      ATL::CRegParser::SkipWhiteSpace((ATL::CRegParser *)this);
    }
    CoTaskMemFree(v7);
    return (unsigned int)Token;
  }
  return result;
}
