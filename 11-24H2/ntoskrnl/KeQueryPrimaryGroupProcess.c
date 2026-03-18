/*
 * XREFs of KeQueryPrimaryGroupProcess @ 0x1403B3618
 * Callers:
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     KiAcquireProcessLockShared @ 0x1403B1634 (KiAcquireProcessLockShared.c)
 *     KiReleaseProcessLockShared @ 0x1403B16C0 (KiReleaseProcessLockShared.c)
 */

__int64 __fastcall KeQueryPrimaryGroupProcess(__int64 a1, _WORD *a2)
{
  __int64 v4; // rdx
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  KiAcquireProcessLockShared(a1, &v6);
  LOBYTE(v4) = v6;
  *a2 = *(_WORD *)(a1 + 416);
  return KiReleaseProcessLockShared(a1, v4);
}
