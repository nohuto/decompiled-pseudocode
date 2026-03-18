/*
 * XREFs of FxInitializeBugCheckDriverInfo @ 0x1400AB9B4
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x140095F6C (FxLibraryGlobalsCommission.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x14006CD64 (RtlStringCopyWorkerA.c)
 */

void FxInitializeBugCheckDriverInfo()
{
  _QWORD *Pool2; // rax
  unsigned __int64 v1; // rdx
  unsigned __int64 *v2; // r8

  dword_1400C802C = 0;
  dword_1400C8028 = 0;
  qword_1400C8030 = 0LL;
  CallbackRecord.Entry = 0LL;
  *(_OWORD *)&CallbackRecord.CallbackRoutine = 0LL;
  *(_OWORD *)&CallbackRecord.Checksum = 0LL;
  if ( !unk_1400C8091 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 560LL, 1917089862LL);
    qword_1400C8030 = Pool2;
    if ( Pool2 )
    {
      dword_1400C802C = 10;
      *Pool2 = 0LL;
      *((_DWORD *)qword_1400C8030 + 2) = 1;
      *((_DWORD *)qword_1400C8030 + 3) = 35;
      *((_DWORD *)qword_1400C8030 + 4) = 0;
      if ( (int)RtlStringCopyWorkerA((char *)qword_1400C8030 + 20, v1, v2, "Wdf01000") < 0 )
        *((_BYTE *)qword_1400C8030 + 20) = 0;
      ++dword_1400C8028;
      CallbackRecord.State = 0;
      KeRegisterBugCheckReasonCallback(
        &CallbackRecord,
        FxpLibraryBugCheckCallback,
        KbCallbackSecondaryDumpData,
        (PUCHAR)"Wdf01000");
    }
  }
}
