/*
 * XREFs of ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x1C01DB924
 * Callers:
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N11PEAU2@@Z @ 0x1C0062FE0 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N11PEAU2@@Z.c)
 * Callees:
 *     EngMulDiv @ 0x1C005A530 (EngMulDiv.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C00E4C92 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 *     ?DeadzoneJumpSuggestion@Cursor@InputTraceLogging@@SAXIAEBUtagPOINT@@0@Z @ 0x1C01DBEE4 (-DeadzoneJumpSuggestion@Cursor@InputTraceLogging@@SAXIAEBUtagPOINT@@0@Z.c)
 *     ?Proximity@DeadzoneJumping@CCursorClip@@CAJJJJ@Z @ 0x1C01DC1D4 (-Proximity@DeadzoneJumping@CCursorClip@@CAJJJJ@Z.c)
 */

char __fastcall CCursorClip::DeadzoneJumping::ApplyDeadZoneJumpIfNeeded(
        CCursorClip::DeadzoneJumping *this,
        struct tagPOINT a2,
        const struct tagRECT *a3,
        struct tagPOINT *a4)
{
  _QWORD *i; // r10
  _DWORD *v6; // r9
  __int64 v7; // r10
  bool v8; // dl
  unsigned int v9; // ebx
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  __int64 *v12; // r9
  __int64 *v13; // r11
  int v14; // esi
  LONG y; // ecx
  int v16; // edx
  int v17; // r8d
  int v18; // eax
  _DWORD *v19; // rsi
  INT v20; // r10d
  int v21; // eax
  int v22; // r9d
  int v23; // r11d
  LONG v24; // r9d
  int v25; // r9d
  int v26; // r11d
  LONG v27; // r9d
  struct tagPOINT v29; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v30; // [rsp+48h] [rbp+10h] BYREF

  v30 = a2;
  *a4 = a2;
  for ( i = *(_QWORD **)this; ; i = (_QWORD *)*i )
  {
    if ( !i )
      return 0;
    if ( i[1] == *(_QWORD *)&a3->left && i[2] == *(_QWORD *)&a3->right )
      break;
  }
  v29 = a2;
  CCursorClip::ClipPointToRect(a2, a3, &v29);
  v8 = 0;
  v9 = v29.x == *v6;
  if ( v29.y == v6[1] )
  {
    v8 = v29.x == *v6;
    v9 = 2;
    if ( v29.x == *v6 )
      return 0;
  }
  v10 = v9;
  if ( v29.x == v6[2] - 1 )
  {
    v9 = 3;
    v8 = v10 != 0;
    if ( v10 )
      goto LABEL_13;
  }
  v11 = v9;
  if ( v29.y == v6[3] - 1 )
  {
    v9 = 4;
    v8 = v11 != 0;
    goto LABEL_13;
  }
  if ( !v9 )
    return 0;
LABEL_13:
  if ( v8 )
    return 0;
  v12 = *(__int64 **)(v7 + 24);
  v13 = 0LL;
  v14 = 0x7FFFFFFF;
  if ( !v12 )
    return 0;
  do
  {
    if ( *((_DWORD *)v12 + 16) == v9 )
    {
      if ( v9 == 1 || v9 == 3 )
      {
        y = a4->y;
        v16 = *((_DWORD *)v12 + 9);
        v17 = *((_DWORD *)v12 + 11);
      }
      else
      {
        y = a4->x;
        v16 = *((_DWORD *)v12 + 8);
        v17 = *((_DWORD *)v12 + 10);
      }
      v18 = CCursorClip::DeadzoneJumping::Proximity(y, v16, v17);
      if ( v18 < v14 )
      {
        v13 = v12;
        v14 = v18;
      }
    }
    v12 = (__int64 *)*v12;
  }
  while ( v12 );
  if ( !v13 )
    return 0;
  v19 = (_DWORD *)v13[1];
  v20 = EngMulDiv(1500, *(unsigned __int16 *)(v13[3] + 32), 2540);
  v21 = 2 * v20;
  if ( ((v9 - 1) & 0xFFFFFFFD) != 0 )
  {
    v22 = v19[14];
    v23 = v19[12];
    if ( v22 - v23 <= v21 )
    {
      a4->x = v23 + (v22 - v23) / 2;
    }
    else
    {
      if ( (int)abs32(a4->x - v23) >= (int)abs32(a4->x - v22) )
        v24 = v22 - v20;
      else
        v24 = v23 + v20;
      a4->x = v24;
    }
  }
  else
  {
    v25 = v19[15];
    v26 = v19[13];
    if ( v25 - v26 <= v21 )
    {
      a4->y = v26 + (v25 - v26) / 2;
    }
    else
    {
      if ( (int)abs32(a4->y - v26) >= (int)abs32(a4->y - v25) )
        v27 = v25 - v20;
      else
        v27 = v26 + v20;
      a4->y = v27;
    }
  }
  InputTraceLogging::Cursor::DeadzoneJumpSuggestion(v9, &v30, a4);
  return 1;
}
