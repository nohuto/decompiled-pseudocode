/*
 * XREFs of VidSchiSubmitQueueCommandDirect @ 0x1400504CC
 * Callers:
 *     VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140048BCC (VidSchiSubmitCommandPacketToQueueDirectSubmitAware.c)
 * Callees:
 *     VidSchiReadCommandFromContextQueue @ 0x140020C70 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiProfilePerformanceTick @ 0x1400211F0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiBlockContextOnPendingFlips @ 0x140024ED0 (VidSchiBlockContextOnPendingFlips.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x140025DD0 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiSwitchContext @ 0x14002A380 (VidSchiSwitchContext.c)
 *     VidSchiCheckTimeoutForced @ 0x1400362E0 (VidSchiCheckTimeoutForced.c)
 *     VidSchiReportHwHang @ 0x140046CF8 (VidSchiReportHwHang.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     VidSchiSubmitQueueCommand @ 0x1400AE770 (VidSchiSubmitQueueCommand.c)
 */

__int64 __fastcall VidSchiSubmitQueueCommandDirect(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rsi
  int v5; // ebx
  __int64 v6; // r14
  unsigned int v7; // r12d
  __int64 v8; // rdi
  void (__fastcall *v9)(_QWORD); // rax
  __int64 v10; // rax
  struct _VIDSCH_QUEUE_PACKET *v11; // r15
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  char v15; // [rsp+A0h] [rbp+8h] BYREF
  int v16; // [rsp+B0h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 96);
  v7 = 0;
  v8 = *(_QWORD *)(v6 + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 1984), &LockHandle);
  if ( *(_DWORD *)(v8 + 368) == 1
    && !*(_DWORD *)(v8 + 3244)
    && !*(_DWORD *)(v8 + 776)
    && !*(_DWORD *)(v8 + 788)
    && *(int *)(v6 + 3000) > 0
    && (!*(_DWORD *)(v2 + 184) || (*(_DWORD *)(v2 + 184) & 2) != 0)
    && ((*(_DWORD *)(v2 + 184) & 2) != 0
     || !*(_DWORD *)(v6 + 3020)
     || (unsigned int)RtlFindMostSignificantBit(*(unsigned int *)(v6 + 1892)) > *(_DWORD *)(v2 + 404))
    && !VidSchiBlockContextOnPendingFlips(a1) )
  {
    _InterlockedExchange64((volatile __int64 *)(v8 + 176), (__int64)KeGetCurrentThread());
    v16 = 0;
    v7 = 1;
    VidSchiInsertCommandToSoftwareQueue(a1, &v16);
    *(_DWORD *)(a1 + 64) |= 0x100u;
    VidSchiSwitchContext(v2);
    *(_BYTE *)(v2 + 640) = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 )
  {
    VidSchiProfilePerformanceTick(5, v8, 0LL, 0LL, 0LL, a1, 0LL, 0LL);
    v15 = 0;
    while ( 1 )
    {
      v10 = VidSchiReadCommandFromContextQueue(v2, 0, &v15);
      v11 = (struct _VIDSCH_QUEUE_PACKET *)v10;
      if ( !v10 )
        break;
      if ( !*(_DWORD *)(v10 + 48) && *(_DWORD *)(v6 + 16520) != -1 )
      {
        *(_BYTE *)(v8 + 54) = 1;
        if ( *(_DWORD *)(v6 + 16520) != -1 )
        {
          v9 = *(void (__fastcall **)(_QWORD))(v8 + 3288);
          if ( v9 )
            v9(*(_QWORD *)(v8 + 3352));
        }
        *(_BYTE *)(v8 + 54) = 0;
        *(_DWORD *)(a1 + 80) |= 0x10u;
      }
      VidSchiSubmitQueueCommand(v11);
    }
    ExReleaseResourceLite((PERESOURCE)(v8 + 1240));
    v12 = *(_DWORD *)(v8 + 3244) == 0;
    if ( !*(_DWORD *)(v8 + 3244) )
    {
      if ( VidSchiCheckTimeoutForced(v8) )
        VidSchiReportHwHang(v8, MEMORY[0xFFFFF78000000320], 1, 0LL);
      v12 = *(_DWORD *)(v8 + 3244) == 0;
    }
    LOBYTE(v5) = !v12;
    *a2 = v5;
    _InterlockedExchange64((volatile __int64 *)(v8 + 176), *(_QWORD *)(v8 + 168));
  }
  return v7;
}
