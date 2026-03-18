/*
 * XREFs of DestroyCacheDC @ 0x1401689F0
 * Callers:
 *     DestroyCacheDCEntries @ 0x140022480 (DestroyCacheDCEntries.c)
 *     ReleaseCacheDC @ 0x1400225A0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     DestroyMonitorDCs @ 0x1400A2C70 (DestroyMonitorDCs.c)
 *     xxxUserProcessCallout @ 0x140167490 (xxxUserProcessCallout.c)
 *     DelayedDestroyCacheDC @ 0x1401688B0 (DelayedDestroyCacheDC.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401B2608 (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     ?SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x14000EF9C (-SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x14000F010 (-SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x14000F084 (-SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GreSetDCOwnerEx @ 0x14000F100 (GreSetDCOwnerEx.c)
 *     DeleteMaybeSpecialRgn @ 0x14000F440 (DeleteMaybeSpecialRgn.c)
 *     GreDeleteObject @ 0x140010390 (GreDeleteObject.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     GreUnlockVisRgn @ 0x140021330 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     GreSelectRedirectionBitmap @ 0x1400E07B4 (GreSelectRedirectionBitmap.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1400E668C (IsGreSelectRedirectionBitmapSupported.c)
 *     GreMarkDeletableRgn @ 0x1401077C0 (GreMarkDeletableRgn.c)
 *     GreMarkPendingDestroyDC @ 0x14011C458 (GreMarkPendingDestroyDC.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall DestroyCacheDC(_QWORD *Buffer, __int64 a2)
{
  _QWORD *i; // rbx
  unsigned int v4; // esi
  int v5; // ebp
  __int64 UserSessionState; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v10; // edi
  int v11; // eax
  int v12; // edi
  unsigned __int64 v13; // rcx
  HRGN v14; // rcx
  HRGN v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r10
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v26; // rax

  i = Buffer;
  v4 = 0;
  v5 = 0;
  if ( !Buffer )
  {
    UserSessionState = W32GetUserSessionState(0LL);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
    v5 = 1;
    Buffer = *(_QWORD **)(W32GetUserSessionState(v7) + 57008);
    for ( i = (_QWORD *)Buffer[3]; ; i = (_QWORD *)*i )
    {
      Buffer = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(Buffer) + 57008) + 24LL);
      if ( i == Buffer )
        break;
      if ( i[2] == a2 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  if ( !i )
  {
LABEL_6:
    v8 = W32GetUserSessionState(Buffer);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v8 + 57008) + 48LL));
    return 0LL;
  }
  v10 = *((_DWORD *)i + 12);
  v11 = v10 | 0x400000;
  v12 = v10 & 0x400000;
  *((_DWORD *)i + 12) = v11;
  if ( (v11 & 0x40000) == 0 )
  {
    v13 = i[3];
    if ( v13 > 2 )
      GreMarkDeletableRgn(v13);
    DeleteMaybeSpecialRgn((HRGN)i[3]);
    i[3] = 0LL;
  }
  v14 = (HRGN)i[4];
  if ( v14 )
  {
    GreDeleteObject(v14);
    i[4] = 0LL;
  }
  v15 = (HRGN)i[5];
  if ( v15 )
  {
    GreDeleteObject(v15);
    i[5] = 0LL;
  }
  if ( !GreSetDCOwnerEx((struct HOBJ__ *)i[2], 0x80000002, 1, 0) )
    goto LABEL_34;
  if ( (i[6] & 0x4000) != 0 )
  {
    if ( !v12 && !i[12] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2107LL);
    if ( (int)IsGreSelectRedirectionBitmapSupported(v17, v16) >= 0 )
      GreSelectRedirectionBitmap(i[2], 0LL);
    *((_DWORD *)i + 12) &= ~0x4000u;
    tagDCE::SetPwndRedirect((tagDCE *)i, 0LL);
  }
  if ( !(unsigned int)GrepDeleteDC((HDC)i[2], 0x400000u) )
  {
    GreSetDCOwnerEx((struct HOBJ__ *)i[2], 0x80000012, 1, 0);
LABEL_34:
    tagDCE::SetPwndOrg((tagDCE *)i, 0LL);
    tagDCE::SetPwndClip((tagDCE *)i, 0LL);
    tagDCE::SetPwndRedirect((tagDCE *)i, 0LL);
    v23 = i[2];
    i[9] = 0LL;
    GreMarkPendingDestroyDC(v23);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
    if ( CurrentProcessWin32Process )
    {
      v22 = -*(_QWORD *)CurrentProcessWin32Process;
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    }
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    goto LABEL_37;
  }
  if ( (i[6] & 0x1002) == 2 )
  {
    v19 = W32GetUserSessionState(v18);
    --*(_DWORD *)(v19 + 19716);
  }
  tagDCE::SetPwndOrg((tagDCE *)i, 0LL);
  tagDCE::SetPwndClip((tagDCE *)i, 0LL);
  tagDCE::SetPwndRedirect((tagDCE *)i, 0LL);
  v20 = *i;
  if ( (_QWORD *)*i != i )
  {
    if ( *(_QWORD **)(v20 + 8) != i || (v21 = (_QWORD *)i[1], (_QWORD *)*v21 != i) )
      __fastfail(3u);
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
  }
  GreDeleteFastMutex((char *)i);
  v4 = 1;
LABEL_37:
  if ( v5 )
  {
    v26 = W32GetUserSessionState(v22);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v26 + 57008) + 48LL));
  }
  return v4;
}
