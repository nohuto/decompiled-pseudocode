/*
 * XREFs of WheapTrackPendingPage @ 0x1407C9B24
 * Callers:
 *     WheapLogPageOfflineAttemptEvent @ 0x1407C8A78 (WheapLogPageOfflineAttemptEvent.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WheapPushPendingOfflineWrapper @ 0x1407C9AF4 (WheapPushPendingOfflineWrapper.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

char __fastcall WheapTrackPendingPage(struct _SINGLE_LIST_ENTRY *a1)
{
  unsigned int v2; // edx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdx
  _SINGLE_LIST_ENTRY *Pool2; // rax
  _DWORD Src[8]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_DWORD *)off_140E09748 << 12;
  if ( v2 > 0xA00000 )
    v2 = 10485760;
  v3 = v2;
  v4 = 16LL * dword_140EF7B60;
  if ( v4 >= v3 )
  {
    Src[7] = 0;
    Src[0] = 1733060695;
    Src[1] = 1;
    Src[2] = 32;
    Src[3] = 1;
    Src[5] = -2147483597;
    Src[4] = 1280201291;
    Src[6] = 2;
    LOBYTE(Pool2) = WheaLogInternalEvent(Src, v4);
  }
  else
  {
    Pool2 = (_SINGLE_LIST_ENTRY *)ExAllocatePool2(0x40uLL, 0x10uLL, 0x61656857u);
    if ( Pool2 )
    {
      _InterlockedIncrement(&dword_140EF7B60);
      Pool2[1].Next = a1;
      LOBYTE(Pool2) = (unsigned __int8)WheapPushPendingOfflineWrapper(Pool2);
    }
  }
  return (char)Pool2;
}
