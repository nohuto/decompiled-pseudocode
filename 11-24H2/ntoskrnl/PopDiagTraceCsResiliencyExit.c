/*
 * XREFs of PopDiagTraceCsResiliencyExit @ 0x1402B5CBC
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140AB8394 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopBatteryGetEnergyDrainFromDischage @ 0x1402B5EFC (PopBatteryGetEnergyDrainFromDischage.c)
 *     PpmConvertTimeTo @ 0x140370A00 (PpmConvertTimeTo.c)
 */

void __fastcall PopDiagTraceCsResiliencyExit(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  KIRQL v12; // r14
  char v13; // r11
  __int64 v14; // r10
  int EnergyDrainFromDischage; // r9d
  int v16; // r8d
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  bool v20; // zf
  _QWORD *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int128 v24; // [rsp+20h] [rbp-18h]

  DWORD1(v24) = 0;
  v12 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  v13 = byte_140F0C388;
  xmmword_140F0C3C8 = *(_OWORD *)a8;
  xmmword_140F0C3D8 = *(_OWORD *)(a8 + 16);
  v14 = a5;
  qword_140F0C3E8 = *(_QWORD *)(a8 + 32);
  if ( a5 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage(
                                (unsigned int)dword_140F0C384,
                                *(unsigned int *)(a2 + 12));
    LODWORD(v24) = xmmword_140F0C390 | *(_DWORD *)a4;
    *((_QWORD *)&v24 + 1) = *((_QWORD *)&xmmword_140F0C390 + 1) - *(_QWORD *)(a4 + 8);
  }
  else
  {
    EnergyDrainFromDischage = 0;
    *((_QWORD *)&v24 + 1) = 0LL;
    LODWORD(v24) = xmmword_140F0C390;
  }
  v16 = (byte_140F0C382 != 0 ? 2 : 0) | 1;
  if ( !byte_140F0C381 )
    v16 = byte_140F0C382 != 0 ? 2 : 0;
  if ( !v13 || !a3 )
    v16 |= 4u;
  v17 = v16 | 8;
  if ( !byte_140F0C383 )
    v17 = v16;
  v18 = v17 | 0x10;
  if ( !byte_140F0C3B1 )
    v18 = v17;
  v19 = v18 | 0x20;
  v20 = byte_140F0C3B0 == 0;
  *(_DWORD *)(a1 + 68) = dword_140F0C3AC;
  if ( v20 )
    v19 = v18;
  *(_DWORD *)(a1 + 64) = dword_140F0C3A8;
  *(_DWORD *)(a1 + 56) = dword_140F0C3A0;
  *(_DWORD *)(a1 + 60) = dword_140F0C3A4;
  *(_QWORD *)(a1 + 72) = qword_140F0C3C0;
  *(_QWORD *)(a1 + 16) = a6;
  *(_DWORD *)a1 = v19;
  *(_QWORD *)(a1 + 24) = a7;
  *(_QWORD *)(a1 + 8) = v14;
  *(_DWORD *)(a1 + 32) = EnergyDrainFromDischage;
  *(_OWORD *)(a1 + 40) = v24;
  *(_QWORD *)(a1 + 120) = PpmConvertTimeTo(qword_140F0C400, 1000000LL);
  *(_QWORD *)(a1 + 128) = PpmConvertTimeTo(qword_140F0C408, 1000000LL);
  *(_QWORD *)(a1 + 136) = PpmConvertTimeTo(qword_140F0C410, 1000000LL);
  v21 = &unk_140F0C478;
  v22 = 11LL;
  *(_DWORD *)(a1 + 144) = dword_140F0C418;
  *(_OWORD *)(a1 + 80) = xmmword_140F0C3C8;
  *(_OWORD *)(a1 + 96) = xmmword_140F0C3D8;
  *(_QWORD *)(a1 + 112) = qword_140F0C3E8;
  v23 = a1 - (_QWORD)&unk_140F0C478;
  do
  {
    *(_QWORD *)((char *)v21 + v23 + 152) = PpmConvertTimeTo(*v21, 1000000LL);
    ++v21;
    --v22;
  }
  while ( v22 );
  PopCsResiliencyStats = 0;
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v12);
}
