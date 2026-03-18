/*
 * XREFs of ParseModeCap @ 0x1403F4438
 * Callers:
 *     ParseFreqRangeValue @ 0x14027E650 (ParseFreqRangeValue.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     xwcschr @ 0x14040286C (xwcschr.c)
 *     ?xwtol@@YAKPEBG@Z @ 0x1404028A4 (-xwtol@@YAKPEBG@Z.c)
 */

char __fastcall ParseModeCap(_WORD *a1, char a2, _DWORD *a3, int *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // r11
  int v7; // esi
  int v9; // eax
  int v10; // ecx
  int v13; // r8d
  unsigned int v14; // ebx
  _WORD *v15; // rax
  __int64 v16; // r10
  _WORD *v17; // rdi
  _WORD *v18; // rax
  const unsigned __int16 *v19; // r10
  unsigned int v20; // eax
  __int64 v21; // r9
  unsigned int v22; // r9d
  __int64 v23; // rax
  unsigned int v24; // edi
  _WORD *v25; // rax
  const unsigned __int16 *v26; // r10
  _WORD *v27; // rbx
  unsigned int v28; // r9d
  __int64 v29; // rax
  int v30; // ecx
  int v32; // [rsp+20h] [rbp-20h]
  int v33; // [rsp+24h] [rbp-1Ch]
  int v34; // [rsp+28h] [rbp-18h]
  int v35; // [rsp+2Ch] [rbp-14h]

  v6 = a6;
  v7 = -1;
  v32 = 0;
  v33 = -1;
  v9 = 0;
  v34 = 0;
  v10 = -1;
  v35 = -1;
  v13 = 0;
  if ( a2 )
  {
    v14 = 0;
    if ( a1 )
    {
      do
      {
        if ( v14 >= 4 )
          break;
        v15 = (_WORD *)xwcschr(a1, 44LL);
        v17 = v15;
        if ( v15 )
          *v15 = 0;
        v18 = (_WORD *)xwcschr(v16, 45LL);
        if ( v18 )
        {
          *v18 = 0;
          v20 = xwtol(v19);
          v19 = (const unsigned __int16 *)(v21 + 2);
        }
        else
        {
          v20 = 0;
        }
        *(&v32 + v14) = v20;
        v22 = xwtol(v19);
        a1 = v17 + 1;
        v23 = v14 + 1;
        v14 += 2;
        *(&v32 + v23) = v22;
      }
      while ( v17 );
      v10 = v35;
      v9 = v34;
      v7 = v33;
      v13 = v32;
    }
    if ( a3 )
      *a3 = v9;
    if ( a4 )
      *a4 = v10;
    if ( a5 )
      *a5 = 1000 * v13;
    if ( v6 )
      *v6 = 1000 * v7;
    return 1;
  }
  v24 = 0;
  if ( a1 )
  {
    do
    {
      if ( v24 >= 4 )
        break;
      v25 = (_WORD *)xwcschr(a1, 44LL);
      v27 = v25;
      if ( v25 )
        *v25 = 0;
      v28 = xwtol(v26);
      a1 = v27 + 1;
      v29 = v24++;
      *(&v32 + v29) = v28;
    }
    while ( v27 );
    if ( v32 )
    {
      v30 = v33;
      if ( v33 != -1 )
      {
        if ( a3 )
          *a3 = v32;
        if ( a4 )
          *a4 = v30;
        if ( a5 )
          *a5 = v34;
        if ( v6 )
          *v6 = 0;
        return 1;
      }
    }
  }
  return 0;
}
