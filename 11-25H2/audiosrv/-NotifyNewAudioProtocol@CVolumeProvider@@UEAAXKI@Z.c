/*
 * XREFs of ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x180020DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x18002141C (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVolumeProvider::NotifyNewAudioProtocol(CVolumeProvider *this, int a2, int a3)
{
  __int64 (__fastcall ***v3)(); // rdx
  __int128 v4; // [rsp+20h] [rbp-68h]
  __int64 (__fastcall **v5)(); // [rsp+30h] [rbp-58h] BYREF
  __int128 v6; // [rsp+38h] [rbp-50h]
  __int64 (__fastcall ***v7)(); // [rsp+68h] [rbp-20h]
  int v8; // [rsp+98h] [rbp+10h] BYREF
  int v9; // [rsp+A0h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  *(_QWORD *)&v4 = &v8;
  *((_QWORD *)&v4 + 1) = &v9;
  v5 = off_18016C668;
  v6 = v4;
  v7 = &v5;
  CEndpointStoreCache::ForEachEndpoint(this, &v5);
  if ( v7 )
  {
    v3 = &v5;
    LOBYTE(v3) = v7 != &v5;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v7)[4])(v7, v3);
  }
}
