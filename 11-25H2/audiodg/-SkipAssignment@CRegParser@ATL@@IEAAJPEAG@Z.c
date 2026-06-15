/*
 * XREFs of ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x14008C490
 * Callers:
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14008BB20 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x14008AE54 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x14008C52C (-SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ.c)
 *     _alloca_probe @ 0x140091990 (_alloca_probe.c)
 */

__int64 __fastcall ATL::CRegParser::SkipAssignment(ATL::CRegParser *this, unsigned __int16 *a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  int Token; // eax
  unsigned __int16 v7[4096]; // [rsp+20h] [rbp-2018h] BYREF

  if ( *a2 != 61 )
    return 0LL;
  result = ATL::CRegParser::NextToken(this, a2);
  v5 = 0;
  if ( (int)result >= 0 )
  {
    ATL::CRegParser::SkipWhiteSpace(this);
    result = ATL::CRegParser::NextToken(this, v7);
    if ( (int)result >= 0 )
    {
      Token = ATL::CRegParser::NextToken(this, a2);
      if ( Token < 0 )
        return (unsigned int)Token;
      return v5;
    }
  }
  return result;
}
