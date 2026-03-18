/*
 * XREFs of DxgkCaptureQueryInterface @ 0x1401B3B34
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1403A9E70 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DxgkCaptureQueryInterface(_QWORD *a1, _DWORD *a2)
{
  __int64 v3; // rcx
  _WORD *v4; // rdi
  __int64 result; // rax
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+38h] [rbp-20h]

  v3 = *(unsigned __int16 *)a1;
  v4 = (_WORD *)a1 + 1;
  if ( (_WORD)v3 == 48 && *v4 == 1 )
  {
    a1[1] = 0LL;
    a1[2] = W32kStub_DxgkEngReleaseWin32kLocks;
    a1[3] = W32kStub_DxgkEngReleaseWin32kLocks;
    a1[4] = DxgkCaptureAcquireSynchronization;
    a1[5] = DxgkCaptureReleaseSynchronization;
    result = 0LL;
    *a2 = 48;
  }
  else
  {
    WdLogSingleEntry5(2LL, -1073741811LL, v3, 528LL, (unsigned __int16)*v4, 1LL);
    v7 = (unsigned __int16)*v4;
    v6 = *(unsigned __int16 *)a1;
    WdLogGlobalForLineNumber = 157;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x Invalid DXGCAPTURE_INTERFACE Mismatch 0x%I64x 0x%I64x version 0x%I64x 0x%I64x",
      -1073741811LL,
      v6,
      528LL,
      v7,
      1LL);
    return 3221225485LL;
  }
  return result;
}
