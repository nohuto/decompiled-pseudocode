/*
 * XREFs of ntoskrnl_24 @ 0x1407B89D0
 * Callers:
 *     sub_1407B91F4 @ 0x1407B91F4 (sub_1407B91F4.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA654 (SLUpdateLicenseDataInternal.c)
 *     sub_14095B190 @ 0x14095B190 (sub_14095B190.c)
 * Callees:
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 */

NTSTATUS __fastcall ntoskrnl_24(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
