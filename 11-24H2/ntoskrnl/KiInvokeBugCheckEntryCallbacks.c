/*
 * XREFs of KiInvokeBugCheckEntryCallbacks @ 0x1405B1088
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KiAttemptBugcheckRecovery @ 0x1405C2EB4 (KiAttemptBugcheckRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C3730 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KeValidateBugCheckCallbackRecord @ 0x1405AF8E0 (KeValidateBugCheckCallbackRecord.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiInvokeBugCheckEntryCallbacks(unsigned int a1)
{
  _UNKNOWN **v1; // rax
  PVOID *v3; // rbx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  PVOID *v6; // [rsp+88h] [rbp+20h] BYREF

  v1 = &retaddr;
  v3 = (PVOID *)KeBugCheckReasonCallbackListHead;
  if ( KeBugCheckReasonCallbackListHead && qword_140F22318 )
  {
    v6 = &KeBugCheckReasonCallbackListHead;
    while ( v3 != &KeBugCheckReasonCallbackListHead )
    {
      LOBYTE(v1) = KeValidateBugCheckCallbackRecord((__int64)v3, a1, &v6);
      if ( (_BYTE)v1 )
      {
        LOBYTE(v1) = guard_dispatch_icall_no_overrides(a1, v3);
        *((_BYTE *)v3 + 44) = 3;
      }
      else if ( !v6 )
      {
        return (char)v1;
      }
      v3 = (PVOID *)*v3;
    }
  }
  return (char)v1;
}
