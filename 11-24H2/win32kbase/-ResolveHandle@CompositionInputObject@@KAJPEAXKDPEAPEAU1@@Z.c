/*
 * XREFs of ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14004A450
 * Callers:
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x14004A34C (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     NtQueryCompositionInputSink @ 0x14004A590 (NtQueryCompositionInputSink.c)
 *     ?Create@InputSink@InputTraceLogging@@SAXPEAXPEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x14006B850 (-Create@InputSink@InputTraceLogging@@SAXPEAXPEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 *     NtUpdateInputSinkTransforms @ 0x1400F0BF0 (NtUpdateInputSinkTransforms.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x14011FEC8 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z.c)
 *     NtQueryCompositionInputIsImplicit @ 0x140126530 (NtQueryCompositionInputIsImplicit.c)
 *     NtCompositionSetDropTarget @ 0x14012B7F0 (NtCompositionSetDropTarget.c)
 *     NtQueryCompositionInputSinkViewId @ 0x140130E60 (NtQueryCompositionInputSinkViewId.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018AF58 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1401AA748 (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     NtUserAddVisualIdentifier @ 0x1401B9580 (NtUserAddVisualIdentifier.c)
 *     ?Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z @ 0x14020FFA4 (-Set@CDesktopInputSink@@AEAA_NPEAXAEBU_LUID@@@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x140210F84 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionInputObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        struct CompositionInputObject **a4)
{
  NTSTATUS v5; // eax
  struct CompositionInputObject *v6; // rdi
  int v7; // ebx
  struct CompositionInputObject *v8; // rsi
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  Object = 0LL;
  *a4 = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a2, ExCompositionObjectType, a3, &Object, 0LL);
  v6 = (struct CompositionInputObject *)Object;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
    {
      v8 = v6;
      if ( (*(unsigned int (__fastcall **)(_QWORD *))(**((_QWORD **)v6 + 1) + 16LL))(*((_QWORD **)v6 + 1)) != 2 )
      {
        v7 = -1073741788;
        v8 = 0LL;
      }
      if ( v7 >= 0 )
      {
        *a4 = v8;
        return (unsigned int)v7;
      }
    }
    else
    {
      v7 = -1073741816;
    }
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v7;
}
