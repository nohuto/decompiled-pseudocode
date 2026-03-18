/*
 * XREFs of UserGetDesktopDC @ 0x14000EDE0
 * Callers:
 *     NtGdiCreateMetafileDC @ 0x14000CE10 (NtGdiCreateMetafileDC.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14000E350 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     NtGdiOpenDCW @ 0x1400675B0 (NtGdiOpenDCW.c)
 * Callees:
 *     GreCreateDisplayDC @ 0x14000E640 (GreCreateDisplayDC.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     ValidateHwndEx @ 0x1400B7530 (ValidateHwndEx.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E47E0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401A3340 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A9280 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

HDC __fastcall UserGetDesktopDC(unsigned int a1, int a2, int a3)
{
  struct tagTHREADINFO *v6; // rbx
  HDEV v7; // r14
  bool HasUILimit; // al
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  HDC v11; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *v13; // rbx
  __int64 v14; // rcx
  HDC DisplayDC; // rax
  char v17; // [rsp+50h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v17);
  v6 = PtiCurrent();
  v7 = *(HDEV *)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 48LL);
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    HasUILimit = tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v6 + 58), 1u);
  }
  else if ( (_InterlockedCompareExchange((volatile signed __int32 *)v6 + 132, 0, 0) & 0x20000000) != 0 )
  {
    HasUILimit = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v6 + 58) + 760LL) + 32LL) & 1;
  }
  else
  {
    HasUILimit = 0;
  }
  if ( a3 && a1 != 2 && HasUILimit )
  {
    v9 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)v6 + 62) + 8LL) + 24LL);
    v10 = v9 ? *v9 : 0LL;
    if ( !ValidateHwndEx(v10, 1LL) )
      goto LABEL_13;
  }
  CurrentThread = KeGetCurrentThread();
  if ( a1
    || PsIsSystemThread(CurrentThread)
    || (v13 = *(struct _KPROCESS **)(W32GetUserGdiSessionState() + 40), PsGetThreadProcess(CurrentThread) == v13) )
  {
    DisplayDC = GreCreateDisplayDC(v7, a1, a2 != 0);
  }
  else
  {
    v14 = *((_QWORD *)PtiCurrent() + 62);
    if ( !v14 )
    {
LABEL_13:
      v11 = 0LL;
      goto LABEL_21;
    }
    DisplayDC = (HDC)GetDCEx(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 24LL), 0LL, 2155872259LL);
  }
  v11 = DisplayDC;
LABEL_21:
  if ( !v17 )
    UserSessionSwitchLeaveCritWithNonPaged();
  return v11;
}
