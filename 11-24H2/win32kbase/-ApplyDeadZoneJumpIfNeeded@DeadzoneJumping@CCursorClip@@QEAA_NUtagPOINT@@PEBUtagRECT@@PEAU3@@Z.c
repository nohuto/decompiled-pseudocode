/*
 * XREFs of ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x140186F30
 * Callers:
 *     ?BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x14020AD1C (-BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     EngMulDiv @ 0x140053870 (EngMulDiv.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1400E1D70 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 *     ?DeadzoneJumpSuggestion@Cursor@InputTraceLogging@@SAXIAEBUtagPOINT@@0@Z @ 0x1401550F4 (-DeadzoneJumpSuggestion@Cursor@InputTraceLogging@@SAXIAEBUtagPOINT@@0@Z.c)
 *     ?Proximity@DeadzoneJumping@CCursorClip@@CAJJJJ@Z @ 0x14019E8B4 (-Proximity@DeadzoneJumping@CCursorClip@@CAJJJJ@Z.c)
 */

char __fastcall CCursorClip::DeadzoneJumping::ApplyDeadZoneJumpIfNeeded(
        CCursorClip::DeadzoneJumping *this,
        struct tagPOINT a2,
        const struct tagRECT *a3,
        struct tagPOINT *a4)
{
  _QWORD *v4; // r10
  _DWORD *v7; // r9
  __int64 v8; // r10
  bool v9; // dl
  unsigned int v10; // ebx
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  __int64 *v13; // r11
  __int64 *v14; // rbp
  int v15; // esi
  LONG y; // ecx
  int v17; // edx
  int v18; // r8d
  int v19; // eax
  _DWORD *v20; // rsi
  INT v21; // r9d
  int v22; // eax
  int v23; // r8d
  int v24; // r10d
  int v25; // ecx
  int v26; // eax
  LONG v27; // r8d
  int v28; // r8d
  int v29; // r10d
  int v30; // ecx
  int v31; // eax
  LONG v32; // r8d
  struct tagPOINT v33; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v34; // [rsp+48h] [rbp+10h] BYREF

  v34 = a2;
  v4 = *(_QWORD **)this;
  *a4 = a2;
  while ( 1 )
  {
    if ( !v4 )
      return 0;
    if ( v4[1] == *(_QWORD *)&a3->left && v4[2] == *(_QWORD *)&a3->right )
      break;
    v4 = (_QWORD *)*v4;
  }
  v33 = a2;
  CCursorClip::ClipPointToRect(a2, a3, &v33);
  v9 = 0;
  v10 = v33.x == *v7;
  if ( v33.y == v7[1] )
  {
    v9 = v33.x == *v7;
    v10 = 2;
    if ( v33.x == *v7 )
      return 0;
  }
  v11 = v10;
  if ( v33.x == v7[2] - 1 )
  {
    v10 = 3;
    v9 = v11 != 0;
    if ( v11 )
      goto LABEL_14;
  }
  v12 = v10;
  if ( v33.y == v7[3] - 1 )
  {
    v10 = 4;
    v9 = v12 != 0;
    goto LABEL_14;
  }
  if ( !v10 )
    return 0;
LABEL_14:
  if ( v9 )
    return 0;
  v13 = *(__int64 **)(v8 + 24);
  v14 = 0LL;
  v15 = 0x7FFFFFFF;
  if ( !v13 )
    return 0;
  do
  {
    if ( *((_DWORD *)v13 + 16) == v10 )
    {
      if ( v10 == 1 || v10 == 3 )
      {
        y = a4->y;
        v17 = *((_DWORD *)v13 + 9);
        v18 = *((_DWORD *)v13 + 11);
      }
      else
      {
        y = a4->x;
        v17 = *((_DWORD *)v13 + 8);
        v18 = *((_DWORD *)v13 + 10);
      }
      v19 = CCursorClip::DeadzoneJumping::Proximity(y, v17, v18);
      if ( v19 < v15 )
      {
        v14 = v13;
        v15 = v19;
      }
    }
    v13 = (__int64 *)*v13;
  }
  while ( v13 );
  if ( !v14 )
    return 0;
  v20 = (_DWORD *)v14[1];
  v21 = EngMulDiv(1500, *(unsigned __int16 *)(v14[3] + 32), 2540);
  v22 = 2 * v21;
  if ( ((v10 - 1) & 0xFFFFFFFD) != 0 )
  {
    v23 = v20[14];
    v24 = v20[12];
    if ( v23 - v24 <= v22 )
    {
      a4->x = v24 + (v23 - v24) / 2;
    }
    else
    {
      v25 = v24 - a4->x;
      if ( v25 < 0 )
        v25 = a4->x - v24;
      v26 = v23 - a4->x;
      if ( a4->x - v23 > 0 )
        v26 = a4->x - v23;
      if ( v25 >= v26 )
        v27 = v23 - v21;
      else
        v27 = v24 + v21;
      a4->x = v27;
    }
  }
  else
  {
    v28 = v20[15];
    v29 = v20[13];
    if ( v28 - v29 <= v22 )
    {
      a4->y = v29 + (v28 - v29) / 2;
    }
    else
    {
      v30 = v29 - a4->y;
      if ( v30 < 0 )
        v30 = a4->y - v29;
      v31 = v28 - a4->y;
      if ( a4->y - v28 > 0 )
        v31 = a4->y - v28;
      if ( v30 >= v31 )
        v32 = v28 - v21;
      else
        v32 = v29 + v21;
      a4->y = v32;
    }
  }
  InputTraceLogging::Cursor::DeadzoneJumpSuggestion(v10, &v34, a4);
  return 1;
}
