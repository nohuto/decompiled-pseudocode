/*
 * XREFs of SmInitSystem @ 0x140C6694C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x140467D20 (KeRegisterBugCheckReasonCallback.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SmpSystemStoreCreate @ 0x140799854 (SmpSystemStoreCreate.c)
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 *     SmHwAcceleratorMgrInitialize @ 0x140A9E684 (SmHwAcceleratorMgrInitialize.c)
 *     SmQueryRegistry @ 0x140C66AB8 (SmQueryRegistry.c)
 */

__int64 __fastcall SmInitSystem(int a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 result; // rax

  v1 = PspSystemPartition;
  v3 = *((_QWORD *)PspSystemPartition + 3);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &qword_140E287D0) >= 0 )
      {
        dword_140E287D8 |= 1u;
        dword_140E287DC = 64;
      }
    }
    else if ( a1 == 2 && (*(_DWORD *)(v3 + 2224) & 3) != 0 )
    {
      SmpSystemStoreCreate(*((_QWORD *)PspSystemPartition + 3));
    }
    goto LABEL_12;
  }
  memset_0(&SmGlobals, 0, 0x5C8uLL);
  qword_140E287C8 = 0LL;
  qword_140E287C0 = (__int64)&qword_140E287B8;
  qword_140E287B8 = (__int64)&qword_140E287B8;
  SmHwAcceleratorMgrInitialize((__int64)&unk_140E28288);
  v4 = (_QWORD *)qword_140E287C0;
  SmKmGlobals = PsInitialSystemProcess;
  stru_140E28808.State = 0;
  dword_140E287F4 = 6;
  v5 = (_QWORD *)(v1[3] + 2120LL);
  if ( *(__int64 **)qword_140E287C0 != &qword_140E287B8 )
    __fastfail(a1 + 3);
  *(_QWORD *)(v1[3] + 2128LL) = qword_140E287C0;
  *v5 = &qword_140E287B8;
  *v4 = v5;
  qword_140E287C0 = (__int64)v5;
  result = SmQueryRegistry(&SmGlobals);
  if ( (int)result >= 0 )
  {
    KeRegisterBugCheckReasonCallback(
      &stru_140E28808,
      (PKBUGCHECK_REASON_CALLBACK_ROUTINE)SmBugcheckCallback,
      KbCallbackSecondaryDumpData,
      (PUCHAR)"nt!store memory compression");
    *(_QWORD *)(v3 + 2224) = SmGlobals;
LABEL_12:
    dword_140E287F0 = a1 + 1;
    return 0LL;
  }
  return result;
}
