/*
 * XREFs of IopWaitForSynchronousIoEvent @ 0x14042ABC0
 * Callers:
 *     NtCopyFileChunk @ 0x140ABE950 (NtCopyFileChunk.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IopCancelAlertedRequest @ 0x140A76074 (IopCancelAlertedRequest.c)
 */

NTSTATUS __fastcall IopWaitForSynchronousIoEvent(PIRP Irp, KPROCESSOR_MODE a2, char a3, _DWORD *a4)
{
  NTSTATUS v4; // esi
  NTSTATUS result; // eax
  KPROCESSOR_MODE v10; // r8
  bool v11; // bp
  unsigned __int8 CurrentIrql; // di

  v4 = 0;
  do
  {
    if ( (*(_BYTE *)a4 & 0x7F) == 0 && a4[1] )
      return v4;
    v10 = a2;
    if ( !a3 )
      v10 = 0;
    result = KeWaitForSingleObject(a4, Executive, v10, 1u, 0LL);
    v4 = result;
    if ( result != 192 && result != 257 )
      return result;
    if ( a3 || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
      break;
    v11 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1LL);
    if ( !a4[1] )
      v11 = Irp->Cancel == 1;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  while ( !v11 );
  IopCancelAlertedRequest(a4, Irp);
  return -1073741536;
}
