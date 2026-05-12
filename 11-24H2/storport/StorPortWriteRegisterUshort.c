/*
 * XREFs of StorPortWriteRegisterUshort @ 0x140074DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorPortWriteRegisterUshort(__int64 a1, _WORD *a2, __int16 a3)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *a2 = a3;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
}
