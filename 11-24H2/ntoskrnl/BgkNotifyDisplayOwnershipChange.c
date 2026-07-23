/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x14058CDE0
 * Callers:
 *     BgkNotifyDisplayOwnershipLost @ 0x14058CFA0 (BgkNotifyDisplayOwnershipLost.c)
 *     BgkSetDisplayOwnership @ 0x14058D000 (BgkSetDisplayOwnership.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x14058D6E0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     InbvSetFunction @ 0x14058C570 (InbvSetFunction.c)
 *     BgkpDisableConsole @ 0x14058D30C (BgkpDisableConsole.c)
 *     BgkpTryEnableConsole @ 0x14058D3F0 (BgkpTryEnableConsole.c)
 *     BgLibraryEnable @ 0x140698DC4 (BgLibraryEnable.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     BgkResumeFinished @ 0x140B6E5F4 (BgkResumeFinished.c)
 *     BgkDestroy @ 0x140BB2170 (BgkDestroy.c)
 *     BgkpLockBgfxCodeSection @ 0x140BB24F0 (BgkpLockBgfxCodeSection.c)
 *     BgLibraryDisable @ 0x140BB2724 (BgLibraryDisable.c)
 *     BgSetFrameBufferAccess @ 0x140BB2814 (BgSetFrameBufferAccess.c)
 *     BgConsoleDestroyInterface @ 0x140BB2940 (BgConsoleDestroyInterface.c)
 *     BgConsoleGetInterface @ 0x140BB29A0 (BgConsoleGetInterface.c)
 *     BgDisplayFade @ 0x140BB56A4 (BgDisplayFade.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140BB6910 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipChange(char a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _OWORD v6[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v7; // [rsp+58h] [rbp-20h]

  result = 0LL;
  memset(v6, 0, sizeof(v6));
  v7 = 0LL;
  if ( byte_140E65EE2 && !a1 )
  {
    BgkResumeFinished();
    qword_140E65ED8 = 0LL;
    result = 0LL;
    byte_140E65EE8 = 0;
    return result;
  }
  if ( a1 != byte_140E65EE8 )
  {
    if ( !a1 )
    {
      if ( a2 )
      {
        qword_140E65EA8 = a2;
      }
      else if ( !qword_140E65EA8 )
      {
        return 3221225712LL;
      }
      BgDisplayFade();
      byte_140E65EE1 = 0;
      byte_140E65EA0 = 0;
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
        byte_140E65EE8 = 0;
        byte_140E65EC0 = 0;
        if ( qword_140E65EB0 )
        {
          BgConsoleDestroyInterface();
          qword_140E65EB0 = 0LL;
        }
      }
      BgSetFrameBufferAccess(0LL, 0LL, 0LL);
      BgkpUnlockBgfxCodeSection();
      if ( qword_140E65ED8 )
      {
        guard_dispatch_icall_no_overrides(v5, v4);
        qword_140E65ED8 = 0LL;
      }
      return (unsigned int)v3;
    }
    if ( !qword_140E65EA8 )
      return 3221225473LL;
    result = guard_dispatch_icall_no_overrides(0LL, v6);
    if ( (int)result >= 0 )
    {
      qword_140E65ED8 = 0LL;
      BgkpLockBgfxCodeSection();
      v3 = BgLibraryEnable(v6, 0LL);
      if ( v3 >= 0 )
        byte_140E65EE8 = 1;
      qword_140E65EB0 = BgConsoleGetInterface();
      if ( qword_140E65EB0 )
        guard_dispatch_icall_no_overrides(0LL, 4291217094LL);
      BgkpTryEnableConsole();
      return (unsigned int)v3;
    }
  }
  return result;
}
