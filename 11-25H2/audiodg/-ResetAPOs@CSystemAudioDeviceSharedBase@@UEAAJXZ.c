/*
 * XREFs of ?ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140048BF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::ResetAPOs(CSystemAudioDeviceSharedBase *this)
{
  CSystemAudioDeviceSharedBase *v1; // rbx
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v1 = this;
  v3 = *(_OWORD *)((char *)this + 104);
  EtwEventActivityIdControl(4LL, &v3);
  LODWORD(v1) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 23) + 112LL))(*((_QWORD *)v1 + 23));
  EtwEventActivityIdControl(4LL, &v3);
  return (unsigned int)v1;
}
