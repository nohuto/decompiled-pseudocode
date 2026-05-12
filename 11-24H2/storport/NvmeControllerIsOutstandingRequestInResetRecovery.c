/*
 * XREFs of NvmeControllerIsOutstandingRequestInResetRecovery @ 0x1401375B4
 * Callers:
 *     NvmeControllerResetRecovery @ 0x140137858 (NvmeControllerResetRecovery.c)
 * Callees:
 *     IsOutstandingRequestInNvmeControllerQueueEx @ 0x140136C44 (IsOutstandingRequestInNvmeControllerQueueEx.c)
 */

char __fastcall NvmeControllerIsOutstandingRequestInResetRecovery(__int64 a1)
{
  unsigned int v2; // r11d
  int v3; // r11d

  v2 = 0;
  if ( !*(_WORD *)(a1 + 22) )
    return IsOutstandingRequestInNvmeControllerQueueEx(a1, *(_QWORD *)(a1 + 712)) != 0;
  while ( !IsOutstandingRequestInNvmeControllerQueueEx(a1, *(_QWORD *)(a1 + 728) + 192LL * v2) )
  {
    v2 = v3 + 1;
    if ( v2 >= *(unsigned __int16 *)(a1 + 22) )
      return IsOutstandingRequestInNvmeControllerQueueEx(a1, *(_QWORD *)(a1 + 712)) != 0;
  }
  return 1;
}
