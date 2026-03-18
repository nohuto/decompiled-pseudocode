/*
 * XREFs of PopFanSetNoiseImpact @ 0x14075060C
 * Callers:
 *     PopFanRemove @ 0x1407505C0 (PopFanRemove.c)
 *     PopFanWorker @ 0x140A7F6A0 (PopFanWorker.c)
 *     PopFanSetupRpmBuckets @ 0x140A7F964 (PopFanSetupRpmBuckets.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFanSetNoiseImpact(__int64 a1, char a2)
{
  if ( *(_BYTE *)(a1 + 88) != a2 )
  {
    *(_BYTE *)(a1 + 88) = a2;
    if ( a2 )
      _InterlockedIncrement(&dword_140F0BA48);
    else
      _InterlockedDecrement(&dword_140F0BA48);
  }
}
