/*
 * XREFs of ??4?$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@PEAVSystemButtonEventController@@@Z @ 0x18009AC88
 * Callers:
 *     ?RegisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x180075688 (-RegisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180028A8C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD))
{
  __int64 (__fastcall ***v4)(_QWORD); // rcx
  __int64 (__fastcall ***v6)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  if ( (__int64 (__fastcall ***)(_QWORD))*a1 != a2 )
  {
    v6 = a2;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v6);
    v4 = (__int64 (__fastcall ***)(_QWORD))*a1;
    *a1 = a2;
    if ( v4 )
      (*v4)[1](v4);
  }
  return a1;
}
