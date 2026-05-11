/*
 * XREFs of USBMidiOutCompleteCallback @ 0x14000EA80
 * Callers:
 *     <none>
 * Callees:
 *     KsGateTurnInputOn @ 0x1400041D4 (KsGateTurnInputOn.c)
 */

__int64 __fastcall USBMidiOutCompleteCallback(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KSSTREAM_POINTER *v3; // rcx
  NTSTATUS v5; // edx
  struct _KSPIN *Pin; // rsi
  PVOID Context; // rdi
  struct _KSSTREAM_POINTER *v8; // rcx
  __int64 v9; // rbx
  KIRQL v10; // bp
  struct _KSGATE *v11; // rax

  v3 = (struct _KSSTREAM_POINTER *)a3[5];
  v5 = *(_DWORD *)(a2 + 48);
  Pin = v3->Pin;
  Context = Pin->Context;
  if ( *(int *)(a3[3] + 4LL) >= 0 )
  {
    if ( v5 >= 0 )
      goto LABEL_5;
  }
  else
  {
    v5 = -1073741668;
  }
  KsStreamPointerSetStatusCode(v3, v5);
LABEL_5:
  v8 = (struct _KSSTREAM_POINTER *)a3[5];
  v9 = *((_QWORD *)v8->Pin->Context + 19);
  KsStreamPointerDelete(v8);
  ExFreeToNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v9 + 80), a3);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
  if ( *((_DWORD *)Context + 14) == 20 )
  {
    v11 = KsPinGetAndGate(Pin);
    KsGateTurnInputOn(v11);
    KsPinAttemptProcessing(Pin, 1u);
    *((_BYTE *)Context + 44) = 0;
  }
  if ( (*((_DWORD *)Context + 14))-- == 1 )
    KeSetEvent((PRKEVENT)Context + 5, 0, 0);
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v10);
  return 3221225494LL;
}
