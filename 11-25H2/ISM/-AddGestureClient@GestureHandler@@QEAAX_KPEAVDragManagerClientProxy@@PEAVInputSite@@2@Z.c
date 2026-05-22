/*
 * XREFs of ?AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z @ 0x180144520
 * Callers:
 *     ?PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@Z @ 0x180157EC0 (-PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV-$vec.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x1801586E8 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800284CC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1GestureClient@GestureHandler@@QEAA@XZ @ 0x18013F9D0 (--1GestureClient@GestureHandler@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@UGestureClient@GestureHandler@@@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@AEAAPEAUGestureClient@GestureHandler@@QEAU23@$$QEAU23@@Z @ 0x18014402C (--$_Emplace_reallocate@UGestureClient@GestureHandler@@@-$vector@UGestureClient@GestureHandler@@V.c)
 *     ??0GestureClient@GestureHandler@@QEAA@$$QEAU01@@Z @ 0x1801442A0 (--0GestureClient@GestureHandler@@QEAA@$$QEAU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GestureHandler::AddGestureClient(
        GestureHandler *this,
        __int64 a2,
        struct DragManagerClientProxy *a3,
        struct InputSite *a4)
{
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-30h] BYREF
  __int64 (__fastcall ***v7)(_QWORD); // [rsp+28h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h] BYREF
  char v10; // [rsp+40h] [rbp-10h]
  int v11; // [rsp+41h] [rbp-Fh]
  __int16 v12; // [rsp+45h] [rbp-Bh]
  char v13; // [rsp+47h] [rbp-9h]

  v6 = a2;
  v7 = (__int64 (__fastcall ***)(_QWORD))a3;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v7);
  v8 = 0LL;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v8);
  v9 = 0LL;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v9);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v5 = *((_QWORD *)this + 15);
  if ( v5 == *((_QWORD *)this + 16) )
  {
    std::vector<GestureHandler::GestureClient>::_Emplace_reallocate<GestureHandler::GestureClient>(
      (GestureHandler::GestureClient **)this + 14,
      *((char **)this + 15),
      (__int64)&v6);
  }
  else
  {
    GestureHandler::GestureClient::GestureClient(v5, (__int64)&v6);
    *((_QWORD *)this + 15) += 40LL;
  }
  GestureHandler::GestureClient::~GestureClient((GestureHandler::GestureClient *)&v6);
}
