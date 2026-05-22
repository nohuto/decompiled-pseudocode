/*
 * XREFs of ?CancelManualDrag@DragNDropProcessor@@AEAAXKPEAVManualDragAreaClientProxy@@@Z @ 0x180148C18
 * Callers:
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x18014BFE8 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ManualDragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18014A5C0 (-ManualDragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@Syst.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall DragNDropProcessor::CancelManualDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        struct ManualDragAreaClientProxy *a3)
{
  __int64 v3; // rax
  __int64 v6; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(DragNDropProcessor *))(v3 + 48))(this);
  InputETW::InputGesture::ManualDragCancelled(v6, a2, &v9, &v9);
  *((_BYTE *)a3 + 72) = 0;
  v7 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)a3 + 1) + 24LL))((char *)a3 + 8, a2);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragareaclientproxy.cpp",
      (const char *)(unsigned int)v7,
      (int)&v9);
}
