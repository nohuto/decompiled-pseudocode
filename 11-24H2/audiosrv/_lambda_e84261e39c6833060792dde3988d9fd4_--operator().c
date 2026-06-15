/*
 * XREFs of _lambda_e84261e39c6833060792dde3988d9fd4_::operator() @ 0x180017168
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e84261e39c6833060792dde3988d9fd4__void_::_Do_call @ 0x180070680 (std--_Func_impl_no_alloc__lambda_e84261e39c6833060792dde3988d9fd4__void_--_Do_call.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180026528 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_e84261e39c6833060792dde3988d9fd4_::operator()(CAudioSession **a1)
{
  CAudioSession *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = *a1;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v6);
  v3 = 0LL;
  v6 = 0LL;
  v4 = *((_QWORD *)v2 + 114);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
           *((_QWORD *)v2 + 114),
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v6);
    v3 = v6;
  }
  else
  {
    v5 = 0;
  }
  if ( v5 >= 0 && v3 )
  {
    CAudioSession::PostStateCheckExpirationWork(*a1);
    v3 = v6;
  }
  if ( v3 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
