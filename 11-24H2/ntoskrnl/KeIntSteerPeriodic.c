/*
 * XREFs of KeIntSteerPeriodic @ 0x1402B1294
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402B0A40 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerEtwEventEnabled @ 0x1402B14A8 (KiIntSteerEtwEventEnabled.c)
 *     KiIntSteerDistributeInterrupts @ 0x1402B1520 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerLogMask @ 0x1402B1728 (KiIntSteerLogMask.c)
 *     KiIntSteerLogProc @ 0x1402B1848 (KiIntSteerLogProc.c)
 *     KiIntSteerCalculateDistribution @ 0x1402B1990 (KiIntSteerCalculateDistribution.c)
 *     KiIntSteerLogState @ 0x1402B2FE4 (KiIntSteerLogState.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KeIntSteerPeriodic(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v8; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // dx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 *i; // rbx
  __int64 *j; // rdi
  __int128 v26; // [rsp+20h] [rbp-78h] BYREF
  __int128 v27; // [rsp+30h] [rbp-68h] BYREF
  __int128 v28; // [rsp+40h] [rbp-58h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  if ( a2 )
  {
    v8 = (unsigned __int16 *)a2;
  }
  else
  {
    v8 = (unsigned __int16 *)a4;
    if ( a3 )
      v8 = (unsigned __int16 *)a3;
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
  v28 = 0LL;
  if ( a2 )
  {
    if ( *(_WORD *)a2 )
      v10 = *(_QWORD *)(a2 + 8);
    else
      v10 = 0LL;
    *(_QWORD *)&v28 = v10;
  }
  v27 = 0LL;
  if ( a3 )
  {
    if ( *(_WORD *)a3 )
      v11 = *(_QWORD *)(a3 + 8);
    else
      v11 = 0LL;
    *(_QWORD *)&v27 = v11;
  }
  v26 = 0LL;
  if ( *(_WORD *)a4 )
    v12 = *(_QWORD *)(a4 + 8);
  else
    v12 = 0LL;
  *(_QWORD *)&v26 = v12;
  v13 = WORD1(KiIntSteerMask[0]);
  v14 = *v8;
  v15 = 0;
  HIDWORD(KiIntSteerMask[0]) = 0;
  if ( v14 <= WORD1(KiIntSteerMask[0]) )
    v13 = v14;
  LOWORD(KiIntSteerMask[0]) = v13;
  if ( v13 )
  {
    do
    {
      v16 = v15++;
      KiIntSteerMask[v16 + 1] = *(_QWORD *)&v8[4 * v16 + 4];
    }
    while ( v15 < v13 );
  }
  while ( v15 < WORD1(KiIntSteerMask[0]) )
  {
    v17 = v15++;
    KiIntSteerMask[v17 + 1] = 0LL;
  }
  ((void (__fastcall *)(__int64, __int128 *, __int128 *, __int128 *))KiIntSteerCalculateDistribution)(
    a1,
    &v28,
    &v27,
    &v26);
  KiIntSteerLogMask(0LL);
  KiIntSteerLogProc(0LL);
  if ( (unsigned __int8)KiIntSteerEtwEventEnabled(PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET) )
  {
    for ( i = (__int64 *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (__int64 *)*i )
    {
      if ( i[22] != i[20] )
      {
        for ( j = (__int64 *)i[2]; j != i + 2; j = (__int64 *)*j )
          KiIntSteerLogState(j, PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET);
      }
    }
  }
  KiIntSteerDistributeInterrupts(v19, v18, v20, v21, v26, *((_QWORD *)&v26 + 1));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)&KiIntTrackSpinlock, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)&KiIntTrackSpinlock, retaddr);
  if ( KiIrqlFlags )
  {
    LOBYTE(v22) = v9;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
  }
  __writecr8(v9);
  return 0LL;
}
