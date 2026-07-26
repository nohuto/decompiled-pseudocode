/*
 * XREFs of ??_GNdisPoll@@QEAAPEAXI@Z @ 0x1400D59C0
 * Callers:
 *     NdisDeregisterPoll @ 0x1400D5A10 (NdisDeregisterPoll.c)
 *     NdisRegisterPoll @ 0x14014A2E0 (NdisRegisterPoll.c)
 * Callees:
 *     ??1NdisPoll@@QEAA@XZ @ 0x14014A6D0 (--1NdisPoll@@QEAA@XZ.c)
 */

NdisPoll *__fastcall NdisPoll::`scalar deleting destructor'(NdisPoll *P, char a2)
{
  NdisPoll::~NdisPoll(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0x78744345u);
  return P;
}
