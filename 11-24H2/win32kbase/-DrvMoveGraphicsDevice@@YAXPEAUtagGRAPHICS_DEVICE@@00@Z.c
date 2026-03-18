/*
 * XREFs of ?DrvMoveGraphicsDevice@@YAXPEAUtagGRAPHICS_DEVICE@@00@Z @ 0x14013D0CC
 * Callers:
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x14013CFD4 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvMoveGraphicsDevice(
        struct tagGRAPHICS_DEVICE *a1,
        struct tagGRAPHICS_DEVICE *a2,
        struct tagGRAPHICS_DEVICE *a3)
{
  __int64 v6; // rcx

  if ( a1 && a2 && a2 != a3 )
  {
    *((_QWORD *)a2 + 16) = *((_QWORD *)a1 + 16);
    v6 = *(_QWORD *)(W32GetSessionState(a1) + 88);
    if ( a3 )
    {
      *((_QWORD *)a1 + 16) = *((_QWORD *)a3 + 16);
      *((_QWORD *)a3 + 16) = a1;
    }
    else
    {
      *((_QWORD *)a1 + 16) = *(_QWORD *)(v6 + 1096);
      *(_QWORD *)(v6 + 1096) = a1;
    }
    if ( a1 == *(struct tagGRAPHICS_DEVICE **)(v6 + 1104) )
      *(_QWORD *)(v6 + 1104) = a2;
  }
}
