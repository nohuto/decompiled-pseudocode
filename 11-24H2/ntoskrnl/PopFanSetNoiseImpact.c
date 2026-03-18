/*
 * XREFs of PopFanSetNoiseImpact @ 0x14075CF3C
 * Callers:
 *     PopFanRemove @ 0x14075CEF0 (PopFanRemove.c)
 *     PopFanWorker @ 0x140A83710 (PopFanWorker.c)
 *     PopFanSetupRpmBuckets @ 0x140A83C8C (PopFanSetupRpmBuckets.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFanSetNoiseImpact(__int64 a1, char a2)
{
  if ( *(_BYTE *)(a1 + 88) != a2 )
  {
    *(_BYTE *)(a1 + 88) = a2;
    if ( a2 )
      _InterlockedIncrement(&dword_140F0C0E8);
    else
      _InterlockedDecrement(&dword_140F0C0E8);
  }
}
