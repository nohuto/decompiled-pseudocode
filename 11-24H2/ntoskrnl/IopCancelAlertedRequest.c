/*
 * XREFs of IopCancelAlertedRequest @ 0x140A7BD74
 * Callers:
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     IopWaitForSynchronousIo @ 0x1403C48D0 (IopWaitForSynchronousIo.c)
 *     IopWaitForSynchronousIoEvent @ 0x140438000 (IopWaitForSynchronousIoEvent.c)
 *     IoSetInformation @ 0x140714820 (IoSetInformation.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14096F574 (IopSynchronousApiServiceTail.c)
 *     NtQueryInformationFile @ 0x14096F610 (NtQueryInformationFile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x140418FA0 (IoCancelIrp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
