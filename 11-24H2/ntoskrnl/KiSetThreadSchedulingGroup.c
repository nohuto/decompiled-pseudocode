/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x1402D6FE8
 * Callers:
 *     KeSetProcessSchedulingGroup @ 0x1402D6F08 (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402D68C4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiUpdateThreadSchedulingProperties @ 0x1402D6DAC (KiUpdateThreadSchedulingProperties.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1402D8E60 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiEnterDeferredReadyState @ 0x1402DFA30 (KiEnterDeferredReadyState.c)
 *     KiDeferredReadyThread @ 0x1402DFBE0 (KiDeferredReadyThread.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403A0670 (KiAcquireThreadStateLockForWrite.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     EtwTraceThreadSchedulingGroup @ 0x14064C7BC (EtwTraceThreadSchedulingGroup.c)
 */

__int64 __fastcall KiSetThreadSchedulingGroup(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v7; // ebx
  char v8; // al
  int v9; // edx
  int v10; // r14d
  char v11; // bl
  _QWORD *v12; // r9
  int v13; // ecx
  bool v14; // zf
  int v15; // ebx
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF
  __int64 v18; // [rsp+88h] [rbp+48h] BYREF
  __int64 v19; // [rsp+90h] [rbp+50h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  v4 = *(_QWORD *)(a1 + 104);
  v16 = 0LL;
  if ( a2 )
  {
    CurrentPrcb = 0LL;
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    v8 = KiAcquireThreadStateLockForWrite(a1, (unsigned int)&v18, (unsigned int)&v19, (unsigned int)&v17, (__int64)&v16);
    *(_QWORD *)(a1 + 104) = a2;
    LOBYTE(v9) = v8;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
    v10 = v18;
    v11 = v8;
    KiUpdateThreadSchedulingProperties(a1, v9, v18, v12);
    v14 = v11 == 1;
    v15 = v17;
    if ( v14 && v17 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = v17;
      KiRemoveThreadFromSharedReadyQueue(v17, a1, (unsigned int)*(char *)(a1 + 195));
      KiEnterDeferredReadyState(a1);
      v10 = v18;
    }
    result = KiReleaseThreadStateLock(v13, v10, (unsigned int)&v19, v15, (__int64)&v16);
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( CurrentPrcb )
      result = KiDeferredReadyThread(CurrentPrcb, a1, 0LL);
  }
  else
  {
    result = KiRemoveThreadFromSchedulingGroup(a1);
  }
  if ( (WORD2(xmmword_140FC6B50) & 0x4000) != 0 )
    return EtwTraceThreadSchedulingGroup(a1, v4, a2);
  return result;
}
