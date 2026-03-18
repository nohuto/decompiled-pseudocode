/*
 * XREFs of CmRegisterCallbackEx @ 0x140A98060
 * Callers:
 *     DifCmRegisterCallbackExWrapper @ 0x14061A770 (DifCmRegisterCallbackExWrapper.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x140989A9C (CmpRegisterCallbackInternal.c)
 */

NTSTATUS __stdcall CmRegisterCallbackEx(
        PEX_CALLBACK_FUNCTION Function,
        PCUNICODE_STRING Altitude,
        PVOID Driver,
        PVOID Context,
        PLARGE_INTEGER Cookie,
        PVOID Reserved)
{
  if ( !Driver )
    return -1073741583;
  if ( Reserved )
    return -1073741580;
  return CmpRegisterCallbackInternal((__int64)Function, (__int64)Context, (const void **)Altitude, 0, 0, Cookie);
}
