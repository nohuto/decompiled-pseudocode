/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x14058C5E0
 * Callers:
 *     BgkNotifyDisplayOwnershipLost @ 0x14058C7A0 (BgkNotifyDisplayOwnershipLost.c)
 *     BgkSetDisplayOwnership @ 0x14058C800 (BgkSetDisplayOwnership.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x14058CEE0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     InbvSetFunction @ 0x14058BD70 (InbvSetFunction.c)
 *     BgkpDisableConsole @ 0x14058CB0C (BgkpDisableConsole.c)
 *     BgkpTryEnableConsole @ 0x14058CBF0 (BgkpTryEnableConsole.c)
 *     BgLibraryEnable @ 0x14068C9F4 (BgLibraryEnable.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     BgkResumeFinished @ 0x140B5DC74 (BgkResumeFinished.c)
 *     BgkDestroy @ 0x140BA0170 (BgkDestroy.c)
 *     BgkpLockBgfxCodeSection @ 0x140BA04F0 (BgkpLockBgfxCodeSection.c)
 *     BgLibraryDisable @ 0x140BA0724 (BgLibraryDisable.c)
 *     BgSetFrameBufferAccess @ 0x140BA0814 (BgSetFrameBufferAccess.c)
 *     BgConsoleDestroyInterface @ 0x140BA0940 (BgConsoleDestroyInterface.c)
 *     BgConsoleGetInterface @ 0x140BA09A0 (BgConsoleGetInterface.c)
 *     BgDisplayFade @ 0x140BA36A4 (BgDisplayFade.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140BA4910 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipChange(char a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // rcx
  _OWORD v5[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v6; // [rsp+58h] [rbp-20h]

  result = 0LL;
  memset(v5, 0, sizeof(v5));
  v6 = 0LL;
  if ( byte_140E65B50 && !a1 )
  {
    BgkResumeFinished();
    qword_140E65B30 = 0LL;
    result = 0LL;
    byte_140E65B52 = 0;
    return result;
  }
  if ( a1 != byte_140E65B52 )
  {
    if ( !a1 )
    {
      if ( a2 )
      {
        qword_140E65B10 = a2;
      }
      else if ( !qword_140E65B10 )
      {
        return 3221225712LL;
      }
      BgDisplayFade();
      byte_140E65B51 = 0;
      byte_140E65B21 = 0;
      BgkpDisableConsole();
      v3 = BgLibraryDisable();
      if ( v3 < 0 )
      {
        BgkDestroy();
        InbvSetFunction(3);
        v3 = 0;
      }
      else
      {
        byte_140E65B52 = 0;
        byte_140E65B20 = 0;
        if ( qword_140E65B08 )
        {
          BgConsoleDestroyInterface();
          qword_140E65B08 = 0LL;
        }
      }
      BgSetFrameBufferAccess(0LL, 0LL, 0LL);
      BgkpUnlockBgfxCodeSection();
      if ( qword_140E65B30 )
      {
        guard_dispatch_icall_no_overrides(v4);
        qword_140E65B30 = 0LL;
      }
      return (unsigned int)v3;
    }
    if ( !qword_140E65B10 )
      return 3221225473LL;
    result = guard_dispatch_icall_no_overrides(0LL);
    if ( (int)result >= 0 )
    {
      qword_140E65B30 = 0LL;
      BgkpLockBgfxCodeSection();
      v3 = BgLibraryEnable(v5, 0LL);
      if ( v3 >= 0 )
        byte_140E65B52 = 1;
      qword_140E65B08 = BgConsoleGetInterface();
      if ( qword_140E65B08 )
        guard_dispatch_icall_no_overrides(0LL);
      BgkpTryEnableConsole();
      return (unsigned int)v3;
    }
  }
  return result;
}
