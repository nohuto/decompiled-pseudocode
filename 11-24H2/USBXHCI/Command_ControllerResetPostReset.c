/*
 * XREFs of Command_ControllerResetPostReset @ 0x14003CFA4
 * Callers:
 *     Controller_InternalReset @ 0x1400406EC (Controller_InternalReset.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x14000BF40 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000C970 (DynamicLock_Release.c)
 *     Command_Initialize @ 0x140019F40 (Command_Initialize.c)
 *     Command_ProcessCrbCompletion @ 0x14002EC48 (Command_ProcessCrbCompletion.c)
 *     WPP_RECORDER_SF_qL @ 0x14003E044 (WPP_RECORDER_SF_qL.c)
 *     Etw_CommandCompleteError @ 0x14004E65C (Etw_CommandCompleteError.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

char __fastcall Command_ControllerResetPostReset(__int64 a1)
{
  __int64 v2; // rcx
  __int64 **v3; // rcx
  __int64 *v4; // rax
  __int64 *v5; // rdx
  __int64 *v6; // rdx
  __int64 **v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // rdx
  __int64 *v10; // rdx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 112);
  v18 = &v17;
  v17 = (__int64)&v17;
  DynamicLock_Acquire(v2);
  v3 = (__int64 **)(a1 + 80);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    if ( (__int64 **)v4[1] != v3
      || (v5 = (__int64 *)*v4, *(__int64 **)(*v4 + 8) != v4)
      || (*v3 = v5, v5[1] = (__int64)v3, v6 = v18, (__int64 *)*v18 != &v17) )
    {
LABEL_20:
      __fastfail(3u);
    }
    v4[1] = (__int64)v18;
    *v4 = (__int64)&v17;
    *v6 = (__int64)v4;
    v18 = v4;
  }
  v7 = (__int64 **)(a1 + 96);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (__int64 *)v7 )
      break;
    if ( (__int64 **)v8[1] != v7 )
      goto LABEL_20;
    v9 = (__int64 *)*v8;
    if ( *(__int64 **)(*v8 + 8) != v8 )
      goto LABEL_20;
    *v7 = v9;
    v9[1] = (__int64)v7;
    v10 = v18;
    if ( (__int64 *)*v18 != &v17 )
      goto LABEL_20;
    v8[1] = (__int64)v18;
    *v8 = (__int64)&v17;
    *v10 = (__int64)v8;
    v18 = v8;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 24),
    0LL);
  v11 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 36) = 4;
  DynamicLock_Release(v11);
  while ( 1 )
  {
    v13 = v17;
    if ( (__int64 *)v17 == &v17 )
      return Command_Initialize(a1);
    if ( *(__int64 **)(v17 + 8) != &v17 )
      goto LABEL_20;
    v14 = *(_QWORD *)v17;
    if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 )
      goto LABEL_20;
    v15 = &v17;
    v17 = *(_QWORD *)v17;
    *(_QWORD *)(v14 + 8) = &v17;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(a1 + 16),
        v12,
        7,
        59,
        (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
        v13,
        (unsigned __int8)HIBYTE(*(_WORD *)(v13 + 36)) >> 2);
    }
    Etw_CommandCompleteError(v15, a1, v13, 3LL);
    Command_ProcessCrbCompletion(v13);
  }
}
