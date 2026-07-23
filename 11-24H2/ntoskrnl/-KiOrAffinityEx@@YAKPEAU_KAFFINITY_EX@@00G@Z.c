/*
 * XREFs of ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C
 * Callers:
 *     KiComputeCpuSetAffinity @ 0x1402A9B00 (KiComputeCpuSetAffinity.c)
 *     KiUpdateTime @ 0x1402AA2B0 (KiUpdateTime.c)
 *     KiForwardTick @ 0x1402AC02C (KiForwardTick.c)
 *     PpmPerfApplyProcessorStates @ 0x1402AF070 (PpmPerfApplyProcessorStates.c)
 *     PpmParkSteerInterrupts @ 0x1402B0A40 (PpmParkSteerInterrupts.c)
 *     KeOrAffinityEx2 @ 0x14032DDD0 (KeOrAffinityEx2.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140484B24 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmParkComputeDiff @ 0x1404E5A28 (PpmParkComputeDiff.c)
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B273C (KeUpdateProcessorRestrictionsEx.c)
 *     KeOrAffinityEx @ 0x1405B5790 (KeOrAffinityEx.c)
 *     PpmHeteroComputeMultiClassUnparkCountEx @ 0x1405DD850 (PpmHeteroComputeMultiClassUnparkCountEx.c)
 *     PpmParkApplyPolicyEx @ 0x1405DE964 (PpmParkApplyPolicyEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     PpmEventTraceParkNodeRundownEx @ 0x140765A0C (PpmEventTraceParkNodeRundownEx.c)
 *     PpmUpdateProcessorPolicy @ 0x140A51F98 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x140AC506C (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOrAffinityEx(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        struct _KAFFINITY_EX *a3,
        unsigned __int16 a4)
{
  unsigned __int16 Count; // r10
  unsigned __int16 v6; // ax
  unsigned __int16 v8; // r11
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // dx
  struct _KAFFINITY_EX *v11; // rbp
  unsigned int v12; // r9d
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // dx
  signed __int64 v15; // rsi
  $B38C3B1372D6E954799962D5DD404846 *v16; // r10
  signed __int64 v17; // rbx
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v22; // rcx
  unsigned __int16 v23; // ax
  __int64 v24; // r10
  unsigned __int64 v25; // rax

  Count = a1->Count;
  v6 = a2->Count;
  v8 = a4;
  v9 = v6;
  a3->Size = a4;
  if ( Count >= v6 )
    v9 = Count;
  v10 = Count;
  if ( Count >= v6 )
    v10 = v6;
  a3->Count = v9;
  v11 = a2;
  if ( Count >= v6 )
    v11 = a1;
  v12 = 0;
  if ( v9 > v8 )
    a3->Count = v8;
  v13 = v8;
  if ( v10 <= v8 )
    v13 = v10;
  v14 = 0;
  if ( v9 <= v8 )
    v8 = v9;
  if ( v13 )
  {
    v15 = (char *)a1 - (char *)a2;
    v16 = &a2->8;
    v14 = v13;
    v17 = (char *)a3 - (char *)a2;
    v18 = v13;
    do
    {
      v19 = (v16->Bitmap[0] | *(unsigned __int64 *)((char *)v16->Bitmap + v15)) == 0;
      *(unsigned __int64 *)((char *)v16->Bitmap + v17) = v16->Bitmap[0] | *(unsigned __int64 *)((char *)v16->Bitmap + v15);
      v16 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v16 + 8);
      if ( !v19 )
        v12 = 1;
      --v18;
    }
    while ( v18 );
  }
  if ( v14 < v8 )
  {
    v22 = v14;
    v23 = v8 - v14;
    v14 = v8;
    v24 = v23;
    do
    {
      v25 = v11->Bitmap[v22];
      a3->Bitmap[v22++] = v25;
      if ( v25 )
        v12 = 1;
      --v24;
    }
    while ( v24 );
  }
  a3->Reserved = 0;
  while ( v14 < a3->Size )
  {
    v20 = v14++;
    a3->Bitmap[v20] = 0LL;
  }
  return v12;
}
