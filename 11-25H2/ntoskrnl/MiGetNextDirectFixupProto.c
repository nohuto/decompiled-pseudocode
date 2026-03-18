/*
 * XREFs of MiGetNextDirectFixupProto @ 0x1406EF70C
 * Callers:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextDirectFixupProto(__int64 a1, unsigned int a2)
{
  return *(_QWORD *)(a1 + 8LL * a2);
}
