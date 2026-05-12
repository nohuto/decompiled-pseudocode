/*
 * XREFs of RiGetEnqueueReason @ 0x140014570
 * Callers:
 *     RiNormalizeDeviceQueue @ 0x1400138C0 (RiNormalizeDeviceQueue.c)
 * Callees:
 *     RiIsDeviceQueueBusy @ 0x1400146C4 (RiIsDeviceQueueBusy.c)
 *     RiPeekDeviceQueue @ 0x1400146F0 (RiPeekDeviceQueue.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     RaUnitCheckForwardIoOutstanding @ 0x140054AEC (RaUnitCheckForwardIoOutstanding.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RiGetEnqueueReason(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  char v7; // dl
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  KIRQL v12; // bp
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rcx
  _DWORD v16[3]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+3Ch] [rbp-4Ch]
  __int64 v18; // [rsp+4Ch] [rbp-3Ch]
  int v19; // [rsp+54h] [rbp-34h]
  __int16 v20; // [rsp+58h] [rbp-30h]
  __int16 v21; // [rsp+5Ah] [rbp-2Eh]
  int v22; // [rsp+5Ch] [rbp-2Ch]
  char v23; // [rsp+60h] [rbp-28h]
  char v24; // [rsp+61h] [rbp-27h]
  char v25; // [rsp+62h] [rbp-26h]
  int v26; // [rsp+63h] [rbp-25h]
  char v27; // [rsp+67h] [rbp-21h]

  if ( (unsigned int)RiIsDeviceQueueBusy(a1, a2, a3, a4) )
    return 1LL;
  if ( *(_BYTE *)(v6 + 37) && (*(_BYTE *)(a2 + 22) & 4) == 0 )
    return 2LL;
  if ( *(_BYTE *)(v6 + 36) && (*(_BYTE *)(a2 + 22) & 2) == 0 )
    return 3LL;
  if ( *(int *)(v6 + 24) > 0 )
    return 4LL;
  if ( *(_BYTE *)(v6 + 38) )
    return 5LL;
  if ( *(_DWORD *)(v6 + 16) || (unsigned int)(*(_QWORD *)(v6 + 88) / 0x100000000LL) )
  {
    v10 = RiPeekDeviceQueue(a1);
    if ( a2 != v10 && (*(_BYTE *)(v10 + 22) & 1) != 0 && (*(_BYTE *)(a2 + 22) & 6) == 0 )
      return 6LL;
  }
  v7 = *(_BYTE *)(a2 + 22);
  if ( (v7 & 1) != 0 && (((__int64)*(unsigned int *)(a1 + 88) >> 2) & 0x3FFFFFFF) != 0 )
    return 7LL;
  if ( *(_BYTE *)(a1 + 39) && (v7 & 8) == 0 )
    return 8LL;
  if ( (v7 & 0x10) != 0 )
    return 9LL;
  if ( (v7 & 0x40) != 0 )
    return 10LL;
  if ( (v7 & 1) == 0 )
    return 0LL;
  v8 = a1 - 720;
  if ( !*(_QWORD *)(v8 + 32) )
    return 0LL;
  v11 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v26 = 0;
  v27 = 0;
  if ( (unsigned __int8)RaidIsUnitControlSupported(v8, 31LL) )
  {
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v8 + 32) + 24LL));
    *(_DWORD *)(*(_QWORD *)(v8 + 32) + 80LL) |= 0x100u;
    v13 = *(_QWORD *)(v8 + 32);
    v14 = *(_DWORD *)(v13 + 80);
    if ( (v14 & 1) != 0 && (v14 & 0x200) == 0 )
    {
      *(_DWORD *)(v13 + 80) = v14 | 0x200;
      KeSetCoalescableTimer(
        (PKTIMER)(*(_QWORD *)(v8 + 32) + 88LL),
        (LARGE_INTEGER)-20000000LL,
        0,
        0x12Cu,
        (PKDPC)(*(_QWORD *)(v8 + 32) + 152LL));
    }
    v15 = *(_QWORD *)(v8 + 24);
    v20 = 1;
    v16[0] = 56;
    v16[1] = 56;
    v16[2] = 2;
    v22 = 4;
    v21 = *(_WORD *)(v15 + 56);
    v23 = *(_BYTE *)(v8 + 104);
    v24 = *(_BYTE *)(v8 + 105);
    v25 = *(_BYTE *)(v8 + 106);
    if ( *(_DWORD *)v15 == 1094997074 )
    {
      v11 = v15 + 376;
    }
    else if ( *(_DWORD *)v15 == 1314275652 )
    {
      v11 = v15 + 168;
    }
    RaCallMiniportUnitControl(v11, 31LL, v16);
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v8 + 32) + 24LL), v12);
  }
  *(_BYTE *)(a2 + 20) |= 4u;
  return (unsigned __int8)RaUnitCheckForwardIoOutstanding(v8) != 0 ? 7 : 0;
}
