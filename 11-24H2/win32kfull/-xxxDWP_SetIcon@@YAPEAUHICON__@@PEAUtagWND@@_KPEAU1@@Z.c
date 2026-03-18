/*
 * XREFs of ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x140090378
 * Callers:
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     xxxRedrawTitle @ 0x1400677A8 (xxxRedrawTitle.c)
 *     IsToplevelWindowDesktopComposed @ 0x140073A04 (IsToplevelWindowDesktopComposed.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1400786A4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     xxxCreateWindowSmIcon @ 0x14007AC48 (xxxCreateWindowSmIcon.c)
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 *     SendDwmIconChange @ 0x140091358 (SendDwmIconChange.c)
 *     xxxRecreateSmallIcons @ 0x14021F460 (xxxRecreateSmallIcons.c)
 */

HICON __fastcall xxxDWP_SetIcon(struct tagWND *a1, unsigned __int64 a2, HICON a3)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rax
  HICON v7; // r15
  HICON v8; // rdi
  HICON v9; // rsi
  int v10; // ebp
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  HICON v15; // rax

  v4 = a2;
  if ( a2 > 3 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( a2 == 3 )
  {
    xxxRecreateSmallIcons(a1);
    return 0LL;
  }
  v6 = *((_QWORD *)a1 + 5);
  v7 = *(HICON *)(v6 + 272);
  v8 = *(HICON *)(v6 + 264);
  v9 = v8;
  if ( a2 )
    v9 = *(HICON *)(v6 + 272);
  if ( v9 != a3 )
  {
    LOBYTE(a2) = 3;
    v10 = 1;
    v11 = 0;
    v12 = HMValidateHandleNoRip((__int64)v8, a2);
    if ( v12 && (*(_DWORD *)(v12 + 80) & 0x80u) != 0 )
    {
      v11 = 1;
      _DestroyCursor((struct tagCURSOR *)v12, 0LL);
    }
    if ( v4 )
    {
      if ( v11 )
      {
        v8 = 0LL;
      }
      else if ( v8 )
      {
        v10 = 0;
      }
      v7 = a3;
    }
    else
    {
      v15 = 0LL;
      v8 = a3;
      if ( !v11 )
        v15 = v9;
      v9 = v15;
    }
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL) = v7;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL) = v8;
    if ( v7 && !v8 )
      xxxCreateWindowSmIcon((__int64)a1, (__int64)v7, v13, v14);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange(a1);
    if ( v10 )
      xxxRedrawTitle(a1, 8204LL);
  }
  return v9;
}
