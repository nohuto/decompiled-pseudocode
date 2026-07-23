/*
 * XREFs of PspPicoSetContextThreadEx @ 0x14077A200
 * Callers:
 *     <none>
 * Callees:
 *     PspSetContextThreadInternal @ 0x14091FB00 (PspSetContextThreadInternal.c)
 */

__int64 __fastcall PspPicoSetContextThreadEx(struct _KTHREAD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  return PspSetContextThreadInternal(a1, a5 != 0);
}
