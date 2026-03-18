/*
 * XREFs of _WindowFromDC @ 0x14015A3B8
 * Callers:
 *     _ServerFixupMenuDC @ 0x14015A1FC (_ServerFixupMenuDC.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1401AC130 (SfnINLPDRAWITEMSTRUCT.c)
 *     SfnINPAINTCLIPBRD @ 0x1402B9FC0 (SfnINPAINTCLIPBRD.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402DDA44 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowFromDC(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *i; // rbx
  __int64 v10; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgnShared(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  v4 = 0LL;
  v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 57008);
  for ( i = *(__int64 **)(v7 + 24); ; i = (__int64 *)*i )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 57008) + 24LL;
    if ( i == (__int64 *)v8 )
      break;
    if ( i[2] == a1 )
    {
      if ( (i[6] & 0x80C01000) == 0x1000 )
        v4 = i[10];
      break;
    }
  }
  v10 = W32GetUserSessionState(v8, v7);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v10 + 57008) + 48LL));
  return v4;
}
