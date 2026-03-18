/*
 * XREFs of _SetTimer @ 0x14005F768
 * Callers:
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402BD720 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x14005F804 (InternalSetTimer.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall SetTimer(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r11

  if ( !a1 )
    return InternalSetTimer(a1, a2, a3, a4, a5, 0);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v10 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( v10 == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) )
    return InternalSetTimer(a1, a2, a3, a4, a5, 0);
  UserSetLastError(5LL);
  return 0LL;
}
