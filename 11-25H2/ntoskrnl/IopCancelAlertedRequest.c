/*
 * XREFs of IopCancelAlertedRequest @ 0x1409868F0
 * Callers:
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     IopWaitForSynchronousIo @ 0x1402A1910 (IopWaitForSynchronousIo.c)
 *     IopWaitForSynchronousIoEvent @ 0x14043A8D0 (IopWaitForSynchronousIoEvent.c)
 *     IoSetInformation @ 0x140708720 (IoSetInformation.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x140937538 (IopSynchronousApiServiceTail.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x14041B240 (IoCancelIrp.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
