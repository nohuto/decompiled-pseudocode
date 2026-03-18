/*
 * XREFs of UpdatePointerRedirIsAlive @ 0x1C0095A20
 * Callers:
 *     UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch @ 0x1C009596C (UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 *     IsPointerInputRedirected @ 0x1C0152DDA (IsPointerInputRedirected.c)
 *     _RegisterPointerInputTarget @ 0x1C01C6748 (_RegisterPointerInputTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatePointerRedirIsAlive(__int64 a1)
{
  __int64 *v2; // rdi
  unsigned int i; // ebx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  v2 = (__int64 *)(a1 + 216);
  for ( i = 0; i < 2; ++i )
  {
    result = *v2;
    if ( *v2 )
    {
      v5 = *(_QWORD *)(result + 40);
      if ( *(char *)(v5 + 20) < 0 || *(char *)(v5 + 19) < 0 )
      {
        HMAssignmentUnlock(a1 + 8 * (i + 27LL));
        v7 = SGDGetUserSessionState(v6);
        if ( i )
        {
          *(_DWORD *)(v7 + 536) = 0;
          result = SGDGetUserSessionState(v8);
          *(_DWORD *)(result + 540) = 0;
        }
        else
        {
          *(_DWORD *)(v7 + 528) = 0;
          result = SGDGetUserSessionState(v8);
          *(_DWORD *)(result + 532) = 0;
        }
      }
    }
    ++v2;
  }
  return result;
}
