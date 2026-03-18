/*
 * XREFs of NtUserGetWindowFeedbackSetting @ 0x1C01D3D40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     FeedbackGetWindowSetting @ 0x1C01AD3FC (FeedbackGetWindowSetting.c)
 */

__int64 __fastcall NtUserGetWindowFeedbackSetting(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int *Address)
{
  int v6; // r14d
  signed int v7; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r15
  int WindowSetting; // ebx
  unsigned int v15; // ebx
  unsigned int v17; // [rsp+20h] [rbp-58h] BYREF
  int v18; // [rsp+24h] [rbp-54h]
  unsigned int v19; // [rsp+38h] [rbp-40h]

  v6 = a3;
  v7 = a2;
  EnterSharedCrit(a1, a2, a3);
  v13 = ValidateHwnd(a1);
  if ( v13 )
  {
    if ( v7 && v7 <= 13 && a4 && (v6 & 0xFFFFFFFE) == 0 )
    {
      ProbeForRead(a4, 4uLL, 4u);
      v15 = *a4;
      v19 = v15;
      if ( v15 != 4 )
      {
        ProbeForWrite(a4, 4uLL, 4u);
        *a4 = 4;
      }
      if ( Address && v15 < 4 )
      {
        WindowSetting = 0;
        v18 = 0;
        UserSetLastError(122);
      }
      else
      {
        v17 = 0;
        WindowSetting = FeedbackGetWindowSetting(v13, v7, v6, &v17);
        v18 = WindowSetting;
        if ( Address )
        {
          ProbeForWrite(Address, 4uLL, 4u);
          v10 = v17;
          *Address = v17;
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
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return WindowSetting;
}
