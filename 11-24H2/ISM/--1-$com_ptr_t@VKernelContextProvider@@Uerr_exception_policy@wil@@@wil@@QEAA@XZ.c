/*
 * XREFs of ??1?$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180097024
 * Callers:
 *     ?Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z @ 0x18010A4B0 (-Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18017FFF4 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ?Create@VirtualTouchpadContextProvider@@CAJPEAPEAV1@@Z @ 0x1801A11A0 (-Create@VirtualTouchpadContextProvider@@CAJPEAPEAV1@@Z.c)
 *     ?Create@DisplayOcclusionContextProvider@@CAJPEAPEAV1@@Z @ 0x1801A1CCC (-Create@DisplayOcclusionContextProvider@@CAJPEAPEAV1@@Z.c)
 *     _DisplayOcclusionContextProvider::Create_::_1_::dtor$0 @ 0x1801D36CB (_DisplayOcclusionContextProvider--Create_--_1_--dtor$0.c)
 *     _InputConfigContextProvider::Create_::_1_::dtor$0 @ 0x1801D6EF3 (_InputConfigContextProvider--Create_--_1_--dtor$0.c)
 *     _DeviceDockServer::OnDockInput_::_1_::dtor$1 @ 0x1801D83F3 (_DeviceDockServer--OnDockInput_--_1_--dtor$1.c)
 *     _DeviceDockServer::OnDockInput_::_1_::dtor$2 @ 0x1801D8405 (_DeviceDockServer--OnDockInput_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180035CE0 (-Release@InputContext@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<KernelContextProvider,wil::err_exception_policy>::~com_ptr_t<KernelContextProvider,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return InputContext::Release((InputContext *)(v1 + 8));
  return result;
}
