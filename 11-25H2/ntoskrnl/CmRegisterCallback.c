/*
 * XREFs of CmRegisterCallback @ 0x1407C1DE0
 * Callers:
 *     DifCmRegisterCallbackWrapper @ 0x14060E960 (DifCmRegisterCallbackWrapper.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x1409950AC (CmpRegisterCallbackInternal.c)
 */

NTSTATUS __stdcall CmRegisterCallback(PEX_CALLBACK_FUNCTION Function, PVOID Context, PLARGE_INTEGER Cookie)
{
  return CmpRegisterCallbackInternal(
           (_DWORD)Function,
           (_DWORD)Context,
           (unsigned int)&CmLegacyAltitude,
           1,
           0,
           (__int64)Cookie);
}
