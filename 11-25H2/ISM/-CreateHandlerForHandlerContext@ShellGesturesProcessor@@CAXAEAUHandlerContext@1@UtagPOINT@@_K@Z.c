/*
 * XREFs of ?CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z @ 0x18015725C
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180088DB0 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x1801586E8 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18007FF1C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@IUtagPOINT@@_KW4GestureProcessorType@@@Z @ 0x180140080 (-CreateGestureHandler@GestureServices@@QEAA-AV-$weak_ptr@VGestureHandler@@@std@@IUtagPOINT@@_KW4.c)
 *     ??4?$weak_ptr@VGestureHandler@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180157058 (--4-$weak_ptr@VGestureHandler@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ShellGesturesProcessor::CreateHandlerForHandlerContext(
        struct ShellGesturesProcessor::HandlerContext *a1,
        struct tagPOINT a2,
        __int64 a3)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  _QWORD *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+38h] [rbp-10h]

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v8 = GestureServices::CreateGestureHandler(v7, &v9, *(_DWORD *)a1, *(_QWORD *)&a2, a3);
  std::weak_ptr<GestureHandler>::operator=((_QWORD *)a1 + 2, v8);
  if ( v10 )
    std::_Ref_count_base::_Decwref(v10);
}
