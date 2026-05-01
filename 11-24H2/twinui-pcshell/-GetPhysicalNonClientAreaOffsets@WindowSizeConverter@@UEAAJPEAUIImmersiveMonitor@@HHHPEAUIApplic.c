/*
 * XREFs of ?GetPhysicalNonClientAreaOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@HHHPEAUIApplicationViewTitlebarConfiguration@@PEAUtagRECT@@@Z @ 0x1804EAF20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x18029E8D0 (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@@012@AEAPEAUIImmersiveMonitor@@AEAH2AEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1802C3CC0 (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAH_ea_1802C3CC0.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowSizeConverter::GetPhysicalNonClientAreaOffsets(
        WindowSizeConverter *this,
        struct IImmersiveMonitor *a2,
        int a3,
        int a4,
        int a5,
        struct IApplicationViewTitlebarConfiguration *a6,
        struct tagRECT *a7)
{
  struct tagRECT *v8; // rsi
  int v9; // eax
  unsigned int LastError; // ebx
  int FrameForMonitor; // eax
  __int64 v12; // rdx
  struct IApplicationFrame *v13; // rbx
  __int64 (__fastcall *v14)(struct IApplicationFrame *, __int64 *); // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  bool v18; // cf
  const char *v19; // r9
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  struct IApplicationFrame *v25; // [rsp+30h] [rbp-51h] BYREF
  __int64 *v26; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-3Dh] BYREF
  HWND hWnd; // [rsp+48h] [rbp-39h] BYREF
  __int64 v30; // [rsp+50h] [rbp-31h] BYREF
  struct IImmersiveMonitor *v31; // [rsp+58h] [rbp-29h] BYREF
  int v32[2]; // [rsp+60h] [rbp-21h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp-19h] BYREF
  __int128 v34; // [rsp+78h] [rbp-9h] BYREF
  struct tagRECT v35; // [rsp+88h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+47h]
  int v37; // [rsp+E0h] [rbp+5Fh] BYREF
  int v38; // [rsp+E8h] [rbp+67h] BYREF

  v38 = a4;
  v37 = a3;
  v8 = a7;
  v31 = a2;
  *(_QWORD *)v32 = a6;
  *a7 = 0LL;
  v30 = 0LL;
  v9 = Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IImmersiveMonitor * &,int &,int &,IApplicationViewTitlebarConfiguration * &>(
         &v30,
         &v31,
         &v37,
         &v38,
         (struct IApplicationViewTitlebarConfiguration **)v32);
  LastError = v9;
  if ( v9 >= 0 )
  {
    v25 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    FrameForMonitor = WindowSizeConverter::GetFrameForMonitor((WindowSizeConverter *)((char *)this - 88), v31, &v25);
    LastError = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v12 = 378LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)FrameForMonitor);
LABEL_6:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
      goto LABEL_33;
    }
    FrameForMonitor = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int64, _QWORD))(*(_QWORD *)v25 + 112LL))(
                        v25,
                        255LL,
                        *(_DWORD *)(v30 + 24) & 1);
    LastError = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v12 = 379LL;
      goto LABEL_5;
    }
    v28 = 0;
    v27 = 0;
    FrameForMonitor = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**(_QWORD **)v32 + 48LL))(
                        *(_QWORD *)v32,
                        &v28,
                        &v27);
    LastError = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v12 = 383LL;
      goto LABEL_5;
    }
    v26 = 0LL;
    v13 = v25;
    v14 = *(__int64 (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)v25 + 144LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    v15 = v14(v13, (__int64 *)&v26);
    LastError = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v26 + 48))(v26, v28, v27);
      LastError = v15;
      if ( v15 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64 *, bool))(*v26 + 32))(v26, (v27 & 1) == 0);
        LastError = v15;
        if ( v15 >= 0 )
        {
          v17 = *v26;
          v18 = a5 != 0;
          a5 = -a5;
          v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v17 + 120))(v26, v18 ? 8 : 0);
          LastError = v15;
          if ( v15 >= 0 )
          {
            hWnd = 0LL;
            v15 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)v25 + 24LL))(v25, &hWnd);
            LastError = v15;
            if ( v15 >= 0 )
            {
              Rect = 0LL;
              if ( GetClientRect(hWnd, &Rect) )
              {
                if ( MapWindowPoints(hWnd, 0LL, (LPPOINT)&Rect, 2u) )
                {
                  v34 = 0LL;
                  v15 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)v25 + 120LL))(
                          v25,
                          &v34);
                  LastError = v15;
                  if ( v15 < 0 )
                  {
                    v16 = 403LL;
                    goto LABEL_13;
                  }
                  Rect.top += DWORD1(v34);
                  Rect.bottom += HIDWORD(v34);
                  Rect.left += v34;
                  Rect.right += DWORD2(v34);
                  v35 = 0LL;
                  if ( GetWindowRect(hWnd, &v35) )
                  {
                    v21 = Rect.top - v35.top;
                    v22 = v35.right - Rect.right;
                    v23 = v35.bottom - Rect.bottom;
                    v8->left = Rect.left - v35.left;
                    v8->top = v21;
                    v8->right = v22;
                    v8->bottom = v23;
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
                    LastError = 0;
                    goto LABEL_33;
                  }
                  v20 = 411LL;
                }
                else
                {
                  v20 = 400LL;
                }
              }
              else
              {
                v20 = 396LL;
              }
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)v20,
                            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
                            v19);
              goto LABEL_14;
            }
            v16 = 393LL;
          }
          else
          {
            v16 = 389LL;
          }
        }
        else
        {
          v16 = 388LL;
        }
      }
      else
      {
        v16 = 387LL;
      }
    }
    else
    {
      v16 = 386LL;
    }
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v15);
LABEL_14:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x177,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v9);
LABEL_33:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  return LastError;
}
