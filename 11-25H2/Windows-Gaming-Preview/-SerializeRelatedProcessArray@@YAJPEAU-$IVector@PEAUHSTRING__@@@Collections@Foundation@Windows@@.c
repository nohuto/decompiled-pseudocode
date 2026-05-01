/*
 * XREFs of ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180016288
 * Callers:
 *     ?SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800169CC (-SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V-$ComPtr.c)
 *     ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037D08 (-_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 *     _lambda_e30f9dfe56fd89cbeec2250555549c57_::operator() @ 0x180039518 (_lambda_e30f9dfe56fd89cbeec2250555549c57_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001077C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180013CAC (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall SerializeRelatedProcessArray(__int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *), HSTRING *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *); // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  HRESULT v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  char v16; // di
  int v17; // eax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, HSTRING *); // rdi
  int v20; // eax
  HRESULT v21; // eax
  HRESULT v22; // eax
  HRESULT v23; // eax
  int v24; // eax
  int v25; // ebx
  HRESULT v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  HRESULT v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v43; // [rsp+20h] [rbp-30h] BYREF
  HSTRING v44; // [rsp+28h] [rbp-28h] BYREF
  HSTRING string2; // [rsp+30h] [rbp-20h] BYREF
  HSTRING string; // [rsp+38h] [rbp-18h] BYREF
  PCWSTR StringRawBuffer; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char v49; // [rsp+80h] [rbp+30h] BYREF
  HSTRING newString; // [rsp+90h] [rbp+40h] BYREF
  __int64 v51; // [rsp+98h] [rbp+48h] BYREF

  string = 0LL;
  v43 = 0LL;
  v51 = 0LL;
  v3 = (**a1)(a1, &GUID_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e, &v43);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v7 = v43;
    v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 48LL);
    v9 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = v8(v7, &v51);
    v4 = v10;
    if ( v10 >= 0 )
    {
      WindowsDeleteString(string);
      string = 0LL;
      v13 = WindowsCreateString(&word_18004D84C, 1u, &string);
      v4 = v13;
      if ( v13 >= 0 )
      {
        v16 = 0;
        newString = 0LL;
        v49 = 0;
        v17 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v51 + 56LL))(v51, &v49);
        if ( v17 >= 0 )
        {
          while ( v49 )
          {
            v44 = 0LL;
            v18 = v51;
            v19 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v51 + 48LL);
            WindowsDeleteString(0LL);
            v44 = 0LL;
            v20 = v19(v18, &v44);
            v4 = v20;
            if ( v20 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1AF,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                (const char *)(unsigned int)v20);
              WindowsDeleteString(v44);
              v44 = 0LL;
              WindowsDeleteString(newString);
              newString = 0LL;
              v35 = v51;
              if ( v51 )
              {
                v51 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
              }
              v36 = v43;
              if ( v43 )
              {
                v43 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
              }
              goto LABEL_69;
            }
            string2 = 0LL;
            StringRawBuffer = WindowsGetStringRawBuffer(v44, 0LL);
            v21 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(&string2, &StringRawBuffer);
            v4 = v21;
            if ( v21 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1B2,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                (const char *)(unsigned int)v21);
              WindowsDeleteString(string2);
              string2 = 0LL;
              WindowsDeleteString(v44);
              v44 = 0LL;
              WindowsDeleteString(newString);
              newString = 0LL;
              v33 = v51;
              if ( v51 )
              {
                v51 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
              }
              v34 = v43;
              if ( v43 )
              {
                v43 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
              }
              goto LABEL_69;
            }
            WindowsDeleteString(newString);
            newString = 0LL;
            v22 = WindowsConcatString(*a2, string2, &newString);
            v4 = v22;
            if ( v22 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1B3,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                (const char *)(unsigned int)v22);
              WindowsDeleteString(string2);
              string2 = 0LL;
              WindowsDeleteString(v44);
              v44 = 0LL;
              WindowsDeleteString(newString);
              newString = 0LL;
              v31 = v51;
              if ( v51 )
              {
                v51 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
              }
              v32 = v43;
              if ( v43 )
              {
                v43 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
              }
              goto LABEL_69;
            }
            WindowsDeleteString(*a2);
            *a2 = newString;
            newString = 0LL;
            WindowsDeleteString(0LL);
            newString = 0LL;
            v23 = WindowsConcatString(*a2, string, &newString);
            v4 = v23;
            if ( v23 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1B6,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                (const char *)(unsigned int)v23);
              WindowsDeleteString(string2);
              string2 = 0LL;
              WindowsDeleteString(v44);
              v44 = 0LL;
              WindowsDeleteString(newString);
              newString = 0LL;
              v29 = v51;
              if ( v51 )
              {
                v51 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
              }
              v30 = v43;
              if ( v43 )
              {
                v43 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
              }
              goto LABEL_69;
            }
            WindowsDeleteString(*a2);
            *a2 = newString;
            newString = 0LL;
            v16 = 1;
            v24 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v51 + 64LL))(v51, &v49);
            v25 = v24;
            if ( v24 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1BB,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                (const char *)(unsigned int)v24);
            WindowsDeleteString(string2);
            string2 = 0LL;
            WindowsDeleteString(v44);
            if ( v25 < 0 )
              goto LABEL_31;
          }
          if ( v16 )
            goto LABEL_31;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1AB,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
            (const char *)(unsigned int)v17);
        }
        WindowsDeleteString(string);
        string = 0LL;
        v37 = WindowsCreateString(&word_18004D850, 2u, &string);
        v4 = v37;
        if ( v37 >= 0 )
        {
LABEL_31:
          WindowsDeleteString(newString);
          newString = 0LL;
          v26 = WindowsConcatString(*a2, string, &newString);
          v4 = v26;
          if ( v26 >= 0 )
          {
            WindowsDeleteString(*a2);
            *a2 = newString;
            newString = 0LL;
            WindowsDeleteString(0LL);
            newString = 0LL;
            v40 = v51;
            if ( v51 )
            {
              v51 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
            }
            v41 = v43;
            if ( v43 )
            {
              v43 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
            }
            v4 = 0;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1C3,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
              (const char *)(unsigned int)v26);
            WindowsDeleteString(newString);
            newString = 0LL;
            v27 = v51;
            if ( v51 )
            {
              v51 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
            }
            v28 = v43;
            if ( v43 )
            {
              v43 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            }
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1C0,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
            (const char *)(unsigned int)v37);
          WindowsDeleteString(newString);
          newString = 0LL;
          v38 = v51;
          if ( v51 )
          {
            v51 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
          }
          v39 = v43;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
          }
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1A6,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v13);
        v14 = v51;
        if ( v51 )
        {
          v51 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v15 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A5,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v10);
      v11 = v51;
      if ( v51 )
      {
        v51 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = v43;
      if ( v43 )
      {
        v43 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A4,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v3);
    v5 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
LABEL_69:
  WindowsDeleteString(string);
  return v4;
}
