/*
 * XREFs of HalpMcLoadMicrocodeWorker @ 0x140557660
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptGetIdentifiers @ 0x1404B5B80 (HalpInterruptGetIdentifiers.c)
 *     HalpMcUpdateMicrocode @ 0x1404CAC6C (HalpMcUpdateMicrocode.c)
 */

ULONG_PTR __fastcall HalpMcLoadMicrocodeWorker(ULONG_PTR Argument)
{
  unsigned int Number; // ecx
  unsigned int v2; // ebx
  int Identifiers; // eax
  __int64 v4; // rcx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  v6 = 0;
  v2 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
  Identifiers = HalpInterruptGetIdentifiers(Number, &v6, 0LL);
  v4 = v6;
  if ( Identifiers < 0 )
    v4 = 0xFFFFFFFFLL;
  v6 = v4;
  if ( (v2 & (unsigned int)v4) == (_DWORD)v4 )
    HalpMcUpdateMicrocode(v4);
  _InterlockedDecrement(&HalpMcLoadSyncBarrier);
  while ( HalpMcLoadSyncBarrier > 0 )
    _mm_pause();
  if ( (v2 & v6) != v6 )
    HalpMcUpdateMicrocode(v4);
  _InterlockedDecrement(&HalpMcSyncBarrier);
  while ( HalpMcSyncBarrier > 0 )
    _mm_pause();
  return 0LL;
}
