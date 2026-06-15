/*
 * XREFs of ??0CApplication@@QEAA@XZ @ 0x180035F34
 * Callers:
 *     ??$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplication@@AEAPEBGAEA_KAEAK@Z @ 0x180035C74 (--$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplic.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180004DE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180019A8C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=13
CApplication *__fastcall CApplication::CApplication(CApplication *this)
{
  _QWORD *v2; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(this);
  *(_QWORD *)this = &CApplication::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 32), 0, 0);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 10;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 10;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 168), 0, 0);
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 54) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 224), 0, 0);
  *((_QWORD *)this + 33) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 7, 0, 0);
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 82) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 336), 0, 0);
  *((_QWORD *)this + 47) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 384), 0, 0);
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 1;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 11, 0, 0);
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 496), 0, 0);
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 4LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_DWORD *)this + 160) = 0;
  *(_QWORD *)((char *)this + 644) = 1LL;
  *(_QWORD *)((char *)this + 652) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 88) = v2;
  *((_BYTE *)this + 720) = 0;
  return this;
}
