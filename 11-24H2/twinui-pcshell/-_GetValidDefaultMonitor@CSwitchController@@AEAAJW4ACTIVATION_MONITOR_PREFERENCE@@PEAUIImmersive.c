/*
 * XREFs of ?_GetValidDefaultMonitor@CSwitchController@@AEAAJW4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveMonitor@@PEAPEAU3@PEA_N@Z @ 0x1801CB924
 * Callers:
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1801CB858 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonito_ea_1801CB858.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchController::_GetValidDefaultMonitor(__int64 a1, int a2, _BYTE *a3, _QWORD *a4, _BYTE *a5)
{
  _BYTE *v8; // r14
  unsigned int v9; // esi
  _BYTE *v10; // rbx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = a1;
  *a4 = 0LL;
  v8 = a5;
  *a5 = 0;
  v9 = -2147019873;
  v10 = a3;
  a5 = a3;
  if ( a3 )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( a3 )
  {
    LODWORD(v12) = 0;
    if ( (*(int (__fastcall **)(_BYTE *, __int64 *))(*(_QWORD *)a3 + 48LL))(a3, &v12) >= 0 )
    {
      if ( (_DWORD)v12 )
      {
        v10 = 0LL;
        *a4 = a3;
        v9 = 0;
        if ( a2 == 1 )
          *v8 = 1;
      }
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v10 + 16LL))(v10);
  return v9;
}
