/*
 * XREFs of USBMidiOutCreateBulkUrbs @ 0x1400092AC
 * Callers:
 *     USBMidiOutProcessPin @ 0x14003F070 (USBMidiOutProcessPin.c)
 * Callees:
 *     KsGateTurnInputOff @ 0x140003CB0 (KsGateTurnInputOff.c)
 *     USBMIDICreateEventPackets @ 0x14003CC14 (USBMIDICreateEventPackets.c)
 *     USBMidiOutAllocateRequest @ 0x14003E980 (USBMidiOutAllocateRequest.c)
 */

__int64 __fastcall USBMidiOutCreateBulkUrbs(PKSSTREAM_POINTER StreamPointer)
{
  PKSPIN Pin; // r15
  unsigned int v2; // ebx
  PKSSTREAM_POINTER v3; // rdi
  char v4; // bp
  int Request; // esi
  PVOID Context; // r14
  ULONG Remaining; // r12d
  __int64 v8; // rdx
  KIRQL v9; // r12
  struct _KSGATE *v10; // rax
  bool v11; // sf
  ULONG InUsed; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h]

  Pin = StreamPointer->Pin;
  v2 = 0;
  v3 = StreamPointer;
  v4 = 0;
  Request = 0;
  Context = Pin->Context;
  do
  {
    if ( Request < 0 || v4 )
      break;
    Remaining = v3->OffsetIn.Remaining;
    v14 = 0LL;
    Request = USBMidiOutAllocateRequest(v3);
    if ( Request >= 0 )
    {
      v8 = v14;
      InUsed = 0;
      *(_DWORD *)(*(_QWORD *)(v14 + 24) + 36LL) = 0;
      USBMIDICreateEventPackets(v3, v8, &InUsed);
      KsStreamPointerAdvanceOffsets(v3, InUsed, 0, 0);
      if ( Remaining == InUsed )
        v3 = 0LL;
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
      _InterlockedIncrement((volatile signed __int32 *)Context + 14);
      if ( *((_DWORD *)Context + 14) == 20 )
      {
        v4 = 1;
        v10 = KsPinGetAndGate(Pin);
        KsGateTurnInputOff(v10);
        *((_BYTE *)Context + 44) = 1;
      }
      else
      {
        v4 = 0;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v9);
      Request = IofCallDriver(*(PDEVICE_OBJECT *)(*((_QWORD *)Context + 2) + 40LL), *(PIRP *)(v14 + 16));
    }
  }
  while ( v3 );
  if ( v3 )
  {
    v11 = Request < 0;
    if ( Request >= 0 )
      goto LABEL_17;
    if ( !v4 )
    {
      KsStreamPointerSetStatusCode(v3, Request);
      KsStreamPointerAdvanceOffsets(v3, v3->OffsetIn.Remaining, 0, 0);
    }
  }
  v11 = Request < 0;
LABEL_17:
  if ( v11 )
    return (unsigned int)Request;
  return v2;
}
