/*
 * XREFs of USBMidiInStateChangePin @ 0x14000EA00
 * Callers:
 *     <none>
 * Callees:
 *     USBMidiInGetCurrentTime @ 0x140002170 (USBMidiInGetCurrentTime.c)
 *     USBMidiInResetEventQueues @ 0x14000E958 (USBMidiInResetEventQueues.c)
 */

__int64 __fastcall USBMidiInStateChangePin(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  int v5; // r8d
  unsigned __int64 CurrentTime; // rbx
  KIRQL v7; // al

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 152);
  v5 = a3 - 2;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      CurrentTime = USBMidiInGetCurrentTime();
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 112));
      *(_BYTE *)(v4 + 32) = 1;
      *(_QWORD *)(v4 + 56) = CurrentTime;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 112), v7);
    }
  }
  else if ( a2 == 3 )
  {
    USBMidiInResetEventQueues(a1);
  }
  return 0LL;
}
