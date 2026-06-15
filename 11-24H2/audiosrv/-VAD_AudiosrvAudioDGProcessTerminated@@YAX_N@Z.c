/*
 * XREFs of ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x18009F530
 * Callers:
 *     ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x180073F30 (-OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z.c)
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x1800299BC (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VAD_AudiosrvAudioDGProcessTerminated(void *a1)
{
  _QWORD *v1; // rdx
  char v2; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v3[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v4; // [rsp+68h] [rbp-20h]

  v2 = (char)a1;
  v3[0] = off_180177108;
  v3[1] = &v2;
  v4 = v3;
  CEndpointStoreCache::ForEachEndpoint(a1, (__int64)v3);
  if ( v4 )
  {
    v1 = v3;
    LOBYTE(v1) = v4 != v3;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v4 + 32LL))(v4, v1);
  }
  (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 32LL))(g_pVolumeProvider);
}
