/*
 * XREFs of EditionCreateDesktopEntryPoint @ 0x1402406E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1402808EC (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

HANDLE __fastcall EditionCreateDesktopEntryPoint(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  struct tagTHREADINFO *v14; // rcx
  int v15; // ecx
  ULONG v16; // ecx
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  HANDLE v19; // rbx
  HANDLE v21; // [rsp+40h] [rbp-28h] BYREF

  v21 = 0LL;
  v10 = EnterCrit(0LL, 0LL);
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v10 + 464), 0x40u) )
      goto LABEL_3;
LABEL_12:
    v16 = 5;
LABEL_16:
    UserSetLastError(v16);
    goto LABEL_17;
  }
  v14 = PtiCurrent(v12, v11);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v14 + 132, 0, 0) & 0x20000000) != 0 )
    v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent((__int64)v14, v13) + 58) + 760LL) + 32LL) & 0x40;
  else
    v15 = 0;
  if ( v15 )
    goto LABEL_12;
LABEL_3:
  if ( a4 > 1 || a2 || a3 )
  {
    v16 = 87;
    goto LABEL_16;
  }
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = xxxCreateDesktopEx(a1, a4, a5, a6, &v21, 0);
  if ( v17 < 0 )
  {
    v21 = 0LL;
    v16 = RtlNtStatusToDosError(v17);
    goto LABEL_16;
  }
LABEL_17:
  v19 = v21;
  UserSessionSwitchLeaveCrit(v18);
  return v19;
}
