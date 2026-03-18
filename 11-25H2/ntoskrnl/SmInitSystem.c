/*
 * XREFs of SmInitSystem @ 0x140C54CC4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x140469560 (KeRegisterBugCheckReasonCallback.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SmpSystemStoreCreate @ 0x14078A484 (SmpSystemStoreCreate.c)
 *     EtwRegister @ 0x1408B7480 (EtwRegister.c)
 *     SmHwAcceleratorMgrInitialize @ 0x140A99840 (SmHwAcceleratorMgrInitialize.c)
 *     SmQueryRegistry @ 0x140C54E30 (SmQueryRegistry.c)
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
      if ( EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &qword_140E28590) >= 0 )
      {
        dword_140E28598 |= 1u;
        dword_140E2859C = 64;
      }
    }
    else if ( a1 == 2 && (*(_DWORD *)(v3 + 2224) & 3) != 0 )
    {
      SmpSystemStoreCreate(*((_QWORD *)PspSystemPartition + 3));
    }
    goto LABEL_12;
  }
  memset_0(&SmGlobals, 0, 0x5C8uLL);
  qword_140E28588 = 0LL;
  qword_140E28580 = (__int64)&qword_140E28578;
  qword_140E28578 = (__int64)&qword_140E28578;
  SmHwAcceleratorMgrInitialize((__int64)&unk_140E28048);
  v4 = (_QWORD *)qword_140E28580;
  SmKmGlobals = PsInitialSystemProcess;
  stru_140E285C8.State = 0;
  dword_140E285B4 = 6;
  v5 = (_QWORD *)(v1[3] + 2120LL);
  if ( *(__int64 **)qword_140E28580 != &qword_140E28578 )
    __fastfail(a1 + 3);
  *(_QWORD *)(v1[3] + 2128LL) = qword_140E28580;
  *v5 = &qword_140E28578;
  *v4 = v5;
  qword_140E28580 = (__int64)v5;
  result = SmQueryRegistry(&SmGlobals);
  if ( (int)result >= 0 )
  {
    KeRegisterBugCheckReasonCallback(
      &stru_140E285C8,
      (PKBUGCHECK_REASON_CALLBACK_ROUTINE)SmBugcheckCallback,
      KbCallbackSecondaryDumpData,
      (PUCHAR)"nt!store memory compression");
    *(_QWORD *)(v3 + 2224) = SmGlobals;
LABEL_12:
    dword_140E285B0 = a1 + 1;
    return 0LL;
  }
  return result;
}
