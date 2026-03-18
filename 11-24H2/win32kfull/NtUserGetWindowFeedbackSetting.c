/*
 * XREFs of NtUserGetWindowFeedbackSetting @ 0x1401C7430
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     FeedbackGetWindowSetting @ 0x1401C7590 (FeedbackGetWindowSetting.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetWindowFeedbackSetting(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *Address)
{
  __int64 v9; // rcx
  __int64 v10; // r15
  int WindowSetting; // ebx
  unsigned int v12; // ebx
  unsigned int v14; // [rsp+20h] [rbp-58h] BYREF
  int v15; // [rsp+24h] [rbp-54h]
  unsigned int v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+48h] [rbp-30h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v17, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    if ( a2 && a2 <= 13 && a4 && (a3 & 0xFFFFFFFE) == 0 )
    {
      ProbeForRead(a4, 4uLL, 4u);
      v16 = *a4;
      v12 = v16;
      if ( v16 != 4 )
      {
        ProbeForWrite(a4, 4uLL, 4u);
        *a4 = 4;
      }
      if ( Address && v12 < 4 )
      {
        WindowSetting = 0;
        v15 = 0;
        UserSetLastError(122);
      }
      else
      {
        v14 = 0;
        WindowSetting = FeedbackGetWindowSetting(v10, (unsigned int)a2, a3, &v14);
        v15 = WindowSetting;
        if ( Address )
        {
          ProbeForWrite(Address, 4uLL, 4u);
          v9 = v14;
          *Address = v14;
        }
      }
    }
    else
    {
      WindowSetting = 0;
      UserSetLastError(87);
    }
  }
  else
  {
    WindowSetting = 0;
  }
  UserSessionSwitchLeaveCrit(v9);
  return WindowSetting;
}
