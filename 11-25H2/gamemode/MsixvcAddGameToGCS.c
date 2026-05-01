/*
 * XREFs of MsixvcAddGameToGCS @ 0x180006750
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z @ 0x1800065C0 (--$-0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800066F8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18000F280 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180010010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MsixvcAddGameToGCS(__int64 a1)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  unsigned int v4; // r8d
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, PVOID, __int64 *); // rdi
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  HRESULT v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, _QWORD, __int64 *); // rdi
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 (__fastcall *v32)(__int64, HSTRING *); // rdi
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 (__fastcall *v45)(__int64, PCWSTR, __int128 *); // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // [rsp+28h] [rbp-39h] BYREF
  __int64 v53; // [rsp+30h] [rbp-31h] BYREF
  __int64 v54; // [rsp+38h] [rbp-29h] BYREF
  __int64 v55; // [rsp+40h] [rbp-21h] BYREF
  __int64 v56; // [rsp+48h] [rbp-19h] BYREF
  HSTRING v57; // [rsp+50h] [rbp-11h] BYREF
  __int64 v58; // [rsp+58h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-1h] BYREF
  HSTRING string; // [rsp+78h] [rbp+17h] BYREF
  __int64 v61; // [rsp+80h] [rbp+1Fh]
  __int128 v62; // [rsp+88h] [rbp+27h] BYREF
  __int128 v63; // [rsp+98h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  *(_QWORD *)&v62 = a1;
  v58 = 0LL;
  v63 = 0LL;
  if ( !a1 )
    return 2147942487LL;
  v52 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    JUMPOUT(0x180006E4FLL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419, &v52);
  v5 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v53 = 0LL;
    v7 = v52;
    v8 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v52 + 176LL);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&v62, v4);
    v10 = v8(v7, v9[1].Reserved.Reserved1, &v53);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v55 = 0LL;
      v54 = 0LL;
      string = 0LL;
      v13 = WindowsCreateStringReference(
              L"Windows.Internal.StateRepository.Application",
              0x2Cu,
              &hstringHeader,
              &string);
      if ( v13 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
        __debugbreak();
      }
      v14 = RoGetActivationFactory(string, &GUID_07adcc9a_e505_48c2_b471_45af8561f6af, &v54);
      v5 = v14;
      if ( v14 >= 0 )
      {
        v56 = 0LL;
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v54 + 144LL))(v54, v53, &v56);
        v5 = v18;
        if ( v18 >= 0 )
        {
          v23 = v56;
          v24 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v56 + 48LL);
          if ( v55 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
          v25 = v24(v23, 0LL, &v55);
          v5 = v25;
          if ( v25 >= 0 )
          {
            v31 = v55;
            v32 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v55 + 232LL);
            WindowsDeleteString(0LL);
            v57 = 0LL;
            v33 = v32(v31, &v57);
            v5 = v33;
            if ( v33 >= 0 )
            {
              v39 = CreateGameConfigStoreClient(&v58);
              v5 = v39;
              if ( v39 >= 0 )
              {
                v45 = *(__int64 (__fastcall **)(__int64, PCWSTR, __int128 *))(*(_QWORD *)v58 + 40LL);
                StringRawBuffer = WindowsGetStringRawBuffer(v57, 0LL);
                v5 = v45(v58, StringRawBuffer, &v63);
                if ( v5 < 0 )
                {
                  *(_OWORD *)&hstringHeader.Reserved.Reserved2[4] = 0LL;
                  v61 = 0LL;
                  v62 = 0LL;
                  string = (HSTRING)WindowsGetStringRawBuffer(v57, 0LL);
                  *(_DWORD *)&hstringHeader.Reserved.Reserved2[20] = 2;
                  LODWORD(hstringHeader.Reserved.Reserved1) = 2;
                  LODWORD(v61) = v61 & 0xFFFFFFE0 | 0x11;
                  v5 = (**(__int64 (__fastcall ***)(__int64, HSTRING_HEADER *, __int128 *))v58)(
                         v58,
                         &hstringHeader,
                         &v62);
                }
                if ( v58 )
                  FreeGameConfigStoreClient();
                WindowsDeleteString(v57);
                v57 = 0LL;
                v47 = v56;
                if ( v56 )
                {
                  v56 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
                }
                v48 = v54;
                if ( v54 )
                {
                  v54 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
                }
                v49 = v55;
                if ( v55 )
                {
                  v55 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
                }
                v50 = v53;
                if ( v53 )
                {
                  v53 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
                }
                v51 = v52;
                if ( v52 )
                {
                  v52 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
                }
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xB2,
                  (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
                  (const char *)(unsigned int)v39);
                WindowsDeleteString(v57);
                v57 = 0LL;
                v40 = v56;
                if ( v56 )
                {
                  v56 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
                }
                v41 = v54;
                if ( v54 )
                {
                  v54 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
                }
                v42 = v55;
                if ( v55 )
                {
                  v55 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
                }
                v43 = v53;
                if ( v53 )
                {
                  v53 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
                }
                v44 = v52;
                if ( v52 )
                {
                  v52 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
                }
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xAE,
                (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
                (const char *)(unsigned int)v33);
              WindowsDeleteString(v57);
              v57 = 0LL;
              v34 = v56;
              if ( v56 )
              {
                v56 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
              }
              v35 = v54;
              if ( v54 )
              {
                v54 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
              }
              v36 = v55;
              if ( v55 )
              {
                v55 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
              }
              v37 = v53;
              if ( v53 )
              {
                v53 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
              }
              v38 = v52;
              if ( v52 )
              {
                v52 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
              }
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xAB,
              (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
              (const char *)(unsigned int)v25);
            v26 = v56;
            if ( v56 )
            {
              v56 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
            }
            v27 = v54;
            if ( v54 )
            {
              v54 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
            }
            v28 = v55;
            if ( v55 )
            {
              v55 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            }
            v29 = v53;
            if ( v53 )
            {
              v53 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
            }
            v30 = v52;
            if ( v52 )
            {
              v52 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
            }
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA9,
            (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
            (const char *)(unsigned int)v18);
          v19 = v56;
          if ( v56 )
          {
            v56 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          v20 = v54;
          if ( v54 )
          {
            v54 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          }
          if ( v55 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
          v21 = v53;
          if ( v53 )
          {
            v53 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          }
          v22 = v52;
          if ( v52 )
          {
            v52 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA6,
          (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
          (const char *)(unsigned int)v14);
        v15 = v54;
        if ( v54 )
        {
          v54 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        if ( v55 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
        v16 = v53;
        if ( v53 )
        {
          v53 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v17 = v52;
        if ( v52 )
        {
          v52 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA2,
        (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        (const char *)(unsigned int)v10);
      v11 = v53;
      if ( v53 )
      {
        v53 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = v52;
      if ( v52 )
      {
        v52 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)ActivationFactory);
    v6 = v52;
    if ( v52 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)v5;
}
