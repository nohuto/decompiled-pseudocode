/*
 * XREFs of EtwpCovSampCaptureQueueApc @ 0x140650210
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x140650444 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KeIsThreadRunning @ 0x1403AD158 (KeIsThreadRunning.c)
 *     KeInitializeApc @ 0x1404163D0 (KeInitializeApc.c)
 *     EtwpCovSampCaptureApcRelease @ 0x1404341E4 (EtwpCovSampCaptureApcRelease.c)
 *     EtwpCovSampLookasidePop @ 0x14045BD10 (EtwpCovSampLookasidePop.c)
 *     KeTryToInsertQueueApc @ 0x1404C67E8 (KeTryToInsertQueueApc.c)
 */

__int64 __fastcall EtwpCovSampCaptureQueueApc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v2; // r15d
  __int64 v3; // r13
  int v5; // esi
  volatile signed __int32 *v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned __int64 v10; // r14
  PSLIST_ENTRY v11; // rax
  PSLIST_ENTRY v12; // rbp
  __int64 v13; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v15; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = qword_140EFEFA8;
  v5 = 1;
  if ( CurrentThread->Process->FreezeCount + ((*(_DWORD *)&CurrentThread->Process->0 >> 3) & 1)
    || CurrentThread->SuspendCount
    || (CurrentThread->MiscFlags & 0x4000) == 0 )
  {
    return (unsigned int)-1073741637;
  }
  v6 = (volatile signed __int32 *)(&CurrentThread[1].SwapListEntry + 1);
  if ( !_interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x17u) )
  {
    v8 = ((unsigned int)*(_QWORD *)(v3 + 8) >> 13) & 0x3FFFF;
    _BitScanReverse(&v9, v8);
    v10 = (*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v9 - 2) + 8LL * (v8 ^ (1 << v9)) + 8)
         + 8LL * (((unsigned int)*(_QWORD *)(v3 + 8) >> 4) & 0x1FF)
         + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v11 = EtwpCovSampLookasidePop(v3, v10 + 16);
    v12 = v11;
    if ( !v11 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v10 + 308), 1u);
      v7 = -1073741670;
      goto LABEL_23;
    }
    v13 = (__int64)(&v11[3].Next + 1);
    KeInitializeApc(
      (__int64)(&v11[3].Next + 1),
      (__int64)CurrentThread,
      0,
      (__int64)EtwpCovSampCaptureApc,
      (__int64)EtwpCovSampCaptureApcRundown,
      (__int64)EtwpCovSampCaptureApc,
      0,
      v3);
    *((_QWORD *)&v12[7].Next + 1) = 0LL;
    LODWORD(v12[9].Next) = MEMORY[0xFFFFF78000000320];
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      if ( CurrentIrql < 2u )
      {
        v15 = KeGetCurrentThread();
        v2 = 1;
        --v15->KernelApcDisable;
      }
      if ( !(unsigned __int8)KeInsertQueueApc(v13, a1, 0LL, 0) )
      {
        v7 = -1073741823;
        goto LABEL_18;
      }
    }
    else if ( !KeTryToInsertQueueApc(v13, a1, 0LL) )
    {
      if ( (CurrentThread->MiscFlags & 0x4000) != 0 )
        KeIsThreadRunning((__int64)CurrentThread);
      v7 = -1073741823;
      goto LABEL_21;
    }
    v5 = 0;
    v12 = 0LL;
    v7 = 0;
LABEL_18:
    if ( v2 )
      KeLeaveCriticalRegion();
    if ( !v12 )
    {
LABEL_22:
      if ( !v5 )
        return v7;
LABEL_23:
      _InterlockedAnd(v6, 0xFF7FFFFF);
      return v7;
    }
LABEL_21:
    EtwpCovSampCaptureApcRelease(v12);
    goto LABEL_22;
  }
  return (unsigned int)-1073740008;
}
