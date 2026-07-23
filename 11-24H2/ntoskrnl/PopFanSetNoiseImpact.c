/*
 * XREFs of PopFanSetNoiseImpact @ 0x14075BEDC
 * Callers:
 *     PopFanRemove @ 0x14075BE90 (PopFanRemove.c)
 *     PopFanWorker @ 0x140A7E230 (PopFanWorker.c)
 *     PopFanSetupRpmBuckets @ 0x140A7E7AC (PopFanSetupRpmBuckets.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFanSetNoiseImpact(__int64 a1, char a2)
{
  if ( *(_BYTE *)(a1 + 88) != a2 )
  {
    *(_BYTE *)(a1 + 88) = a2;
    if ( a2 )
      _InterlockedIncrement(&dword_140F0B128);
    else
      _InterlockedDecrement(&dword_140F0B128);
  }
}
