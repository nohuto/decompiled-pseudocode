/*
 * XREFs of MiBackgroundZeroNodePages @ 0x1404407D0
 * Callers:
 *     <none>
 * Callees:
 *     MiSelectBestZeroingProcessor @ 0x14020DD10 (MiSelectBestZeroingProcessor.c)
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDeleteZeroThreadContext @ 0x140440768 (MiDeleteZeroThreadContext.c)
 *     MiZeroThreadContextSetExiting @ 0x140440974 (MiZeroThreadContextSetExiting.c)
 *     MiDecrementZeroEngineThread @ 0x1404409B8 (MiDecrementZeroEngineThread.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x140440A30 (MiDereferenceAnyActiveHugeContext.c)
 *     MiRemoveThreadFromEngineLists @ 0x140440AB4 (MiRemoveThreadFromEngineLists.c)
 *     MiSignalZeroingPassComplete @ 0x140684A20 (MiSignalZeroingPassComplete.c)
 */

void __fastcall MiBackgroundZeroNodePages(_QWORD *P)
{
  __int64 v1; // r14
  int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // r13
  volatile LONG *v6; // rsi
  KIRQL v7; // r15
  KIRQL v8; // bl
  KIRQL v9; // r15
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // rbx

  v1 = P[42];
  v3 = 1;
  v4 = *(_QWORD *)(v1 + 176);
  v5 = *(_QWORD *)(v4 + 48);
  v6 = (volatile LONG *)(57216LL * *(unsigned int *)(v4 + 56) + 15280 + *(_QWORD *)(v5 + 16));
  v7 = ExAcquireSpinLockExclusive(v6);
  if ( !P[41] )
  {
    CurrentThread = KeGetCurrentThread();
    ObfReferenceObjectWithTag(CurrentThread, 0x655A6D4Du);
    P[41] = CurrentThread;
  }
  MiReleaseSpinLockExclusive(v6, v7);
  MiSelectBestZeroingProcessor(v1, (__int64)P, 0, 1u);
  v8 = ExAcquireSpinLockExclusive(v6);
  *((_DWORD *)P + 96) |= 1u;
  if ( (P[48] & 0x10) != 0 )
    MiZeroThreadContextSetExiting(P);
  MiReleaseSpinLockExclusive(v6, v8);
  do
  {
    MiBackgroundZeroLocalPages((__int64)P);
    MiDereferenceAnyActiveHugeContext(P);
    if ( v3 )
    {
      MiSignalZeroingPassComplete(v1);
      v3 = 0;
    }
    v9 = ExAcquireSpinLockExclusive(v6);
    MiDecrementZeroEngineThread(P);
    if ( *(_DWORD *)(v5 + 92) && (P[48] & 4) == 0 )
      MiZeroThreadContextSetExiting(P);
    if ( (P[48] & 4) != 0 )
    {
      MiRemoveThreadFromEngineLists(P);
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    MiReleaseSpinLockExclusive(v6, v9);
  }
  while ( !v10 );
  MiDeleteZeroThreadContext(P, 1);
}
