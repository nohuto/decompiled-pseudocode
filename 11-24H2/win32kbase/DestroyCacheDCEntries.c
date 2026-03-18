/*
 * XREFs of DestroyCacheDCEntries @ 0x140022480
 * Callers:
 *     DestroyThreadsObjects @ 0x14005FF70 (DestroyThreadsObjects.c)
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x140021330 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1401689F0 (DestroyCacheDC.c)
 */

void __fastcall DestroyCacheDCEntries(__int64 a1)
{
  __int64 UserSessionState; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rax

  UserSessionState = W32GetUserSessionState();
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  v3 = *(_QWORD **)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 24LL);
  if ( v3 != (_QWORD *)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 24LL) )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      if ( a1 == v3[7] && (v3[6] & 0x80000002) == 2 )
        DestroyCacheDC(v3);
      v3 = v4;
    }
    while ( v4 != (_QWORD *)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 24LL) );
  }
  v5 = W32GetUserSessionState();
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v5 + 57008) + 48LL));
}
