/*
 * XREFs of Register_UpdateKBLUSB2PMCTRLRegister @ 0x140049A80
 * Callers:
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x140076A08 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_UpdateKBLUSB2PMCTRLRegister(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  int v4; // ebx
  int Ulong; // eax

  v2 = *(_QWORD *)(a1 + 24);
  v4 = a2;
  Ulong = XilRegister_ReadUlong(a1, (unsigned int *)(v2 + 33220));
  return XilRegister_WriteUlong(a1, (_DWORD *)(v2 + 33220), v4 | Ulong & 0xFFFFFFFC);
}
