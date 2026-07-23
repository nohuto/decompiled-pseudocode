/*
 * XREFs of PpmParkSetLpiCap @ 0x1404C8A78
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14044C05C (PpmCheckCustomRun.c)
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 *     PpmCheckReInit @ 0x140A6B620 (PpmCheckReInit.c)
 */

__int64 __fastcall PpmParkSetLpiCap(int a1, __int64 a2, unsigned int *a3)
{
  int v4; // edi
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  __int64 v9; // r9
  unsigned __int16 *v10; // r8
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // r11
  unsigned __int16 *v15; // r9
  int v16; // eax
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx

  v4 = a2;
  if ( KeGetCurrentPrcb()->PowerState.Hypervisor >= ProcHypervisorPower && (HvlEnlightenments & 0x40000) == 0 )
    return 3221225473LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, (unsigned int)a3);
  v7 = (unsigned __int16)PpmParkGranularity
     + a1
     - 1
     - ((unsigned int)(unsigned __int16)PpmParkGranularity + a1 - 1) % (unsigned __int16)PpmParkGranularity;
  if ( v7 )
  {
    v8 = 0;
    if ( !PpmParkNumNodes )
      goto LABEL_11;
    v9 = (unsigned int)PpmParkNumNodes;
    v10 = (unsigned __int16 *)(PpmParkNodes + 10);
    do
    {
      v11 = *v10;
      if ( (unsigned __int16)v11 > (unsigned __int16)PpmParkGranularity )
        v8 += v11 - (unsigned __int16)PpmParkGranularity;
      v10 += 648;
      --v9;
    }
    while ( v9 );
    if ( v7 > v8 )
LABEL_11:
      v7 = v8;
  }
  v12 = (unsigned __int16)PpmParkGranularity
      + v4
      - 1
      - ((unsigned int)(unsigned __int16)PpmParkGranularity + v4 - 1) % (unsigned __int16)PpmParkGranularity;
  if ( v12 )
  {
    v13 = 0;
    if ( !PpmParkNumNodes )
      goto LABEL_19;
    v14 = (unsigned int)PpmParkNumNodes;
    v15 = (unsigned __int16 *)(PpmParkNodes + 10);
    do
    {
      v16 = *v15;
      if ( (unsigned __int16)v16 > (unsigned __int16)PpmParkGranularity )
        v13 += v16 - (unsigned __int16)PpmParkGranularity;
      v15 += 648;
      --v14;
    }
    while ( v14 );
    if ( v12 > v13 )
LABEL_19:
      v12 = v13;
  }
  v17 = 0;
  if ( v7 != PpmParkLpiCap )
  {
    PpmParkLpiCap = v7;
    v17 = 1;
    PpmParkLpiCapChanged = 1;
  }
  if ( v12 == PpmParkThermalCap )
  {
    if ( !v17 )
    {
      PpmReleaseLock(&PpmPerfPolicyLock);
      goto LABEL_27;
    }
  }
  else
  {
    PpmParkThermalCap = v12;
  }
  PpmParkApplyPolicy();
  PpmCheckReInit(v19, v18);
  PpmCheckCustomRun(4LL);
LABEL_27:
  *a3 = v7;
  return 0LL;
}
