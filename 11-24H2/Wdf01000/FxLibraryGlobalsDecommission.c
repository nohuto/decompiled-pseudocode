/*
 * XREFs of FxLibraryGlobalsDecommission @ 0x140096154
 * Callers:
 *     FxLibraryCommonDecommission @ 0x14008E754 (FxLibraryCommonDecommission.c)
 * Callees:
 *     <none>
 */

void FxLibraryGlobalsDecommission()
{
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  unk_1400C8070 = 0LL;
  unk_1400C8084 = 0;
  if ( CallbackRecord.CallbackRoutine )
  {
    KeDeregisterBugCheckReasonCallback(&CallbackRecord);
    CallbackRecord.CallbackRoutine = 0LL;
    if ( qword_1400C8030 )
    {
      dword_1400C8028 = 0;
      dword_1400C802C = 0;
      ExFreePoolWithTag(qword_1400C8030, 0);
      qword_1400C8030 = 0LL;
    }
  }
  unk_1400C8008 = 0;
}
