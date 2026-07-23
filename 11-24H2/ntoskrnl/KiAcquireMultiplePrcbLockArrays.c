/*
 * XREFs of KiAcquireMultiplePrcbLockArrays @ 0x1402A70E0
 * Callers:
 *     KiAttemptToStealStandbyThread @ 0x1402A6884 (KiAttemptToStealStandbyThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiAcquireMultiplePrcbLockArrays(unsigned __int64 *a1, int a2, unsigned __int64 *a3, unsigned int a4)
{
  unsigned __int64 *v4; // rsi
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // rbp
  __int64 result; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbx
  unsigned int v10; // edi

  v4 = a3;
  v5 = a1;
  v6 = (unsigned __int64)&a1[a2];
  result = a4;
  v8 = (unsigned __int64)&a3[a4];
  while ( (unsigned __int64)v5 < v6 )
  {
    v9 = *v5;
    if ( (unsigned __int64)v4 >= v8 )
    {
      ++v5;
      goto LABEL_9;
    }
    result = *v4;
    if ( v9 >= *v4 )
    {
      v9 = *v4;
      goto LABEL_8;
    }
    ++v5;
LABEL_9:
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
        result = *(_QWORD *)(v9 + 48);
      }
      while ( result );
    }
  }
  if ( (unsigned __int64)v4 < v8 )
  {
    v9 = *v4;
LABEL_8:
    ++v4;
    goto LABEL_9;
  }
  return result;
}
