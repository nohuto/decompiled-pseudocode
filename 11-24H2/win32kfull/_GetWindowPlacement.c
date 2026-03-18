/*
 * XREFs of _GetWindowPlacement @ 0x140025CD8
 * Callers:
 *     NtUserGetWindowPlacement @ 0x140243090 (NtUserGetWindowPlacement.c)
 * Callees:
 *     UpdateCheckpoint @ 0x140025F7C (UpdateCheckpoint.c)
 *     GetMonitorRectForDpi @ 0x140026844 (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x14002699C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorWorkRectForDpi @ 0x1400269FC (GetMonitorWorkRectForDpi.c)
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 */

__int64 __fastcall GetWindowPlacement(struct tagWND *a1, __int64 a2)
{
  int v4; // esi
  __int64 updated; // r14
  char v6; // al
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  char v8; // r15
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned int CurrentThreadCompositedDpiContext; // eax
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  int v19; // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+24h] [rbp-34h]
  _QWORD v21[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(_HMPheFromObject() + 25) & 1) != 0 )
    return 0LL;
  v4 = 0;
  updated = UpdateCheckpoint(a1);
  if ( !updated )
    return 0LL;
  v6 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v6 & 0x20) != 0 )
    *(_DWORD *)(a2 + 8) = 2;
  else
    *(_DWORD *)(a2 + 8) = (2 * (v6 & 1)) | 1;
  *(_OWORD *)(a2 + 28) = *(_OWORD *)(updated + 20);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v8 = ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext);
  if ( v8 )
    TransformRectBetweenCoordinateSpaces(a2 + 28, a2 + 28, 0LL, a1);
  v9 = (_QWORD *)(a2 + 12);
  if ( (*(_DWORD *)(updated + 16) & 0x10) != 0 )
  {
    *v9 = *(_QWORD *)updated;
    if ( v8 )
      TransformPointBetweenCoordinateSpaces(v9, v9, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a2 + 16) = -1;
    *(_DWORD *)v9 = -1;
  }
  if ( (*(_DWORD *)(updated + 16) & 0x20) == 0 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 24) = -1;
    *(_DWORD *)(a2 + 20) = -1;
  }
  else
  {
    *(_QWORD *)(a2 + 20) = *(_QWORD *)(updated + 8);
    if ( v8 )
      TransformPointBetweenCoordinateSpaces(a2 + 20, a2 + 20, 0LL, a1);
  }
  v10 = *((_QWORD *)a1 + 3);
  v11 = 0LL;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 8);
    if ( v12 )
      v11 = *(_QWORD *)(v12 + 24);
  }
  if ( *((_QWORD *)a1 + 13) == v11 && *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    v13 = MonitorFromRect(a2 + 28, 1LL, 0LL);
    CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
    GetMonitorWorkRectForDpi(&v19, v13, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
    v15 = GetCurrentThreadCompositedDpiContext();
    GetMonitorRectForDpi(v21, v13, (v15 >> 8) & 0x1FF);
    v16 = v21[0];
    if ( (*(_DWORD *)(updated + 16) & 0x10) != 0 )
    {
      *(_DWORD *)(a2 + 12) = LODWORD(v21[0]) + *(_DWORD *)(a2 + 12) - v19;
      *(_DWORD *)(a2 + 16) += HIDWORD(v16) - v20;
    }
    LODWORD(v16) = v16 - v19;
    *(_DWORD *)(a2 + 28) += v16;
    *(_DWORD *)(a2 + 36) += v16;
    v17 = HIDWORD(v16) - v20;
    *(_DWORD *)(a2 + 40) += HIDWORD(v16) - v20;
    *(_DWORD *)(a2 + 32) += v17;
  }
  *(_DWORD *)(a2 + 4) = 0;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 && (*(_DWORD *)(updated + 16) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 4) = 1;
    v4 = 1;
  }
  if ( (*(_DWORD *)(updated + 16) & 2) != 0 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
    *(_DWORD *)(a2 + 4) = v4 | 2;
  *(_DWORD *)a2 = 44;
  return 1LL;
}
