/*
 * XREFs of ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x180064FBC
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x180064D60 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x1800EFF40 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ConnectToSaDevice_Base(CBaseStreamGroupProxy *this)
{
  _QWORD *v1; // rax
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD, _QWORD, __int64); // rbx
  unsigned int v5; // eax
  _QWORD v7[8]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(_QWORD **)this;
  v7[0] = off_18016F310;
  v7[7] = v7;
  ((void (__fastcall *)(CBaseStreamGroupProxy *, _QWORD *))v1[46])(this, v7);
  (*(void (__fastcall **)(_QWORD, CBaseStreamGroupProxy *))(**((_QWORD **)this + 11) + 176LL))(
    *((_QWORD *)this + 11),
    this);
  v3 = *((_QWORD *)this + 11);
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v3 + 88LL);
  v5 = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 176LL))(this);
  return v4(v3, 0LL, v5, 0xFFFFFFFFLL);
}
