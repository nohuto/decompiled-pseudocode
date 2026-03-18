/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x14047C324
 * Callers:
 *     KeSetProcessSchedulingGroup @ 0x14047C244 (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402A7194 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x14030D6C0 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiEnterDeferredReadyState @ 0x140337910 (KiEnterDeferredReadyState.c)
 *     KiDeferredReadyThread @ 0x1403386A0 (KiDeferredReadyThread.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403B1E60 (KiAcquireThreadStateLockForWrite.c)
 *     KiReleaseThreadStateLock @ 0x1403B27B0 (KiReleaseThreadStateLock.c)
 *     KiUpdateThreadSchedulingProperties @ 0x14047C4A8 (KiUpdateThreadSchedulingProperties.c)
 *     EtwTraceThreadSchedulingGroup @ 0x14064E1AC (EtwTraceThreadSchedulingGroup.c)
 */

void __fastcall KiSetThreadSchedulingGroup(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v6; // ebx
  char v7; // al
  int v8; // edx
  __int64 v9; // r14
  char v10; // bl
  int v11; // r9d
  unsigned __int64 v12; // rcx
  bool v13; // zf
  volatile signed __int64 *v14; // rbx
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF
  volatile __int64 *v16; // [rsp+80h] [rbp+40h] BYREF
  __int64 v17; // [rsp+88h] [rbp+48h] BYREF
  __int64 v18; // [rsp+90h] [rbp+50h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  v4 = *(_QWORD *)(a1 + 104);
  v15 = 0LL;
  if ( a2 )
  {
    CurrentPrcb = 0LL;
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    v7 = KiAcquireThreadStateLockForWrite(a1, &v17, &v18, &v16, (volatile signed __int64 **)&v15);
    *(_QWORD *)(a1 + 104) = a2;
    LOBYTE(v8) = v7;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
    v9 = v17;
    v10 = v7;
    KiUpdateThreadSchedulingProperties(a1, v8, v17, v11);
    v13 = v10 == 1;
    v14 = v16;
    if ( v13 && v16 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = v16;
      KiRemoveThreadFromSharedReadyQueue((__int64)v16, a1, *(_BYTE *)(a1 + 195));
      KiEnterDeferredReadyState(a1);
      v9 = v17;
    }
    KiReleaseThreadStateLock(v12, v9, &v18, v14, (volatile signed __int64 **)&v15);
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( CurrentPrcb )
      KiDeferredReadyThread(CurrentPrcb, a1, 0LL);
  }
  else
  {
    KiRemoveThreadFromSchedulingGroup(a1);
  }
  if ( (WORD2(xmmword_140FC5B10) & 0x4000) != 0 )
    EtwTraceThreadSchedulingGroup(a1, v4, a2);
}
