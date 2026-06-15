/*
 * XREFs of ??0CConstraintModelResourceManager@@AEAA@XZ @ 0x1800EA578
 * Callers:
 *     ?Create@CConstraintModelResourceManager@@SAJPEAUIAudioResourceControl@@PEAPEAV1@@Z @ 0x1800EC4D8 (-Create@CConstraintModelResourceManager@@SAJPEAUIAudioResourceControl@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x1800EA53C (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
CConstraintModelResourceManager *__fastcall CConstraintModelResourceManager::CConstraintModelResourceManager(
        CConstraintModelResourceManager *this)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CConstraintModelResourceManager::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 16), 0, 0);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((CConstraintModelResourceManager *)((char *)this + 80));
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 10;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((CConstraintModelResourceManager *)((char *)this + 192));
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 10;
  *((_DWORD *)this + 70) = 0;
  return this;
}
