/*
 * XREFs of _lambda_9ea61389800d10a92a31feda1ef8f987_::operator() @ 0x1400347B8
 * Callers:
 *     wil::details::lambda_call__lambda_52d1ba851b6b57420151ed604b411c9a___::_lambda_call__lambda_52d1ba851b6b57420151ed604b411c9a___ @ 0x1400328D4 (wil--details--lambda_call__lambda_52d1ba851b6b57420151ed604b411c9a___--_lambda_call__lambda_52d1.c)
 *     ?RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x1400329F4 (-RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREA.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14004EC80 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_9ea61389800d10a92a31feda1ef8f987_::operator()(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = *a1;
  v3 = *(_QWORD *)(*a1 + 24);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    result = *a1;
    *(_QWORD *)(*a1 + 24) = 0LL;
  }
  v4 = *(_QWORD *)(result + 32);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    result = *a1;
    *(_QWORD *)(*a1 + 32) = 0LL;
  }
  v5 = *(_QWORD *)(result + 48);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    result = *a1;
    *(_QWORD *)(*a1 + 48) = 0LL;
  }
  return result;
}
