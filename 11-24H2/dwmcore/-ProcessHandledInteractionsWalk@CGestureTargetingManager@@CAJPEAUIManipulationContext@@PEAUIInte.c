/*
 * XREFs of ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x180191380
 * Callers:
 *     ?ProcessHandledInteractionsForNonHandlers@CGestureTargetingManager@@SAJPEAUIManipulationContext@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x180191320 (-ProcessHandledInteractionsForNonHandlers@CGestureTargetingManager@@SAJPEAUIManipulationContext@.c)
 *     ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x180191380 (-ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInte.c)
 * Callees:
 *     ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x180191380 (-ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInte.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessHandledInteractionsWalk(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  int v5; // ebx
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, _QWORD, _OWORD *, _QWORD); // r10
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rax
  __int64 i; // rax
  __int64 v22; // rsi
  int v24; // eax
  _OWORD v25[11]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-28h]

  v5 = 0;
  if ( a2 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _OWORD *, _QWORD))(*(_QWORD *)a2 + 184LL);
    v11 = *(_OWORD *)(a5 + 16);
    v25[0] = *(_OWORD *)a5;
    v12 = *(_OWORD *)(a5 + 32);
    v25[1] = v11;
    v13 = *(_OWORD *)(a5 + 48);
    v25[2] = v12;
    v14 = *(_OWORD *)(a5 + 64);
    v25[3] = v13;
    v15 = *(_OWORD *)(a5 + 80);
    v25[4] = v14;
    v16 = *(_OWORD *)(a5 + 96);
    v25[5] = v15;
    v17 = *(_OWORD *)(a5 + 128);
    v25[6] = v16;
    v25[7] = *(_OWORD *)(a5 + 112);
    v18 = *(_OWORD *)(a5 + 144);
    v25[8] = v17;
    v19 = *(_OWORD *)(a5 + 160);
    v20 = *(_QWORD *)(a5 + 176);
    v25[9] = v18;
    v25[10] = v19;
    v26 = v20;
    v5 = v10(a2, a3, 0LL, a4, v25, 0LL);
    for ( i = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a2);
          ;
          i = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v22) )
    {
      v22 = i;
      if ( !i )
        break;
      v24 = CGestureTargetingManager::ProcessHandledInteractionsWalk(a1, i, a3, a4, a5);
      if ( v5 >= 0 )
        v5 = v24;
    }
  }
  return (unsigned int)v5;
}
