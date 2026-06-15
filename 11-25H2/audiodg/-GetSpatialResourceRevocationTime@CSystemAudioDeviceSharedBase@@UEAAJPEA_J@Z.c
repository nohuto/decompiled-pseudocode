/*
 * XREFs of ?GetSpatialResourceRevocationTime@CSystemAudioDeviceSharedBase@@UEAAJPEA_J@Z @ 0x140074600
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetSpatialResourceRevocationTime(
        CSystemAudioDeviceSharedBase *this,
        __int64 *a2)
{
  CSystemAudioDeviceSharedBase *v3; // rbx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v3 = this;
  v5 = *(_OWORD *)((char *)this + 104);
  EtwEventActivityIdControl(4LL, &v5);
  LODWORD(v3) = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v3 + 23) + 128LL))(
                  *((_QWORD *)v3 + 23),
                  a2);
  EtwEventActivityIdControl(4LL, &v5);
  return (unsigned int)v3;
}
