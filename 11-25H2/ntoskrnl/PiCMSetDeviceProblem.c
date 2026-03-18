/*
 * XREFs of PiCMSetDeviceProblem @ 0x140ABD29C
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C5B30 (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PiCMCaptureProblemInputData @ 0x1406EF80C (PiCMCaptureProblemInputData.c)
 *     PiCMSetProblem @ 0x140725498 (PiCMSetProblem.c)
 *     PiCMReturnBasicResultData @ 0x140934C74 (PiCMReturnBasicResultData.c)
 *     _CmValidateDeviceName @ 0x14095AE80 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHaveAccess @ 0x14095D51C (PiAuDoesClientHaveAccess.c)
 *     PiAuDoesClientHavePrivilege @ 0x14095EC5C (PiAuDoesClientHavePrivilege.c)
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
