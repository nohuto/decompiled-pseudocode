/*
 * XREFs of MiGetVmPartition @ 0x140417CA0
 * Callers:
 *     MiCreateHardwareEnclave @ 0x1407F719C (MiCreateHardwareEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1408DA288 (MiCopyPagesIntoEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x140A54400 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(a1 + 174));
}
