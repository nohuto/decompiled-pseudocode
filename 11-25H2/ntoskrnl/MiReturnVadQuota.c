/*
 * XREFs of MiReturnVadQuota @ 0x140A0A8D0
 * Callers:
 *     MiFinishVadDeletion @ 0x1402A3AE0 (MiFinishVadDeletion.c)
 * Callees:
 *     MiVadPureReserve @ 0x140384DA0 (MiVadPureReserve.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C5970 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C5AE0 (PsReturnProcessPagedPoolQuota.c)
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
