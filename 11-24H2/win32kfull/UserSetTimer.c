/*
 * XREFs of UserSetTimer @ 0x1402DC9AC
 * Callers:
 *     vEnableSynchronize @ 0x1401F79D0 (vEnableSynchronize.c)
 *     GreStartTimers @ 0x14021F19C (GreStartTimers.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140083108 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400A4A5C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     SetRITTimer @ 0x1401BDAB0 (SetRITTimer.c)
 */

__int64 __fastcall UserSetTimer(int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v7, a2, a3);
  v5 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v4, v3) + 57616) )
    v5 = SetRITTimer(0LL, 0x32u, (__int64)GreSynchronizeTimer, 0);
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v7);
  return v5;
}
