/*
 * XREFs of ??$ChainedAposSupportInterface@UIApoAuxiliaryInputConfiguration@@@CCompositeSystemEffect@@AEAA_NXZ @ 0x18005E598
 * Callers:
 *     ?QueryInterface@CCompositeSystemEffect@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005E3E0 (-QueryInterface@CCompositeSystemEffect@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCompositeSystemEffect::ChainedAposSupportInterface<IApoAuxiliaryInputConfiguration>(__int64 *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx
  char v4; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v5[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v6; // [rsp+68h] [rbp-20h]

  v4 = 0;
  v1 = *a1;
  v5[0] = &std::_Func_impl_no_alloc<_lambda_719944a900db145257baf03c12c806dc_,long,IAudioProcessingObject *,_GUID,unsigned int>::`vftable';
  v5[1] = &v4;
  v6 = v5;
  (*(void (__fastcall **)(__int64 *, _QWORD *))(v1 + 40))(a1, v5);
  if ( v6 )
  {
    v2 = v5;
    LOBYTE(v2) = v6 != v5;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v6 + 32LL))(v6, v2);
  }
  return v4;
}
