/*
 * XREFs of KiPopulateTrivialProcessorSelectionResult @ 0x1402A3180
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiIsIsolationUnitIdleByHandle @ 0x1402A37F0 (KiIsIsolationUnitIdleByHandle.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x1402A6534 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 */

__int64 __fastcall KiPopulateTrivialProcessorSelectionResult(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  unsigned int v6; // edx
  unsigned __int8 v7; // bl
  _BYTE *v8; // rax
  unsigned int v9; // ecx
  __int64 *v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rdi
  unsigned int v13; // ebp
  __int64 result; // rax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v5 = (*(_DWORD *)(a2 + 120) >> 1) & 1;
  v6 = v5;
  v7 = **(_BYTE **)(a3 + 56);
  v15 = a3;
  if ( v5 < v7 >> 7 )
    v6 = v7 >> 7;
  *a1 = v6 | a3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_10;
    v8 = *(_BYTE **)(a3 + 36440);
    v9 = (unsigned __int8)*v8;
    v10 = (__int64 *)(v8 + 8);
    if ( !*v8 )
      goto LABEL_10;
  }
  else
  {
    v10 = &v15;
    v9 = 1;
  }
  v11 = v9;
  do
  {
    v12 = *v10;
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v13);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v12 + 48) );
    }
    ++v10;
    --v11;
  }
  while ( v11 );
LABEL_10:
  if ( ((**(_BYTE **)(a3 + 56) ^ v7) & 0x80u) != 0 )
    KiAcquirePrcbLocksForPreemptionAttemptSlowPath(a3, v5, a1);
  result = KiIsIsolationUnitIdleByHandle(a1);
  a1[1] = (unsigned int)result;
  return result;
}
