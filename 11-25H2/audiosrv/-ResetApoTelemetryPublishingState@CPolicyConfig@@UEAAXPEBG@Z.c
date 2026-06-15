/*
 * XREFs of ?ResetApoTelemetryPublishingState@CPolicyConfig@@UEAAXPEBG@Z @ 0x180020D10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CPolicyConfig::ResetApoTelemetryPublishingState(CPolicyConfig *this, const unsigned __int16 *a2)
{
  struct CEndpointStore *v2; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( (int)CEndpointStoreCache::GetEndpointStore(this, a2, &v2) >= 0 )
    _InterlockedExchange((volatile __int32 *)v2 + 65, 0);
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v2);
}
