/*
 * XREFs of ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14008B5A0
 * Callers:
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x14008B240 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14008B5A0 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C484 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140089A4C (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?AtlHresultFromWin32@ATL@@YAJK@Z @ 0x14008A070 (-AtlHresultFromWin32@ATL@@YAJK@Z.c)
 *     ?CanForceRemoveKey@CRegParser@ATL@@IEAAHPEBG@Z @ 0x14008A088 (-CanForceRemoveKey@CRegParser@ATL@@IEAAHPEBG@Z.c)
 *     ?Close@CRegKey@ATL@@QEAAJXZ @ 0x14008A250 (-Close@CRegKey@ATL@@QEAAJXZ.c)
 *     ?DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x14008A66C (-DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?HasSubKeys@CRegParser@ATL@@IEAAHPEAUHKEY__@@@Z @ 0x14008A830 (-HasSubKeys@CRegParser@ATL@@IEAAHPEAUHKEY__@@@Z.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x14008A8D4 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z @ 0x14008AA94 (-Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z.c)
 *     ?RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x14008B138 (-RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14008B5A0 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x14008BF10 (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z @ 0x14008BFF0 (-StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z.c)
 *     _alloca_probe @ 0x140091410 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CRegParser::RegisterSubkeys(
        ATL::CRegParser *this,
        unsigned __int16 *a2,
        HKEY a3,
        int a4,
        int a5)
{
  int v5; // r15d
  unsigned __int16 *v7; // rdi
  ATL::CRegParser *v8; // rsi
  int Token; // eax
  int v10; // r12d
  int v11; // r14d
  int v12; // ebx
  ATL::CRegParser *v13; // rcx
  int v14; // eax
  int v15; // eax
  LSTATUS v16; // ecx
  __int64 v17; // rax
  int v18; // r14d
  int v19; // r15d
  unsigned int v20; // eax
  ATL::CRegParser *v21; // rcx
  __int64 v22; // rax
  int HasSubKeys; // r14d
  LSTATUS v24; // eax
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  HKEY v30[3]; // [rsp+70h] [rbp-90h] BYREF
  DWORD dwDisposition; // [rsp+88h] [rbp-78h] BYREF
  HKEY phkResult; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 v33[264]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR ValueName[4096]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v5 = a4;
  v7 = a2;
  v8 = this;
  memset(v30, 0, sizeof(v30));
LABEL_2:
  Token = ATL::CRegParser::NextToken(this, a2);
  while ( 2 )
  {
    v12 = Token;
    if ( Token < 0 )
      goto LABEL_82;
    while ( 1 )
    {
      if ( *v7 == 125 )
        goto LABEL_82;
      v10 = 1;
      v11 = lstrcmpiW(v7, L"Delete");
      if ( !lstrcmpiW(v7, L"ForceRemove") || !v11 )
      {
        v12 = ATL::CRegParser::NextToken(v8, v7);
        if ( v12 < 0 )
          goto LABEL_82;
        if ( v5 )
        {
          hKey = 0LL;
          v28 = 0LL;
          v29 = 0LL;
          if ( ATL::CRegParser::StrChrW(v7, 0x5Cu) )
          {
            ATL::CRegKey::Close(&hKey);
LABEL_81:
            v12 = -2147352567;
            goto LABEL_82;
          }
          if ( (unsigned int)ATL::CRegParser::CanForceRemoveKey(v13, v7) )
          {
            hKey = a3;
            ATL::CRegKey::RecurseDeleteKey(&hKey, v7);
            hKey = 0LL;
          }
          if ( !v11 )
          {
            v12 = ATL::CRegParser::NextToken(v8, v7);
            if ( v12 < 0 )
              goto LABEL_84;
            v14 = ATL::CRegParser::SkipAssignment(v8, v7);
            v12 = v14;
            goto LABEL_14;
          }
          ATL::CRegKey::Close(&hKey);
        }
      }
      if ( !lstrcmpiW(v7, L"NoRemove") )
      {
        v10 = 0;
        v12 = ATL::CRegParser::NextToken(v8, v7);
        if ( v12 < 0 )
          goto LABEL_82;
      }
      if ( !lstrcmpiW(v7, L"Val") )
        break;
      if ( ATL::CRegParser::StrChrW(v7, 0x5Cu) )
        goto LABEL_81;
      if ( v5 )
      {
        if ( (unsigned int)ATL::CRegKey::Open(v30, a3, v7, 0x2001Fu)
          && (unsigned int)ATL::CRegKey::Open(v30, a3, v7, 0x20019u) )
        {
          dwDisposition = 0;
          phkResult = 0LL;
          v16 = RegCreateKeyExW(a3, v7, 0, 0LL, 0, 0x2001Fu, 0LL, &phkResult, &dwDisposition);
          if ( !v16 )
          {
            v16 = ATL::CRegKey::Close(v30);
            v30[0] = phkResult;
          }
          if ( v16 )
            goto LABEL_67;
        }
        v12 = ATL::CRegParser::NextToken(v8, v7);
        if ( v12 < 0 )
          goto LABEL_82;
        if ( *v7 == 61 )
        {
          v12 = ATL::CRegParser::AddValue(v8, v30, 0LL, v7);
          if ( v12 < 0 )
            goto LABEL_82;
        }
LABEL_43:
        if ( *v7 == 123 )
        {
          v17 = -1LL;
          do
            ++v17;
          while ( v7[v17] );
          if ( v17 == 1 )
          {
            v12 = ATL::CRegParser::RegisterSubkeys(v8, v7, v30[0], v5, 0);
            if ( v12 < 0 )
              goto LABEL_82;
            a2 = v7;
            this = v8;
            goto LABEL_2;
          }
        }
      }
      else
      {
        if ( a5 )
          v18 = 2;
        else
          v18 = ATL::CRegKey::Open(v30, a3, v7, 0x20019u);
        v19 = 1;
        if ( !v18 )
          v19 = a5;
        v20 = _o_wcsncpy_s(v33, 260LL, v7, -1LL);
        ATL::AtlCrtErrorCheck(v20);
        v12 = ATL::CRegParser::NextToken(v8, v7);
        if ( v12 < 0 )
          goto LABEL_82;
        v12 = ATL::CRegParser::SkipAssignment(v8, v7);
        v21 = 0LL;
        if ( v12 < 0 )
          goto LABEL_82;
        if ( *v7 == 123 )
        {
          v22 = -1LL;
          do
            ++v22;
          while ( v7[v22] );
          if ( v22 == 1 )
          {
            v12 = ATL::CRegParser::RegisterSubkeys(v8, v7, v30[0], 0, v19);
            if ( v12 < 0 && !v19 )
              goto LABEL_82;
            v12 = ATL::CRegParser::NextToken(v8, v7);
            v21 = 0LL;
            if ( v12 < 0 )
              goto LABEL_82;
          }
        }
        v5 = a4;
        if ( v18 != 2 )
        {
          if ( v18 )
          {
            if ( !a5 )
            {
              v16 = v18;
LABEL_67:
              v12 = ATL::AtlHresultFromWin32(v16);
              goto LABEL_82;
            }
          }
          else if ( a5 && (unsigned int)ATL::CRegParser::HasSubKeys(0LL, v30[0]) )
          {
            if ( (unsigned int)ATL::CRegParser::CanForceRemoveKey(v21, v33) && v10 )
              ATL::CRegKey::RecurseDeleteKey(v30, v33);
          }
          else
          {
            HasSubKeys = ATL::CRegParser::HasSubKeys(v21, v30[0]);
            v24 = ATL::CRegKey::Close(v30);
            if ( v24 )
            {
              v16 = v24;
              goto LABEL_67;
            }
            if ( v10 && !HasSubKeys )
            {
              v28 = 0LL;
              v29 = 0LL;
              hKey = a3;
              v15 = ATL::CRegKey::DeleteSubKey((ATL::CRegKey *)&hKey, v33);
              hKey = 0LL;
              if ( v15 )
                goto LABEL_83;
              ATL::CRegKey::Close(&hKey);
            }
            v5 = a4;
          }
        }
      }
    }
    v12 = ATL::CRegParser::NextToken(v8, ValueName);
    if ( v12 < 0 )
      goto LABEL_82;
    v12 = ATL::CRegParser::NextToken(v8, v7);
    if ( v12 < 0 )
      goto LABEL_82;
    if ( *v7 != 61 )
      goto LABEL_81;
    if ( v5 )
    {
      v28 = 0LL;
      v29 = 0LL;
      hKey = a3;
      v14 = ATL::CRegParser::AddValue(v8, &hKey, ValueName, v7);
      v12 = v14;
      hKey = 0LL;
LABEL_14:
      if ( v14 < 0 )
        goto LABEL_84;
      ATL::CRegKey::Close(&hKey);
      goto LABEL_43;
    }
    if ( a5 || !v10 )
      goto LABEL_30;
    hKey = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    v15 = ATL::CRegKey::Open(&hKey, a3, 0LL, 0x20006u);
    if ( !v15 )
    {
      v15 = RegDeleteValueW(hKey, ValueName);
      if ( (v15 & 0xFFFFFFFD) == 0 )
      {
        ATL::CRegKey::Close(&hKey);
LABEL_30:
        Token = ATL::CRegParser::SkipAssignment(v8, v7);
        continue;
      }
    }
    break;
  }
LABEL_83:
  v12 = ATL::AtlHresultFromWin32(v15);
LABEL_84:
  ATL::CRegKey::Close(&hKey);
LABEL_82:
  ATL::CRegKey::Close(v30);
  return (unsigned int)v12;
}
