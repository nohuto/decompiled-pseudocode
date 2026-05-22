/*
 * XREFs of ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x18000F93C
 * Callers:
 *     ?OnInputConfigChanged@SystemContextManager@@QEAAXXZ @ 0x18000C2CC (-OnInputConfigChanged@SystemContextManager@@QEAAXXZ.c)
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000E7D0 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x18000F284 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x1800AB200 (-OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamo.c)
 *     ?Initialize@VirtualTouchpadControllerProxy@@QEAAJXZ @ 0x180135538 (-Initialize@VirtualTouchpadControllerProxy@@QEAAJXZ.c)
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18013ED40 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180193BA0 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 *     ?Initialize@GazeProcessor@@IEAAJXZ @ 0x1801B8458 (-Initialize@GazeProcessor@@IEAAJXZ.c)
 * Callees:
 *     wil::init_once_nothrow__lambda_008aa74523cf7437dacc2be58aae67bd___ @ 0x18008D3E0 (wil--init_once_nothrow__lambda_008aa74523cf7437dacc2be58aae67bd___.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18009CF54 (atexit.c)
 *     _Init_thread_footer @ 0x18009D928 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009D990 (_Init_thread_header.c)
 */

struct InputConfigContextProvider *InputConfigContextProvider::GetInstance(void)
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  int inited; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = (unsigned int)tls_index;
  v1 = 32LL;
  if ( dword_180251E68 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 32LL) )
  {
    Init_thread_header(&dword_180251E68);
    if ( dword_180251E68 == -1 )
    {
      atexit(InputConfigContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_180251E68);
    }
  }
  v6 = 0;
  inited = wil::init_once_nothrow__lambda_008aa74523cf7437dacc2be58aae67bd___(v0, v1, &v6);
  if ( inited < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x344,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
      (const char *)(unsigned int)inited,
      v4);
  return qword_180251E60;
}
