/*
 * XREFs of PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x1404A4A08
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x140A66A3C (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x14049E4C8 (PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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

  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140F06090);
  v9 = byte_140F06110;
  v10 = v7;
  if ( byte_140F06110 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v8, 0);
  v11 = xmmword_140F06210;
  *a2 = qword_140F06118;
  *a3 = v11;
  a3[1] = xmmword_140F06220;
  a3[2] = xmmword_140F06230;
  a3[3] = xmmword_140F06240;
  a3[4] = xmmword_140F06250;
  a3[5] = xmmword_140F06260;
  a3[6] = xmmword_140F06270;
  *a4 = *(_OWORD *)qword_140F06130;
  a4[1] = *(_OWORD *)&qword_140F06130[2];
  a4[2] = *(_OWORD *)&qword_140F06130[4];
  a4[3] = *(_OWORD *)&qword_140F06130[6];
  a4[4] = *(_OWORD *)&qword_140F06130[8];
  a4[5] = *(_OWORD *)&qword_140F06130[10];
  a4[6] = *(_OWORD *)&qword_140F06130[12];
  v12 = a4 + 8;
  *(v12 - 1) = *(_OWORD *)&qword_140F06130[14];
  *v12 = *(_OWORD *)&qword_140F06130[16];
  v12[1] = *(_OWORD *)&qword_140F06130[18];
  v12[2] = *(_OWORD *)&qword_140F06130[20];
  v12[3] = *(_OWORD *)&qword_140F06130[22];
  v12[4] = *(_OWORD *)&qword_140F06130[24];
  v12[5] = *(_OWORD *)&qword_140F06130[26];
  qword_140F06118 = 0LL;
  memset_0(&xmmword_140F06210, 0, 0x70uLL);
  memset_0(qword_140F06130, 0, sizeof(qword_140F06130));
  if ( v9 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v13, 1);
  KeReleaseSpinLock(&qword_140F06090, v10);
}
