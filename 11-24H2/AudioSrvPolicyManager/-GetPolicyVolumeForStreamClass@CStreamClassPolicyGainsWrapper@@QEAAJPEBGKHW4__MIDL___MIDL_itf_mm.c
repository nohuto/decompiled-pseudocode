/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x1800093F0
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x180015A90 (-GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@A.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x1800098F0 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEAMAEA_J@Z @ 0x180012CD0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEAMAEA_J@Z.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x18001ED24 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamClassPolicyGainsWrapper::GetPolicyVolumeForStreamClass(
        CStreamClassPolicyGainsWrapper *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a5,
        float *a6,
        __int64 *a7)
{
  __int64 v8; // r14
  __int64 v10; // rsi
  struct _RTL_CRITICAL_SECTION *v11; // rdi
  float v12; // xmm6_4
  __int64 v13; // rax
  _QWORD *i; // rbx
  struct _RTL_CRITICAL_SECTION *v15; // rbp
  float v16; // xmm0_4
  float v17; // xmm0_4
  float *v18; // rbx
  __int64 *v19; // rdi
  int v20; // eax
  unsigned int v21; // esi
  int PolicyVolumeForStreamClass; // eax
  unsigned int v24; // esi
  LPCRITICAL_SECTION v25; // rcx
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  float v28; // [rsp+90h] [rbp+18h] BYREF

  v8 = a3;
  v10 = 0LL;
  lpCriticalSection[0] = 0LL;
  CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(
    this,
    a2,
    (struct CStreamClassPolicyGains **)lpCriticalSection);
  v11 = lpCriticalSection[0];
  EnterCriticalSection(lpCriticalSection[0]);
  lpCriticalSection[1] = v11;
  v12 = FLOAT_1_0;
  v28 = FLOAT_1_0;
  lpCriticalSection[0] = 0LL;
  v13 = 232LL;
  if ( !a4 )
    v13 = 40LL;
  if ( (unsigned int)v8 >= 0x18 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
      (const char *)0x8000FFFFLL);
    if ( v11 )
      LeaveCriticalSection(v11);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  else
  {
    for ( i = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v11->DebugInfo + 8 * v8 + v13); i; i = (_QWORD *)*i )
    {
      v15 = (struct _RTL_CRITICAL_SECTION *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
      v16 = (***(float (__fastcall ****)(_QWORD))(i[1] + 56LL))(*(_QWORD *)(i[1] + 56LL));
      v17 = ConvertDbToEngineVolume(v16);
      if ( v12 > v17 )
        v12 = v17;
      if ( (__int64)v15 > v10 )
      {
        v10 = (__int64)v15;
        lpCriticalSection[0] = v15;
      }
    }
    v28 = v12;
    if ( v11 )
      LeaveCriticalSection(v11);
    v18 = a6;
    *a6 = v12;
    v19 = a7;
    *a7 = v10;
    if ( a5 )
    {
      PolicyVolumeForStreamClass = CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(
                                     (LPCRITICAL_SECTION)((char *)this + 488),
                                     v8,
                                     a4,
                                     &v28,
                                     (__int64 *)lpCriticalSection);
      v24 = PolicyVolumeForStreamClass;
      if ( PolicyVolumeForStreamClass < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBD,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
          (const char *)(unsigned int)PolicyVolumeForStreamClass);
        return v24;
      }
    }
    else
    {
      v20 = CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(
              (LPCRITICAL_SECTION)((char *)this + 64),
              v8,
              a4,
              &v28,
              (__int64 *)lpCriticalSection);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB9,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
          (const char *)(unsigned int)v20);
        return v21;
      }
    }
    *v18 = fminf(*v18, v28);
    v25 = lpCriticalSection[0];
    if ( *v19 > (__int64)lpCriticalSection[0] )
      v25 = (LPCRITICAL_SECTION)*v19;
    *v19 = (__int64)v25;
    return 0LL;
  }
}
