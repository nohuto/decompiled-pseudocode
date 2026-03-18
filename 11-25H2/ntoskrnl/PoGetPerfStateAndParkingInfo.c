/*
 * XREFs of PoGetPerfStateAndParkingInfo @ 0x1403B20E4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     ExpQueryProcessorInformationCounters @ 0x1409FC018 (ExpQueryProcessorInformationCounters.c)
 * Callees:
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PpmPerfGetCurrentState @ 0x1403B2310 (PpmPerfGetCurrentState.c)
 *     PopExecuteOnTargetProcessors @ 0x1403B2EE8 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x1403B30F0 (KeGetProcessorIndexFromNumber.c)
 *     PpmGetThroughputInfoCallback @ 0x140460040 (PpmGetThroughputInfoCallback.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall PoGetPerfStateAndParkingInfo(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3, _QWORD *a4)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 Prcb; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // r12d
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v17; // rdx
  int v18; // esi
  unsigned int v19; // ecx
  unsigned int v20; // r10d
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  PPROCESSOR_NUMBER ProcNumbera; // [rsp+38h] [rbp-C8h]
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v28[33]; // [rsp+48h] [rbp-B8h] BYREF

  ProcNumbera = ProcNumber;
  memset_0(v28, 0, 0x100uLL);
  v25 = 0;
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  Prcb = KeGetPrcb(ProcessorIndexFromNumber);
  v10 = *(_DWORD **)(Prcb + 35248);
  v11 = Prcb;
  PpmPerfGetCurrentState(Prcb, a2 + 4, (unsigned int)&v25, a2 + 8, a2, a2 + 24);
  if ( v10 )
  {
    v13 = v10[112];
    *(_DWORD *)(a2 + 12) = v10[136];
    v14 = v10[135];
    v12 = (unsigned int)v10[134];
    if ( (unsigned int)v12 >= v14 )
      v12 = v14;
    *(_DWORD *)(a2 + 16) = v12;
    if ( v10[113] != v10[115] )
      *(_BYTE *)(a2 + 28) = 1;
    if ( (unsigned int)v12 < 0x64 )
      *(_DWORD *)(a2 + 24) |= 1u;
    LODWORD(v15) = (unsigned int)(100 * v25) / v10[112];
  }
  else
  {
    v13 = *(_DWORD *)(v11 + 68);
    LODWORD(v15) = 100;
  }
  *(_DWORD *)(a2 + 20) = v15;
  LOBYTE(v15) = *(_BYTE *)(v11 + 35340);
  *(_BYTE *)(a2 + 29) = v15;
  if ( a4 )
  {
    v15 = *(_QWORD *)(v11 + 35344);
    *a4 = v15;
  }
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v12);
    }
    LODWORD(v15) = PpmGetThroughputInfoCallback(v11, a3, v13);
    v18 = v15;
    if ( KiIrqlFlags )
    {
      LOBYTE(v17) = CurrentIrql;
      LOBYTE(v15) = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
    }
    __writecr8(CurrentIrql);
    if ( v18 < 0 )
    {
      v27 = 2097153LL;
      memset_0(v28, 0, 0x100uLL);
      v19 = *((_DWORD *)KiGlobalState + KeGetProcessorIndexFromNumber(ProcNumbera));
      v20 = v19 & 0x3F;
      v21 = v19 >> 6;
      if ( (unsigned __int16)v27 <= (unsigned int)v21 )
      {
        if ( WORD1(v27) <= (unsigned int)v21 )
          goto LABEL_21;
        LOWORD(v27) = v21 + 1;
      }
      v22 = (unsigned int)v21;
      v23 = v28[v21];
      _bittestandset64(&v23, v20);
      v28[v22] = v23;
LABEL_21:
      LOBYTE(v15) = PopExecuteOnTargetProcessors(&v27, PpmGetThroughputInfoCallback, a3, v13);
    }
  }
  return v15;
}
