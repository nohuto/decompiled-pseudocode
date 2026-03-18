/*
 * XREFs of ?bPreComputeFast@PRECOMPUTE@@SAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1403196F4
 * Callers:
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400E09A4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 * Callees:
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@SAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x140319534 (-bAddPreComputedFastFillRects@PRECOMPUTE@@SAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@SAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x140319614 (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@SAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall PRECOMPUTE::bPreComputeFast(struct EPATHOBJ *a1, struct EPATHOBJ *a2, struct _RECTL *a3, char a4)
{
  unsigned int v6; // ebx
  char *v7; // r12
  unsigned __int64 v8; // rcx
  struct _RECTL *v9; // r15
  unsigned int v10; // r14d
  __int128 *v11; // r9
  __int128 v12; // xmm0
  BOOL v13; // edi
  _QWORD *v14; // rsi
  unsigned int v15; // r13d
  __int64 v16; // rax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  LONG v20; // edx
  LONG v21; // ecx
  int v22; // eax
  int v25; // [rsp+24h] [rbp-DCh]
  __int128 v27; // [rsp+38h] [rbp-C8h]
  _QWORD v29[8]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v30[8]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v31; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL v32; // [rsp+E0h] [rbp-20h] BYREF
  char v33; // [rsp+220h] [rbp+120h] BYREF

  memset_0(v29, 0, sizeof(v29));
  memset_0(v30, 0, sizeof(v30));
  if ( *((_DWORD *)a1 + 1) > 0x14u )
  {
    v8 = (unsigned __int64)*((unsigned int *)a1 + 1) << 6;
    if ( v8 > 0xFFFFFFFF )
      return 0LL;
    v6 = 0;
    v7 = (char *)PALLOCNOZ(v8, 1734632775LL);
    if ( !v7 )
      return 0LL;
    v25 = 1;
  }
  else
  {
    v6 = 0;
    v7 = &v33;
    v25 = 0;
  }
  v9 = &v32;
  v10 = 0;
  v27 = 0LL;
  v31 = 0LL;
  if ( a3 )
  {
    v11 = &v31;
    v12 = (__int128)*a3;
    DWORD1(v31) = 16 * a3->top;
    HIDWORD(v31) = 16 * a3->bottom;
    v27 = v12;
  }
  else
  {
    v11 = 0LL;
  }
  if ( (unsigned int)bConstructGET(a1, v30, v7, v11) )
  {
    v14 = v29;
    *(_QWORD *)((char *)&v29[1] + 4) = 0x7FFFFFFFLL;
    v29[0] = v29;
    v13 = 0;
    v15 = 0x80000000;
LABEL_12:
    if ( v14 == v29 || (vAdvanceAETEdges(v29), v14 = (_QWORD *)v29[0], (_QWORD *)v29[0] == v29) )
    {
      v16 = v30[0];
      if ( (_QWORD *)v30[0] == v30 )
      {
        if ( v10 )
        {
          if ( (a4 & 2) != 0 )
          {
            if ( !(unsigned int)PRECOMPUTE::bAddPreComputedFastStrokeRects(a2, &v32, v10) )
LABEL_47:
              v13 = 1;
          }
          else
          {
            v13 = PRECOMPUTE::bAddPreComputedFastFillRects(a2, &v32, v10) == 0;
          }
        }
        goto LABEL_49;
      }
      v15 = *(_DWORD *)(v30[0] + 16LL);
    }
    else
    {
      if ( *(_QWORD **)v29[0] != v29 )
      {
        vXSortAETEdges(v29);
        v14 = (_QWORD *)v29[0];
      }
      v16 = v30[0];
    }
    if ( *(_DWORD *)(v16 + 16) == v15 )
    {
      vMoveNewEdges(v30, v29, v15);
      v14 = (_QWORD *)v29[0];
    }
    while ( 1 )
    {
      v17 = *((_DWORD *)v14 + 3);
      if ( (a4 & 2) != 0 )
      {
        v18 = *((_DWORD *)v14 + 14);
        do
        {
          v14 = (_QWORD *)*v14;
          v18 += *((_DWORD *)v14 + 14);
        }
        while ( v18 );
      }
      else
      {
        v14 = (_QWORD *)*v14;
      }
      v19 = *((_DWORD *)v14 + 3);
      if ( v17 < v19 )
        break;
LABEL_42:
      v14 = (_QWORD *)*v14;
      if ( v14 == v29 )
      {
        v13 = 0;
        v14 = (_QWORD *)v29[0];
        ++v15;
        goto LABEL_12;
      }
    }
    v9->top = v15;
    if ( a3 )
    {
      v20 = v27;
      if ( v17 >= (int)v27 )
        v20 = v17;
      v21 = DWORD2(v27);
      v9->left = v20;
      if ( v19 <= SDWORD2(v27) )
        v21 = v19;
      v9->bottom = v15 + 1;
      v9->right = v21;
      if ( v20 >= v21 )
      {
LABEL_36:
        if ( v10 == 20 )
        {
          if ( (a4 & 2) != 0 )
            v22 = PRECOMPUTE::bAddPreComputedFastStrokeRects(a2, &v32, 0x14u);
          else
            v22 = PRECOMPUTE::bAddPreComputedFastFillRects(a2, &v32, 0x14u);
          if ( !v22 )
            goto LABEL_47;
          v9 = &v32;
          v10 = 0;
        }
        goto LABEL_42;
      }
    }
    else
    {
      v9->right = v19;
      v9->bottom = v15 + 1;
      v9->left = v17;
    }
    ++v10;
    ++v9;
    goto LABEL_36;
  }
  v13 = 1;
LABEL_49:
  if ( v25 )
    Win32FreePool(v7);
  LOBYTE(v6) = !v13;
  return v6;
}
