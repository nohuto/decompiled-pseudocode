/*
 * XREFs of ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1403ADE18
 * Callers:
 *     PpmIdleUpdateSystemLatencyLimit @ 0x140203EC4 (PpmIdleUpdateSystemLatencyLimit.c)
 *     KeSubtractAffinityEx2 @ 0x140269E70 (KeSubtractAffinityEx2.c)
 *     KiIpiSendRequest @ 0x14032D550 (KiIpiSendRequest.c)
 *     PpmParkReportUnparkedCores @ 0x1403AD800 (PpmParkReportUnparkedCores.c)
 *     PpmParkReportParkedCores @ 0x1403AD8E0 (PpmParkReportParkedCores.c)
 *     PpmParkSteerInterrupts @ 0x1403AE8E0 (PpmParkSteerInterrupts.c)
 *     PpmCheckContinueExecution @ 0x1403B099C (PpmCheckContinueExecution.c)
 *     PpmIdleSelectStates @ 0x1404B1F28 (PpmIdleSelectStates.c)
 *     KeSubtractAffinityEx @ 0x1405B42F0 (KeSubtractAffinityEx.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D23A8 (PpmHeteroHgsDetectContainmentPresence.c)
 *     RtlUpdateSwapReference @ 0x140A308D0 (RtlUpdateSwapReference.c)
 *     PpmPostProcessMediaBuffering @ 0x140A3F0D8 (PpmPostProcessMediaBuffering.c)
 *     PpmCheckInitProcessors @ 0x140AC1BF8 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSubtractAffinityEx(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        struct _KAFFINITY_EX *a3,
        unsigned __int16 a4)
{
  unsigned __int16 Count; // ax
  unsigned __int16 v6; // r11
  unsigned __int16 v8; // ax
  unsigned int v9; // r10d
  unsigned __int16 v10; // dx
  $B38C3B1372D6E954799962D5DD404846 *v11; // rcx
  __int64 v12; // rsi
  signed __int64 v13; // rdi
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx

  Count = a2->Count;
  v6 = a1->Count;
  a3->Size = a4;
  if ( v6 >= Count )
    v6 = Count;
  v8 = a1->Count;
  a3->Count = a1->Count;
  v9 = 0;
  if ( v8 > a4 )
    a3->Count = a4;
  v10 = 0;
  if ( v6 > a4 )
    v6 = a4;
  if ( v6 )
  {
    v11 = &a1->8;
    v12 = v6;
    v13 = (char *)a2 - (char *)a1;
    v10 = v6;
    do
    {
      v14 = (v11->Bitmap[0] & ~*(unsigned __int64 *)((char *)v11->Bitmap + v13)) == 0;
      *(unsigned __int64 *)((char *)v11->Bitmap + (char *)a3 - (char *)a1) = v11->Bitmap[0] & ~*(unsigned __int64 *)((char *)v11->Bitmap + v13);
      v11 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v11 + 8);
      if ( !v14 )
        v9 = 1;
      --v12;
    }
    while ( v12 );
  }
  while ( v10 < a3->Count )
  {
    v15 = a1->Bitmap[v10];
    a3->Bitmap[v10] = v15;
    if ( v15 )
      v9 = 1;
    ++v10;
  }
  a3->Reserved = 0;
  while ( v10 < a3->Size )
  {
    v16 = v10++;
    a3->Bitmap[v16] = 0LL;
  }
  return v9;
}
