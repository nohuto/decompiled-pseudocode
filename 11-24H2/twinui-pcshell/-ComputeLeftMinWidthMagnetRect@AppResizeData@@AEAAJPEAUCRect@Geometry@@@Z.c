/*
 * XREFs of ?ComputeLeftMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x180536558
 * Callers:
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x180536298 (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067EEB4 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppResizeData::ComputeLeftMinWidthMagnetRect(AppResizeData *this, struct Geometry::CRect *a2)
{
  int v4; // r15d
  int v5; // r12d
  int v6; // r14d
  enum DEVICE_SCALE_FACTOR v7; // r8d
  int v8; // r13d
  unsigned int v9; // r14d
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  LONG cx; // r8d
  int v16; // r9d
  int v17; // eax
  int v19[2]; // [rsp+30h] [rbp-40h] BYREF
  ImmersiveApplicationLayout *v20; // [rsp+38h] [rbp-38h]
  __int128 v21; // [rsp+40h] [rbp-30h] BYREF
  struct tagSIZE v22[2]; // [rsp+50h] [rbp-20h]
  __int64 v23; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  v21 = 0LL;
  *(_OWORD *)&v22[0].cx = 0LL;
  v23 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), &v21);
  v4 = DWORD1(v21);
  v5 = HIDWORD(v21);
  v6 = DWORD2(v21) - v21;
  LODWORD(v20) = DWORD2(v21) - v21;
  HIDWORD(v20) = HIDWORD(v21) - DWORD1(v21);
  v8 = ImmersiveApplicationLayout::ComputeGutterWidth(v20, (struct tagSIZE)(unsigned int)v22[0].cx, v7);
  v9 = v6 - v8;
  *(_QWORD *)v19 = 0LL;
  v10 = *((_QWORD *)this + 5);
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v10 + 104LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v19);
  v12 = v11(v10, 0LL, 5LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v19);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(**(_QWORD **)v19 + 72LL))(*(_QWORD *)v19, &v21, v9);
    cx = v22[0].cx;
    v16 = 2 * (int)(float)((float)v22[0].cx / 100.0) - (int)(float)((float)(320 * v22[0].cx) / -100.0);
    if ( v14 > v16 )
      v16 = v14;
    *((_DWORD *)a2 + 1) = v4;
    *((_DWORD *)a2 + 3) = v5;
    v17 = v21 + v8 / 2;
    *((_DWORD *)a2 + 2) = v17 + v16;
    *(_DWORD *)a2 = v17 + v16 - (int)(float)((float)(175 * cx) / 100.0);
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
      (const char *)(unsigned int)v12);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v19);
  return v13;
}
