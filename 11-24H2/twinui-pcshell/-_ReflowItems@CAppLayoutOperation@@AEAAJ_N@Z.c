/*
 * XREFs of ?_ReflowItems@CAppLayoutOperation@@AEAAJ_N@Z @ 0x1806C2D90
 * Callers:
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806C26BC (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067EEB4 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::_ReflowItems(CAppLayoutOperation *this, char a2)
{
  CAppLayoutOperation *v2; // rdi
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // r13d
  unsigned int v6; // r14d
  enum DEVICE_SCALE_FACTOR v7; // r8d
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  unsigned int v10; // r13d
  int v11; // esi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64, _QWORD, __int64 *); // rbx
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64, _QWORD, ImmersiveApplicationLayout **); // rbx
  unsigned int v18; // edi
  __int64 (__fastcall *v19)(_QWORD, GUID *, __int64 *); // rbx
  int v20; // ecx
  unsigned int v21; // edx
  __int64 v24; // [rsp+40h] [rbp-91h] BYREF
  ImmersiveApplicationLayout *v25; // [rsp+48h] [rbp-89h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-81h]
  int v27; // [rsp+54h] [rbp-7Dh]
  __int64 v28; // [rsp+58h] [rbp-79h]
  __m128i v29; // [rsp+68h] [rbp-69h]
  __m128i v30; // [rsp+78h] [rbp-59h] BYREF
  _OWORD v31[2]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-29h]
  _QWORD v33[3]; // [rsp+B8h] [rbp-19h] BYREF
  __m128i v34; // [rsp+D0h] [rbp-1h]

  v2 = this;
  v30.m128i_i64[0] = (__int64)this;
  v3 = -2147319767;
  v26 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), 5LL);
  if ( !v26 )
    return (unsigned int)v3;
  v4 = *((_QWORD *)v2 + 5);
  v32 = 0LL;
  memset(v31, 0, sizeof(v31));
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v4 + 24LL))(v4, v31);
  v5 = DWORD2(v31[0]);
  v6 = v31[0];
  LODWORD(v25) = DWORD2(v31[0]) - LODWORD(v31[0]);
  v28 = *(_QWORD *)((char *)v31 + 12);
  HIDWORD(v25) = HIDWORD(v31[0]) - DWORD1(v31[0]);
  v29.m128i_i64[0] = *(_QWORD *)((char *)v31 + 4);
  v27 = ImmersiveApplicationLayout::ComputeGutterWidth(v25, (struct tagSIZE)LODWORD(v31[1]), v7);
  v8 = 0;
  v9 = 0;
  v10 = v5 - v27 * (v26 - 1) - v6;
  if ( !a2 )
  {
    v11 = 0;
    memset_0(v33, 0, 0x40uLL);
    v12 = *((_QWORD *)v2 + 5);
    v24 = 0LL;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 136LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v24);
    v3 = v13(v12, 0LL, 1LL, 0LL, &v24);
    if ( v3 >= 0 )
    {
      while ( (*(int (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v24 + 24LL))(v24, 5LL, v33) >= 0 )
      {
        if ( v34.m128i_i32[2] - v34.m128i_i32[0] <= 0 )
          ++v9;
        v14 = v34.m128i_i32[2] - v34.m128i_i32[0] + v11;
        if ( v34.m128i_i32[2] - v34.m128i_i32[0] <= 0 )
          v14 = v11;
        v11 = v14;
      }
    }
    v8 = v10 - v11;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v24);
    if ( v3 < 0 )
      return (unsigned int)v3;
    v6 = v31[0];
    v2 = (CAppLayoutOperation *)v30.m128i_i64[0];
    v28 = *(_QWORD *)((char *)v31 + 12);
    v29.m128i_i64[0] = *(_QWORD *)((char *)v31 + 4);
  }
  v15 = 0;
  memset_0(v33, 0, 0x40uLL);
  v16 = *((_QWORD *)v2 + 5);
  v25 = 0LL;
  v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, ImmersiveApplicationLayout **))(*(_QWORD *)v16
                                                                                                  + 136LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v25);
  v3 = v17(v16, 0LL, 1LL, 0LL, &v25);
  if ( v3 >= 0 )
  {
    v18 = v26;
    while ( 1 )
    {
      if ( (*(int (__fastcall **)(ImmersiveApplicationLayout *, __int64, _QWORD *))(*(_QWORD *)v25 + 24LL))(
             v25,
             5LL,
             v33) < 0 )
        goto LABEL_26;
      v24 = 0LL;
      v30 = v34;
      v19 = **(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v33[0];
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      v3 = v19(v33[0], &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v24);
      if ( v3 >= 0 )
        break;
LABEL_24:
      v29 = v30;
      v6 = v27 + _mm_cvtsi128_si32(_mm_srli_si128(v30, 8));
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      if ( v3 < 0 )
        goto LABEL_26;
      v28 = v29.m128i_u32[3];
      v29.m128i_i64[0] = v29.m128i_u32[1];
    }
    if ( a2 )
    {
      v20 = v10 / v18;
      v21 = v10 % v18;
    }
    else
    {
      v20 = v30.m128i_i32[2] - v30.m128i_i32[0];
      if ( v30.m128i_i32[2] - v30.m128i_i32[0] > 0 )
      {
LABEL_23:
        v30.m128i_i64[0] = __PAIR64__(v29.m128i_u32[0], v6);
        v30.m128i_i32[2] = v20 + v6;
        v30.m128i_i32[3] = v28;
        (*(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v24 + 104LL))(v24, 0LL, &v30);
        goto LABEL_24;
      }
      v21 = v8 % v9;
      v20 = v8 / v9;
    }
    if ( v15 < v21 )
      ++v20;
    ++v15;
    goto LABEL_23;
  }
LABEL_26:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v25);
  return (unsigned int)v3;
}
