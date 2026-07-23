/*
 * XREFs of MiGetVmPartition @ 0x140407A50
 * Callers:
 *     MiCreateHardwareEnclave @ 0x1407F7910 (MiCreateHardwareEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140A29D18 (MiCopyPagesIntoEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x140A4C34C (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174));
}
