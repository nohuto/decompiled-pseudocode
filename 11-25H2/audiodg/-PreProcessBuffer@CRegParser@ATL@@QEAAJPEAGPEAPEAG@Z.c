/*
 * XREFs of ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x14008B070
 * Callers:
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x14008B7C0 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C454 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ??$AtlMultiply@K@ATL@@YAJPEAKKK@Z @ 0x1400767A0 (--$AtlMultiply@K@ATL@@YAJPEAKKK@Z.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140076A48 (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ?Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z @ 0x14008A4FC (-Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z.c)
 *     ?StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z @ 0x14008C570 (-StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z.c)
 *     ?StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z @ 0x14008C5BC (-StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CRegParser::PreProcessBuffer(
        ATL::CRegObject **this,
        unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  LPWSTR v4; // rbx
  unsigned int v6; // edi
  __int64 v7; // rdx
  signed int v8; // edx
  _WORD *v9; // rax
  LPWSTR v11; // rax
  const unsigned __int16 *v12; // rdx
  unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // r14
  __int64 v15; // rcx
  unsigned int v16; // eax
  const unsigned __int16 *v17; // rax
  __int64 v18; // r8
  int v19; // ebx
  const WCHAR *i; // rax
  unsigned __int16 *v21; // rcx
  SIZE_T cb; // [rsp+20h] [rbp-39h] BYREF
  _DWORD v23[2]; // [rsp+28h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-29h]
  unsigned __int16 v25[32]; // [rsp+40h] [rbp-19h] BYREF

  v4 = a2;
  v6 = 0;
  if ( !a2 || !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v7 = -1LL;
  do
    ++v7;
  while ( v4[v7] );
  v8 = 2 * v7;
  if ( v8 < 100 )
    v8 = 1000;
  v23[0] = 0;
  v23[1] = v8;
  LODWORD(cb) = 0;
  if ( (int)ATL::AtlMultiply<unsigned long>(&cb, v8, 2u) >= 0 )
  {
    v9 = CoTaskMemAlloc((unsigned int)cb);
    pv = v9;
    if ( v9 )
      *v9 = 0;
  }
  else
  {
    v9 = 0LL;
    pv = 0LL;
  }
  if ( !v9 )
  {
    CoTaskMemFree(0LL);
    return 2147942414LL;
  }
  *this = (ATL::CRegObject *)v4;
  while ( *v4 )
  {
    if ( *v4 != 37 )
    {
      v12 = v4;
LABEL_29:
      if ( !(unsigned int)ATL::CRegParser::CParseBuffer::Append((ATL::CRegParser::CParseBuffer *)v23, v12, 1) )
        goto LABEL_33;
      goto LABEL_30;
    }
    v11 = CharNextW(v4);
    *this = (ATL::CRegObject *)v11;
    if ( *v11 == 37 )
    {
      v12 = v11;
      goto LABEL_29;
    }
    v13 = ATL::CRegParser::StrChrW(v11, 0x25u);
    v14 = v13;
    if ( !v13 )
      goto LABEL_32;
    v15 = ((char *)v13 - (char *)*this) >> 1;
    if ( v15 > 31 )
    {
      v6 = -2147467259;
      goto LABEL_35;
    }
    v16 = _o_wcsncpy_s(v25, 32LL, *this, (int)v15);
    ATL::AtlCrtErrorCheck(v16);
    v17 = ATL::CRegObject::StrFromMap(this[1], v25);
    if ( !v17 )
    {
LABEL_32:
      v6 = -2147352567;
      goto LABEL_35;
    }
    cb = 0LL;
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = ATL::CRegParser::CParseBuffer::Append((ATL::CRegParser::CParseBuffer *)v23, v17, v18);
    ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>((_QWORD **)&cb);
    if ( !v19 )
    {
LABEL_33:
      v6 = -2147024882;
      goto LABEL_35;
    }
    for ( i = (const WCHAR *)*this; i != v14; *this = (ATL::CRegObject *)i )
      i = CharNextW(i);
LABEL_30:
    v4 = CharNextW((LPCWSTR)*this);
    *this = (ATL::CRegObject *)v4;
  }
  v21 = (unsigned __int16 *)pv;
  pv = 0LL;
  *a3 = v21;
LABEL_35:
  CoTaskMemFree(pv);
  return v6;
}
