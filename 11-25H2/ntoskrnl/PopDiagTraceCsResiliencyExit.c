/*
 * XREFs of PopDiagTraceCsResiliencyExit @ 0x140486CFC
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140AB922C (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PpmConvertTimeTo @ 0x1403B1DAC (PpmConvertTimeTo.c)
 *     PopBatteryGetEnergyDrainFromDischage @ 0x140486F3C (PopBatteryGetEnergyDrainFromDischage.c)
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
  unsigned __int64 *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int128 v24; // [rsp+20h] [rbp-18h]

  DWORD1(v24) = 0;
  v12 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  v13 = byte_140F0A6E8;
  xmmword_140F0A728 = *(_OWORD *)a8;
  xmmword_140F0A738 = *(_OWORD *)(a8 + 16);
  v14 = a5;
  qword_140F0A748 = *(_QWORD *)(a8 + 32);
  if ( a5 )
  {
    EnergyDrainFromDischage = PopBatteryGetEnergyDrainFromDischage(
                                (unsigned int)dword_140F0A6E4,
                                *(unsigned int *)(a2 + 12));
    LODWORD(v24) = xmmword_140F0A6F0 | *(_DWORD *)a4;
    *((_QWORD *)&v24 + 1) = *((_QWORD *)&xmmword_140F0A6F0 + 1) - *(_QWORD *)(a4 + 8);
  }
  else
  {
    EnergyDrainFromDischage = 0;
    *((_QWORD *)&v24 + 1) = 0LL;
    LODWORD(v24) = xmmword_140F0A6F0;
  }
  v16 = (byte_140F0A6E2 != 0 ? 2 : 0) | 1;
  if ( !byte_140F0A6E1 )
    v16 = byte_140F0A6E2 != 0 ? 2 : 0;
  if ( !v13 || !a3 )
    v16 |= 4u;
  v17 = v16 | 8;
  if ( !byte_140F0A6E3 )
    v17 = v16;
  v18 = v17 | 0x10;
  if ( !byte_140F0A715 )
    v18 = v17;
  v19 = v18 | 0x20;
  v20 = byte_140F0A714 == 0;
  *(_DWORD *)(a1 + 68) = dword_140F0A710;
  if ( v20 )
    v19 = v18;
  *(_DWORD *)(a1 + 64) = dword_140F0A70C;
  *(_DWORD *)(a1 + 56) = dword_140F0A700;
  *(_DWORD *)(a1 + 60) = dword_140F0A708;
  *(_QWORD *)(a1 + 72) = qword_140F0A720;
  *(_QWORD *)(a1 + 16) = a6;
  *(_DWORD *)a1 = v19;
  *(_QWORD *)(a1 + 24) = a7;
  *(_QWORD *)(a1 + 8) = v14;
  *(_DWORD *)(a1 + 32) = EnergyDrainFromDischage;
  *(_OWORD *)(a1 + 40) = v24;
  *(_QWORD *)(a1 + 120) = PpmConvertTimeTo(qword_140F0A760, 0xF4240uLL);
  *(_QWORD *)(a1 + 128) = PpmConvertTimeTo(qword_140F0A768, 0xF4240uLL);
  *(_QWORD *)(a1 + 136) = PpmConvertTimeTo(qword_140F0A770, 0xF4240uLL);
  v21 = (unsigned __int64 *)&unk_140F0A7D8;
  v22 = 11LL;
  *(_DWORD *)(a1 + 144) = dword_140F0A778;
  *(_OWORD *)(a1 + 80) = xmmword_140F0A728;
  *(_OWORD *)(a1 + 96) = xmmword_140F0A738;
  *(_QWORD *)(a1 + 112) = qword_140F0A748;
  v23 = a1 - (_QWORD)&unk_140F0A7D8;
  do
  {
    *(unsigned __int64 *)((char *)v21 + v23 + 152) = PpmConvertTimeTo(*v21, 0xF4240uLL);
    ++v21;
    --v22;
  }
  while ( v22 );
  PopCsResiliencyStats[0] = 0;
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v12);
}
