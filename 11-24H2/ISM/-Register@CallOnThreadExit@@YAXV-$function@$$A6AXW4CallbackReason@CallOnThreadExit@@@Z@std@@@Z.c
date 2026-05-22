/*
 * XREFs of ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@@Z @ 0x1801311E4
 * Callers:
 *     ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x18008DCF0 (-GetForCurrentThread@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClie.c)
 * Callees:
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@PEA_K@Z @ 0x180131240 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@PEA_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CallOnThreadExit::Register(__int64 a1)
{
  __int64 (__fastcall ***v2)(_QWORD, _BYTE *); // rcx
  __int64 v3; // rdx
  _BYTE v5[56]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+58h] [rbp-10h]
  _BYTE *v7; // [rsp+78h] [rbp+10h] BYREF

  v7 = v5;
  v6 = 0LL;
  v2 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a1 + 56);
  if ( v2 )
    v6 = (**v2)(v2, v5);
  CallOnThreadExit::Register(v5, &v7);
  return std::_Func_class<void,>::~_Func_class<void,>(a1, v3);
}
