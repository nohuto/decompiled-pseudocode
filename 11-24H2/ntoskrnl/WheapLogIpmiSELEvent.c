/*
 * XREFs of WheapLogIpmiSELEvent @ 0x14065CBA0
 * Callers:
 *     WheaSelLogErrorPkt @ 0x140659BD8 (WheaSelLogErrorPkt.c)
 *     WheaSelLogEvent @ 0x140659CC4 (WheaSelLogEvent.c)
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x14065CB78 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall WheapLogIpmiSELEvent(void *Src, size_t Size, int a3)
{
  unsigned int v4; // edi
  size_t v6; // r8

  v4 = Size;
  if ( WheapDispatchPtr.DeviceLock.Header.LockNV )
  {
    memset_0(&unk_140EF8D54, 0, 0xFECuLL);
    WheapSelBuffer = 1381192527;
    dword_140EF8D44 = 1;
    v6 = 4075LL;
    dword_140EF8D4C = a3;
    if ( v4 + 21 <= 0x1000 )
      v6 = v4;
    dword_140EF8D50 = v6;
    dword_140EF8D48 = v6 + 20;
    memmove(&unk_140EF8D54, Src, v6);
    if ( WheapHighIrqlLogSelEventHandlerAcquireLock(0) )
    {
      if ( WheapDispatchPtr.DeviceLock.Header.LockNV )
        guard_dispatch_icall_no_overrides(WheapDispatchPtr.DeviceLock.Header.WaitListHead.Blink, &WheapSelBuffer);
      _InterlockedExchange(&WheapDispatchPtr.DeviceLock.Header.SignalState, 0);
    }
  }
}
