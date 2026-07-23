/*
 * XREFs of IopWaitForSynchronousIo @ 0x1403B3490
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopQueryXxxInformation @ 0x140952FC0 (IopQueryXxxInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IopCancelAlertedRequest @ 0x140A76074 (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopWaitForSynchronousIo(PIRP Irp, unsigned int *a2, KPROCESSOR_MODE a3)
{
  int v4; // ebp
  KPROCESSOR_MODE v8; // r8
  NTSTATUS v9; // eax
  bool v10; // r14
  unsigned __int8 CurrentIrql; // di

  v4 = a2[20] & 4;
  while ( (a2[38] & 0x7F) != 0 || !a2[39] )
  {
    v8 = a3;
    if ( !v4 )
      v8 = 0;
    v9 = KeWaitForSingleObject(a2 + 38, Executive, v8, 1u, 0LL);
    if ( v9 != 192 && v9 != 257 )
      break;
    if ( !v4 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
    {
      v10 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1LL);
      if ( !a2[39] )
        v10 = Irp->Cancel == 1;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      if ( !v10 )
        continue;
    }
    IopCancelAlertedRequest(a2 + 38, Irp);
    return a2[14];
  }
  return a2[14];
}
