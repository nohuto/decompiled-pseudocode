/*
 * XREFs of ?UnsafeAddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURect@Foundation@6@AEBUMonitorInformation@KeyboardHosting@@AEBUKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18048B28C
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1802576C0 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetScaledCeiledMonitorRect@MonitorInformation@KeyboardHosting@@QEBA?AURect@Foundation@Windows@@XZ @ 0x180254D18 (-GetScaledCeiledMonitorRect@MonitorInformation@KeyboardHosting@@QEBA-AURect@Foundation@Windows@@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UnsafeAddOptionsRelativeToInside(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        char a5,
        __int64 *a6)
{
  const char *v10; // r9
  int v11; // r15d
  int v12; // r14d
  unsigned int v13; // edi
  unsigned int v14; // esi
  int v15; // ebx
  int v16; // ecx
  __int128 v17; // xmm6
  __int128 v18; // xmm8
  __int128 v19; // xmm9
  _QWORD *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  int v56[4]; // [rsp+28h] [rbp-A9h] BYREF
  __m256i v57; // [rsp+38h] [rbp-99h] BYREF
  __int64 v58; // [rsp+58h] [rbp-79h]
  __int128 v59; // [rsp+68h] [rbp-69h] BYREF
  __m256i v60; // [rsp+78h] [rbp-59h]
  __int64 v61; // [rsp+98h] [rbp-39h]
  _OWORD v62[5]; // [rsp+A8h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+4Fh]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1E,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      v10);
  v11 = (int)*(float *)(a2 + 8);
  v12 = (int)*(float *)(a2 + 12);
  v13 = *a4;
  v14 = a4[1];
  v15 = (int)*((float *)KeyboardHosting::MonitorInformation::GetScaledCeiledMonitorRect(a3, v62) + 2);
  v16 = (int)*((float *)KeyboardHosting::MonitorInformation::GetScaledCeiledMonitorRect(a3, v62) + 3);
  *(_OWORD *)v56 = 0LL;
  v58 = 0LL;
  v56[0] = a1;
  LOBYTE(v56[2]) = a5;
  BYTE1(v56[2]) = a5;
  v56[3] = v16;
  v57.m256i_i32[0] = v15;
  memset((char *)&v57.m256i_u64[1] + 4, 0, 20);
  *(__int64 *)((char *)v57.m256i_i64 + 4) = __PAIR64__(v13, v14);
  v17 = *(_OWORD *)v56;
  v59 = *(_OWORD *)v56;
  v18 = *(_OWORD *)v57.m256i_i8;
  v19 = *(_OWORD *)&v57.m256i_u64[2];
  DWORD1(v59) = 5;
  v20 = (_QWORD *)*a6;
  v21 = *(_QWORD *)*a6;
  *(_OWORD *)v56 = v59;
  v58 = 0LL;
  v22 = (*(__int64 (__fastcall **)(_QWORD *, int *))(v21 + 104))(v20, v56);
  v23 = v22;
  if ( v22 < 0 )
  {
    v24 = 61LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      (const char *)(unsigned int)v22);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a6);
    return v23;
  }
  v59 = v17;
  DWORD1(v59) = 1;
  v25 = *a6;
  v26 = *(_QWORD *)*a6;
  *(_OWORD *)v56 = v59;
  *(_OWORD *)v57.m256i_i8 = v18;
  *(_OWORD *)&v57.m256i_u64[2] = v19;
  v58 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, int *))(v26 + 104))(v25, v56);
  v23 = v22;
  if ( v22 < 0 )
  {
    v24 = 65LL;
    goto LABEL_34;
  }
  v59 = v17;
  DWORD1(v59) = 9;
  v27 = *a6;
  v28 = *(_QWORD *)*a6;
  *(_OWORD *)v56 = v59;
  *(_OWORD *)v57.m256i_i8 = v18;
  *(_OWORD *)&v57.m256i_u64[2] = v19;
  v58 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, int *))(v28 + 104))(v27, v56);
  v23 = v22;
  if ( v22 < 0 )
  {
    v24 = 69LL;
    goto LABEL_34;
  }
  v59 = v17;
  DWORD1(v59) = 4;
  v29 = *a6;
  v30 = *(_QWORD *)*a6;
  *(_OWORD *)v56 = v59;
  *(_OWORD *)v57.m256i_i8 = v18;
  *(_OWORD *)&v57.m256i_u64[2] = v19;
  v58 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, int *))(v30 + 104))(v29, v56);
  v23 = v22;
  if ( v22 < 0 )
  {
    v24 = 73LL;
    goto LABEL_34;
  }
  v59 = v17;
  DWORD1(v59) = 0;
  v31 = *a6;
  v32 = *(_QWORD *)*a6;
  *(_OWORD *)v56 = v59;
  *(_OWORD *)v57.m256i_i8 = v18;
  *(_OWORD *)&v57.m256i_u64[2] = v19;
  v58 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, int *))(v32 + 104))(v31, v56);
  v23 = v22;
  if ( v22 < 0 )
  {
    v24 = 77LL;
    goto LABEL_34;
  }
  v59 = v17;
  DWORD1(v59) = 8;
  v33 = *a6;
  v34 = *(_QWORD *)*a6;
  *(_OWORD *)v56 = v59;
  *(_OWORD *)v57.m256i_i8 = v18;
  *(_OWORD *)&v57.m256i_u64[2] = v19;
  v58 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, int *))(v34 + 104))(v33, v56);
  v23 = v22;
  if ( v22 < 0 )
  {
    v24 = 81LL;
    goto LABEL_34;
  }
  v59 = v17;
  DWORD1(v59) = 6;
  v35 = *a6;
  v36 = *(_QWORD *)*a6;
  *(_OWORD *)v56 = v59;
  *(_OWORD *)v57.m256i_i8 = v18;
  *(_OWORD *)&v57.m256i_u64[2] = v19;
  v58 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, int *))(v36 + 104))(v35, v56);
  v23 = v22;
  if ( v22 < 0 )
  {
    v24 = 85LL;
    goto LABEL_34;
  }
  v59 = v17;
  DWORD1(v59) = 2;
  v37 = *a6;
  v38 = *(_QWORD *)*a6;
  *(_OWORD *)v56 = v59;
  *(_OWORD *)v57.m256i_i8 = v18;
  *(_OWORD *)&v57.m256i_u64[2] = v19;
  v58 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, int *))(v38 + 104))(v37, v56);
  v23 = v22;
  if ( v22 < 0 )
  {
    v24 = 89LL;
    goto LABEL_34;
  }
  v59 = v17;
  DWORD1(v59) = 10;
  v39 = *a6;
  v40 = *(_QWORD *)*a6;
  *(_OWORD *)v56 = v59;
  *(_OWORD *)v57.m256i_i8 = v18;
  *(_OWORD *)&v57.m256i_u64[2] = v19;
  v58 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, int *))(v40 + 104))(v39, v56);
  v23 = v22;
  if ( v22 < 0 )
  {
    v24 = 93LL;
    goto LABEL_34;
  }
  *(_OWORD *)v56 = v17;
  *(_OWORD *)v57.m256i_i8 = v18;
  v56[1] = 7;
  v56[3] = v12;
  v57.m256i_i32[3] = v12;
  v41 = *a6;
  v42 = *(_QWORD *)*a6;
  v59 = *(_OWORD *)v56;
  *(_OWORD *)v60.m256i_i8 = *(_OWORD *)v57.m256i_i8;
  *(_OWORD *)&v60.m256i_u64[2] = v19;
  v61 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v42 + 104))(v41, &v59);
  v23 = v22;
  if ( v22 < 0 )
  {
    v24 = 108LL;
    goto LABEL_34;
  }
  *(_OWORD *)v56 = v17;
  *(_OWORD *)v57.m256i_i8 = v18;
  v56[1] = 3;
  v56[3] = v12;
  v57.m256i_i32[3] = v12;
  v43 = *a6;
  v44 = *(_QWORD *)*a6;
  v59 = *(_OWORD *)v56;
  *(_OWORD *)v60.m256i_i8 = *(_OWORD *)v57.m256i_i8;
  *(_OWORD *)&v60.m256i_u64[2] = v19;
  v61 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v44 + 104))(v43, &v59);
  v23 = v22;
  if ( v22 < 0 )
  {
    v24 = 114LL;
    goto LABEL_34;
  }
  *(_OWORD *)v56 = v17;
  *(_OWORD *)v57.m256i_i8 = v18;
  v56[1] = 11;
  v56[3] = v12;
  v57.m256i_i32[3] = v12;
  v45 = *a6;
  v46 = *(_QWORD *)*a6;
  v59 = *(_OWORD *)v56;
  *(_OWORD *)v60.m256i_i8 = *(_OWORD *)v57.m256i_i8;
  *(_OWORD *)&v60.m256i_u64[2] = v19;
  v61 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v46 + 104))(v45, &v59);
  v23 = v22;
  if ( v22 < 0 )
  {
    v24 = 120LL;
    goto LABEL_34;
  }
  *(_OWORD *)v56 = v17;
  *(_OWORD *)v57.m256i_i8 = v18;
  v56[1] = 13;
  v57.m256i_i32[0] = v11;
  v47 = *a6;
  v48 = *(_QWORD *)*a6;
  v59 = *(_OWORD *)v56;
  *(_OWORD *)v60.m256i_i8 = *(_OWORD *)v57.m256i_i8;
  *(_OWORD *)&v60.m256i_u64[2] = v19;
  v61 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v48 + 104))(v47, &v59);
  v23 = v22;
  if ( v22 < 0 )
  {
    v24 = 134LL;
    goto LABEL_34;
  }
  *(_OWORD *)v56 = v17;
  *(_OWORD *)v57.m256i_i8 = v18;
  v56[1] = 3;
  v57.m256i_i32[0] = v11;
  v49 = *a6;
  v50 = *(_QWORD *)*a6;
  v59 = *(_OWORD *)v56;
  *(_OWORD *)v60.m256i_i8 = *(_OWORD *)v57.m256i_i8;
  *(_OWORD *)&v60.m256i_u64[2] = v19;
  v61 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v50 + 104))(v49, &v59);
  v23 = v22;
  if ( v22 < 0 )
  {
    v24 = 139LL;
    goto LABEL_34;
  }
  *(_OWORD *)v56 = v17;
  *(_OWORD *)v57.m256i_i8 = v18;
  v56[1] = 14;
  v57.m256i_i32[0] = v11;
  v51 = *a6;
  v52 = *(_QWORD *)*a6;
  v59 = *(_OWORD *)v56;
  *(_OWORD *)v60.m256i_i8 = *(_OWORD *)v57.m256i_i8;
  *(_OWORD *)&v60.m256i_u64[2] = v19;
  v61 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v52 + 104))(v51, &v59);
  v23 = v22;
  if ( v22 < 0 )
  {
    v24 = 144LL;
    goto LABEL_34;
  }
  *(_OWORD *)v56 = v17;
  *(_OWORD *)v57.m256i_i8 = v18;
  *(_OWORD *)&v57.m256i_u64[2] = v19;
  v56[1] = 15;
  v56[3] = v12;
  v57.m256i_i32[0] = v11;
  *(__int64 *)((char *)&v57.m256i_i64[1] + 4) = __PAIR64__(v11, v12);
  v53 = *a6;
  v54 = *(_QWORD *)*a6;
  v59 = *(_OWORD *)v56;
  v60 = v57;
  v61 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v54 + 104))(v53, &v59);
  v23 = v22;
  if ( v22 < 0 )
  {
    v24 = 161LL;
    goto LABEL_34;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a6);
  return 0LL;
}
