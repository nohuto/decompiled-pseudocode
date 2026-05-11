/*
 * XREFs of USBHwStopMIDIPipe @ 0x14000D640
 * Callers:
 *     USBHwStopAllMIDIPipes @ 0x14002D30C (USBHwStopAllMIDIPipes.c)
 * Callees:
 *     USBHwAbortOrResetPipe @ 0x14003C780 (USBHwAbortOrResetPipe.c)
 */

__int64 __fastcall USBHwStopMIDIPipe(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v4; // edi
  __int64 v7; // rbx
  KIRQL v8; // al
  int v9; // eax
  KIRQL v10; // bp
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  if ( a3 >= *(_DWORD *)(a2 + 32) )
  {
    return (unsigned int)-1073741583;
  }
  else
  {
    v7 = 168LL * a3;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + *(_QWORD *)(a2 + 40) + 104LL));
    *(_BYTE *)(*(_QWORD *)(a2 + 40) + v7 + 41) = 1;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + *(_QWORD *)(a2 + 40) + 104LL), v8);
    if ( *(char *)(*(_QWORD *)(a2 + 40) + v7 + 2) < 0 )
    {
      v9 = USBHwAbortOrResetPipe(*(PDEVICE_OBJECT *)(a1 + 40));
      v4 = v9;
      if ( v9 >= 0 || v9 == -1073741810 && *(_BYTE *)(v3 + 67) )
      {
        v4 = 0;
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + *(_QWORD *)(a2 + 40) + 104LL));
        v11 = *(_QWORD *)(a2 + 40);
        if ( *(_BYTE *)(v11 + v7 + 72) )
        {
          KeResetEvent((PRKEVENT)(v7 + v11 + 112));
          KeReleaseSpinLock((PKSPIN_LOCK)(v7 + *(_QWORD *)(a2 + 40) + 104LL), v10);
          v4 = KeWaitForSingleObject((PVOID)(v7 + *(_QWORD *)(a2 + 40) + 112LL), Executive, 0, 0, 0LL);
          v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + *(_QWORD *)(a2 + 40) + 104LL));
        }
        v12 = *(_QWORD *)(a2 + 40);
        if ( *(_DWORD *)(v12 + v7 + 64) )
        {
          KeResetEvent((PRKEVENT)(v7 + v12 + 136));
          KeReleaseSpinLock((PKSPIN_LOCK)(v7 + *(_QWORD *)(a2 + 40) + 104LL), v10);
          return (unsigned int)KeWaitForSingleObject((PVOID)(v7 + *(_QWORD *)(a2 + 40) + 136LL), Executive, 0, 0, 0LL);
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v7 + v12 + 104), v10);
        }
      }
    }
  }
  return v4;
}
