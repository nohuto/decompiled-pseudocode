/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEAMAEA_J@Z @ 0x180012CD0
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x1800093F0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKHW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     pow @ 0x180021254 (pow.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(
        LPCRITICAL_SECTION lpCriticalSection,
        unsigned int a2,
        int a3,
        float *a4,
        __int64 *a5)
{
  __m128i v5; // xmm0
  __int64 v8; // rbp
  __int64 v10; // rax
  _QWORD *i; // rbx
  __int64 v12; // rbp
  float v13; // xmm1_4
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = a2;
  EnterCriticalSection(lpCriticalSection);
  *a4 = 1.0;
  *a5 = 0LL;
  v10 = 232LL;
  if ( !a3 )
    v10 = 40LL;
  if ( (unsigned int)v8 >= 0x18 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
      (const char *)0x8000FFFFLL);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 2147549183LL;
  }
  else
  {
    for ( i = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&lpCriticalSection->DebugInfo + 8 * v8 + v10); i; i = (_QWORD *)*i )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
      *(double *)v5.m128i_i64 = (***(double (__fastcall ****)(_QWORD))(i[1] + 56LL))(*(_QWORD *)(i[1] + 56LL));
      v13 = 0.0;
      if ( _mm_cvtsi128_si32(v5) != -8388608 )
        v13 = pow(10.0, *(float *)v5.m128i_i32 / 20.0);
      v5 = (__m128i)*(unsigned int *)a4;
      if ( *(float *)v5.m128i_i32 > v13 )
        *a4 = v13;
      if ( v12 > *a5 )
        *a5 = v12;
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 0LL;
  }
}
