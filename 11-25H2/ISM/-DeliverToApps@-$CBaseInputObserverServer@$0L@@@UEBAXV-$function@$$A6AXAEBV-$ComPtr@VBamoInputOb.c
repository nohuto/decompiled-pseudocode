/*
 * XREFs of ?DeliverToApps@?$CBaseInputObserverServer@$0L@@@UEBAXV?$function@$$A6AXAEBV?$ComPtr@VBamoInputObserverClientProxy@@@WRL@Microsoft@@@Z@std@@@Z @ 0x180137420
 * Callers:
 *     ?OnInputGenerated@?$CPointerInputObserverServer@$0L@@@UEBAXAEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@@Z @ 0x1801375E0 (-OnInputGenerated@-$CPointerInputObserverServer@$0L@@@UEBAXAEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800284CC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CBaseInputObserverServer<11>::DeliverToApps(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  __int64 v5; // rcx
  __int64 (__fastcall ***v6)(_QWORD); // rcx
  __int64 v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD); // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h]

  v9 = a2;
  v2 = a2;
  v3 = *(_QWORD **)(a1 + 168);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v8 = (__int64 (__fastcall ***)(_QWORD))i[3];
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v8);
    v5 = *(_QWORD *)(v2 + 56);
    if ( !v5 )
    {
      std::_Xbad_function_call();
      break;
    }
    (*(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD)))(*(_QWORD *)v5 + 16LL))(v5, &v8);
    v6 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*v6)[1](v6);
    }
  }
  v7 = *(_QWORD *)(v2 + 56);
  if ( v7 )
  {
    LOBYTE(a2) = v7 != v2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
}
