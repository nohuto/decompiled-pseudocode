/*
 * XREFs of ??$_Construct_in_place@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YAXAEAVCXvmPowerReferenceManager@@$$QEBU_GUID@@1@Z @ 0x180103504
 * Callers:
 *     ??$make_shared@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YA?AV?$shared_ptr@VCXvmPowerReferenceManager@@@0@$$QEBU_GUID@@0@Z @ 0x18010364C (--$make_shared@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YA-AV-$shared_ptr@VCXvmPower.c)
 * Callees:
 *     ??0CXvmPowerReferenceManager@@QEAA@U_GUID@@0@Z @ 0x1801037B4 (--0CXvmPowerReferenceManager@@QEAA@U_GUID@@0@Z.c)
 */

CXvmPowerReferenceManager *__fastcall std::_Construct_in_place<CXvmPowerReferenceManager,_GUID const,_GUID const>(
        void *a1,
        struct _GUID *a2,
        struct _GUID *a3)
{
  struct _GUID v3; // xmm1
  struct _GUID v5; // [rsp+20h] [rbp-28h] BYREF
  struct _GUID v6; // [rsp+30h] [rbp-18h] BYREF

  v3 = *a2;
  v5 = *a3;
  v6 = v3;
  return CXvmPowerReferenceManager::CXvmPowerReferenceManager(a1, &v6, &v5);
}
