/*
 * XREFs of ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C005BF80
 * Callers:
 *     GetInheritedMonitor @ 0x1C010F5F0 (GetInheritedMonitor.c)
 * Callees:
 *     IsTitleWindow @ 0x1C005C010 (IsTitleWindow.c)
 *     UnionRect @ 0x1C00ABC9C (UnionRect.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C01B8A54 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 */

_BOOL8 __fastcall IsCandidateTransformOwner(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rsi
  int v4; // r14d
  BOOL v5; // edi
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // esi
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a2 + 5);
  v16 = 0LL;
  v4 = *(_BYTE *)(v2 + 27) & 8;
  v5 = (*(_BYTE *)(v2 + 26) & 8) != 0 && (*(_BYTE *)(v2 + 27) & 0x20) == 0;
  if ( !(unsigned int)IsTitleWindow(a1, 1LL)
    || *(_QWORD *)(v6 + 432) != *(_QWORD *)(v7 + 432) && *(_QWORD *)(v6 + 424) != *(_QWORD *)(v7 + 424) )
  {
    return 0LL;
  }
  v9 = *((_QWORD *)a1 + 5);
  if ( (((unsigned __int16)(*(_DWORD *)(v2 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v9 + 288) >> 8)) & 0x1FF) != 0 )
    return 0LL;
  if ( !v4 && !v5 )
    return 1LL;
  v10 = (_QWORD *)(v2 + 88);
  v11 = IsAdjacentRect((const struct tagRECT *)(v2 + 88), (const struct tagRECT *)(v9 + 88));
  v13 = v11;
  v14 = v12;
  if ( v4 )
  {
    if ( !v11 && !(unsigned int)IntersectRect(&v16, v10, v12) )
      return 0LL;
  }
  if ( !v5 || v13 )
    return 1LL;
  if ( !(unsigned int)UnionRect(&v16, v10, v14) )
    return 0LL;
  v15 = v16 - *v10;
  if ( (_QWORD)v16 == *v10 )
    v15 = *((_QWORD *)&v16 + 1) - v10[1];
  return !v15;
}
