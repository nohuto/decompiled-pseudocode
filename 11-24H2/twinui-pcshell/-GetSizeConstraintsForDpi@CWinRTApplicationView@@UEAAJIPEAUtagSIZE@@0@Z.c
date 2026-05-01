/*
 * XREFs of ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x18014C6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x18014B5A4 (-AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___ @ 0x18014CE7C (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_45f761d2d247477984b20.c)
 *     ?GetWindowSizeConverter@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIWindowSizeConversionLogicalClientToWindow@@@WRL@Microsoft@@XZ @ 0x18014D228 (-GetWindowSizeConverter@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIWindowSizeConversion.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CWinRTApplicationView::GetSizeConstraintsForDpi(
        CWinRTApplicationView *this,
        unsigned int a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  RTL_SRWLOCK *v8; // rbx
  __int64 v9; // rdi
  struct tagSIZE v10; // rbx
  unsigned int v11; // ebx
  struct tagSIZE v12; // rcx
  __int64 (__fastcall *v14)(struct tagSIZE, GUID *, struct tagSIZE *); // rsi
  int v15; // eax
  struct tagSIZE v16; // rcx
  struct tagSIZE v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  int v20; // ecx
  int cy; // r8d
  struct tagSIZE v22; // rax
  int v23; // eax
  unsigned int v24; // edi
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  LONG v28; // eax
  LONG v29; // eax
  LONG cx; // eax
  LONG v31; // eax
  __int64 v32; // rdx
  int v33; // r8d
  int v34; // r9d
  struct tagSIZE v35; // rax
  LONG v36; // eax
  LONG v37; // eax
  LONG v38; // eax
  LONG v39; // eax
  struct tagSIZE v40; // [rsp+40h] [rbp-30h] BYREF
  __int64 v41; // [rsp+48h] [rbp-28h] BYREF
  __int64 v42; // [rsp+50h] [rbp-20h] BYREF
  struct tagSIZE v43; // [rsp+58h] [rbp-18h] BYREF
  int v44[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v45; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct tagSIZE v47; // [rsp+A0h] [rbp+30h] BYREF

  v8 = (RTL_SRWLOCK *)((char *)this + 48);
  AcquireSRWLockShared((PSRWLOCK)this + 6);
  if ( *((_QWORD *)this + 29) )
    v9 = *((_QWORD *)this + 29);
  else
    v9 = *(_QWORD *)((char *)this + 220);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  v43 = 0LL;
  v41 = 0LL;
  *(_QWORD *)v44 = 0LL;
  v42 = 0LL;
  v47 = 0LL;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___(&v47);
  v10 = v47;
  if ( !*(_QWORD *)&v47 )
  {
    v11 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL);
    v12 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(struct tagSIZE))(**(_QWORD **)&v12 + 16LL))(v12);
    }
    goto LABEL_8;
  }
  v40 = 0LL;
  v14 = ***(__int64 (__fastcall ****)(struct tagSIZE, GUID *, struct tagSIZE *))&v47;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v40);
  v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v14)(v10, &GUID_9886efb0_afb3_4a35_b381_329935b32d5a, &v40);
  v11 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v15);
    v16 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(struct tagSIZE))(**(_QWORD **)&v16 + 16LL))(v16);
    }
    v17 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(struct tagSIZE))(**(_QWORD **)&v17 + 16LL))(v17);
    }
    goto LABEL_8;
  }
  v25 = (*(__int64 (__fastcall **)(struct tagSIZE, _QWORD, struct tagSIZE *, __int64 *, int *, __int64 *))(**(_QWORD **)&v40 + 40LL))(
          v40,
          *((_QWORD *)this + 26),
          &v43,
          &v41,
          v44,
          &v42);
  v11 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v25);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v40);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B2,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)v11);
    return v11;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v40);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
  ApplicationViewManagement::CGlobals::GetWindowSizeConverter(&v45);
  v18 = v45;
  if ( !a3 )
    goto LABEL_48;
  v19 = v41;
  v20 = HIDWORD(v41);
  cy = v43.cy;
  v22 = v43;
  if ( (v43.cx <= 0 || v43.cy <= 0) && ((int)v41 <= 0 || SHIDWORD(v41) <= 0) )
  {
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v45 + 40LL))(
            v45,
            v9,
            a2,
            this,
            a3);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CE,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)v23);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      return v24;
    }
    goto LABEL_48;
  }
  *a3 = 0LL;
  if ( v22.cx <= 0 || cy <= 0 )
  {
LABEL_37:
    if ( (int)v19 > 0 && v20 > 0 )
    {
      v47 = 0LL;
      v26 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v18 + 40LL))(
              v18,
              v19,
              a2,
              this,
              &v47);
      v24 = v26;
      if ( v26 < 0 )
      {
        v27 = 455LL;
        goto LABEL_42;
      }
      cx = v47.cx;
      if ( a3->cx > v47.cx )
        cx = a3->cx;
      a3->cx = cx;
      v31 = v47.cy;
      if ( a3->cy > v47.cy )
        v31 = a3->cy;
      a3->cy = v31;
    }
LABEL_48:
    if ( a4 )
    {
      v32 = v42;
      v33 = HIDWORD(v42);
      v34 = v44[1];
      v35 = *(struct tagSIZE *)v44;
      if ( (v44[0] <= 0 || v44[1] <= 0) && ((int)v42 <= 0 || SHIDWORD(v42) <= 0) )
      {
        v40.cx = GetSystemMetrics(59);
        v40.cy = GetSystemMetrics(60);
        *a4 = v40;
      }
      else
      {
        v40 = (struct tagSIZE)0x7FFFFFFF7FFFFFFFLL;
        *a4 = (struct tagSIZE)0x7FFFFFFF7FFFFFFFLL;
        if ( v35.cx > 0 && v34 > 0 )
        {
          v40 = v35;
          v26 = CWinRTApplicationView::AdjustSizeForChrome(this, &v40, a2);
          v24 = v26;
          if ( v26 < 0 )
          {
            v27 = 475LL;
            goto LABEL_42;
          }
          v36 = v40.cx;
          if ( a4->cx < v40.cx )
            v36 = a4->cx;
          a4->cx = v36;
          v37 = v40.cy;
          if ( a4->cy < v40.cy )
            v37 = a4->cy;
          a4->cy = v37;
          v32 = v42;
          v33 = HIDWORD(v42);
        }
        if ( (int)v32 > 0 && v33 > 0 )
        {
          v40 = 0LL;
          v26 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *, struct tagSIZE *))(*(_QWORD *)v18 + 40LL))(
                  v18,
                  v32,
                  a2,
                  this,
                  &v40);
          v24 = v26;
          if ( v26 < 0 )
          {
            v27 = 483LL;
            goto LABEL_42;
          }
          v38 = v40.cx;
          if ( a4->cx < v40.cx )
            v38 = a4->cx;
          a4->cx = v38;
          v39 = v40.cy;
          if ( a4->cy < v40.cy )
            v39 = a4->cy;
          a4->cy = v39;
        }
      }
    }
    v24 = 0;
    goto LABEL_72;
  }
  v47 = v22;
  v26 = CWinRTApplicationView::AdjustSizeForChrome(this, &v47, a2);
  v24 = v26;
  if ( v26 >= 0 )
  {
    v28 = v47.cx;
    if ( a3->cx > v47.cx )
      v28 = a3->cx;
    a3->cx = v28;
    v29 = v47.cy;
    if ( a3->cy > v47.cy )
      v29 = a3->cy;
    a3->cy = v29;
    v19 = v41;
    v20 = HIDWORD(v41);
    goto LABEL_37;
  }
  v27 = 447LL;
LABEL_42:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v27,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v26);
LABEL_72:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v45);
  return v24;
}
