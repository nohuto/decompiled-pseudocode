/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x14058FDC0
 * Callers:
 *     BgkNotifyDisplayOwnershipLost @ 0x14058FF80 (BgkNotifyDisplayOwnershipLost.c)
 *     BgkSetDisplayOwnership @ 0x14058FFE0 (BgkSetDisplayOwnership.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x1405906C0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     InbvSetFunction @ 0x14058F550 (InbvSetFunction.c)
 *     BgkpDisableConsole @ 0x1405902EC (BgkpDisableConsole.c)
 *     BgkpTryEnableConsole @ 0x1405903D0 (BgkpTryEnableConsole.c)
 *     BgLibraryEnable @ 0x140697D44 (BgLibraryEnable.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     BgkResumeFinished @ 0x140B6CD54 (BgkResumeFinished.c)
 *     BgkDestroy @ 0x140BB0170 (BgkDestroy.c)
 *     BgkpLockBgfxCodeSection @ 0x140BB04F0 (BgkpLockBgfxCodeSection.c)
 *     BgLibraryDisable @ 0x140BB0724 (BgLibraryDisable.c)
 *     BgSetFrameBufferAccess @ 0x140BB0814 (BgSetFrameBufferAccess.c)
 *     BgConsoleDestroyInterface @ 0x140BB0940 (BgConsoleDestroyInterface.c)
 *     BgConsoleGetInterface @ 0x140BB09A0 (BgConsoleGetInterface.c)
 *     BgDisplayFade @ 0x140BB36A4 (BgDisplayFade.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140BB4910 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipChange(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v14[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v15; // [rsp+58h] [rbp-20h]

  result = 0LL;
  memset(v14, 0, sizeof(v14));
  v15 = 0LL;
  if ( byte_140E65DB0 && !a1 )
  {
    BgkResumeFinished();
    qword_140E65D90 = 0LL;
    result = 0LL;
    byte_140E65DB1 = 0;
    return result;
  }
  if ( a1 != byte_140E65DB1 )
  {
    if ( !a1 )
    {
      if ( a2 )
      {
        qword_140E65D60 = a2;
      }
      else if ( !qword_140E65D60 )
      {
        return 3221225712LL;
      }
      BgDisplayFade();
      byte_140E65DA9 = 0;
      byte_140E65D68 = 0;
      BgkpDisableConsole();
      v5 = BgLibraryDisable();
      if ( v5 < 0 )
      {
        BgkDestroy();
        InbvSetFunction(3, v6, v7, v8);
        v5 = 0;
      }
      else
      {
        byte_140E65DB1 = 0;
        byte_140E65D80 = 0;
        if ( qword_140E65D70 )
        {
          BgConsoleDestroyInterface();
          qword_140E65D70 = 0LL;
        }
      }
      BgSetFrameBufferAccess(0LL, 0LL, 0LL);
      BgkpUnlockBgfxCodeSection();
      if ( qword_140E65D90 )
      {
        guard_dispatch_icall_no_overrides(v10, v9, v11, v12);
        qword_140E65D90 = 0LL;
      }
      return (unsigned int)v5;
    }
    if ( !qword_140E65D60 )
      return 3221225473LL;
    v13 = 0LL;
    result = guard_dispatch_icall_no_overrides(0LL, v14, &v13, a4);
    if ( (int)result >= 0 )
    {
      qword_140E65D90 = v13;
      BgkpLockBgfxCodeSection();
      v5 = BgLibraryEnable(v14, 0LL);
      if ( v5 >= 0 )
        byte_140E65DB1 = 1;
      qword_140E65D70 = BgConsoleGetInterface();
      if ( qword_140E65D70 )
        guard_dispatch_icall_no_overrides(0LL, 4291217094LL, (unsigned int)dword_140E65DAC, 0LL);
      BgkpTryEnableConsole();
      return (unsigned int)v5;
    }
  }
  return result;
}
