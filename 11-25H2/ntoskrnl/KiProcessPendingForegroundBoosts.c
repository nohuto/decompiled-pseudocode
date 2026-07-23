/*
 * XREFs of KiProcessPendingForegroundBoosts @ 0x1404BAD50
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     KiApplyForegroundBoostThread @ 0x1404F46AC (KiApplyForegroundBoostThread.c)
 */

void __fastcall KiProcessPendingForegroundBoosts(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 *v4; // rbx
  int v5; // edi
  __int64 *v6; // rcx
  __int64 *v7; // rax
  __int64 **v8; // rdx
  bool v9; // di
  __int64 *v10; // rcx
  __int64 *v11; // rdi
  __int64 *v12; // rdi
  int v13; // esi
  struct _SINGLE_LIST_ENTRY v14; // [rsp+20h] [rbp-38h] BYREF
  __int128 v15; // [rsp+28h] [rbp-30h] BYREF

  v14.Next = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v5 = MEMORY[0xFFFFF78000000320];
  KxAcquireSpinLock(&qword_140F21B18);
  v6 = (__int64 *)qword_140F21B08;
  while ( v6 != &qword_140F21B08 )
  {
    v7 = v6;
    v6 = (__int64 *)*v6;
    if ( v5 != *((_DWORD *)v7 - 2) )
    {
      v8 = (__int64 **)v7[1];
      if ( (__int64 *)v6[1] != v7 || *v8 != v7 )
        __fastfail(3u);
      *v8 = v6;
      v6[1] = (__int64)v8;
      *v7 = (__int64)v4;
      v4 = v7;
      v7[1] = 0LL;
      _InterlockedAdd16((volatile signed __int16 *)v7 - 6, 1u);
    }
  }
  v9 = qword_140F21B08 != (_QWORD)&qword_140F21B08;
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140F21B18);
  if ( v9 )
  {
    *((_QWORD *)&v15 + 1) = -1LL;
    KeSetTimer2((__int64)&KiForegroundState, (LARGE_INTEGER)-150000LL, 0LL, (__int64)&v15);
  }
  while ( v4 )
  {
    v10 = v4;
    v11 = v4;
    v4 = (__int64 *)*v4;
    v12 = v11 - 110;
    v13 = 0;
    *v10 = 1LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 16, 0LL) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) == 0
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
      while ( v12[8] );
    }
    KiApplyForegroundBoostThread(v12, &v14);
    v12[8] = 0LL;
    _InterlockedAdd16((volatile signed __int16 *)v12 + 434, 0xFFFFu);
  }
  KiReadyDeferredReadyList(KeGetCurrentPrcb(), &v14);
}
