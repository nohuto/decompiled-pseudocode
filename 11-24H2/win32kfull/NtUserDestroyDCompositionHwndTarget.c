/*
 * XREFs of NtUserDestroyDCompositionHwndTarget @ 0x14015DA00
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1401AC430 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x14015DA6C (-DetachWindowCompositionTarget@@YAJPEAUHWND__@@K@Z.c)
 *     UserSetLastStatus @ 0x14015E5E8 (UserSetLastStatus.c)
 */

unsigned __int64 __fastcall NtUserDestroyDCompositionHwndTarget(HWND a1, unsigned int a2)
{
  NTSTATUS v4; // ebx

  KeEnterCriticalRegion();
  if ( a2 >= 3 )
  {
    v4 = -1073741811;
    goto LABEL_3;
  }
  v4 = DetachWindowCompositionTarget(a1, a2);
  if ( v4 < 0 )
LABEL_3:
    UserSetLastStatus(v4);
  KeLeaveCriticalRegion();
  return (unsigned __int64)(unsigned int)~v4 >> 31;
}
