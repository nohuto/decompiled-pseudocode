/*
 * XREFs of ntoskrnl_24 @ 0x1407B8580
 * Callers:
 *     sub_1407B8DA4 @ 0x1407B8DA4 (sub_1407B8DA4.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 *     sub_140972980 @ 0x140972980 (sub_140972980.c)
 * Callees:
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 */

NTSTATUS __fastcall ntoskrnl_24(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
