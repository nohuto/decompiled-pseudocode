/*
 * XREFs of ?xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z @ 0x1402A8B68
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140210C38 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402A505C (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z @ 0x1402A68DC (-SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxMoveSizeSetWindowPos(struct MOVESIZEDATA *a1, const struct tagRECT *a2)
{
  LONG left; // eax
  LONG top; // r8d
  const struct tagWND *v6; // r9
  int v7; // ecx
  struct tagMONITOR *v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  int v14; // [rsp+24h] [rbp-DCh]
  LONG v15; // [rsp+2Ch] [rbp-D4h]
  LONG v16; // [rsp+30h] [rbp-D0h]
  int v17; // [rsp+34h] [rbp-CCh]
  int v18; // [rsp+38h] [rbp-C8h]
  int v19; // [rsp+48h] [rbp-B8h]
  char v20[40]; // [rsp+D8h] [rbp-28h] BYREF

  AdvancedWindowPos::CWindowAction::CWindowAction((__int64)&v13, 1);
  left = a2->left;
  top = a2->top;
  v6 = (const struct tagWND *)*((_QWORD *)a1 + 2);
  v7 = a2->right - a2->left;
  v8 = (struct tagMONITOR *)*((_QWORD *)a1 + 27);
  v13 |= 6u;
  v15 = left;
  v9 = a2->bottom - top;
  v16 = top;
  v17 = v7;
  v18 = v9;
  AdvancedWindowPos::CWindowAction::SetMonitor((AdvancedWindowPos::CWindowAction *)&v13, v8, 0, v6);
  v10 = *((_DWORD *)a1 + 50);
  if ( (v10 & 0x40000000) != 0 )
  {
    v13 |= 0x20u;
    v19 = 0;
    *((_DWORD *)a1 + 50) = v10 & 0xBFFFFFFF;
  }
  v11 = *((_QWORD *)a1 + 2);
  v14 |= 0x20000u;
  AdvancedWindowPos::xxxApplyWindowAction(v11, &v13, 8LL);
  CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(
    (CThreadLockedCurrentMonitorTopologyPtr *)v20,
    v12);
}
