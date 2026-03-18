/*
 * XREFs of PfSnBeginScenario @ 0x140960CB0
 * Callers:
 *     PfSnBeginAppLaunch @ 0x140960934 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x140963294 (PfSnOperationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     PsGetIoPriorityThread @ 0x140276920 (PsGetIoPriorityThread.c)
 *     PfSnStartTraceTimer @ 0x14048E84C (PfSnStartTraceTimer.c)
 *     PfSnLogScenarioMeasures @ 0x14049E454 (PfSnLogScenarioMeasures.c)
 *     PfSnLogScenarioDecision @ 0x140960FAC (PfSnLogScenarioDecision.c)
 *     PfSnCheckActionsNeeded @ 0x140961228 (PfSnCheckActionsNeeded.c)
 *     PfSnBeginTrace @ 0x140962AD8 (PfSnBeginTrace.c)
 *     PfSnPrefetchScenario @ 0x140962D70 (PfSnPrefetchScenario.c)
 *     PfSnGetPrefetchInstructions @ 0x140970C24 (PfSnGetPrefetchInstructions.c)
 *     PfSnLogIdentifier @ 0x140A630D0 (PfSnLogIdentifier.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBeginScenario(
        ULONG_PTR a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        _OWORD *a6)
{
  __int64 CurrentThread; // r13
  char v10; // al
  __int64 v11; // rdi
  bool v12; // r12
  char v13; // bl
  PVOID v14; // r14
  struct _EX_RUNDOWN_REF *v15; // rsi
  unsigned int started; // r15d
  int v18; // ecx
  int v19; // eax
  char v20; // [rsp+40h] [rbp-20h]
  int v21; // [rsp+44h] [rbp-1Ch] BYREF
  int v22; // [rsp+48h] [rbp-18h] BYREF
  int v23; // [rsp+4Ch] [rbp-14h]
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  struct _EX_RUNDOWN_REF *v25; // [rsp+58h] [rbp-8h] BYREF

  CurrentThread = (__int64)KeGetCurrentThread();
  v21 = 0;
  v22 = 0;
  P = 0LL;
  v10 = *(_BYTE *)(CurrentThread + 562);
  v11 = -1LL;
  v25 = 0LL;
  v23 = -1;
  v20 = v10;
  *(_BYTE *)(CurrentThread + 562) = 0;
  if ( (int)PsGetIoPriorityThread(CurrentThread) < 2 )
  {
    started = 1075380276;
    goto LABEL_19;
  }
  v12 = 1;
  if ( _InterlockedIncrement(&dword_140E67070) < (unsigned int)dword_140E66CE8 )
  {
    v13 = PfSnCheckActionsNeeded(a2, a3, CurrentThread, (unsigned int)&v21, (__int64)&v22);
    if ( (a4 & 2) != 0 )
    {
      v13 &= ~2u;
      v22 = 9;
    }
    if ( (v13 & 2) != 0 )
    {
      if ( (int)PfSnGetPrefetchInstructions(a2, a3, &P) >= 0 )
      {
        v14 = P;
        v11 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)P + 16);
        if ( v11 < *((_QWORD *)P + 24) && v21 != 22 )
        {
          v13 &= ~1u;
          v21 = 11;
        }
        v23 = *((_DWORD *)P + 50);
LABEL_7:
        if ( (a4 & 4) != 0 )
        {
          v13 &= ~1u;
          v21 = 8;
        }
        if ( (v13 & 1) != 0 )
        {
          v18 = PfSnBeginTrace(a2, a3, a1, CurrentThread & -(__int64)((a4 & 1) != 0), (a4 >> 3) & 1, &v25);
          if ( v18 < 0 )
          {
            switch ( v18 )
            {
              case -1073741618:
                v21 = 16;
                break;
              case -1073741670:
                v21 = 17;
                break;
              case -1072037882:
                v21 = 18;
                break;
              case -1073741791:
                v21 = 19;
                break;
              default:
                v21 = (v18 != -1073741661) + 20;
                break;
            }
          }
          v15 = v25;
          if ( v25 )
          {
            if ( a5 )
              PfSnLogIdentifier(v25);
            if ( a6 )
              PfSnLogScenarioMeasures((__int64)v15, a6);
          }
        }
        else
        {
          v15 = v25;
        }
        if ( (v13 & 2) != 0 )
        {
          v19 = PfSnPrefetchScenario(v14);
          v14 = 0LL;
          v12 = v19 < 0;
          P = 0LL;
        }
        started = 0;
        if ( !v12 )
          goto LABEL_15;
        goto LABEL_14;
      }
      v13 &= ~2u;
      v22 = 10;
    }
    v14 = P;
    goto LABEL_7;
  }
  v21 = 1;
  started = -1073741631;
  v22 = 1;
LABEL_14:
  _InterlockedDecrement(&dword_140E67070);
  v14 = P;
  v15 = v25;
LABEL_15:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v15 )
  {
    started = PfSnStartTraceTimer(v15);
    ExReleaseRundownProtection_0(v15 + 45);
  }
LABEL_19:
  PfSnLogScenarioDecision(a1, v21, v22, v23, v11);
  *(_BYTE *)(CurrentThread + 562) = v20;
  return started;
}
