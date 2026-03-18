/*
 * XREFs of ?_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z @ 0x1C021EEC8
 * Callers:
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1C01D22A0 (NtUserGetOwnerTransformedMonitorRect.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C00D8B88 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C00D8BCC (GetMonitorRect.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

void __fastcall _GetOwnerTransformedMonitorRect(struct tagWND *a1, struct tagMONITOR *a2, int a3, struct tagRECT *a4)
{
  struct tagRECT *MonitorWorkRect; // rax
  __int64 v9; // rcx
  struct tagMONITOR *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v16; // [rsp+40h] [rbp-38h] BYREF

  if ( a3 )
    MonitorWorkRect = (struct tagRECT *)GetMonitorWorkRect(&v14, (__int64)a2);
  else
    MonitorWorkRect = (struct tagRECT *)GetMonitorRect(&v15, (__int64)a2);
  v9 = *((_QWORD *)a1 + 5);
  v16 = *MonitorWorkRect;
  if ( (*(_DWORD *)(v9 + 288) & 0xF) != 2 )
  {
    v10 = (struct tagMONITOR *)ValidateHmonitorNoRip(*(_QWORD *)(v9 + 256));
    *(_QWORD *)&v14 = v10;
    if ( v10 )
    {
      if ( v10 != a2 )
      {
        v12 = *((_QWORD *)a2 + 5) + (a3 != 0 ? 44LL : 28LL);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11);
        PhysicalToLogicalDPIRect(&v16, v12, CurrentThreadDpiAwarenessContext, &v14);
      }
    }
  }
  *a4 = v16;
}
