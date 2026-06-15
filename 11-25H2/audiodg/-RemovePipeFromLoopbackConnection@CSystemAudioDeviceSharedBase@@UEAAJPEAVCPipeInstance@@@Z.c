/*
 * XREFs of ?RemovePipeFromLoopbackConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x14004E000
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceSharedBase::RemovePipeFromLoopbackConnection(
        CSystemAudioDeviceSharedBase *this,
        struct CPipeInstance *a2)
{
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // r9
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+28h] [rbp-30h]
  __int128 v10; // [rsp+38h] [rbp-20h] BYREF

  v9 = *(_OWORD *)((char *)this - 56);
  v10 = v9;
  EtwEventActivityIdControl(4LL, &v10);
  v4 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
  v5 = 0LL;
  v8 = 0LL;
  if ( v4 )
  {
    (**v4)(v4, &GUID_b940a4ec_8e37_4fb6_8ffb_b2b29cfdf8cb, &v8);
    v5 = v8;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, struct CPipeInstance *))(*(_QWORD *)v5 + 80LL))(v5, a2);
    v5 = v8;
  }
  else
  {
    v6 = -2147467262;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  EtwEventActivityIdControl(4LL, &v10);
  return v6;
}
