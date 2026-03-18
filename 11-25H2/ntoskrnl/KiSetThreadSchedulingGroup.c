/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x1403A9BE8
 * Callers:
 *     KeSetProcessSchedulingGroup @ 0x1403A9B08 (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x140201E60 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLockForWrite @ 0x140271D50 (KiAcquireThreadStateLockForWrite.c)
 *     KiEnterDeferredReadyState @ 0x1402F0680 (KiEnterDeferredReadyState.c)
 *     KiDeferredReadyThread @ 0x1402F13A0 (KiDeferredReadyThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1403527C0 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiUpdateThreadSchedulingProperties @ 0x1403A9D6C (KiUpdateThreadSchedulingProperties.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1403AB9B4 (KiRemoveThreadFromSchedulingGroup.c)
 *     EtwTraceThreadSchedulingGroup @ 0x1406421EC (EtwTraceThreadSchedulingGroup.c)
 */

void __fastcall KiSetThreadSchedulingGroup(ULONG_PTR a1, __int64 a2)
{
  __int64 v4; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  int v6; // ebx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // r14
  char v10; // bl
  unsigned __int64 v11; // rcx
  bool v12; // zf
  volatile signed __int64 *v13; // rbx
  __int128 v14; // [rsp+30h] [rbp-10h] BYREF
  volatile __int64 *v15; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF
  __int64 v17; // [rsp+90h] [rbp+50h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  v4 = *(_QWORD *)(a1 + 104);
  v14 = 0LL;
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
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    v7 = KiAcquireThreadStateLockForWrite(a1, &v16, &v17, &v15, (volatile signed __int64 **)&v14);
    *(_QWORD *)(a1 + 104) = a2;
    LOBYTE(v8) = v7;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
    v9 = v16;
    v10 = v7;
    KiUpdateThreadSchedulingProperties(a1, v8, v16);
    v12 = v10 == 1;
    v13 = v15;
    if ( v12 && v15 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = v15;
      KiRemoveThreadFromSharedReadyQueue((__int64)v15, a1, *(_BYTE *)(a1 + 195));
      KiEnterDeferredReadyState(a1);
      v9 = v16;
    }
    KiReleaseThreadStateLock(v11, v9, &v17, v13, (volatile signed __int64 **)&v14);
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( CurrentPrcb )
      KiDeferredReadyThread(CurrentPrcb, a1, 0LL);
  }
  else
  {
    KiRemoveThreadFromSchedulingGroup();
  }
  if ( (WORD2(xmmword_140FC5B10) & 0x4000) != 0 )
    EtwTraceThreadSchedulingGroup(a1, v4, a2);
}
