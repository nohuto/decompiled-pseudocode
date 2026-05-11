/*
 * XREFs of USBMidiInAddEventToPinQueue @ 0x140002460
 * Callers:
 *     USBMIDIInReQueueUrb @ 0x140002240 (USBMIDIInReQueueUrb.c)
 * Callees:
 *     USBMidiInGetCurrentTime @ 0x140002170 (USBMidiInGetCurrentTime.c)
 */

void __fastcall USBMidiInAddEventToPinQueue(__int64 a1, _DWORD *a2)
{
  KSPIN_LOCK *v4; // rbp
  int v5; // esi
  KIRQL v6; // al
  __int64 **v7; // rdi
  __int64 *i; // rbx
  __int64 v9; // rsi
  KIRQL v10; // bp
  _QWORD *v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 **v14; // rcx
  struct _KSPIN *v15; // rcx

  if ( (*(_BYTE *)a2 & 0xFu) >= 2 )
  {
    v4 = (KSPIN_LOCK *)(a1 + 104);
    v5 = *(unsigned __int8 *)a2 >> 4;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
    v7 = (__int64 **)(a1 + 48);
    for ( i = *v7; i != (__int64 *)v7 && *((_DWORD *)i + 5) != v5; i = (__int64 *)*i )
      ;
    KeReleaseSpinLock(v4, v6);
    if ( i != (__int64 *)v7 )
    {
      v9 = *(_QWORD *)(i[3] + 16);
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 112));
      if ( *((_BYTE *)i + 32) )
      {
        v11 = i + 10;
        v12 = (__int64 *)i[10];
        if ( v12 != i + 10 )
        {
          if ( (_QWORD *)v12[1] != v11
            || (v13 = *v12, *(__int64 **)(*v12 + 8) != v12)
            || (*v11 = v13,
                *(_QWORD *)(v13 + 8) = v11,
                *((_DWORD *)v12 + 6) = *a2,
                v12[2] = USBMidiInGetCurrentTime(),
                v14 = (__int64 **)i[9],
                *v14 != i + 8) )
          {
            __fastfail(3u);
          }
          *v12 = (__int64)(i + 8);
          v12[1] = (__int64)v14;
          *v14 = v12;
          i[9] = (__int64)v12;
        }
        if ( !*((_BYTE *)i + 33) )
        {
          v15 = (struct _KSPIN *)i[3];
          *((_BYTE *)i + 33) = 1;
          KsPinAttemptProcessing(v15, 1u);
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 112), v10);
    }
  }
}
