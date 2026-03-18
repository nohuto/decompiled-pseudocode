/*
 * XREFs of EditionCreateDesktopEntryPoint @ 0x1C0027E60
 * Callers:
 *     <none>
 * Callees:
 *     xxxCreateDesktopEx @ 0x1C00293D4 (xxxCreateDesktopEx.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall EditionCreateDesktopEntryPoint(int a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  int v10; // eax
  NTSTATUS Desktop; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v18; // rcx
  _QWORD v19[3]; // [rsp+40h] [rbp-18h] BYREF

  v19[0] = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL) + 24LL) & 0x40;
  else
    v10 = 0;
  if ( v10 )
  {
    v18 = 5LL;
LABEL_15:
    UserSetLastError(v18);
    goto LABEL_10;
  }
  if ( a4 > 1 || a2 || a3 )
  {
    v18 = 87LL;
    goto LABEL_15;
  }
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  Desktop = xxxCreateDesktopEx(a1, a4, a5, a6, (__int64)v19, 0);
  if ( Desktop < 0 )
  {
    v19[0] = 0LL;
    v18 = RtlNtStatusToDosError(Desktop);
    goto LABEL_15;
  }
LABEL_10:
  v16 = v19[0];
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v16;
}
