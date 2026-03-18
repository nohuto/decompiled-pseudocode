/*
 * XREFs of KeQueryCpuSetInformation @ 0x1407306BC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlBeginReadTickLock @ 0x140274730 (RtlBeginReadTickLock.c)
 *     RtlTryEndReadTickLock @ 0x140420D20 (RtlTryEndReadTickLock.c)
 *     KiGetCpuSetData @ 0x1404B6CFC (KiGetCpuSetData.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KeQueryCpuSetInformation(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // r14
  _QWORD *v6; // rbx
  unsigned int v7; // r15d
  unsigned int v8; // ecx
  _DWORD *v9; // r8
  unsigned int v10; // edx
  __int64 v12; // r9
  unsigned int v13; // r10d
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  int v16; // r10d
  __int64 v17; // r11
  __int64 CpuSetData; // r13
  int v19; // r8d
  char v20; // dl
  __int64 v21; // r8
  char v22; // cl
  char v23; // dl
  __int64 TickLock; // [rsp+40h] [rbp-58h]

  v5 = a1;
  if ( a4 )
  {
    v6 = (_QWORD *)(a4 + 1736);
    if ( (*(_DWORD *)(a4 + 1532) & 0x80u) != 0 )
      v6 = (_QWORD *)*v6;
  }
  else
  {
    v6 = 0LL;
  }
  do
  {
    TickLock = RtlBeginReadTickLock(&KiCpuSetSequence);
    v7 = KiTotalCpuSetCount;
    v8 = 32 * KiTotalCpuSetCount;
    *v9 = 32 * KiTotalCpuSetCount;
    if ( v10 < v8 )
      return 3221225507LL;
    memset_0(v5, 0, v8);
    LODWORD(v12) = 0;
    v13 = 0;
    v14 = KiGroupBlock[0];
    do
    {
      if ( v14 )
      {
        _BitScanForward64(&v15, v14);
        v14 &= ~(1LL << v15);
        CpuSetData = KiGetCpuSetData(v12, v15);
        *(_DWORD *)v17 = 32;
        *(_DWORD *)(v17 + 4) = 0;
        *(_DWORD *)(v17 + 8) = v19 | ((_DWORD)v12 << 16) | 0x100;
        *(_WORD *)(v17 + 12) = v12;
        *(_BYTE *)(v17 + 14) = *(_BYTE *)(CpuSetData + 1);
        *(_BYTE *)(v17 + 15) = *(_BYTE *)(CpuSetData + 2);
        *(_BYTE *)(v17 + 16) = *(_BYTE *)(CpuSetData + 3);
        *(_BYTE *)(v17 + 17) = *(_BYTE *)(CpuSetData + 4);
        *(_BYTE *)(v17 + 18) = *(_BYTE *)(CpuSetData + 5);
        *(_BYTE *)(v17 + 20) = *(_BYTE *)(CpuSetData + 6);
        v20 = 0;
        v21 = 1LL << v19;
        v22 = 0;
        if ( (v21 & KiNonParkedCpuSets[v12]) == 0 )
        {
          v20 = 1;
          *(_BYTE *)(v17 + 19) |= 1u;
          v22 = 1;
        }
        if ( (v21 & KiSystemAllowedCpuSets[2 * (unsigned int)v12]) != 0 )
        {
          if ( !a4 || (*(_DWORD *)(a4 + 496) & 0x8000000) == 0 )
            goto LABEL_21;
          v23 = v22;
        }
        else
        {
          v23 = v22;
          if ( v6 )
          {
            if ( (v21 & v6[v12]) != 0 )
              v23 = v22 | 4;
          }
        }
        v20 = v23 | 0xA;
LABEL_21:
        *(_BYTE *)(v17 + 19) = v20;
        *(_QWORD *)(v17 + 24) = *(_QWORD *)(CpuSetData + 8);
        v13 = v16 + 1;
        v5 = a1;
        continue;
      }
      LODWORD(v12) = v12 + 1;
      if ( (unsigned int)v12 >= (unsigned __int16)KiActiveGroups )
        break;
      v14 = KiGroupBlock[4 * (unsigned int)v12];
    }
    while ( v13 < v7 );
  }
  while ( !RtlTryEndReadTickLock(&KiCpuSetSequence, TickLock) );
  return 0LL;
}
