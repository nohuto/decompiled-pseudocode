/*
 * XREFs of ?EventGestureCancelled@GestureHandler@@SAXKPEBGPEAVDragManagerClientProxy@@@Z @ 0x18008432C
 * Callers:
 *     ?StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x1801418C0 (-StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClie.c)
 * Callees:
 *     ?GestureCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180097FD8 (-GestureCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GestureHandler::EventGestureCancelled(
        unsigned int a1,
        const unsigned __int16 *a2,
        struct DragManagerClientProxy *a3)
{
  __int64 v5; // [rsp+58h] [rbp+7h] BYREF
  __int64 v6; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v7; // [rsp+68h] [rbp+17h] BYREF
  __int128 v8; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v9; // [rsp+80h] [rbp+2Fh]

  v9 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  InputETW::InputGesture::GestureCancelled(a2, a1, &v7, &v6, &v5, 0LL, 0, 0LL);
  (*(void (__fastcall **)(char *, _QWORD, __int64 *, __int64 *, __int64 *, __int128 *, _QWORD, _DWORD, _QWORD))(*((_QWORD *)a3 + 1) + 48LL))(
    (char *)a3 + 8,
    a1,
    &v7,
    &v6,
    &v5,
    &v8,
    0LL,
    0,
    0LL);
}
