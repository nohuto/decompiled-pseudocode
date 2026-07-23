/*
 * XREFs of WdHwpWriteRegisterUChar @ 0x140558400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WdHwpWriteRegisterUChar(_BYTE *a1, char a2)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *a1 = a2;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
}
