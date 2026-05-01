/*
 * XREFs of _lambda_ce5931352d189bca3a201caf88f3b656_::operator() @ 0x1801DDE10
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ce5931352d189bca3a201caf88f3b656___::Run @ 0x1801DFB60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ce5931352d189bca3a201caf88f3b656___--Run.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180197958 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 */

__int64 __fastcall lambda_ce5931352d189bca3a201caf88f3b656_::operator()(__int64 a1)
{
  int v1; // edx
  float v3; // xmm2_4
  float v4; // xmm1_4
  __m128i v5; // xmm0
  int v6; // ecx
  HRGN RectRgn; // rax
  HRGN v8; // rbx
  float v9; // xmm2_4
  int v10; // r8d
  int v11; // ecx
  HRGN v12; // rax
  const char *v13; // r9
  __int64 v14; // rdx
  HRGN v15; // rdx
  unsigned int LastError; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HRGN hrgnDst; // [rsp+30h] [rbp+8h] BYREF

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
        hrgnDst = 0LL;
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
          (void **)&hrgnDst,
          v12);
        if ( CombineRgn(v8, v8, hrgnDst, 2) != 3 )
        {
          v14 = 878LL;
LABEL_14:
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)v14,
                        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
                        v13);
          goto LABEL_16;
        }
      }
    }
  }
  v15 = v8;
  v8 = 0LL;
  if ( !SetWindowRgn(*(HWND *)a1, v15, 1) )
  {
    v14 = 881LL;
    goto LABEL_14;
  }
  LastError = 0;
LABEL_16:
  if ( v8 )
    DeleteObject(v8);
  return LastError;
}
