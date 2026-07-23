/*
 * XREFs of PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x14049FCC8
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x140A62A2C (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x1404983A8 (PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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

  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140F06950);
  v9 = byte_140F069D0;
  v10 = v7;
  if ( byte_140F069D0 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v8, 0);
  v11 = xmmword_140F06AD0;
  *a2 = qword_140F069D8;
  *a3 = v11;
  a3[1] = xmmword_140F06AE0;
  a3[2] = xmmword_140F06AF0;
  a3[3] = xmmword_140F06B00;
  a3[4] = xmmword_140F06B10;
  a3[5] = xmmword_140F06B20;
  a3[6] = xmmword_140F06B30;
  *a4 = *(_OWORD *)qword_140F069F0;
  a4[1] = *(_OWORD *)&qword_140F069F0[2];
  a4[2] = *(_OWORD *)&qword_140F069F0[4];
  a4[3] = *(_OWORD *)&qword_140F069F0[6];
  a4[4] = *(_OWORD *)&qword_140F069F0[8];
  a4[5] = *(_OWORD *)&qword_140F069F0[10];
  a4[6] = *(_OWORD *)&qword_140F069F0[12];
  v12 = a4 + 8;
  *(v12 - 1) = *(_OWORD *)&qword_140F069F0[14];
  *v12 = *(_OWORD *)&qword_140F069F0[16];
  v12[1] = *(_OWORD *)&qword_140F069F0[18];
  v12[2] = *(_OWORD *)&qword_140F069F0[20];
  v12[3] = *(_OWORD *)&qword_140F069F0[22];
  v12[4] = *(_OWORD *)&qword_140F069F0[24];
  v12[5] = *(_OWORD *)&qword_140F069F0[26];
  qword_140F069D8 = 0LL;
  memset_0(&xmmword_140F06AD0, 0, 0x70uLL);
  memset_0(qword_140F069F0, 0, sizeof(qword_140F069F0));
  if ( v9 )
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v13, 1);
  KeReleaseSpinLock(&qword_140F06950, v10);
}
