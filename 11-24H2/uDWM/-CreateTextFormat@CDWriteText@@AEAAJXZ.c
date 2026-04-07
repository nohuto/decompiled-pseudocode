/*
 * XREFs of ?CreateTextFormat@CDWriteText@@AEAAJXZ @ 0x1800624A0
 * Callers:
 *     ?CreateTextLayout@CDWriteText@@AEAAJXZ @ 0x18006217C (-CreateTextLayout@CDWriteText@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180062D20 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x180062DF0 (--$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@-$basic_string@GU-$char_t.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180062ED4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CDWriteText::CreateTextFormat(CDWriteText *this)
{
  int v2; // r12d
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, __int64 *); // rdi
  int v5; // eax
  unsigned int v6; // edi
  int UserDefaultLocaleName; // esi
  __int64 v8; // rdx
  unsigned int v9; // r14d
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, char *, __int64 *); // rbx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64 *); // rbx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int128 *v24; // r8
  __int64 v25; // rsi
  __int64 (__fastcall *v26)(__int64, __int128 *, _QWORD, _QWORD); // rbx
  __int128 *v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int128 *v51; // rdi
  __int64 i; // rcx
  int v53; // [rsp+28h] [rbp-E0h]
  __int64 v54; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v58; // [rsp+78h] [rbp-90h] BYREF
  int v59; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v60; // [rsp+80h] [rbp-88h] BYREF
  __int64 v61; // [rsp+88h] [rbp-80h] BYREF
  __int128 v62; // [rsp+90h] [rbp-78h] BYREF
  __m128i si128; // [rsp+A0h] [rbp-68h]
  __int128 v64; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v66; // [rsp+C8h] [rbp-40h]
  __int128 v67; // [rsp+D0h] [rbp-38h] BYREF
  int v68; // [rsp+E0h] [rbp-28h]
  WCHAR LocaleName[88]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v2 = 0;
  v56 = 0LL;
  v3 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 136LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
  v5 = v4(v3, &v56);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v5,
      v53);
    v34 = v56;
    if ( v56 )
    {
      v56 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    return v6;
  }
  v54 = 0LL;
  v57 = 0LL;
  v55 = 0LL;
  UserDefaultLocaleName = GetUserDefaultLocaleName(LocaleName, 85);
  v62 = 0LL;
  si128 = 0LL;
  std::wstring::_Construct<1,unsigned short const *>(&v62, v8, 8LL);
  v9 = 400;
  v10 = v56;
  v11 = *(int (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v56 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
  if ( v11(v10, (char *)this + 224, &v54) >= 0 )
  {
    v12 = v54;
    v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v54 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v57);
    v14 = v13(v12, &v57);
    v6 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x103,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)v14,
        v53);
      if ( si128.m128i_i64[1] > 7uLL )
        std::_Deallocate<16,0>((void *)v62, (const struct std::nothrow_t *)(2 * si128.m128i_i64[1] + 2));
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v62) = 0;
      v47 = v55;
      if ( v55 )
      {
        v55 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
      }
      v48 = v57;
      if ( v57 )
      {
        v57 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
      }
      v49 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
      }
      v50 = v56;
      if ( v56 )
      {
        v56 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
      }
      return v6;
    }
    v15 = v57;
    v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v57 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
    v17 = v16(v15, &v55);
    v6 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x104,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)v17,
        v53);
      if ( si128.m128i_i64[1] > 7uLL )
        std::_Deallocate<16,0>((void *)v62, (const struct std::nothrow_t *)(2 * si128.m128i_i64[1] + 2));
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v62) = 0;
      v43 = v55;
      if ( v55 )
      {
        v55 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      }
      v44 = v57;
      if ( v57 )
      {
        v57 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
      }
      v45 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      }
      v46 = v56;
      if ( v56 )
      {
        v56 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
      }
      return v6;
    }
    v58 = 0;
    v59 = 0;
    if ( UserDefaultLocaleName )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, WCHAR *, unsigned int *, int *))(*(_QWORD *)v55 + 32LL))(
              v55,
              LocaleName,
              &v58,
              &v59);
      v6 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10C,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
          (const char *)(unsigned int)v20,
          v53);
LABEL_92:
        std::wstring::~wstring(&v62);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v57);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
        return v6;
      }
      if ( v59 )
        goto LABEL_11;
    }
    v18 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, unsigned int *, int *))(*(_QWORD *)v55 + 32LL))(
            v55,
            L"en-us",
            &v58,
            &v59);
    v6 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x110,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)v18,
        v53);
      if ( si128.m128i_i64[1] > 7uLL )
        std::_Deallocate<16,0>((void *)v62, (const struct std::nothrow_t *)(2 * si128.m128i_i64[1] + 2));
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v62) = 0;
      v39 = v55;
      if ( v55 )
      {
        v55 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      }
      v40 = v57;
      if ( v57 )
      {
        v57 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      }
      v41 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      }
      v42 = v56;
      if ( v56 )
      {
        v56 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      }
      return v6;
    }
    if ( v59 )
    {
LABEL_11:
      v19 = v58;
    }
    else
    {
      v19 = 0LL;
      v58 = 0;
    }
    v60 = 0;
    v21 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v55 + 56LL))(v55, v19, &v60);
    v6 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11B,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)v21,
        v53);
      if ( si128.m128i_i64[1] > 7uLL )
        std::_Deallocate<16,0>((void *)v62, (const struct std::nothrow_t *)(2 * si128.m128i_i64[1] + 2));
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v62) = 0;
      v35 = v55;
      if ( v55 )
      {
        v55 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      v36 = v57;
      if ( v57 )
      {
        v57 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      }
      v37 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
      v38 = v56;
      if ( v56 )
      {
        v56 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      }
      return v6;
    }
    v64 = 0LL;
    v65 = 0LL;
    v66 = 7LL;
    LOWORD(v64) = 0;
    if ( v60 )
    {
      v23 = v60;
      if ( v60 <= 7uLL )
      {
        v65 = v60;
        v51 = &v64;
        for ( i = v60; i; --i )
        {
          *(_WORD *)v51 = 0;
          v51 = (__int128 *)((char *)v51 + 2);
        }
        *((_WORD *)&v64 + v23) = 0;
      }
      else
      {
        LOBYTE(v22) = 0;
        std::wstring::_Reallocate_grow_by<_lambda_b70241e9b5ebaad244db3e52d52cab17_,unsigned __int64,unsigned short>(
          &v64,
          v60,
          v22,
          v60);
      }
      v24 = &v64;
      if ( v66 > 7 )
        v24 = (__int128 *)v64;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD))(*(_QWORD *)v55 + 64LL))(v55, v58, v24, v60 + 1);
    }
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 32LL))(v54);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 40LL))(v54);
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 48LL))(v54);
    if ( *((_DWORD *)this + 56) && (float)*((int *)this + 56) >= 0.0 )
    {
      v67 = 0LL;
      v68 = 0;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v54 + 88LL))(v54, &v67);
    }
    if ( v66 > 7 )
      std::_Deallocate<16,0>((void *)v64, (const struct std::nothrow_t *)(2 * v66 + 2));
    v65 = 0LL;
    v66 = 7LL;
    LOWORD(v64) = 0;
  }
  v61 = 0LL;
  v25 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
  v26 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v25 + 120LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 22);
  v27 = &v62;
  if ( si128.m128i_i64[1] > 7uLL )
    v27 = (__int128 *)v62;
  v28 = v26(v25, v27, 0LL, v9);
  v6 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v28,
      v2);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v61);
    goto LABEL_92;
  }
  if ( si128.m128i_i64[1] > 7uLL )
    std::_Deallocate<16,0>((void *)v62, (const struct std::nothrow_t *)(2 * si128.m128i_i64[1] + 2));
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v62) = 0;
  v29 = v55;
  if ( v55 )
  {
    v55 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v30 = v57;
  if ( v57 )
  {
    v57 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = v54;
  if ( v54 )
  {
    v54 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  return 0LL;
}
