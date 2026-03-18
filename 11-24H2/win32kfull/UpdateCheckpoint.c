/*
 * XREFs of UpdateCheckpoint @ 0x140025F7C
 * Callers:
 *     _GetWindowPlacement @ 0x140025CD8 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x140086334 (xxxSetWindowPlacement.c)
 *     WPUpdateCheckPointSettings @ 0x1402AB184 (WPUpdateCheckPointSettings.c)
 *     xxxSetInternalWindowPos @ 0x1402AB2DC (xxxSetInternalWindowPos.c)
 * Callees:
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14008D6FC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14008D804 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x140269110 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

struct CHECKPOINT *__fastcall UpdateCheckpoint(struct tagWND *a1)
{
  __int64 v1; // rdx
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int128 *v7; // r8
  int v8; // r9d
  int v9; // r8d
  int v10; // edx
  int v11; // r8d
  int v12; // r8d
  struct tagRECT v13; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  v3 = *(_WORD *)(v1 + 42) & 0x2FFF;
  v14 = *(struct tagRECT *)(v1 + 88);
  v13 = v14;
  if ( v3 != 669 )
  {
    v4 = *((_QWORD *)a1 + 13);
    v5 = *(_QWORD *)(v4 + 40);
    if ( (*(_WORD *)(v5 + 42) & 0x2FFF) != 0x29D )
    {
      v7 = (__int128 *)(v5 + 104);
      if ( (((unsigned __int16)(*(_DWORD *)(v1 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v5 + 288) >> 8)) & 0x1FF) != 0 )
      {
        v15 = *v7;
        LogicalToPhysicalInPlaceRectWithSubpixel(v4, &v15, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(a1, &v15, 0LL);
        v7 = &v15;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 26LL) & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
      {
        v10 = -*((_DWORD *)v7 + 1);
        v11 = *((_DWORD *)v7 + 2);
        v13.top += v10;
        v12 = -v11;
        v13.bottom = v10 + v14.bottom;
        v13.left = -(v12 + v14.right);
        v13.right = -(v12 + v14.left);
      }
      else
      {
        v8 = -*((_DWORD *)v7 + 1);
        v9 = -*(_DWORD *)v7;
        v13.right += v9;
        v13.bottom += v8;
        v13.top += v8;
        v13.left = v9 + v14.left;
      }
    }
  }
  return CHECKPOINT::Restore(a1, &v13);
}
