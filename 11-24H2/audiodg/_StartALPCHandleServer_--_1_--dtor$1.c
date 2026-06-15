/*
 * XREFs of _StartALPCHandleServer_::_1_::dtor$1 @ 0x140093BFB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StartALPCHandleServer_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>::~unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>((__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 88));
}
