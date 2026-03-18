/*
 * XREFs of PopFxUpdateDeviceAccountingEnhanced @ 0x140357E74
 * Callers:
 *     PopPepDeviceDState @ 0x140357170 (PopPepDeviceDState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140356594 (PopFxUpdateAccountingActiveTime.c)
 */

void __fastcall PopFxUpdateDeviceAccountingEnhanced(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  KIRQL v6; // r11
  unsigned int v7; // ecx

  v3 = a1 + 640;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 640));
  if ( *(_DWORD *)(v3 + 16) == 2 )
  {
    v7 = *(_DWORD *)(v3 + 12);
    if ( v7 != 5 )
    {
      if ( a3 )
      {
        if ( a2 >= v7 )
        {
          PopFxUpdateAccountingActiveTime(v3, MEMORY[0xFFFFF78000000008], 0LL);
          *(_BYTE *)(v3 + 8) = 0;
        }
      }
      else if ( a2 == 1 && !*(_BYTE *)(v3 + 8) )
      {
        *(_QWORD *)(v3 + 24) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v3 + 8) = 1;
      }
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v6);
}
