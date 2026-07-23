/*
 * XREFs of IopLiveDumpCorralDpc @ 0x140597570
 * Callers:
 *     <none>
 * Callees:
 *     IopLiveDumpProcessCorralStateChange @ 0x14045F638 (IopLiveDumpProcessCorralStateChange.c)
 *     RtlCaptureContext @ 0x1404FA160 (RtlCaptureContext.c)
 *     KiSaveProcessorControlState @ 0x1406AB1B0 (KiSaveProcessorControlState.c)
 */

char __fastcall IopLiveDumpCorralDpc(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char result; // al
  unsigned int Number; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+24h] [rbp-14h]
  int v7; // [rsp+28h] [rbp-10h]

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0;
  v6 = 0;
  Number = CurrentPrcb->Number;
  RtlCaptureContext(CurrentPrcb->Context);
  KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
  do
    result = IopLiveDumpProcessCorralStateChange(a2, (__int64)&Number);
  while ( v6 != -1 );
  return result;
}
