/*
 * XREFs of NVMeReadRegisterUlong64 @ 0x140017158
 * Callers:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x140008650 (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeIsDeviceGone @ 0x140017120 (NVMeIsDeviceGone.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeReadRegisterUlong64(__int64 a1, __int64 a2)
{
  return *(_QWORD *)a2;
}
