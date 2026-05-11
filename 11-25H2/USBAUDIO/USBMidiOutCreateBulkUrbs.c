/*
 * XREFs of USBMidiOutCreateBulkUrbs @ 0x140005A10
 * Callers:
 *     USBMidiOutProcessPin @ 0x14003F830 (USBMidiOutProcessPin.c)
 * Callees:
 *     KsGateTurnInputOff @ 0x140003EE0 (KsGateTurnInputOff.c)
 *     USBMIDICreateEventPackets @ 0x14003D374 (USBMIDICreateEventPackets.c)
 *     USBMidiOutAllocateRequest @ 0x14003F140 (USBMidiOutAllocateRequest.c)
 */

__int64 __fastcall USBMidiOutCreateBulkUrbs(PKSSTREAM_POINTER StreamPointer)
{
  PKSPIN Pin; // r14
  unsigned int v2; // ebx
  PKSSTREAM_POINTER v3; // rdi
  char v4; // si
  NTSTATUS Request; // eax
  PVOID Context; // rbp
  bool v7; // sf
  ULONG Remaining; // r15d
  __int64 v9; // rdx
  KIRQL v10; // r12
  struct _KSGATE *v11; // rax
  ULONG InUsed; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h]

  Pin = StreamPointer->Pin;
  v2 = 0;
  v3 = StreamPointer;
  v4 = 0;
  Request = 0;
  Context = Pin->Context;
  while ( 1 )
  {
    v7 = Request < 0;
    if ( Request < 0 )
      break;
    if ( !v4 )
    {
      Remaining = v3->OffsetIn.Remaining;
      v14 = 0LL;
      Request = USBMidiOutAllocateRequest(v3);
      if ( Request >= 0 )
      {
        v9 = v14;
        InUsed = 0;
        *(_DWORD *)(*(_QWORD *)(v14 + 24) + 36LL) = 0;
        USBMIDICreateEventPackets(v3, v9, &InUsed);
        KsStreamPointerAdvanceOffsets(v3, InUsed, 0, 0);
        if ( Remaining == InUsed )
          v3 = 0LL;
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
        _InterlockedIncrement((volatile signed __int32 *)Context + 14);
        if ( *((_DWORD *)Context + 14) == 20 )
        {
          v4 = 1;
          v11 = KsPinGetAndGate(Pin);
          KsGateTurnInputOff(v11);
          *((_BYTE *)Context + 44) = 1;
        }
        else
        {
          v4 = 0;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v10);
        Request = IofCallDriver(*(PDEVICE_OBJECT *)(*((_QWORD *)Context + 2) + 40LL), *(PIRP *)(v14 + 16));
      }
      if ( v3 )
        continue;
    }
    v7 = Request < 0;
    break;
  }
  if ( v7 )
    return (unsigned int)Request;
  return v2;
}
