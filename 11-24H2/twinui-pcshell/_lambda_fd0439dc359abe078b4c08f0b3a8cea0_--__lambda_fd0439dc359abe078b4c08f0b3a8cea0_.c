/*
 * XREFs of _lambda_fd0439dc359abe078b4c08f0b3a8cea0_::__lambda_fd0439dc359abe078b4c08f0b3a8cea0_ @ 0x180511650
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_5fb34dca825284ea67ff945056291927___ @ 0x180511244 (CreationThreadDispatcher--RunAsync__lambda_5fb34dca825284ea67ff945056291927___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___::_CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___ @ 0x1805116A8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fd0439dc359abe078b4c08f0b3a8cea0___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800994CC (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall lambda_fd0439dc359abe078b4c08f0b3a8cea0_::__lambda_fd0439dc359abe078b4c08f0b3a8cea0_(__int64 a1)
{
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)(a1 + 24));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
