/*
 * XREFs of ?HandleRotationOrResolutionChange@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801F0E40
 * Callers:
 *     s_HandleRotationOrResolutionChange @ 0x1802CFBA0 (s_HandleRotationOrResolutionChange.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall ImmersiveMonitorHelper::HandleRotationOrResolutionChange(__int64 a1, struct IUnknown *a2, char a3)
{
  struct IUnknown v5; // rax
  char v6; // bl
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 5) == 0 )
    return 0;
  v5.lpVtbl = a2->lpVtbl;
  v6 = 0;
  v10 = 0;
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v5.lpVtbl[2].QueryInterface)(a2, &v10);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B4,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v7);
  }
  else if ( v10 )
  {
    if ( SHIsSameObject(*(struct IUnknown **)(a1 + 64), a2) )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 168LL))(*(_QWORD *)(a1 + 80));
      return 1;
    }
  }
  return v6;
}
