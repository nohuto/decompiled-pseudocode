/*
 * XREFs of ?GetInstance@CContentRects@@CAPEAV1@XZ @ 0x1401587A0
 * Callers:
 *     InitializeInputComponents @ 0x1401895D0 (InitializeInputComponents.c)
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1401A9610 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?GetCount@CContentRects@@SAIXZ @ 0x1401A9688 (-GetCount@CContentRects@@SAIXZ.c)
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1401A97B4 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

struct CContentRects *__fastcall CContentRects::GetInstance(__int64 a1)
{
  __int64 UserSessionState; // rdi
  __int64 v2; // rax
  __int64 v3; // rbx

  UserSessionState = W32GetUserSessionState(a1);
  if ( !*(_QWORD *)(UserSessionState + 70968) )
  {
    v2 = Win32AllocPoolZInitImpl(256LL, 0x58uLL, 0x72636355u);
    *(_QWORD *)(UserSessionState + 70968) = v2;
    v3 = v2;
    if ( v2 )
    {
      *(_DWORD *)(v2 + 84) = 0;
      *(_QWORD *)v2 = 0LL;
      *(_QWORD *)(v2 + 8) = 0LL;
      memset((void *)(v2 + 16), 0, 0x40uLL);
      *(_DWORD *)(v3 + 80) = 0;
    }
  }
  return *(struct CContentRects **)(UserSessionState + 70968);
}
