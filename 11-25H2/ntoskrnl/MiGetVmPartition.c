/*
 * XREFs of MiGetVmPartition @ 0x14041A480
 * Callers:
 *     MiCreateHardwareEnclave @ 0x1407E730C (MiCreateHardwareEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1409CB268 (MiCopyPagesIntoEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x140A50BA0 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a1 + 174));
}
