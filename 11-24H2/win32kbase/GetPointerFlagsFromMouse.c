/*
 * XREFs of GetPointerFlagsFromMouse @ 0x140098B90
 * Callers:
 *     <none>
 * Callees:
 *     GetMouseKeyFlags @ 0x1400990A0 (GetMouseKeyFlags.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetPointerFlagsFromMouse(_DWORD *a1, unsigned int a2, unsigned __int64 a3, int *a4, _DWORD *a5)
{
  struct tagTHREADINFO *v9; // rbp
  _DWORD *v10; // r10
  int v11; // edi
  int MouseKeyFlags; // r8d
  bool v13; // zf
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned __int16 *i; // rdx
  __int64 v19; // r10
  int v20; // edx
  unsigned __int16 v21; // ax
  int v22; // edi
  unsigned __int8 v23; // cl
  int v24; // r11d
  int v25; // r9d
  unsigned int v26; // ebx
  unsigned int v27; // ebx
  unsigned int v28; // ebx
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  bool v32; // zf
  unsigned int v33; // ebx
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  unsigned int v37; // r9d
  int v38; // edx
  int v39; // ecx
  int v40; // edx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  bool v45; // zf
  unsigned int v46; // eax
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  unsigned int v50; // ebx
  unsigned int v51; // ebx
  unsigned int v52; // ebx
  unsigned int v53; // ebx
  unsigned int v54; // ebx
  unsigned int v55; // ebx
  unsigned __int64 v56; // rsi
  unsigned __int64 v57; // rsi

  v9 = PtiCurrent();
  v10 = (_DWORD *)*((_QWORD *)v9 + 189);
  v11 = -__CFSHR__(*v10, 4);
  if ( __CFSHR__(*v10, 4) )
  {
    if ( a2 <= 0x206 )
    {
      if ( a2 == 518 || a2 == 512 || a2 == 513 || a2 == 514 )
        goto LABEL_87;
      v46 = a2 - 515;
      v45 = a2 == 515;
    }
    else
    {
      if ( a2 == 519 || a2 == 520 || a2 == 521 )
        goto LABEL_87;
      v46 = a2 - 523;
      v45 = a2 == 523;
    }
    if ( !v45 && v46 - 1 > 1 )
      goto LABEL_2;
LABEL_87:
    a2 -= 352;
  }
LABEL_2:
  MouseKeyFlags = GetMouseKeyFlags(*((_QWORD *)v9 + 59));
  switch ( a2 )
  {
    case 0xA1u:
      goto LABEL_71;
    case 0xA4u:
      goto LABEL_76;
    case 0xA7u:
      goto LABEL_100;
  }
  if ( a2 != 171 )
  {
    if ( a2 != 513 )
    {
      if ( a2 != 516 )
      {
        if ( a2 != 519 )
        {
          if ( a2 != 523 )
            goto LABEL_10;
          goto LABEL_97;
        }
LABEL_100:
        MouseKeyFlags &= ~0x10u;
        goto LABEL_10;
      }
LABEL_76:
      MouseKeyFlags &= ~2u;
      goto LABEL_10;
    }
LABEL_71:
    MouseKeyFlags &= ~1u;
    goto LABEL_10;
  }
LABEL_97:
  v47 = 32;
  if ( WORD1(a3) != 1 )
    v47 = 64;
  MouseKeyFlags &= ~v47;
LABEL_10:
  if ( a2 > 0x200 )
  {
    v13 = a2 == 514;
    v14 = a2 - 514;
  }
  else
  {
    if ( a2 == 512 || a2 == 160 )
    {
LABEL_18:
      if ( (MouseKeyFlags & 0x73) != 0 )
      {
        if ( a2 - 160 <= 0xD )
        {
          if ( !v11 )
            a2 += 352;
        }
        else if ( v11 )
        {
          a2 -= 352;
        }
      }
      goto LABEL_19;
    }
    v14 = a2 - 162;
    v13 = a2 == 162;
  }
  if ( v13 )
    goto LABEL_18;
  v15 = v14 - 3;
  if ( !v15 )
    goto LABEL_18;
  v16 = v15 - 3;
  if ( !v16 || v16 == 4 )
    goto LABEL_18;
LABEL_19:
  v17 = 0LL;
  for ( i = (unsigned __int16 *)&unk_14025C920; *i != a2; i += 12 )
  {
    v17 = (unsigned int)(v17 + 1);
    if ( (unsigned int)v17 >= 0x1C )
      return 0LL;
  }
  v19 = 3 * v17;
  v20 = *((_DWORD *)&unk_14025C920 + 6 * v17 + 2);
  if ( (v20 & 0x10000) == 0 || (MouseKeyFlags & 0x73) != 0 )
  {
    v20 = *((_DWORD *)&unk_14025C920 + 6 * v17 + 3);
    v21 = *((_WORD *)&unk_14025C920 + 12 * v17 + 2);
  }
  else
  {
    v21 = *((_WORD *)&unk_14025C920 + 12 * v17 + 1);
  }
  *a4 = MouseKeyFlags;
  v22 = v20;
  v23 = *((_BYTE *)&unk_14025C920 + 24 * v17 + 16);
  v24 = v21;
  if ( v23 )
  {
    if ( v23 == 5 )
    {
      if ( WORD1(a3) != 1 && WORD1(a3) != 2 )
        return 0LL;
      v23 = BYTE2(a3) + 4;
    }
    v41 = v23 - 1;
    if ( v41 )
    {
      v44 = v41 - 1;
      if ( v44 )
      {
        v48 = v44 - 2;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( v49 )
          {
            if ( v49 == 1 )
              v42 = 64;
            else
              v42 = 0;
          }
          else
          {
            v42 = 32;
          }
        }
        else
        {
          v42 = 16;
        }
      }
      else
      {
        v42 = 2;
      }
    }
    else
    {
      v42 = 1;
    }
    if ( (*((_DWORD *)&unk_14025C920 + 2 * v19 + 2) & 0x10000) != 0 )
    {
      MouseKeyFlags |= v42;
      *a4 = MouseKeyFlags;
    }
    else
    {
      v43 = MouseKeyFlags & ~v42;
      LOBYTE(MouseKeyFlags) = v43;
      *a4 = v43;
    }
  }
  if ( (MouseKeyFlags & 0x73) != 0 )
  {
    v38 = v20 | 4;
    if ( (MouseKeyFlags & 1) != 0 )
      v38 = v22 | 0x14;
    v39 = v38 | 0x20;
    if ( (MouseKeyFlags & 2) == 0 )
      v39 = v38;
    v40 = v39 | 0x40;
    if ( (MouseKeyFlags & 0x10) == 0 )
      v40 = v39;
    v25 = v40 | 0x80;
    if ( (MouseKeyFlags & 0x20) == 0 )
      v25 = v40;
    if ( (MouseKeyFlags & 0x40) != 0 )
      v25 |= 0x100u;
  }
  else
  {
    v24 = *((unsigned __int16 *)&unk_14025C920 + 4 * v19 + 1);
    v25 = *((_DWORD *)&unk_14025C920 + 2 * v19 + 2) | v20 & ~*((_DWORD *)&unk_14025C920 + 2 * v19 + 3);
  }
  *a5 = 0;
  if ( a2 > 0x200 )
  {
    if ( a2 > 0x207 )
    {
      v33 = a2 - 520;
      v32 = v33 == 0;
      goto LABEL_41;
    }
    if ( a2 == 519 )
      goto LABEL_126;
    v51 = a2 - 513;
    if ( !v51 )
      goto LABEL_74;
    v52 = v51 - 1;
    if ( !v52 )
      goto LABEL_77;
    v53 = v52 - 1;
    if ( !v53 )
      goto LABEL_74;
    v54 = v53 - 1;
    if ( v54 )
    {
      v55 = v54 - 1;
      if ( !v55 )
        goto LABEL_36;
      if ( v55 != 1 )
        goto LABEL_46;
    }
LABEL_90:
    *a5 = 3;
    goto LABEL_46;
  }
  if ( a2 == 512 )
    goto LABEL_46;
  if ( a2 == 166 )
    goto LABEL_90;
  if ( a2 > 0xA6 )
  {
    v50 = a2 - 167;
    if ( !v50 )
      goto LABEL_126;
    v33 = v50 - 1;
    v32 = v33 == 0;
LABEL_41:
    if ( v32 )
    {
      *a5 = 6;
      goto LABEL_46;
    }
    v34 = v33 - 1;
    if ( v34 )
    {
      v35 = v34 - 2;
      if ( !v35 )
        goto LABEL_122;
      v36 = v35 - 1;
      if ( !v36 )
      {
        v56 = a3 >> 16;
        if ( (_WORD)v56 == 1 )
        {
          *a5 = 8;
        }
        else if ( (_WORD)v56 == 2 )
        {
          *a5 = 10;
        }
        goto LABEL_46;
      }
      if ( v36 == 1 )
      {
LABEL_122:
        v57 = a3 >> 16;
        if ( (_WORD)v57 == 1 )
        {
          *a5 = 7;
        }
        else if ( (_WORD)v57 == 2 )
        {
          *a5 = 9;
        }
      }
      goto LABEL_46;
    }
LABEL_126:
    *a5 = 5;
    goto LABEL_46;
  }
  v26 = a2 - 160;
  if ( !v26 )
    goto LABEL_46;
  v27 = v26 - 1;
  if ( !v27 )
  {
LABEL_74:
    *a5 = 1;
    goto LABEL_46;
  }
  v28 = v27 - 1;
  if ( !v28 )
  {
LABEL_77:
    *a5 = 2;
    goto LABEL_46;
  }
  v29 = v28 - 1;
  if ( !v29 )
    goto LABEL_74;
  v30 = v29 - 1;
  if ( !v30 )
    goto LABEL_90;
  if ( v30 == 1 )
LABEL_36:
    *a5 = 4;
LABEL_46:
  v37 = v25 | 2;
  **((_DWORD **)v9 + 189) = (32 * *((_DWORD *)&unk_14025C920 + 2 * v19 + 5)) ^ (**((_DWORD **)v9 + 189) ^ (32 * *((_DWORD *)&unk_14025C920 + 2 * v19 + 5))) & 0xFFFFFFDF;
  if ( a1 )
    *a1 = v24;
  return v37;
}
