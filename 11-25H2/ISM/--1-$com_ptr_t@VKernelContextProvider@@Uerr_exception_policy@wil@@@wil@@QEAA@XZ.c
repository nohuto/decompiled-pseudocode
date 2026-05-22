/*
 * XREFs of ??1?$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180096F14
 * Callers:
 *     ?Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z @ 0x1801085A0 (-Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18017E424 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ?Create@VirtualTouchpadContextProvider@@CAJPEAPEAV1@@Z @ 0x180199BB0 (-Create@VirtualTouchpadContextProvider@@CAJPEAPEAV1@@Z.c)
 *     ?Create@DisplayOcclusionContextProvider@@CAJPEAPEAV1@@Z @ 0x18019A6DC (-Create@DisplayOcclusionContextProvider@@CAJPEAPEAV1@@Z.c)
 *     _DisplayOcclusionContextProvider::Create_::_1_::dtor$0 @ 0x1801CC23D (_DisplayOcclusionContextProvider--Create_--_1_--dtor$0.c)
 *     _InputConfigContextProvider::Create_::_1_::dtor$0 @ 0x1801CF6AB (_InputConfigContextProvider--Create_--_1_--dtor$0.c)
 *     _DeviceDockServer::OnDockInput_::_1_::dtor$1 @ 0x1801D0BAF (_DeviceDockServer--OnDockInput_--_1_--dtor$1.c)
 *     _DeviceDockServer::OnDockInput_::_1_::dtor$2 @ 0x1801D0BC1 (_DeviceDockServer--OnDockInput_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
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
