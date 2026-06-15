/*
 * XREFs of ?RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z @ 0x140033B34
 * Callers:
 *     ??$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVCDeviceGraphObjectCache@@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Z @ 0x140022E0C (--$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@W.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeCpuMemoryConnectionHeap@CDeviceGraphObjectCache@@IEAAJ_JMI@Z @ 0x140033BC0 (-InitializeCpuMemoryConnectionHeap@CDeviceGraphObjectCache@@IEAAJ_JMI@Z.c)
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x140034710 (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectCache::RuntimeClassInitialize(
        CDeviceGraphObjectCache *this,
        __int64 a2,
        float a3,
        unsigned int a4,
        const struct _tlgProvider_t *a5)
{
  int APOProcessingHostInstance; // ebx
  __int64 v7; // rcx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 26) = a5;
  APOProcessingHostInstance = CDeviceGraphObjectCache::InitializeCpuMemoryConnectionHeap(this, a2, a3, a4);
  if ( APOProcessingHostInstance < 0 )
  {
    v9 = 514LL;
  }
  else
  {
    v7 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    APOProcessingHostInstance = GetAPOProcessingHostInstance((struct IAPOProcessingHost **)this + 12);
    if ( APOProcessingHostInstance >= 0 )
      return 0LL;
    v9 = 515LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
    (const char *)(unsigned int)APOProcessingHostInstance);
  return (unsigned int)APOProcessingHostInstance;
}
