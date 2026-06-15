/*
 * XREFs of ??0CRTThreadManager@@QEAA@XZ @ 0x140049DB0
 * Callers:
 *     ??$MakeAndInitialize@VCRTThreadManager@@V1@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManager@@AEAH@Z @ 0x1400552C8 (--$MakeAndInitialize@VCRTThreadManager@@V1@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManage.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x140019074 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140058D14 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
CRTThreadManager *__fastcall CRTThreadManager::CRTThreadManager(CRTThreadManager *this)
{
  _QWORD *v2; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(this);
  *(_QWORD *)this = &CRTThreadManager::`vftable';
  *((_DWORD *)this + 4) = 3;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 48), 0, 0);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v2 = operator new(0x18uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 11) = v2;
  *((_BYTE *)this + 104) = 0;
  *((_DWORD *)this + 27) = 0;
  return this;
}
