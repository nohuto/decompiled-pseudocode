/*
 * XREFs of KeQueryPrimaryGroupProcess @ 0x1403A1E28
 * Callers:
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     KiAcquireProcessLockShared @ 0x14039FE44 (KiAcquireProcessLockShared.c)
 *     KiReleaseProcessLockShared @ 0x14039FED0 (KiReleaseProcessLockShared.c)
 */

__int64 __fastcall KeQueryPrimaryGroupProcess(__int64 a1, _WORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  unsigned __int8 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  KiAcquireProcessLockShared(a1, &v8, a3, a4);
  LOBYTE(v6) = v8;
  *a2 = *(_WORD *)(a1 + 416);
  return KiReleaseProcessLockShared(a1, v6);
}
