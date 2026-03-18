/*
 * XREFs of xxxGetUpdateRgn @ 0x1C00635B8
 * Callers:
 *     NtUserGetUpdateRgn @ 0x1C0063210 (NtUserGetUpdateRgn.c)
 * Callees:
 *     IntersectWithParents @ 0x1C0063940 (IntersectWithParents.c)
 *     MirrorRegion @ 0x1C0063B98 (MirrorRegion.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     xxxSimpleDoSyncPaint @ 0x1C01193C4 (xxxSimpleDoSyncPaint.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxGetUpdateRgn(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // esi
  __int64 v9; // rdx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  __int64 v14; // rdx
  __int128 v15; // [rsp+20h] [rbp-20h] BYREF

  v15 = 0LL;
  if ( a3 )
    xxxSimpleDoSyncPaint(a1);
  SetOrClrWF(0LL, a1, 288LL, 1LL);
  v5 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v5 + 136) )
  {
    v15 = *(_OWORD *)(v5 + 104);
    v6 = IntersectWithParents(a1, &v15);
    v7 = *((_QWORD *)a1 + 5);
    if ( *(_QWORD *)(v7 + 136) == 1LL )
    {
      if ( v6 )
      {
        v8 = 2;
        if ( a1 != (struct tagWND *)GetDesktopWindow(a1, v7) )
        {
          v10 = *(_DWORD *)(v9 + 104);
          v11 = -*(_DWORD *)(v9 + 108);
          HIDWORD(v15) -= *(_DWORD *)(v9 + 108);
          v12 = -v10;
          LODWORD(v15) = v12 + v15;
          DWORD2(v15) += v12;
          DWORD1(v15) += v11;
        }
        SetRectRgnIndirect(a2, &v15);
LABEL_9:
        MirrorRegion(a1, a2, 1LL);
        return v8;
      }
    }
    else
    {
      SetRectRgnIndirect(ghrgnInv2, &v15);
      v8 = GreCombineRgn(a2, ghrgnInv2, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 1LL);
      if ( v8 >= 2 )
      {
        if ( a1 != (struct tagWND *)GetDesktopWindow(a1, v14) )
          GreOffsetRgn(
            a2,
            (unsigned int)-*(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL),
            (unsigned int)-*(_DWORD *)(*((_QWORD *)a1 + 5) + 108LL));
        goto LABEL_9;
      }
    }
  }
  SetEmptyRgn(a2);
  return 1LL;
}
