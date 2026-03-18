/*
 * XREFs of NVMeWriteRegisterUlong64 @ 0x14001EEA0
 * Callers:
 *     NVMeControllerInitPart1 @ 0x14001D11C (NVMeControllerInitPart1.c)
 * Callees:
 *     <none>
 */

void __fastcall NVMeWriteRegisterUlong64(__int64 a1, _QWORD *a2, __int64 a3)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *a2 = a3;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
}
