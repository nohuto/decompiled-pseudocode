/*
 * XREFs of xxxMNFindWindowFromPoint @ 0x14006DE80
 * Callers:
 *     xxxHandleMenuMessages @ 0x14006D0F0 (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x14006DA24 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxMNDismissIfOffMenu @ 0x1402BDD9C (xxxMNDismissIfOffMenu.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     IsMFMWFPWindow @ 0x14006DE58 (IsMFMWFPWindow.c)
 *     PtInRect @ 0x14006E460 (PtInRect.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     GetWindowBordersForDpi @ 0x140074F80 (GetWindowBordersForDpi.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     _HasCaptionIcon @ 0x1400B43E8 (_HasCaptionIcon.c)
 *     ?MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z @ 0x1401801B8 (-MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140282D2C (safe_cast_fnid_to_PMENUWND.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMNFindWindowFromPoint(__int64 **a1, unsigned int *a2, int a3)
{
  LONG v3; // edi
  __int16 v4; // bx
  __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned int v9; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  LONG v20; // r15d
  int v21; // r12d
  __int64 v22; // rcx
  int v23; // edx
  unsigned int WindowDpiLastNotify; // r14d
  int DpiDependentMetric; // edi
  int v26; // ebx
  int v27; // r8d
  int v28; // r9d
  int WindowBordersForDpi; // eax
  __int64 v30; // r8
  int v31; // r11d
  LONG v32; // r9d
  int v33; // ecx
  int v34; // edi
  int v35; // edx
  __int64 v36; // rax
  unsigned int v37; // [rsp+30h] [rbp-58h]
  struct tagPOINT v38; // [rsp+38h] [rbp-50h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-48h] BYREF

  v3 = SHIWORD(a3);
  *a2 = 0;
  v4 = a3;
  v37 = 0;
  if ( *(_QWORD *)(**a1 + 24) )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *(_QWORD *)(**a1 + 24));
    v8 = xxxSendMessage(*(struct tagWND **)(**a1 + 24), 0x1EBu);
    v13 = PtiCurrent(v12, v11);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v13, BugCheckParameter3);
    LOBYTE(v14) = IsMFMWFPWindow(v8);
    if ( v14 )
    {
      LOBYTE(v15) = 1;
      v17 = HMValidateHandleNoSecure(v16, v15);
      v8 = v17;
      if ( v17 )
      {
        v18 = safe_cast_fnid_to_PMENUWND(v17);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 8);
          if ( v19 )
          {
            if ( *(_QWORD *)(v19 + 40) )
              goto LABEL_5;
          }
        }
        return 0LL;
      }
    }
    else if ( v8 )
    {
      goto LABEL_5;
    }
  }
  v7 = **a1;
  if ( (*(_DWORD *)v7 & 1) == 0 )
  {
    v8 = *(_QWORD *)(v7 + 16);
    if ( (unsigned int)PtInRect(*(_QWORD *)(v8 + 40) + 88LL) )
      goto LABEL_4;
    return 0LL;
  }
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 )
    return 0LL;
  v20 = v3;
  v21 = v4;
  v38.x = v4;
  v38.y = v3;
  if ( (*(_DWORD *)**a1 & 4) == 0 )
  {
    if ( !*(_QWORD *)(**a1 + 8) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 31LL) & 0x20) == 0 )
    {
LABEL_4:
      v38.x = v4;
      v38.y = v3;
      v37 = MNItemHitTest(*(struct tagMENU **)(**a1 + 40), (struct tagWND *)v8, v38);
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
LABEL_5:
        v9 = v37;
LABEL_6:
        *a2 = v9;
        return v8;
      }
      v9 = v37;
      if ( v37 != -1 )
      {
        v8 = 0xFFFFFFFFLL;
        goto LABEL_6;
      }
      if ( !*(_QWORD *)(**a1 + 48) )
        return 0LL;
      goto LABEL_23;
    }
    return 0LL;
  }
  if ( !(unsigned int)HasCaptionIcon(v8) )
    return 0LL;
  v22 = *(_QWORD *)(v8 + 40);
  if ( (*(_BYTE *)(v22 + 31) & 0x20) != 0 )
  {
    if ( !(unsigned int)PtInRect(v22 + 88) )
      return 0LL;
  }
  else
  {
    v23 = *(_DWORD *)(v22 + 288) & 0xF;
    if ( v23 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v22 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v22 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(v8);
    }
    else if ( !v23
           && (v36 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 496LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v36 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 464LL) + 272LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(12LL, WindowDpiLastNotify);
    v26 = GetDpiDependentMetric(13LL, WindowDpiLastNotify);
    WindowBordersForDpi = GetWindowBordersForDpi(
                            *(_DWORD *)(*(_QWORD *)(v8 + 40) + 28LL),
                            *(_DWORD *)(*(_QWORD *)(v8 + 40) + 24LL),
                            v27,
                            v28,
                            WindowDpiLastNotify);
    v30 = *(_QWORD *)(v8 + 40);
    v31 = *(_DWORD *)(v30 + 88);
    v32 = WindowBordersForDpi + *(_DWORD *)(v30 + 92);
    v33 = v31 + WindowBordersForDpi;
    v34 = v31 + WindowBordersForDpi + DpiDependentMetric;
    v35 = v34;
    if ( (*(_BYTE *)(v30 + 26) & 0x40) != 0 )
    {
      v35 = *(_DWORD *)(v30 + 96) - WindowBordersForDpi;
      v33 = v31 + *(_DWORD *)(v30 + 96) - v34;
    }
    if ( v21 >= v35 || v20 < v32 || v21 < v33 || v20 >= v26 + v32 )
    {
      if ( *(_QWORD *)(**a1 + 48) )
      {
LABEL_23:
        v9 = MNItemHitTest(*(struct tagMENU **)(**a1 + 48), (struct tagWND *)v8, v38);
        if ( v9 != -1 )
        {
          v8 = 4294967291LL;
          goto LABEL_6;
        }
        return 0LL;
      }
      return 0LL;
    }
    *a2 = 0;
  }
  return 0xFFFFFFFFLL;
}
