/*
 * XREFs of ?Initialize@CSpriteVisual@@UEAAJXZ @ 0x180032B40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18001BFC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x1800336B0 (-InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CSpriteVisual::Initialize(CSpriteVisual *this)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v3)(__int64, GUID *, _QWORD *); // rbx
  _QWORD *v4; // r12
  int v5; // ebx
  __int64 (__fastcall *v6)(__int64, _QWORD, HANDLE *); // r15
  HANDLE v7; // rbx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, char *); // rdi
  char *v10; // r15
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v13)(__int64, char *); // rbx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v17)(_QWORD, GUID *, __int64 *); // rbx
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64 *); // rdi
  __int64 (__fastcall ***v21)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v22)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v24; // rdx
  HANDLE v25; // rcx
  bool v26; // cc
  __int64 v27; // rdx
  DWORD LastError; // edi
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // [rsp+20h] [rbp-30h] BYREF
  __int64 v34; // [rsp+28h] [rbp-28h] BYREF
  __int64 v35[2]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  HANDLE hObject; // [rsp+90h] [rbp+40h] BYREF
  __int64 v38; // [rsp+98h] [rbp+48h] BYREF
  __int64 v39; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v40; // [rsp+A8h] [rbp+58h] BYREF

  hObject = 0LL;
  v2 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL);
  v3 = *(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v2 + 216LL);
  v4 = (_QWORD *)((char *)this + 256);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 32);
  v5 = v3(v2, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, v4);
  if ( v5 < 0 )
  {
    v24 = 16LL;
  }
  else
  {
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, HANDLE *))(*(_QWORD *)v2 + 224LL);
    v7 = hObject;
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      LastError = GetLastError();
      CloseHandle(v7);
      SetLastError(LastError);
    }
    hObject = 0LL;
    v5 = v6(v2, *v4, &hObject);
    if ( v5 < 0 )
    {
      v24 = 17LL;
    }
    else
    {
      v5 = CVisual::InitializeFromSharedHandle(this, hObject);
      if ( v5 >= 0 )
      {
        v38 = 0LL;
        v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v2)(
               v2,
               &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8,
               &v38);
        if ( v5 < 0 )
        {
          v27 = 26LL;
        }
        else
        {
          v8 = v38;
          v9 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v38 + 176LL);
          v10 = (char *)this + 248;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 31);
          v5 = v9(v8, (char *)this + 248);
          if ( v5 >= 0 )
          {
            v39 = 0LL;
            v11 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v10;
            v12 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v10;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
            v5 = v12(v11, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, &v39);
            if ( v5 < 0 )
            {
              v29 = 31LL;
            }
            else
            {
              v13 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 48LL);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 33);
              v5 = v13(v2, (char *)this + 264);
              if ( v5 >= 0 )
              {
                v40 = 0LL;
                v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 33);
                v15 = **v14;
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
                v5 = v15(v14, &GUID_3052b611_56c3_4c3e_8bf3_f6e1ad473f06, &v40);
                if ( v5 < 0 )
                {
                  v30 = 38LL;
                }
                else
                {
                  v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v40 + 88LL))(
                         v40,
                         _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0]);
                  if ( v5 >= 0 )
                  {
                    v33 = 0LL;
                    v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 33);
                    v17 = **v16;
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
                    v18 = v17(v16, &GUID_fe93b735_e574_4a5d_a21a_f705c21945fa, &v33);
                    v5 = v18;
                    if ( v18 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x2B,
                        (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
                        (const char *)(unsigned int)v18,
                        v33);
LABEL_44:
                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
                      goto LABEL_37;
                    }
                    v34 = 0LL;
                    v19 = v33;
                    v20 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 360LL);
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
                    v5 = v20(v19, &v34);
                    if ( v5 < 0 )
                    {
                      v31 = 45LL;
                    }
                    else
                    {
                      v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 72LL))(v34, v39);
                      if ( v5 >= 0 )
                      {
                        v35[0] = 0LL;
                        v21 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v10;
                        v22 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v10;
                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v35);
                        v5 = v22(v21, &GUID_3052b611_56c3_4c3e_8bf3_f6e1ad473f06, v35);
                        if ( v5 < 0 )
                        {
                          v32 = 50LL;
                        }
                        else
                        {
                          v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v35[0] + 88LL))(
                                 v35[0],
                                 _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0]);
                          if ( v5 < 0 )
                          {
                            v32 = 51LL;
                          }
                          else
                          {
                            v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 24LL))(
                                   *v4,
                                   *((_QWORD *)this + 33));
                            if ( v5 >= 0 )
                            {
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v35);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
                              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
                              if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                                CloseHandle(hObject);
                              return 0LL;
                            }
                            v32 = 54LL;
                          }
                        }
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)v32,
                          (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
                          (const char *)(unsigned int)v5,
                          v33);
                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v35);
                        goto LABEL_43;
                      }
                      v31 = 46LL;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v31,
                      (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
                      (const char *)(unsigned int)v5,
                      v33);
LABEL_43:
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
                    goto LABEL_44;
                  }
                  v30 = 39LL;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v30,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
                  (const char *)(unsigned int)v5,
                  v33);
LABEL_37:
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
                goto LABEL_38;
              }
              v29 = 34LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v29,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
              (const char *)(unsigned int)v5,
              v33);
LABEL_38:
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
            goto LABEL_26;
          }
          v27 = 28LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
          (const char *)(unsigned int)v5,
          v33);
LABEL_26:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
        v25 = hObject;
        v26 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
        goto LABEL_27;
      }
      v24 = 22LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
    (const char *)(unsigned int)v5,
    v33);
  v25 = hObject;
  v26 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
LABEL_27:
  if ( v26 )
    CloseHandle(v25);
  return (unsigned int)v5;
}
