/*
 * XREFs of NtUserCsDdeUninitialize @ 0x1C01CD8F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDestroyThreadDDEObject @ 0x1C009ED40 (xxxDestroyThreadDDEObject.c)
 *     HMValidateHandleNoRip @ 0x1C00DEAEC (HMValidateHandleNoRip.c)
 */

__int64 __fastcall NtUserCsDdeUninitialize(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 0LL);
  v2 = HMValidateHandleNoRip(a1, 9);
  if ( v2 )
    xxxDestroyThreadDDEObject(gptiCurrent, v2);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return 1LL;
}
