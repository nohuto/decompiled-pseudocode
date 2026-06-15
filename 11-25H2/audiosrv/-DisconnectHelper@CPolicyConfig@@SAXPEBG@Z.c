/*
 * XREFs of ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x180100974
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x180016B3C (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x180100854 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     ?DisconnectSessions@CPolicyConfig@@UEAAJPEBG@Z @ 0x1801009C0 (-DisconnectSessions@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x180101938 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18007230C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPolicyConfig::DisconnectHelper(CEndpointStoreCache *a1)
{
  struct CEndpointStore *v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( (int)CEndpointStoreCache::GetEndpointStore(a1, (const unsigned __int16 *)a1, &v1) >= 0 )
    CAudioSessionManager::Disconnect(*((struct _RTL_CRITICAL_SECTION **)v1 + 12), 2u, 1);
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v1);
}
