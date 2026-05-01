/*
 * XREFs of ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x1804DAFBC
 * Callers:
 *     ?ResetScroll@CScrollViewer@@UEAAXXZ @ 0x1804DA860 (-ResetScroll@CScrollViewer@@UEAAXXZ.c)
 *     ?Scroll@CScrollViewer@@UEAAXI@Z @ 0x1804DAB90 (-Scroll@CScrollViewer@@UEAAXI@Z.c)
 *     ?ScrollIntoView@CScrollViewer@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x1804DAC00 (-ScrollIntoView@CScrollViewer@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?SetScrollPercent@CScrollViewer@@UEAAXN@Z @ 0x1804DADE0 (-SetScrollPercent@CScrollViewer@@UEAAXN@Z.c)
 *     ?_UpdateViewport@CScrollViewer@@AEAAXXZ @ 0x1804DB410 (-_UpdateViewport@CScrollViewer@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$As@UIScrollButtonContainerHost@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollButtonContainerHost@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804D9DC4 (--$As@UIScrollButtonContainerHost@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ??$SendUiaPropertyEvent@N@ElementHelpers@@YAJPEAUIMultitaskingViewElement@@HNN@Z @ 0x1804D9FC8 (--$SendUiaPropertyEvent@N@ElementHelpers@@YAJPEAUIMultitaskingViewElement@@HNN@Z.c)
 *     ?_GetMinScrollOffset@CScrollViewer@@AEAAHXZ @ 0x1804DB29C (-_GetMinScrollOffset@CScrollViewer@@AEAAHXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CScrollViewer::_ApplyScroll(CScrollViewer *this, int a2, char a3)
{
  int v4; // ebx
  int MinScrollOffset; // eax
  char *v7; // r14
  DOUBLE v8; // xmm6_8
  char v9; // al
  int v10; // ecx
  char v11; // si
  _QWORD *v12; // rax
  int v13; // eax
  char v14; // bl
  _QWORD *v15; // rax
  char v16; // bl
  __int64 (__fastcall ****v17)(_QWORD, GUID *, __int64 *); // rax
  int v18; // eax
  unsigned int v19; // ebx
  DOUBLE v20; // xmm0_8
  char v21; // al
  int v22; // ecx
  int v23; // [rsp+30h] [rbp-50h] BYREF
  int v24; // [rsp+34h] [rbp-4Ch]
  __int64 v25; // [rsp+38h] [rbp-48h] BYREF
  __int64 v26; // [rsp+40h] [rbp-40h] BYREF
  __int64 v27; // [rsp+48h] [rbp-38h] BYREF
  __m128i si128; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v4 = a2;
  v24 = 0;
  if ( a2 <= (int)CScrollViewer::_GetMinScrollOffset(this) )
    MinScrollOffset = CScrollViewer::_GetMinScrollOffset(this);
  else
    MinScrollOffset = v4;
  if ( MinScrollOffset <= 0 )
  {
    if ( v4 <= (int)CScrollViewer::_GetMinScrollOffset(this) )
      v4 = CScrollViewer::_GetMinScrollOffset(this);
  }
  else
  {
    v4 = 0;
  }
  if ( v4 == *((_DWORD *)this + 64) )
  {
    if ( !a3 )
      return;
    goto LABEL_31;
  }
  v7 = (char *)this + 208;
  v8 = (*(double (__fastcall **)(char *))(*((_QWORD *)this + 26) + 48LL))((char *)this + 208);
  *((_DWORD *)this + 64) = v4;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 26) + 96LL))((char *)this + 208);
  v10 = *((_DWORD *)this + 64);
  if ( v9 )
  {
    si128.m128i_i32[0] += v10;
    si128.m128i_i32[2] += v10;
  }
  else
  {
    si128.m128i_i32[3] += v10;
    si128.m128i_i32[1] += v10;
  }
  v11 = 1;
  LOBYTE(v23) = 1;
  v12 = (_QWORD *)(*(__int64 (__fastcall **)(CScrollViewer *, __int64 *))(*(_QWORD *)this + 384LL))(this, &v26);
  v24 = 1;
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, CScrollViewer *, __m128i *, int *))(*(_QWORD *)*v12 + 56LL))(
          *v12,
          3LL,
          this,
          &si128,
          &v23);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x144,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerelement.cpp",
      (const char *)(unsigned int)v13);
LABEL_14:
    v14 = 1;
    goto LABEL_15;
  }
  if ( (_BYTE)v23 )
    goto LABEL_14;
  v14 = 0;
LABEL_15:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  if ( v14 )
    (*(void (__fastcall **)(_QWORD, __m128i *, _QWORD, _QWORD))(**((_QWORD **)this + 28) + 24LL))(
      *((_QWORD *)this + 28),
      &si128,
      0LL,
      0LL);
  v25 = 0LL;
  v15 = (_QWORD *)(*(__int64 (__fastcall **)(CScrollViewer *, __int64 *))(*(_QWORD *)this + 24LL))(this, &v27);
  v16 = 2;
  v24 = 2;
  if ( !*v15 )
    goto LABEL_20;
  v17 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(CScrollViewer *, __int64 *))(*(_QWORD *)this + 24LL))(
                                                                this,
                                                                &v26);
  v16 = 6;
  v18 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollButtonContainerHost>(v17, &v25);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x14C,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerelement.cpp",
      (const char *)(unsigned int)v18);
LABEL_20:
    v11 = 0;
  }
  if ( (v16 & 4) != 0 )
  {
    v16 &= ~4u;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  }
  if ( (v16 & 2) != 0 )
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 40LL))(v25);
  v19 = (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v7 + 96LL))((char *)this + 208) != 0 ? 0xFFFFFFFE : 0;
  v20 = (*(double (__fastcall **)(char *))(*(_QWORD *)v7 + 48LL))((char *)this + 208);
  ElementHelpers::SendUiaPropertyEvent<double>((__int64)this, v19 + 30055, v8, v20);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
LABEL_31:
  (*(void (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 31) + 32LL))(*((_QWORD *)this + 31), &si128);
  v21 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 26) + 96LL))((char *)this + 208);
  v22 = -*((_DWORD *)this + 64);
  if ( v21 )
  {
    si128.m128i_i32[0] -= *((_DWORD *)this + 64);
    si128.m128i_i32[2] += v22;
  }
  else
  {
    si128.m128i_i32[3] -= *((_DWORD *)this + 64);
    si128.m128i_i32[1] += v22;
  }
  (*(void (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 31) + 56LL))(*((_QWORD *)this + 31), &si128);
}
