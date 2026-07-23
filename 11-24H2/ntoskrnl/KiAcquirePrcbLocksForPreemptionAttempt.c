/*
 * XREFs of KiAcquirePrcbLocksForPreemptionAttempt @ 0x1402A2C70
 * Callers:
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x14041592C (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x1402A6534 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 */

_BYTE *__fastcall KiAcquirePrcbLocksForPreemptionAttempt(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v4; // r9
  unsigned int v6; // r12d
  unsigned int v7; // ebx
  _BYTE *v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rdi
  unsigned int v13; // esi
  _BYTE *result; // rax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  v6 = a2;
  v7 = **(unsigned __int8 **)(a1 + 56);
  v15 = a1;
  if ( (int)a2 < (int)(v7 >> 7) )
    v4 = v7 >> 7;
  *a3 = (int)v4 ^ (a1 ^ (int)v4) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 )
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
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9, a2, a3, v4) )
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
    return (_BYTE *)KiAcquirePrcbLocksForPreemptionAttemptSlowPath(a1, v6, a3);
  return result;
}
