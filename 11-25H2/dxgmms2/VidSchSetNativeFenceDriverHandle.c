/*
 * XREFs of VidSchSetNativeFenceDriverHandle @ 0x1400A5E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchSetNativeFenceDriverHandle(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 160) = a2;
}
