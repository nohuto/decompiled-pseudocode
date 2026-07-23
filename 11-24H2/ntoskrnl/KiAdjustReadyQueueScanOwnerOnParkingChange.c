/*
 * XREFs of KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x14032B704
 * Callers:
 *     KiSoftParkElectionUnparkProcessor @ 0x140329B04 (KiSoftParkElectionUnparkProcessor.c)
 *     KiParkCurrentProcessor @ 0x1403D7544 (KiParkCurrentProcessor.c)
 *     KiUnparkCurrentProcessor @ 0x1403D7B98 (KiUnparkCurrentProcessor.c)
 * Callees:
 *     KeIsForceParkingEnabled @ 0x14032B830 (KeIsForceParkingEnabled.c)
 */

void __fastcall KiAdjustReadyQueueScanOwnerOnParkingChange(__int64 a1, __int64 a2, char *a3)
{
  __int64 v3; // r9
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  char v13; // al

  v3 = a1;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 200);
  v6 = *(_QWORD *)(v3 + 36416);
  if ( !v6 )
    goto LABEL_5;
  v7 = *(_QWORD *)(v3 + 36424);
  v8 = v6 & *(_QWORD *)(a2 + 80);
  if ( v8 )
  {
    if ( v8 == v5 )
    {
      *(_DWORD *)(KiProcessorBlock[*((unsigned int *)qword_140F22998
                                   + 64 * (unsigned __int64)*(unsigned __int8 *)(v3 + 208)
                                   + *(unsigned __int8 *)(v7 + 709))]
                + 36432) = 0;
      v13 = *(_BYTE *)(v3 + 209);
      *(_DWORD *)(v3 + 36432) = 1;
      goto LABEL_15;
    }
    if ( !*(_DWORD *)(v3 + 36432) || (*(_QWORD *)(a2 + 80) & v5) != 0 )
      goto LABEL_5;
  }
  else
  {
    v4 = 1;
    if ( !(unsigned __int8)KeIsForceParkingEnabled(v5, a2) )
      goto LABEL_5;
    v11 = *(_QWORD *)(v9 + 104);
    if ( (v11 & v10) == 0 )
      goto LABEL_5;
    if ( !*(_DWORD *)(v3 + 36432) )
      goto LABEL_5;
    v8 = *(_QWORD *)(v3 + 36416) & ~v11;
    if ( !v8 )
      goto LABEL_5;
  }
  *(_DWORD *)(v3 + 36432) = 0;
  _BitScanReverse64(&v8, v8);
  v12 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + 64 * *(unsigned __int8 *)(v3 + 208) + (unsigned int)v8)];
  *(_DWORD *)(v12 + 36432) = 1;
  v13 = *(_BYTE *)(v12 + 209);
LABEL_15:
  *(_BYTE *)(v7 + 709) = v13;
LABEL_5:
  if ( a3 )
    *a3 = v4;
}
