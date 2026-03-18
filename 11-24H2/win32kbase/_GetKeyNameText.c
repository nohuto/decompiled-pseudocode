/*
 * XREFs of _GetKeyNameText @ 0x1400963E0
 * Callers:
 *     <none>
 * Callees:
 *     wcsncpycch @ 0x140096384 (wcsncpycch.c)
 *     InternalMapVirtualKeyEx @ 0x1400969C0 (InternalMapVirtualKeyEx.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 */

__int64 __fastcall GetKeyNameText(unsigned int a1, _WORD *a2, int a3)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // eax
  int v12; // eax
  __int64 result; // rax
  __int64 v14; // rdx
  char v15; // cl
  _WORD **v16; // rcx
  _WORD *v17; // rdx

  v5 = a1;
  v6 = (unsigned __int64)a1 >> 16;
  v7 = PtiCurrent();
  if ( a3 < 1 )
    return 0LL;
  if ( (v5 & 0x2000000) != 0 )
  {
    v15 = v6;
    if ( (_BYTE)v6 == 54 )
      v15 = 42;
    LOBYTE(v6) = v15;
    if ( (v5 & 0x1000000) != 0 && (v15 == 29 || v15 == 56) )
      v5 &= ~0x1000000u;
    v5 &= ~0x2000000u;
  }
  v8 = *((_QWORD *)v7 + 60);
  if ( !v8 )
    return 0LL;
  v9 = *(_QWORD **)(*(_QWORD *)(v8 + 48) + 32LL);
  if ( (v5 & 0x1000000) != 0 )
    v10 = v9[4];
  else
    v10 = v9[3];
  if ( v10 )
  {
    while ( *(_BYTE *)v10 )
    {
      if ( (_BYTE)v6 == *(_BYTE *)v10 )
      {
        v14 = *(_QWORD *)(v10 + 8);
        if ( v14 )
        {
          result = (unsigned int)wcsncpycch(a2, v14, a3) - 1;
          a2[(int)result] = 0;
          return result;
        }
      }
      v10 += 16LL;
    }
  }
  v11 = InternalMapVirtualKeyEx((unsigned __int8)v6, 1LL, v9);
  if ( !v11 )
    return 0LL;
  v12 = InternalMapVirtualKeyEx(v11, 2LL, v9);
  if ( !v12 )
    return 0LL;
  if ( v12 < 0 )
  {
    v16 = (_WORD **)v9[5];
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *v16;
        if ( !*v16 )
          break;
        if ( *v17 == (_WORD)v12 )
        {
          result = (unsigned int)wcsncpycch(a2, (__int64)(v17 + 1), a3) - 1;
          a2[(int)result] = 0;
          return result;
        }
        ++v16;
      }
    }
  }
  *a2 = v12;
  if ( a3 >= 2 )
    a2[1] = 0;
  return 1LL;
}
