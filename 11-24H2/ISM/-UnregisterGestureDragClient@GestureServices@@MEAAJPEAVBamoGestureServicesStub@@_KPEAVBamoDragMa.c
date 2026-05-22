/*
 * XREFs of ?UnregisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KPEAVBamoDragManagerClientProxy@@@Z @ 0x1800282A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z @ 0x1800284EC (-IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ?ClearAnimationDataForSource@DragManagerClientProxy@@QEAAX_K@Z @ 0x180028528 (-ClearAnimationDataForSource@DragManagerClientProxy@@QEAAX_K@Z.c)
 *     ?UnregisterGestureSource@ShellGesturesProcessor@@QEAAX_KPEAVDragManagerClientProxy@@@Z @ 0x1800285F8 (-UnregisterGestureSource@ShellGesturesProcessor@@QEAAX_KPEAVDragManagerClientProxy@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009AA0C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?IsTestSigningEnabled@KernelContextProvider@@SA_NXZ @ 0x18010A7E4 (-IsTestSigningEnabled@KernelContextProvider@@SA_NXZ.c)
 */

__int64 __fastcall GestureServices::UnregisterGestureDragClient(
        ShellGesturesProcessor **this,
        struct BamoGestureServicesStub *a2,
        unsigned __int64 a3,
        struct BamoDragManagerClientProxy *a4)
{
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( GestureServices::IsShellClient((GestureServices *)this, a4) || KernelContextProvider::IsTestSigningEnabled() )
  {
    ShellGesturesProcessor::UnregisterGestureSource(this[10], a3, a4);
    DragManagerClientProxy::ClearAnimationDataForSource(a4, a3);
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x217,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\g"
                    "estureservices.cpp",
      (const char *)0x80070005LL,
      v8);
  }
  return 0LL;
}
