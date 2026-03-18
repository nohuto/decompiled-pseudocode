/*
 * XREFs of ?PushExact@CD2DClipStack@@QEAAJAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800837E0
 * Callers:
 *     ?DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z @ 0x180081C70 (-DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ceilf_0 @ 0x1802E886C (ceilf_0.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall CD2DClipStack::PushExact(const void **this, __m128 *a2, enum D2D1_ANTIALIAS_MODE a3)
{
  __m128 v5; // xmm6
  float v6; // xmm8_4
  float v7; // xmm7_4
  float v8; // xmm0_4
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // eax
  int v13; // esi
  float v14; // xmm0_4
  int v15; // eax
  float v16; // xmm0_4
  int v17; // eax
  float v18; // xmm0_4
  int v19; // eax
  float v20; // xmm0_4
  unsigned int v21; // edi
  __int64 v22; // rdx
  unsigned int v23; // ebx
  unsigned int v24; // esi
  HANDLE ProcessHeap; // rax
  void *v26; // rax
  const void *v27; // rbp
  void *v28; // rsi
  HANDLE v29; // rax
  int v30[4]; // [rsp+20h] [rbp-78h]
  int v31; // [rsp+20h] [rbp-78h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( a3 == D2D1_ANTIALIAS_MODE_ALIASED )
  {
    v13 = 0x7FFFFFFF;
    v14 = a2->m128_f32[0] - 0.5;
    if ( v14 < -2147483600.0 )
    {
      v15 = 0x80000000;
    }
    else if ( v14 >= 2147483600.0 )
    {
      v15 = 0x7FFFFFFF;
    }
    else
    {
      v15 = (int)ceilf_0(v14);
    }
    v16 = a2->m128_f32[1] - 0.5;
    v5.m128_f32[0] = (float)v15;
    if ( v16 < -2147483600.0 )
    {
      v17 = 0x80000000;
    }
    else if ( v16 >= 2147483600.0 )
    {
      v17 = 0x7FFFFFFF;
    }
    else
    {
      v17 = (int)ceilf_0(v16);
    }
    v18 = a2->m128_f32[2] - 0.5;
    v6 = (float)v17;
    if ( v18 < -2147483600.0 )
    {
      v19 = 0x80000000;
    }
    else if ( v18 >= 2147483600.0 )
    {
      v19 = 0x7FFFFFFF;
    }
    else
    {
      v19 = (int)ceilf_0(v18);
    }
    v20 = a2->m128_f32[3] - 0.5;
    v7 = (float)v19;
    if ( v20 < -2147483600.0 )
    {
      v13 = 0x80000000;
    }
    else if ( v20 < 2147483600.0 )
    {
      v13 = (int)ceilf_0(v20);
    }
    v8 = (float)v13;
  }
  else
  {
    v5 = *a2;
    LODWORD(v6) = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
    LODWORD(v7) = _mm_shuffle_ps(*a2, *a2, 170).m128_u32[0];
    LODWORD(v8) = _mm_shuffle_ps(*a2, *a2, 255).m128_u32[0];
  }
  v9 = *((unsigned int *)this + 2);
  v10 = *((unsigned int *)this + 3);
  *(_QWORD *)v30 = __PAIR64__(LODWORD(v6), v5.m128_u32[0]);
  *(_QWORD *)&v30[2] = __PAIR64__(LODWORD(v8), LODWORD(v7));
  if ( (_DWORD)v9 != (_DWORD)v10 )
    goto LABEL_4;
  v21 = 2 * v10;
  if ( (unsigned __int64)(2 * v10) > 0xFFFFFFFF )
  {
    v22 = 98LL;
LABEL_22:
    v23 = -2147024362;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v23,
      v5.m128_i32[0]);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v23,
      v31);
    return v23;
  }
  if ( v21 <= 8 )
    v21 = 8;
  v24 = 16 * v9;
  if ( (unsigned __int64)(16 * v9) > 0xFFFFFFFF )
  {
    v22 = 101LL;
    goto LABEL_22;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v21 <= 0x10 )
  {
    v23 = -2147024809;
    goto LABEL_30;
  }
  ProcessHeap = GetProcessHeap();
  v26 = HeapAlloc(ProcessHeap, 0, 16LL * v21);
  v27 = v26;
  if ( !v26 )
  {
    v23 = -2147024882;
LABEL_30:
    v22 = 104LL;
    goto LABEL_23;
  }
  memcpy_0(v26, *this, v24);
  v28 = (void *)*this;
  if ( *this )
  {
    v29 = GetProcessHeap();
    HeapFree(v29, 0, v28);
  }
  *this = v27;
  *((_DWORD *)this + 3) = v21;
LABEL_4:
  *((_OWORD *)*this + (unsigned int)(*((_DWORD *)this + 2))++) = *(_OWORD *)v30;
  v11 = *((_DWORD *)this + 5);
  if ( v11 <= *((_DWORD *)this + 2) )
    v11 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 5) = v11;
  return 0LL;
}
