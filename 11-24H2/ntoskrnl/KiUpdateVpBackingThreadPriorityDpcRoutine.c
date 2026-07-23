/*
 * XREFs of KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x1404992B0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1404993FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 */

void __fastcall KiUpdateVpBackingThreadPriorityDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 *v4; // rbx
  __int64 *v5; // rcx
  __int64 *v6; // rcx
  __int64 *v7; // rdi
  ULONG_PTR v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 *v11; // rax
  __int64 *v12; // rdx
  signed __int32 v13[8]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD *v14; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
  v5 = (__int64 *)KiUpdateVpThreadPriorityListHead;
  while ( v5 != &KiUpdateVpThreadPriorityListHead )
  {
    v10 = *v5;
    v11 = v5;
    v5 = (__int64 *)v10;
    v12 = (__int64 *)v11[1];
    if ( *(__int64 **)(v10 + 8) != v11 || (__int64 *)*v12 != v11 )
      __fastfail(3u);
    *v12 = v10;
    *(_QWORD *)(v10 + 8) = v12;
    *v11 = (__int64)v4;
    v4 = v11;
    v11[1] = 0LL;
    _InterlockedAdd16((volatile signed __int16 *)v11 - 70, 1u);
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KiUpdateVpThreadPriorityLock);
  v14 = 0LL;
  while ( v4 )
  {
    v6 = v4;
    v7 = v4;
    v4 = (__int64 *)*v4;
    v8 = (ULONG_PTR)(v7 - 126);
    *v6 = 1LL;
    _InterlockedOr(v13, 0);
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v8 + 64) );
    }
    if ( (*(_DWORD *)(v8 + 120) & 0x400000) != 0 )
      KiUpdateVpBackingThreadPriorityFromTopLevel(v8);
    *(_QWORD *)(v8 + 64) = 0LL;
    _InterlockedDecrement16((volatile signed __int16 *)(v8 + 868));
  }
  KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v14, 2u);
}
