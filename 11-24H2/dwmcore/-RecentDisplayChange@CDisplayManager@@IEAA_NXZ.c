/*
 * XREFs of ?RecentDisplayChange@CDisplayManager@@IEAA_NXZ @ 0x1802B7D0C
 * Callers:
 *     ?UpdateRenderFailureCount@CComposition@@SAXJ@Z @ 0x1801DF634 (-UpdateRenderFailureCount@CComposition@@SAXJ@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x180154DCC (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 */

bool __fastcall CDisplayManager::RecentDisplayChange(CDisplayManager *this)
{
  bool v1; // bl
  struct IDXGIFactory5 *v3; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0LL;
  CDisplayManager::InternalGetDXGIFactory(this, &v3);
  if ( v3 )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v1 = (unsigned __int64)(1000 * (PerformanceCount.QuadPart - ::PerformanceCount.QuadPart)) / g_qpcFrequency.QuadPart <= (unsigned int)CCommonRegistryData::DisplayChangeTimeoutMs;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v3);
  return v1;
}
