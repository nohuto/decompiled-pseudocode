/*
 * XREFs of ?GetSpatialUtilization@CSystemAudioDeviceSharedBase@@UEAAJPEAI00@Z @ 0x1400746A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetSpatialUtilization(
        CSystemAudioDeviceSharedBase *this,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  CSystemAudioDeviceSharedBase *v5; // rbx
  __int128 v9; // [rsp+40h] [rbp-48h] BYREF

  v5 = this;
  v9 = *(_OWORD *)((char *)this + 104);
  EtwEventActivityIdControl(4LL, &v9);
  LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *, unsigned int *))(**((_QWORD **)v5 + 23)
                                                                                                  + 136LL))(
                  *((_QWORD *)v5 + 23),
                  a2,
                  a3,
                  a4);
  EtwEventActivityIdControl(4LL, &v9);
  return (unsigned int)v5;
}
