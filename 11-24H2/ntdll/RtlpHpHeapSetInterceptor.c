/*
 * XREFs of RtlpHpHeapSetInterceptor @ 0x18015631C
 * Callers:
 *     RtlpHpHeapCreate @ 0x180026120 (RtlpHpHeapCreate.c)
 *     RtlpSetHeapDebuggingInformation @ 0x180140E90 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpHpHeapSetInterceptor(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 24) = a2;
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x20u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFFFFFDF);
}
