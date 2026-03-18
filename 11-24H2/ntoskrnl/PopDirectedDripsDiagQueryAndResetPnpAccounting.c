/*
 * XREFs of PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x1404A4F38
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x140A6967C (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x14049D5A8 (PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall PopDirectedDripsDiagQueryAndResetPnpAccounting(__int64 a1, _QWORD *a2, __int128 *a3, _OWORD *a4)
{
  KIRQL v7; // al
  __int64 v8; // rcx
  char v9; // di
  KIRQL v10; // si
  __int128 v11; // xmm0
  _OWORD *v12; // rbx
  __int64 v13; // rcx

  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140F06650);
  v9 = byte_140F066D0;
  v10 = v7;
  if ( byte_140F066D0 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v8, 0);
  v11 = xmmword_140F067D0;
  *a2 = qword_140F066D8;
  *a3 = v11;
  a3[1] = xmmword_140F067E0;
  a3[2] = xmmword_140F067F0;
  a3[3] = xmmword_140F06800;
  a3[4] = xmmword_140F06810;
  a3[5] = xmmword_140F06820;
  a3[6] = xmmword_140F06830;
  *a4 = *(_OWORD *)qword_140F066F0;
  a4[1] = *(_OWORD *)&qword_140F066F0[2];
  a4[2] = *(_OWORD *)&qword_140F066F0[4];
  a4[3] = *(_OWORD *)&qword_140F066F0[6];
  a4[4] = *(_OWORD *)&qword_140F066F0[8];
  a4[5] = *(_OWORD *)&qword_140F066F0[10];
  a4[6] = *(_OWORD *)&qword_140F066F0[12];
  v12 = a4 + 8;
  *(v12 - 1) = *(_OWORD *)&qword_140F066F0[14];
  *v12 = *(_OWORD *)&qword_140F066F0[16];
  v12[1] = *(_OWORD *)&qword_140F066F0[18];
  v12[2] = *(_OWORD *)&qword_140F066F0[20];
  v12[3] = *(_OWORD *)&qword_140F066F0[22];
  v12[4] = *(_OWORD *)&qword_140F066F0[24];
  v12[5] = *(_OWORD *)&qword_140F066F0[26];
  qword_140F066D8 = 0LL;
  memset_0(&xmmword_140F067D0, 0, 0x70uLL);
  memset_0(qword_140F066F0, 0, sizeof(qword_140F066F0));
  if ( v9 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v13, 1);
  KeReleaseSpinLock(&qword_140F06650, v10);
}
