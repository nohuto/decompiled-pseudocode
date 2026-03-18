/*
 * XREFs of WheapLogIpmiSELEvent @ 0x14065E3D0
 * Callers:
 *     WheaSelLogErrorPkt @ 0x14065B4B8 (WheaSelLogErrorPkt.c)
 *     WheaSelLogEvent @ 0x14065B5A4 (WheaSelLogEvent.c)
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x14065E3A8 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall WheapLogIpmiSELEvent(void *Src, size_t Size, int a3)
{
  unsigned int v4; // edi
  size_t v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9

  v4 = Size;
  if ( (_DWORD)WheapHighIrqlLogSelHandler )
  {
    memset_0(&unk_140EF89F4, 0, 0xFECuLL);
    WheapSelBuffer = 1381192527;
    dword_140EF89E4 = 1;
    v6 = 4075LL;
    dword_140EF89EC = a3;
    if ( v4 + 21 <= 0x1000 )
      v6 = v4;
    dword_140EF89F0 = v6;
    dword_140EF89E8 = v6 + 20;
    memmove(&unk_140EF89F4, Src, v6);
    if ( WheapHighIrqlLogSelEventHandlerAcquireLock(0) )
    {
      if ( (_DWORD)WheapHighIrqlLogSelHandler )
        guard_dispatch_icall_no_overrides(qword_140EF9A10, &WheapSelBuffer, v7, v8);
      _InterlockedExchange((_DWORD *)&WheapHighIrqlLogSelHandler + 1, 0);
    }
  }
}
