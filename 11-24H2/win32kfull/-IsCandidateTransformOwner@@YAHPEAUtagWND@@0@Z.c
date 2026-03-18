/*
 * XREFs of ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x140032C98
 * Callers:
 *     GetInheritedMonitor @ 0x140048BE0 (GetInheritedMonitor.c)
 * Callees:
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x14003160C (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     UnionRect @ 0x140156E48 (UnionRect.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_BOOL8 __fastcall IsCandidateTransformOwner(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rsi
  int v3; // r14d
  BOOL v4; // ebp
  __int64 v5; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edi
  __int64 v10; // rdx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a2 + 5);
  v11 = 0LL;
  v3 = *(_BYTE *)(v2 + 27) & 8;
  v4 = (*(_BYTE *)(v2 + 26) & 8) != 0 && (*(_BYTE *)(v2 + 27) & 0x20) == 0;
  v5 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v5 + 31) & 0x10) == 0 || (*(_BYTE *)(v5 + 16) & 8) == 0 && (*(_BYTE *)(v5 + 30) & 3) == 0 )
    return 0LL;
  if ( (unsigned int)IsRectEmptyInl((const struct tagRECT *)(v5 + 104))
    || (*(_BYTE *)(v5 + 26) & 8) != 0 && (*(_BYTE *)(v5 + 27) & 0x20) == 0 )
  {
    return 0LL;
  }
  if ( *(_QWORD *)(v7 + 472) != *(_QWORD *)(v8 + 472) && *(_QWORD *)(v7 + 464) != *(_QWORD *)(v8 + 464) )
    return 0LL;
  if ( (((unsigned __int16)(*(_DWORD *)(v2 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v5 + 288) >> 8)) & 0x1FF) != 0 )
    return 0LL;
  if ( !v3 && !v4 )
    return 1LL;
  v9 = IsAdjacentRect((const struct tagRECT *)(v2 + 88), (const struct tagRECT *)(v5 + 88));
  if ( v3 && !v9 && !(unsigned int)IntersectRect(&v11, v2 + 88, v5 + 88) )
    return 0LL;
  if ( !v4 || v9 )
    return 1LL;
  if ( !(unsigned int)UnionRect(&v11, v2 + 88, v5 + 88) )
    return 0LL;
  v10 = v11 - *(_QWORD *)(v2 + 88);
  if ( (_QWORD)v11 == *(_QWORD *)(v2 + 88) )
    v10 = *((_QWORD *)&v11 + 1) - *(_QWORD *)(v2 + 96);
  return !v10;
}
