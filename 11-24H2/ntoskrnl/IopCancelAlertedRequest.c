/*
 * XREFs of IopCancelAlertedRequest @ 0x140A76074
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopWaitForSynchronousIo @ 0x1403B3490 (IopWaitForSynchronousIo.c)
 *     IopWaitForSynchronousIoEvent @ 0x14042ABC0 (IopWaitForSynchronousIoEvent.c)
 *     IoSetInformation @ 0x1407123B0 (IoSetInformation.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x140957634 (IopSynchronousApiServiceTail.c)
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall IopCancelAlertedRequest(_DWORD *Object, PIRP Irp)
{
  unsigned __int8 CurrentIrql; // bl
  char result; // al
  char v6; // si
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
  if ( Object[1] )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    result = IoCancelIrp(Irp);
    v6 = result;
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v6 )
    {
      Interval.QuadPart = -100000LL;
      while ( !Object[1] )
        result = KeDelayExecutionThread(0, 0, &Interval);
    }
    else
    {
      return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
