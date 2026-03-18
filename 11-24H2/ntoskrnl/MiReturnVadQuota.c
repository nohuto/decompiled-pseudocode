/*
 * XREFs of MiReturnVadQuota @ 0x140A0C0A4
 * Callers:
 *     MiFinishVadDeletion @ 0x14044C9BC (MiFinishVadDeletion.c)
 * Callees:
 *     MiVadPureReserve @ 0x140236380 (MiVadPureReserve.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1404066F0 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14041B3B0 (PsReturnProcessNonPagedPoolQuota.c)
 */

void __fastcall MiReturnVadQuota(__int64 a1, ULONG_PTR a2, int a3)
{
  if ( (*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)) < 0x7FFFFFFFDLL )
  {
    PsReturnProcessNonPagedPoolQuota(a2, 0x88uLL);
    if ( a3 && !MiVadPureReserve(a1) )
      PsReturnProcessPagedPoolQuota(
        a2,
        8
      * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
       - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)))
      + 8);
  }
  else if ( (*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)) == 0x7FFFFFFFDLL )
  {
    PsReturnProcessNonPagedPoolQuota(a2, 0x40uLL);
  }
}
