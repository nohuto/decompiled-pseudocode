/*
 * XREFs of ?GetLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x14003D870
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetLatency(CSystemAudioDeviceSharedBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+28h] [rbp-30h]
  __int128 v8; // [rsp+38h] [rbp-20h] BYREF

  v7 = *(_OWORD *)((char *)this - 56);
  v8 = v7;
  EtwEventActivityIdControl(4LL, &v8);
  v2 = *((_QWORD *)this + 3);
  v3 = *((_QWORD *)this + 1);
  v4 = 0LL;
  v6 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, v3, &v6) >= 0 )
    v4 = v6;
  EtwEventActivityIdControl(4LL, &v8);
  return v4;
}
