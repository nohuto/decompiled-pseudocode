/*
 * XREFs of ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140089FCC
 * Callers:
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14008BB20 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     ??$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z @ 0x140076A10 (--$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140076A48 (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ??1?$CTempBuffer@E$0BAA@VCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x14008956C (--1-$CTempBuffer@E$0BAA@VCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AllocateHeap@?$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAX_K@Z @ 0x14008A4C8 (-AllocateHeap@-$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAX_K@Z.c)
 *     ?AtlHresultFromWin32@ATL@@YAJK@Z @ 0x14008A5F0 (-AtlHresultFromWin32@ATL@@YAJK@Z.c)
 *     ?ChToByte@CRegParser@ATL@@KAEG@Z @ 0x14008A66C (-ChToByte@CRegParser@ATL@@KAEG@Z.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x14008AE54 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x14008C52C (-SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ.c)
 *     _alloca_probe @ 0x140091990 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CRegParser::AddValue(
        ATL::CRegParser *this,
        HKEY *a2,
        const unsigned __int16 *a3,
        unsigned __int16 *a4)
{
  const WCHAR *v4; // r13
  HKEY *v5; // r12
  ATL::CRegParser *v6; // r15
  __int64 result; // rax
  unsigned int v8; // ebx
  int v9; // edi
  LPCWSTR *i; // rsi
  __int16 v11; // di
  __int64 v12; // rax
  int v13; // eax
  unsigned __int64 v14; // rax
  BYTE *v15; // rdi
  WCHAR *j; // r15
  const WCHAR *v17; // rax
  DWORD cbData; // r10d
  BYTE *v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  LSTATUS v22; // edi
  HRESULT v23; // edi
  __int64 v24; // rsi
  DWORD v25; // r14d
  size_t v26; // rdi
  unsigned __int64 v27; // rax
  BYTE *v28; // rcx
  __int64 v29; // r9
  unsigned __int8 v30; // al
  unsigned int v31; // r10d
  __int64 v32; // r9
  __int64 v33; // r11
  __int64 v34; // rsi
  int Token; // eax
  ULONG pulOut; // [rsp+30h] [rbp-21A8h] BYREF
  BYTE Data[8]; // [rsp+38h] [rbp-21A0h] BYREF
  ATL::CRegParser *v38; // [rsp+40h] [rbp-2198h] BYREF
  ATL::CRegParser *v39; // [rsp+48h] [rbp-2190h]
  struct ATL::CRegKey *v40; // [rsp+50h] [rbp-2188h]
  const unsigned __int16 *v41; // [rsp+60h] [rbp-2178h]
  size_t v42; // [rsp+70h] [rbp-2168h]
  unsigned __int16 *v43; // [rsp+78h] [rbp-2160h]
  BYTE *lpData; // [rsp+80h] [rbp-2158h] BYREF
  _BYTE v45[264]; // [rsp+88h] [rbp-2150h] BYREF
  WCHAR String1[4096]; // [rsp+190h] [rbp-2048h] BYREF

  v4 = a3;
  v5 = a2;
  v6 = this;
  v39 = this;
  v38 = this;
  v40 = (struct ATL::CRegKey *)a2;
  v41 = a3;
  v43 = a4;
  result = ATL::CRegParser::NextToken(this, String1);
  v8 = 0;
  if ( (int)result < 0 )
    return result;
  v9 = 0;
  for ( i = (LPCWSTR *)&`ATL::CRegParser::VTFromRegType'::`2'::map; ; i += 2 )
  {
    if ( (unsigned __int64)v9 >= 4 )
      return 2147614729LL;
    if ( !lstrcmpiW(String1, *i) )
      break;
    ++v9;
  }
  v11 = *((_WORD *)&`ATL::CRegParser::VTFromRegType'::`2'::map + 8 * v9 + 4);
  ATL::CRegParser::SkipWhiteSpace(v6);
  result = ATL::CRegParser::NextToken(v6, String1);
  if ( (int)result < 0 )
    return result;
  if ( v11 == 8 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( String1[v34] );
    v22 = RegSetValueExW(*v5, v4, 0, 1u, (const BYTE *)String1, 2 * v34 + 2);
    goto LABEL_53;
  }
  if ( v11 == 17 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( String1[v24] );
    *(_DWORD *)Data = v24;
    if ( (v24 & 1) == 0 )
    {
      v25 = (int)v24 / 2;
      pulOut = (int)v24 / 2;
      lpData = 0LL;
      v26 = (int)v24 / 2;
      v42 = v26;
      try
      {
        v27 = ATL::AtlMultiplyThrow<unsigned __int64>((int)v24 / 2, 1uLL);
        if ( v27 <= 0x100 )
        {
          v28 = v45;
          lpData = v45;
        }
        else
        {
          ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::AllocateHeap(&lpData, v27);
          v28 = lpData;
        }
      }
      catch ( ... )
      {
        v8 = 0;
        LODWORD(v24) = *(_DWORD *)Data;
        v25 = pulOut;
        v28 = lpData;
        v26 = v42;
        v39 = v38;
        v5 = (HKEY *)v40;
        v4 = v41;
      }
      if ( v28 )
      {
        memset_0(v28, 0, v26);
        if ( (int)v24 > 0 )
        {
          v29 = 0LL;
          do
          {
            v30 = ATL::CRegParser::ChToByte(String1[v29]);
            lpData[(unsigned __int64)v31 >> 1] |= v30 << (4 - 4 * (v31 & 1));
            v29 = v32 + 1;
          }
          while ( v29 < v33 );
        }
        v22 = RegSetValueExW(*v5, v4, 0, 3u, lpData, v25);
        ATL::CTempBuffer<unsigned char,256,ATL::CCRTAllocator>::~CTempBuffer<unsigned char,256,ATL::CCRTAllocator>(&lpData);
        goto LABEL_53;
      }
      ATL::CTempBuffer<unsigned char,256,ATL::CCRTAllocator>::~CTempBuffer<unsigned char,256,ATL::CCRTAllocator>(&lpData);
    }
    return 2147500037LL;
  }
  if ( v11 != 19 )
  {
    if ( v11 == 16392 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( String1[v12] );
      v13 = v12 + 2;
      lpData = 0LL;
      try
      {
        v14 = ATL::AtlMultiplyThrow<unsigned __int64>(v13, 2uLL);
        if ( v14 <= 0x100 )
        {
          v15 = v45;
          lpData = v45;
        }
        else
        {
          ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::AllocateHeap(&lpData, v14);
          v15 = lpData;
        }
      }
      catch ( ... )
      {
        v8 = 0;
        v15 = lpData;
        v39 = v38;
        v5 = (HKEY *)v40;
        v4 = v41;
      }
      if ( v15 )
      {
        for ( j = String1; *j; v15 += 2 )
        {
          v17 = CharNextW(j);
          if ( *j == 92 && *v17 == 48 )
          {
            *(_WORD *)v15 = 0;
            j = CharNextW(v17);
          }
          else
          {
            *(_WORD *)v15 = *j++;
          }
        }
        *(_WORD *)v15 = 0;
        *((_WORD *)v15 + 1) = 0;
        if ( !lpData )
          ATL::AtlThrowImpl(-2147467259);
        cbData = 0;
        v19 = lpData;
        do
        {
          v20 = -1LL;
          do
            ++v20;
          while ( *(_WORD *)&v19[2 * v20] );
          v21 = (unsigned int)(v20 + 1);
          v19 += 2 * v21;
          cbData += 2 * v21;
        }
        while ( (_DWORD)v21 != 1 );
        v22 = RegSetValueExW(*v5, v4, 0, 7u, lpData, cbData);
      }
      else
      {
        v22 = 14;
      }
      ATL::CTempBuffer<unsigned char,256,ATL::CCRTAllocator>::~CTempBuffer<unsigned char,256,ATL::CCRTAllocator>(&lpData);
      goto LABEL_53;
    }
LABEL_56:
    Token = ATL::CRegParser::NextToken(v6, v43);
    if ( Token < 0 )
      return (unsigned int)Token;
    return v8;
  }
  pulOut = 0;
  v38 = 0LL;
  v23 = VarUI4FromStr(String1, 0, 0, &pulOut);
  if ( v23 < 0 )
  {
    ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>((_QWORD **)&v38);
    return (unsigned int)v23;
  }
  *(_DWORD *)Data = pulOut;
  v22 = RegSetValueExW(*v5, v4, 0, 4u, Data, 4u);
  ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>((_QWORD **)&v38);
LABEL_53:
  if ( !v22 )
  {
    v6 = v39;
    goto LABEL_56;
  }
  return ATL::AtlHresultFromWin32(v22);
}
