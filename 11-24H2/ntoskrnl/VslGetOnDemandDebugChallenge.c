/*
 * XREFs of VslGetOnDemandDebugChallenge @ 0x14070D458
 * Callers:
 *     PsIumGetOnDemandDebugChallenge @ 0x140AAD744 (PsIumGetOnDemandDebugChallenge.c)
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslGetOnDemandDebugChallenge(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  int v9; // ebx
  unsigned int v10; // eax
  __int64 *v11[10]; // [rsp+40h] [rbp-10E8h] BYREF
  _BYTE v12[8]; // [rsp+90h] [rbp-1098h] BYREF
  __int64 v13; // [rsp+98h] [rbp-1090h]
  size_t Size; // [rsp+A0h] [rbp-1088h]
  __int64 *v15; // [rsp+A8h] [rbp-1080h]
  struct _MDL Src[85]; // [rsp+100h] [rbp-1028h] BYREF

  memset_0(v12, 0, 0x68uLL);
  memset_0(v11, 0, 0x48uLL);
  result = VslpLockPagesForTransfer((__int64)v11, Src, 0x1000u, IoWriteAccess, 0);
  if ( (int)result >= 0 )
  {
    v13 = *(_QWORD *)(a1 + 368);
    Size = (size_t)v11[0];
    v15 = v11[7];
    v9 = VslpEnterIumSecureMode(2u, 0x12u, 0, (__int64)v12);
    VslpUnlockPagesForTransfer(v11);
    if ( v9 >= 0 )
    {
      v10 = Size;
      *a4 = Size;
      if ( v10 <= a3 )
      {
        if ( a2 )
          memmove(a2, Src, v10);
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
    return (unsigned int)v9;
  }
  return result;
}
