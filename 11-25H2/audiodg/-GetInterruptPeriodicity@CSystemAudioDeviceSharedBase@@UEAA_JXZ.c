/*
 * XREFs of ?GetInterruptPeriodicity@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x1400430D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceSharedBase::GetInterruptPeriodicity(CSystemAudioDeviceSharedBase *this)
{
  void (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // r9
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+28h] [rbp-30h]
  __int128 v8; // [rsp+38h] [rbp-20h] BYREF

  v7 = *(_OWORD *)((char *)this - 56);
  v8 = v7;
  EtwEventActivityIdControl(4LL, &v8);
  v2 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
  v3 = 0LL;
  v6 = 0LL;
  if ( v2 )
  {
    (**v2)(v2, &GUID_b940a4ec_8e37_4fb6_8ffb_b2b29cfdf8cb, &v6);
    v3 = v6;
  }
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
    v3 = v6;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  EtwEventActivityIdControl(4LL, &v8);
  return v4;
}
