/*
 * XREFs of ValidateParentDepth @ 0x1400894E8
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ValidateNewParent @ 0x1400893F4 (ValidateNewParent.c)
 * Callees:
 *     IsDesktopWindow @ 0x140075580 (IsDesktopWindow.c)
 */

__int64 __fastcall ValidateParentDepth(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r11
  _QWORD *v4; // r9
  unsigned int i; // r10d
  int v6; // eax
  __int64 v7; // r11
  unsigned int v8; // edi
  _QWORD *v9; // rax
  unsigned int v10; // eax

  v2 = 0;
  v3 = a2;
  v4 = a1;
  for ( i = 1; v3; ++i )
  {
    LOBYTE(v6) = IsDesktopWindow(v3);
    if ( v6 )
      break;
    v3 = *(_QWORD *)(v7 + 104);
  }
  v8 = i;
  if ( v4 && v4[14] )
  {
    a1 = v4;
    while ( 1 )
    {
      while ( v4[14] )
      {
        v4 = (_QWORD *)v4[14];
        ++i;
      }
      v9 = (_QWORD *)v4[11];
      if ( !v9 )
        break;
LABEL_15:
      v4 = v9;
    }
    v10 = i;
    if ( i <= v8 )
      v10 = v8;
    v8 = v10;
    while ( 1 )
    {
      v4 = (_QWORD *)v4[13];
      --i;
      if ( v4 == a1 )
        break;
      v9 = (_QWORD *)v4[11];
      if ( v9 )
        goto LABEL_15;
    }
  }
  LOBYTE(v2) = v8 <= *(_DWORD *)(W32GetUserSessionState(a1, a2) + 63272);
  return v2;
}
