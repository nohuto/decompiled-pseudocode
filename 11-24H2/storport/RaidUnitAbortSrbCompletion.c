/*
 * XREFs of RaidUnitAbortSrbCompletion @ 0x14009DE70
 * Callers:
 *     <none>
 * Callees:
 *     StorFreeSynchronousScsiRequest @ 0x14000D344 (StorFreeSynchronousScsiRequest.c)
 *     RaidAdapterRequestComplete @ 0x140025020 (RaidAdapterRequestComplete.c)
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     StorEtwMiniportBugAbortBrokenEvent @ 0x1400A829C (StorEtwMiniportBugAbortBrokenEvent.c)
 */

__int64 __fastcall RaidUnitAbortSrbCompletion(__int64 a1, IRP *a2, ULONG_PTR a3)
{
  char *DeviceExtension; // rsi
  __int64 *v6; // r11
  __int64 v7; // r11
  __int64 v8; // rdi
  unsigned __int64 v9; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // rcx
  ULONG_PTR BugCheckParameter4; // r11
  void *v14; // rcx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-28h] BYREF

  DeviceExtension = (char *)a2->Tail.Overlay.CurrentStackLocation[-1].DeviceObject->DeviceExtension;
  if ( *(_BYTE *)(a3 + 2) == 40 )
    v6 = *(__int64 **)(a3 + 64);
  else
    v6 = *(__int64 **)(a3 + 24);
  v7 = *v6;
  if ( *(_BYTE *)(v7 + 2) == 40 )
    v8 = *(_QWORD *)(v7 + 96);
  else
    v8 = *(_QWORD *)(v7 + 48);
  *(_BYTE *)(v8 + 17) &= ~4u;
  if ( a2->IoStatus.Status >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 776), 2, 1) != 4 )
    {
      v12 = *((_QWORD *)DeviceExtension + 3);
      *(_OWORD *)BugCheckParameter2 = 0LL;
      RaidDriverGetName(*(_QWORD *)(v12 + 16), (__int64)BugCheckParameter2);
      if ( MiniportBugActionPolicy == 1 )
      {
        StorEtwMiniportBugAbortBrokenEvent(v8, BugCheckParameter2);
      }
      else if ( MiniportBugActionPolicy == 2 )
      {
        KeBugCheckEx(0xF0u, 2uLL, BugCheckParameter2[1], a3, BugCheckParameter4);
      }
      _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 776), 3, 2);
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 776), 3, 1) == 4 )
LABEL_9:
    RaidAdapterRequestComplete(*((_QWORD *)DeviceExtension + 3), v8, 1);
LABEL_10:
  v9 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v10 = *(_DWORD *)(v9 + *((_QWORD *)DeviceExtension + 5));
  while ( (v10 & 1) == 0 )
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + *((_QWORD *)DeviceExtension + 5)), v10 - 2, v10);
    if ( v11 == v10 )
      goto LABEL_22;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 258, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(DeviceExtension + 520), 0, 0);
LABEL_22:
  StorFreeSynchronousScsiRequest(a2);
  if ( *(_BYTE *)(a3 + 2) == 40 )
    v14 = *(void **)(a3 + 64);
  else
    v14 = *(void **)(a3 + 24);
  if ( v14 )
    ExFreePoolWithTag(v14, 0x72536152u);
  ExFreePoolWithTag((PVOID)a3, 0x72536152u);
  return 3221225494LL;
}
