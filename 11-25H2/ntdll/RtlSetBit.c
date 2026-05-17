/*
 * XREFs of RtlSetBit @ 0x1800FCA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RtlSetBit(__int64 a1, unsigned int a2)
{
  _BYTE *v2; // r8
  int result; // eax

  v2 = (_BYTE *)(*(_QWORD *)(a1 + 8) + ((unsigned __int64)a2 >> 3));
  result = (char)*v2 | (1 << (a2 & 7));
  *v2 = result;
  return result;
}
