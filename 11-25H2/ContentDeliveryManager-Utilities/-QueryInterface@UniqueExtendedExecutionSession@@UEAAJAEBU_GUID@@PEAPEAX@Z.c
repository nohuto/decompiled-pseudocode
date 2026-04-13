/*
 * XREFs of ?QueryInterface@UniqueExtendedExecutionSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008E5A0
 * Callers:
 *     ?QueryInterface@UniqueExtendedExecutionSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008E5B0 (-QueryInterface@UniqueExtendedExecutionSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@UniqueExtendedExecutionSession@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008E5C0 (-QueryInterface@UniqueExtendedExecutionSession@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall UniqueExtendedExecutionSession::QueryInterface(__int64 this, struct _GUID *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>>(
           this,
           a2,
           a3);
}
