/*
 * XREFs of ?OnGazeUpdate@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800C08EC
 * Callers:
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180069474 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 * Callees:
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x180110248 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x180110614 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGestureHandler::OnGazeUpdate(__int64 a1, __int64 *a2)
{
  int v4; // ecx
  int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // eax

  if ( !*(_BYTE *)(a1 + 972) )
  {
    v4 = *(_DWORD *)(a1 + 168) - 1;
    if ( v4 )
    {
      v5 = v4 - 15;
      if ( !v5 || v5 == 16 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 88LL))(*a2);
        ManipulationInjector::InjectZoom((ManipulationInjector *)(a1 + 80), *(float *)(a1 + 968), v6);
      }
    }
    else if ( *(float *)(a1 + 960) != 0.0 || *(float *)(a1 + 964) != 0.0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 88LL))(*a2);
      ManipulationInjector::InjectPan((ManipulationInjector *)(a1 + 80), *(float *)(a1 + 960), *(float *)(a1 + 964), v7);
      *(float *)(a1 + 952) = fmaxf(*(float *)(a1 + 960), *(float *)(a1 + 964)) + *(float *)(a1 + 952);
    }
  }
  *(_BYTE *)(a1 + 972) = 0;
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2);
}
