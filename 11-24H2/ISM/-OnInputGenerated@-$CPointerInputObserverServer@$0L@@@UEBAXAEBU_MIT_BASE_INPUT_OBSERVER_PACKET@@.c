/*
 * XREFs of ?OnInputGenerated@?$CPointerInputObserverServer@$0L@@@UEBAXAEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@@Z @ 0x1801397B0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@UAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@U?$default_delete@UAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@std@@@std@@QEAA@XZ @ 0x1800E6C54 (--1-$unique_ptr@UAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@U-$default_delete@UAPP_MOUSE_.c)
 *     ?DeliverToApps@?$CBaseInputObserverServer@$0L@@@UEBAXV?$function@$$A6AXAEBV?$ComPtr@VBamoInputObserverClientProxy@@@WRL@Microsoft@@@Z@std@@@Z @ 0x1801395F0 (-DeliverToApps@-$CBaseInputObserverServer@$0L@@@UEBAXV-$function@$$A6AXAEBV-$ComPtr@VBamoInputOb.c)
 *     ?DeliverToObserver@Mouse@InputTraceLogging@@SAXAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z @ 0x1801396AC (-DeliverToObserver@Mouse@InputTraceLogging@@SAXAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservat.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPointerInputObserverServer<11>::OnInputGenerated(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  _QWORD v5[8]; // [rsp+20h] [rbp-48h] BYREF
  void *v6; // [rsp+78h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a2 + 48) == 4 )
  {
    v4 = operator new(0x40uLL);
    v6 = v4;
    *v4 = 64;
    *((_QWORD *)v4 + 1) = *(_QWORD *)(a2 + 8);
    *((_BYTE *)v4 + 16) = *(_BYTE *)(a2 + 16) & 1;
    *((_QWORD *)v4 + 3) = *(_QWORD *)(a2 + 24);
    *((_QWORD *)v4 + 4) = *(_QWORD *)(a2 + 60);
    v4[10] = *(_DWORD *)(a2 + 32);
    *((_QWORD *)v4 + 6) = *(_QWORD *)(a2 + 40);
    v4[14] = *(_DWORD *)(a2 + 56);
    v6 = v4;
    InputTraceLogging::Mouse::DeliverToObserver((const struct InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET *)v4);
    v5[0] = &std::_Func_impl_no_alloc<_lambda_3e8e24ed727f6b874666958b1db22259_,void,Microsoft::WRL::ComPtr<BamoInputObserverClientProxy> const &>::`vftable';
    v5[1] = v4;
    v5[7] = v5;
    CBaseInputObserverServer<11>::DeliverToApps(a1, (__int64)v5);
    std::unique_ptr<InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET>::~unique_ptr<InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET>(&v6);
  }
}
