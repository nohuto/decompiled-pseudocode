/*
 * XREFs of KiAcquirePrcbLocksForPreemptionAttempt @ 0x140293070
 * Callers:
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x14041FF3C (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x1404CC7A8 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 */

_BYTE *__fastcall KiAcquirePrcbLocksForPreemptionAttempt(__int64 a1, int a2, unsigned __int64 *a3)
{
  unsigned int v4; // r9d
  unsigned int v7; // ebx
  _BYTE *v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rdi
  unsigned int v13; // esi
  _BYTE *result; // rax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  v7 = **(unsigned __int8 **)(a1 + 56);
  v15 = a1;
  if ( a2 < (int)(v7 >> 7) )
    v4 = v7 >> 7;
  *a3 = (int)v4 ^ (a1 ^ (int)v4) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v4 )
  {
    if ( v4 != 1 )
      goto LABEL_10;
    v8 = *(_BYTE **)(a1 + 36440);
    v9 = (unsigned __int8)*v8;
    v10 = (__int64 *)(v8 + 8);
    if ( !*v8 )
      goto LABEL_10;
  }
  else
  {
    v10 = &v15;
    v9 = 1LL;
  }
  v11 = (unsigned int)v9;
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
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
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
  result = *(_BYTE **)(a1 + 56);
  if ( ((*result ^ v7) & 0x80u) != 0 )
    return (_BYTE *)KiAcquirePrcbLocksForPreemptionAttemptSlowPath(a1, (unsigned int)a2, a3);
  return result;
}
