/*
 * XREFs of DestroyMonitorDCs @ 0x1400A2C70
 * Callers:
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 * Callees:
 *     ?SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x14000F010 (-SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GreUnlockVisRgn @ 0x140021330 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     GreSelectRedirectionBitmap @ 0x1400E07B4 (GreSelectRedirectionBitmap.c)
 *     HdevFromMonitor @ 0x140141C20 (HdevFromMonitor.c)
 *     DestroyCacheDC @ 0x1401689F0 (DestroyCacheDC.c)
 */

void __fastcall DestroyMonitorDCs(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 *v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax

  UserSessionState = W32GetUserSessionState(a1);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  v3 = *(_QWORD *)(W32GetUserSessionState(v2) + 57008);
  v4 = *(__int64 **)(v3 + 24);
  v5 = *(_QWORD *)(W32GetUserSessionState(v3) + 57008) + 24LL;
  if ( v4 != (__int64 *)v5 )
  {
    do
    {
      v6 = v4[9];
      v7 = (__int64 *)*v4;
      if ( v6 && (unsigned int)HdevFromMonitor() == -1 )
      {
        v9 = *((_DWORD *)v4 + 12);
        if ( v9 >= 0 )
        {
          DestroyCacheDC(v4);
        }
        else
        {
          v4[9] = 0LL;
          v10 = v9 | 0x4000000;
          *((_DWORD *)v4 + 12) = v10;
          if ( (v10 & 0x4000) != 0 )
          {
            GreSelectRedirectionBitmap(v4[2], 0LL);
            *((_DWORD *)v4 + 12) &= ~0x4000u;
            tagDCE::SetPwndRedirect((tagDCE *)v4, 0LL);
          }
        }
      }
      v4 = v7;
      v5 = *(_QWORD *)(W32GetUserSessionState(v6) + 57008) + 24LL;
    }
    while ( v7 != (__int64 *)v5 );
  }
  v8 = W32GetUserSessionState(v5);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v8 + 57008) + 48LL));
}
