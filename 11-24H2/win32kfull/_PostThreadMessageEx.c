/*
 * XREFs of _PostThreadMessageEx @ 0x1401A04CC
 * Callers:
 *     _PostThreadMessage @ 0x1401A0460 (_PostThreadMessage.c)
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140289078 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 * Callees:
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     IsPointerInputMessage @ 0x14008EC20 (IsPointerInputMessage.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x14010F3F0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x14010FA90 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     PtiKbdFromQ @ 0x1401534FC (PtiKbdFromQ.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x140167040 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     ProcessSuspendedPostMessage @ 0x1401957E8 (ProcessSuspendedPostMessage.c)
 *     ?Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z @ 0x140271D8C (-Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z.c)
 *     ?TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z @ 0x140272310 (-TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14027251C (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x140274ECC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PostThreadMessageEx(
        struct tagTHREADINFO *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagINPUT_MESSAGE_SOURCE *a5)
{
  struct tagTHREADINFO *v8; // rdi
  BOOL v9; // eax
  int v10; // ecx
  __int64 v11; // rbp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rax
  bool v24; // r9
  UIPrivilegeIsolation *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  LARGE_INTEGER *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rcx

  v8 = a1;
  if ( !a1
    || (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0) & 0x1000000) == 0
    || (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0) & 1) != 0 )
  {
    v10 = 1444;
    goto LABEL_55;
  }
  if ( a2 < 0x400 )
  {
    a1 = (struct tagTHREADINFO *)MessageTable;
    v9 = _bittest16(&MessageTable[a2], 9u) || a2 == 537 && (a3 & 0x8000) != 0;
    if ( v9 || a2 == 536 && (a3 & 0x8000) != 0 )
    {
      v10 = 1159;
LABEL_55:
      UserSetLastError(v10);
      return 0LL;
    }
  }
  v11 = *((_QWORD *)v8 + 58);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v14 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v13 = -*(_QWORD *)CurrentProcessWin32Process;
    v14 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  if ( v11 == v14 )
    goto LABEL_23;
  if ( a2 > 0xD0 )
  {
    if ( a2 != 272 )
    {
      if ( a2 != 353 && a2 != 424 && a2 != 563 && a2 != 648 )
        goto LABEL_23;
      goto LABEL_36;
    }
    goto LABEL_41;
  }
  switch ( a2 )
  {
    case 0xD0u:
    case 0xCu:
      goto LABEL_36;
    case 0xDu:
      goto LABEL_23;
    case 0x4Eu:
LABEL_41:
      v10 = 5;
      goto LABEL_55;
  }
  if ( a2 != 188 )
    goto LABEL_23;
LABEL_36:
  if ( !(unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline(v13)
    && (!UIPrivilegeIsolation::Enforced(v25) || *(_QWORD *)v11 == *(_QWORD *)(W32GetUserGdiSessionState(v26) + 40))
    && (*(_DWORD *)(v11 + 772) != *(_DWORD *)(v14 + 772) || *(_DWORD *)(v11 + 776) != *(_DWORD *)(v14 + 776)) )
  {
    goto LABEL_41;
  }
LABEL_23:
  if ( a2 == 576 || a2 == 281 || (unsigned int)IsPointerInputMessage(a2) )
  {
    v10 = 1002;
    goto LABEL_55;
  }
  if ( a2 == 255 )
  {
    LOBYTE(v15) = 18;
    v16 = HMValidateHandleNoSecure(a4, v15);
    if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline(
                         v18,
                         v17,
                         v19,
                         v20) )
    {
      if ( v16 )
      {
        v22 = *(unsigned int *)(v16 + 48);
        if ( (v22 & 1) != 0 )
        {
          v23 = PtiCurrent(v22, v21);
          TrySmuggleHidData(v23, v8, (struct tagHIDDATA *)v16, v24);
        }
      }
    }
    else if ( v16 )
    {
      Old_TrySmuggleHidData(v8, (struct tagHIDDATA *)v16, 1);
    }
  }
  AdjustForCoalescing((struct tagTHREADINFO *)((char *)v8 + 848), 0LL, a2);
  if ( v8 != PtiCurrent(v28, v27)
    && tagPROCESSINFO::SyncAndTestFreeze(*((tagPROCESSINFO **)v8 + 58))
    && !(unsigned int)ProcessSuspendedPostMessage((__int64)v8, 0LL, a2, a3, a4) )
  {
    return 0LL;
  }
  v29 = (LARGE_INTEGER *)AllocQEntryEx((__int64)v8 + 848, 0LL, 1);
  if ( !v29 )
    return 0LL;
  v30 = PtiKbdFromQ(*((_QWORD *)v8 + 59));
  StoreQMessage(
    v29,
    0LL,
    a2,
    (LARGE_INTEGER)a3,
    a4,
    0,
    0LL,
    0,
    0LL,
    0,
    a5,
    *(_DWORD *)(*(_QWORD *)(v30 + 464) + 268LL),
    0LL,
    0LL);
  SetWakeBit((__int64)v8, 264LL);
  if ( a2 == 786 )
    SetWakeBit((__int64)v8, 128LL);
  v31 = *((_QWORD *)v8 + 59);
  if ( v8 == *(struct tagTHREADINFO **)(v31 + 72) )
    *(_QWORD *)(v31 + 80) = v29;
  return 1LL;
}
