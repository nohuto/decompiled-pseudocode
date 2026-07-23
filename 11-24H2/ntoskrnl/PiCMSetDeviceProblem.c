/*
 * XREFs of PiCMSetDeviceProblem @ 0x140ABC210
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiCMCaptureProblemInputData @ 0x1406F92BC (PiCMCaptureProblemInputData.c)
 *     PiCMSetProblem @ 0x14072F6C4 (PiCMSetProblem.c)
 *     _CmValidateDeviceName @ 0x1408B59E0 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1408BCA94 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHavePrivilege @ 0x140A803A8 (PiAuDoesClientHavePrivilege.c)
 */

__int64 __fastcall PiCMSetDeviceProblem(
        _OWORD *a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r10d
  int v15; // r11d
  _OWORD v16[25]; // [rsp+30h] [rbp-1E8h] BYREF
  int v17; // [rsp+1CCh] [rbp-4Ch]

  memset_0(v16, 0, 0x1A0uLL);
  *a6 = 0;
  result = PiCMCaptureProblemInputData(a1, a2, v10, v16);
  if ( (int)result >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(4u) && PiAuDoesClientHavePrivilege(0xAu) )
    {
      if ( WORD4(v16[0]) && a3 && a4 >= 8 && (unsigned int)(DWORD1(v16[0]) - 1) <= 1 )
      {
        v13 = CmValidateDeviceName(v12, (_WORD *)v16 + 4);
        if ( v13 >= 0 )
          v13 = PiCMSetProblem((PCWSTR)v16 + 4, v15, v14);
      }
      else
      {
        v13 = -1073741811;
      }
    }
    else
    {
      v13 = -1073741790;
    }
    return PiCMReturnBasicResultData(v13, v17, a3, a4, a6);
  }
  return result;
}
