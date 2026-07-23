/*
 * XREFs of VfMiscKeWaitForMultipleObjects_Entry @ 0x140BA0040
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscValidateKeWaitUsage @ 0x140BA1564 (ViMiscValidateKeWaitUsage.c)
 */

__int64 __fastcall VfMiscKeWaitForMultipleObjects_Entry(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = *(_BYTE *)(a1 + 25);
  return ViMiscValidateKeWaitUsage(
           *(unsigned int *)(a1 + 48),
           *(_QWORD *)(a1 + 40),
           a3,
           *(_QWORD *)(a1 + 16),
           *(_QWORD *)a1);
}
