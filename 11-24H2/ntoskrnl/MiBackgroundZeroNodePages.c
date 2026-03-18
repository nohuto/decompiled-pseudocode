/*
 * XREFs of MiBackgroundZeroNodePages @ 0x1403C6F60
 * Callers:
 *     <none>
 * Callees:
 *     MiZeroThreadContextSetExiting @ 0x140209DA4 (MiZeroThreadContextSetExiting.c)
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     MiDeleteZeroThreadContext @ 0x1403C6608 (MiDeleteZeroThreadContext.c)
 *     MiSelectBestZeroingProcessor @ 0x1403C7C00 (MiSelectBestZeroingProcessor.c)
 *     MiDecrementZeroEngineThread @ 0x1403C7E68 (MiDecrementZeroEngineThread.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x1403C7EE0 (MiDereferenceAnyActiveHugeContext.c)
 *     MiRemoveThreadFromEngineLists @ 0x1403C81EC (MiRemoveThreadFromEngineLists.c)
 *     MiSignalZeroingPassComplete @ 0x14068FE80 (MiSignalZeroingPassComplete.c)
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
  MiSelectBestZeroingProcessor(v1, P, 0LL, 1LL);
  v8 = ExAcquireSpinLockExclusive(v6);
  *((_DWORD *)P + 96) |= 1u;
  if ( (P[48] & 0x10) != 0 )
    MiZeroThreadContextSetExiting((__int64)P);
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
      MiZeroThreadContextSetExiting((__int64)P);
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
