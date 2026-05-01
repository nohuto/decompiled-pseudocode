/*
 * XREFs of _lambda_6891a98f73bf2e0622c40a147f1ebd9e_::operator() @ 0x1803737AC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6891a98f73bf2e0622c40a147f1ebd9e___::Run @ 0x1803766F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6891a98f73bf2e0622c40a147f1ebd9e___--Run.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180206804 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1802150E0 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall lambda_6891a98f73bf2e0622c40a147f1ebd9e_::operator()(__int64 a1)
{
  int v1; // edx
  float v3; // xmm2_4
  float v4; // xmm1_4
  __m128i v5; // xmm0
  int v6; // ecx
  HRGN RectRgn; // rax
  HRGN v8; // rdi
  float v9; // xmm2_4
  int v10; // r8d
  int v11; // ecx
  HRGN v12; // rax
  HRGN v13; // r8
  const char *v14; // r9
  unsigned int LastError; // ebx
  HWND v16; // rcx
  const char *v17; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HRGN hrgnSrc2; // [rsp+30h] [rbp+8h] BYREF
  HRGN hrgnDst; // [rsp+38h] [rbp+10h] BYREF

  v1 = (int)*(float *)(a1 + 16);
  hrgnDst = 0LL;
  v3 = *(float *)(a1 + 20);
  v4 = (float)v1 + *(float *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 8) )
  {
    v5 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 28));
    v6 = 0;
    v3 = v3 - _mm_cvtepi32_ps(v5).m128_f32[0];
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 28);
  }
  RectRgn = CreateRectRgn(v6, v1, (int)v3, (int)v4);
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
    (void **)&hrgnDst,
    RectRgn);
  v8 = hrgnDst;
  if ( *(_BYTE *)(a1 + 32) )
  {
    if ( *(float *)(a1 + 44) > 0.0 )
    {
      v9 = *(float *)(a1 + 48);
      if ( v9 > 0.0 )
      {
        hrgnSrc2 = 0LL;
        v10 = *(_DWORD *)(a1 + 28);
        if ( *(_BYTE *)(a1 + 8) )
        {
          v11 = (int)(float)(*(float *)(a1 + 20) - (float)v10);
          v10 += v11;
        }
        else
        {
          v11 = 0;
        }
        v12 = CreateRectRgn(v11, (int)*(float *)(a1 + 40), v10, (int)(float)((float)(int)*(float *)(a1 + 40) + v9));
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
          (void **)&hrgnSrc2,
          v12);
        v13 = hrgnSrc2;
        hrgnSrc2 = 0LL;
        if ( CombineRgn(v8, v8, v13, 2) != 3 )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x369,
                        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
                        v14);
          wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnSrc2);
          goto LABEL_16;
        }
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnSrc2);
      }
    }
  }
  v16 = *(HWND *)a1;
  hrgnDst = 0LL;
  if ( SetWindowRgn(v16, v8, 1) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x36C,
                  (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
                  v17);
LABEL_16:
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnDst);
  return LastError;
}
