/*
 * XREFs of xxxRemoveFullScreen @ 0x1C00F4314
 * Callers:
 *     xxxCheckFullScreen @ 0x1C00621AC (xxxCheckFullScreen.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     xxxSetTrayWindow @ 0x1C00A4F7C (xxxSetTrayWindow.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 */

__int64 __fastcall xxxRemoveFullScreen(__int64 *a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  __int16 v4; // dx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v1 = (_QWORD *)a1[3];
  v2 = 0;
  if ( !v1 )
    return 0LL;
  if ( (*(_BYTE *)(a1[5] + 20) & 0x40) != 0
    && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
    && (((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0
     || *(_QWORD *)(v1[1] + 192LL)) )
  {
    SetOrClrWF(0, a1, 0x440u, 1);
    v4 = *(_WORD *)(gpDispInfo + 160LL);
    *(_WORD *)(gpDispInfo + 160LL) = v4 - 1;
    if ( !v4 )
    {
      v6 = 0LL;
      v5 = 0LL;
      PushW32ThreadLock((__int64)v1, &v5, UserDereferenceObject);
      ObfReferenceObject(v1);
      xxxSetTrayWindow((__int64)v1, (unsigned __int64 *)1);
      PopAndFreeW32ThreadLock((__int64)&v5);
      return 1;
    }
  }
  return v2;
}
