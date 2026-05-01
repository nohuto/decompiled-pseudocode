/*
 * XREFs of ?_VerticalNavigateFromIndex@CSwitchItemGrid@@AEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KI@Z @ 0x1804C99D8
 * Callers:
 *     ?v_NavigateFromChildIndex@CSwitchItemGrid@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1804C9F00 (-v_NavigateFromChildIndex@CSwitchItemGrid@@MEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Micro.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall CSwitchItemGrid::_VerticalNavigateFromIndex(__m128i *a1, __int64 *a2, __int64 a3, int a4)
{
  __int64 v7; // rcx
  _DWORD *v8; // r8
  int v9; // edi
  int v10; // r15d
  __m128i v11; // xmm1
  __int32 v12; // ecx
  int v13; // edi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // xmm0_8
  int v16; // r14d
  _QWORD *v17; // rbx
  _QWORD *v18; // rbp
  int v19; // ecx
  _DWORD v21[2]; // [rsp+30h] [rbp-58h] BYREF
  int v22; // [rsp+38h] [rbp-50h]
  int v23; // [rsp+3Ch] [rbp-4Ch]

  v7 = *(_QWORD *)(a1[1].m128i_i64[0] + 8 * a3);
  v8 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v7 + 88LL))(v7, v21);
  v9 = (v8[3] - v8[1]) / 2 + v8[1];
  v10 = *v8 + (v8[2] - *v8) / 2;
  v11 = a1[50];
  v12 = a1[48].m128i_i32[2];
  if ( a4 == 1 )
  {
    v13 = v9 - v12;
    v14 = HIDWORD(v11.m128i_i64[0]);
    if ( v13 < v11.m128i_i32[1] )
    {
      v11 = _mm_srli_si128(v11, 8);
LABEL_5:
      v13 += v11.m128i_i32[1] - v14;
    }
  }
  else
  {
    v13 = v12 + v9;
    v15 = _mm_srli_si128(v11, 8).m128i_u64[0];
    v14 = HIDWORD(v15);
    if ( v13 >= SHIDWORD(v15) )
      goto LABEL_5;
  }
  v16 = 0x7FFFFFFF;
  *a2 = 0LL;
  v17 = (_QWORD *)a1[1].m128i_i64[0];
  v18 = &v17[a1[1].m128i_i64[1]];
  while ( v17 != v18 )
  {
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)*v17 + 88LL))(*v17, v21);
    if ( v13 >= v21[1] && v13 <= v23 )
    {
      v19 = -(v21[0] + (v22 - v21[0]) / 2 - v10);
      if ( v21[0] + (v22 - v21[0]) / 2 - v10 > 0 )
        v19 = v21[0] + (v22 - v21[0]) / 2 - v10;
      if ( v19 < v16 )
      {
        v16 = v19;
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(a2, v17);
      }
    }
    ++v17;
  }
  return a2;
}
