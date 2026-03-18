/*
 * XREFs of InternalInvalidate3 @ 0x140044BB8
 * Callers:
 *     xxxEndPaint @ 0x140035878 (xxxEndPaint.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x140042C90 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x140032044 (DwmAsyncChildStyleChange.c)
 *     DecPaintCount @ 0x140035D9C (DecPaintCount.c)
 *     CalcWindowRgn @ 0x1400367C4 (CalcWindowRgn.c)
 *     IncPaintCount @ 0x140045548 (IncPaintCount.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140049338 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     IncPaintCountInterMoveSize @ 0x1402D21A0 (IncPaintCountInterMoveSize.c)
 */

void __fastcall InternalInvalidate3(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v4; // r13
  int v6; // r14d
  __int64 v7; // rcx
  struct tagWND *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  BOOL v12; // ebx
  int v13; // eax
  int v14; // ebx
  int v15; // ebp
  _DWORD *v16; // rax
  int v17; // r12d
  int v18; // ecx
  int v19; // edx
  int v20; // r15d
  int v21; // eax
  int v22; // r13d
  __int64 v23; // rax
  int v24; // r12d
  int v25; // ebx
  int v26; // ebp
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int *v29; // rax
  int v30; // r15d
  int v31; // r14d
  int v32; // eax
  int v33; // r12d
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v35; // rax
  int v36; // r12d
  int v37; // r14d
  int v38; // ebx
  _DWORD *v39; // rax
  int v40; // r14d
  int v41; // ebx
  int v42; // r15d
  int v43; // r12d
  __int64 v44; // rax
  int v45; // r15d
  int v46; // ebp
  int v47; // ebx
  _DWORD *v48; // rax
  int v49; // ebp
  int v50; // ebx
  int v51; // r14d
  int v52; // r15d
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  struct tagWND *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 UserSessionState; // rax
  int v64; // ebp
  int v65; // ebp
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  void *v69; // rax
  __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  void *v73; // rax
  int v74; // ebp
  __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  void *v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // rcx
  void *v82; // rax
  __int64 v83; // r8
  __int64 v84; // rdx
  struct tagTHREADINFO *v85; // rbx
  struct tagTHREADINFO *v86; // rax
  int v87; // [rsp+20h] [rbp-48h]
  int v89; // [rsp+80h] [rbp+18h]
  BOOL v90; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v7 = *((_QWORD *)a1 + 3);
    v8 = 0LL;
    if ( v7 )
    {
      v9 = *(_QWORD *)(v7 + 8);
      if ( v9 )
        v8 = *(struct tagWND **)(v9 + 24);
    }
    if ( a1 == v8 && (unsigned int)IsWindowDesktopComposed(a1) )
      return;
  }
  v10 = *((_QWORD *)a1 + 5);
  v11 = (_BYTE *)(v10 + 17);
  v12 = *(_QWORD *)(v10 + 136) || (*v11 & 0x10) != 0;
  v90 = v12;
  if ( (a3 & 0x407) == 0 )
  {
    if ( (a3 & 0x838) == 0 )
      return;
    LOBYTE(v10) = (*v11 >> 5) & ((a3 & 0x8000) == 0);
    if ( (_BYTE)v10 )
      return;
    if ( (a3 & 0x10) != 0 )
      SetOrClrWF(0LL, a1, 272LL, 1LL);
    if ( (a3 & 8) == 0 )
      goto LABEL_53;
    if ( (a3 & 0x20) != 0 )
      SetOrClrWF(0LL, a1, 258LL, 1LL);
    if ( (a3 & 0x800) != 0 )
      SetOrClrWF(0LL, a1, 264LL, 1LL);
    v59 = *((_QWORD *)a1 + 5);
    if ( !*(_QWORD *)(v59 + 136) )
      goto LABEL_53;
    if ( (*(_BYTE *)(v59 + 17) & 8) != 0 )
    {
      if ( v4 != 1 )
      {
LABEL_67:
        if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) == 1LL )
        {
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic();
          v83 = *((_QWORD *)a1 + 5);
          v84 = *(_QWORD *)(v83 + 136);
          if ( !v84 )
            goto LABEL_59;
          LOBYTE(v83) = ~*(_BYTE *)(v83 + 17);
          if ( !(unsigned int)CalcWindowRgn((__int64)a1, v84, ((unsigned int)v83 >> 3) & 1) )
            goto LABEL_59;
        }
        v60 = GreCombineRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), v4, 4LL);
        if ( !v60 )
          goto LABEL_59;
        if ( v60 != 1 )
        {
LABEL_53:
          if ( v12 )
          {
            v57 = *((_QWORD *)a1 + 5);
            if ( !*(_QWORD *)(v57 + 136) && (*(_BYTE *)(v57 + 17) & 0x10) == 0 )
              DecPaintCount((__int64)a1);
          }
          return;
        }
LABEL_70:
        DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
        SetOrClrWF(0LL, a1, 258LL, 1LL);
        goto LABEL_53;
      }
      v4 = *(_QWORD *)(W32GetUserSessionState(v10, v11) + 63416);
      CalcWindowRgn((__int64)a1, v4, 1);
    }
    if ( v4 == 1 )
      goto LABEL_70;
    goto LABEL_67;
  }
  v89 = -16;
  if ( (a3 & 2) != 0 )
  {
    v13 = *(_DWORD *)(v10 + 232);
    v14 = *(_DWORD *)(v10 + 28);
    v15 = *(_DWORD *)(v10 + 24);
    *v11 |= 0x10u;
    v87 = v13;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v16 = (_DWORD *)*((_QWORD *)a1 + 5);
      v17 = v16[7];
      v18 = v16[6];
      v19 = v16[58];
      v20 = v15 ^ v18;
      v21 = v87 ^ v19;
      v22 = v14 ^ v17;
      if ( v14 == v17 )
      {
        if ( v20 )
          goto LABEL_74;
        if ( !v21 )
        {
LABEL_15:
          v4 = a2;
          goto LABEL_16;
        }
      }
      if ( (v22 & 0xB9CF0000) != 0 )
      {
        v64 = -16;
        goto LABEL_82;
      }
LABEL_74:
      if ( (v20 & 0x4E27A9) != 0 )
      {
        v64 = -20;
        v17 = v18;
      }
      else
      {
        if ( (v21 & 0x3F2C0) == 0 )
        {
LABEL_83:
          if ( (v22 & 0x1C40000) != 0 || (v20 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges(a1, 1LL);
          goto LABEL_15;
        }
        v64 = -268435456;
        v17 = v19;
      }
LABEL_82:
      DirtyVisRgnTrackers(a1);
      v66 = *(_QWORD *)a1;
      v69 = (void *)ReferenceDwmApiPort(v68, v67);
      DwmAsyncChildStyleChange(v69, v66, v64, v17);
      goto LABEL_83;
    }
  }
LABEL_16:
  if ( !v6 )
    goto LABEL_38;
  v23 = *((_QWORD *)a1 + 5);
  v24 = *(_DWORD *)(v23 + 28);
  v25 = *(_DWORD *)(v23 + 24);
  v26 = *(_DWORD *)(v23 + 232);
  *(_BYTE *)(v23 + 17) &= ~1u;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v29 = (unsigned int *)*((_QWORD *)a1 + 5);
    v30 = v29[7];
    v28 = v29[6];
    v27 = v29[58];
    v31 = v25 ^ v29[6];
    v32 = v26 ^ v29[58];
    v33 = v30 ^ v24;
    if ( !v33 )
    {
      if ( v31 )
        goto LABEL_78;
      if ( !v32 )
        goto LABEL_21;
    }
    if ( (v33 & 0xB9CF0000) != 0 )
    {
      v65 = -16;
      goto LABEL_86;
    }
LABEL_78:
    if ( (v31 & 0x4E27A9) != 0 )
    {
      v65 = -20;
      v30 = v28;
    }
    else
    {
      if ( (v32 & 0x3F2C0) == 0 )
      {
LABEL_87:
        if ( (v33 & 0x1C40000) != 0 || (v31 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(a1, 1LL);
        goto LABEL_21;
      }
      v65 = -268435456;
      v30 = v27;
    }
LABEL_86:
    DirtyVisRgnTrackers(a1);
    v70 = *(_QWORD *)a1;
    v73 = (void *)ReferenceDwmApiPort(v72, v71);
    DwmAsyncChildStyleChange(v73, v70, v65, v30);
    goto LABEL_87;
  }
LABEL_21:
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v28, v27);
  if ( CurrentThreadNonPaged )
    CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
  if ( *((_QWORD **)a1 + 2) != CurrentThreadNonPaged )
  {
    SetOrClrWF(1LL, a1, 288LL, 1LL);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 1) != 0 )
    {
      SetOrClrWF(1LL, a1, 1026LL, 1LL);
      UserSessionState = W32GetUserSessionState(v62, v61);
      *(_DWORD *)(UserSessionState + 63460) |= a3;
    }
  }
  if ( (a3 & 4) != 0 )
  {
    v35 = *((_QWORD *)a1 + 5);
    v36 = *(_DWORD *)(v35 + 28);
    v37 = *(_DWORD *)(v35 + 24);
    v38 = *(_DWORD *)(v35 + 232);
    *(_BYTE *)(v35 + 17) |= 2u;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v39 = (_DWORD *)*((_QWORD *)a1 + 5);
      v40 = v39[6] ^ v37;
      v41 = v39[58] ^ v38;
      v42 = v39[7];
      v43 = v42 ^ v36;
      if ( !v43 )
      {
        if ( v40 )
          goto LABEL_90;
        if ( !v41 )
          goto LABEL_29;
      }
      if ( (v43 & 0xB9CF0000) != 0 )
      {
        v74 = -16;
        goto LABEL_94;
      }
LABEL_90:
      if ( (v40 & 0x4E27A9) != 0 )
      {
        v74 = -20;
        v42 = v39[6];
      }
      else
      {
        if ( (v41 & 0x3F2C0) == 0 )
        {
LABEL_95:
          if ( (v43 & 0x1C40000) != 0 || (v40 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges(a1, 1LL);
          goto LABEL_29;
        }
        v74 = -268435456;
        v42 = v39[58];
      }
LABEL_94:
      DirtyVisRgnTrackers(a1);
      v75 = *(_QWORD *)a1;
      v78 = (void *)ReferenceDwmApiPort(v77, v76);
      DwmAsyncChildStyleChange(v78, v75, v74, v42);
      goto LABEL_95;
    }
  }
LABEL_29:
  if ( (a3 & 0x400) == 0 )
    goto LABEL_34;
  v44 = *((_QWORD *)a1 + 5);
  v45 = *(_DWORD *)(v44 + 28);
  v46 = *(_DWORD *)(v44 + 24);
  v47 = *(_DWORD *)(v44 + 232);
  *(_BYTE *)(v44 + 17) |= 8u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_34;
  v48 = (_DWORD *)*((_QWORD *)a1 + 5);
  v49 = v48[6] ^ v46;
  v50 = v48[58] ^ v47;
  v51 = v48[7];
  v52 = v51 ^ v45;
  if ( !v52 )
  {
    if ( v49 )
      goto LABEL_98;
    if ( !v50 )
      goto LABEL_34;
  }
  if ( (v52 & 0xB9CF0000) != 0 )
  {
LABEL_101:
    DirtyVisRgnTrackers(a1);
    v79 = *(_QWORD *)a1;
    v82 = (void *)ReferenceDwmApiPort(v81, v80);
    DwmAsyncChildStyleChange(v82, v79, v89, v51);
    goto LABEL_102;
  }
LABEL_98:
  if ( (v49 & 0x4E27A9) != 0 )
  {
    v89 = -20;
    v51 = v48[6];
    goto LABEL_101;
  }
  if ( (v50 & 0x3F2C0) != 0 )
  {
    v89 = -268435456;
    v51 = v48[58];
    goto LABEL_101;
  }
LABEL_102:
  if ( (v52 & 0x1C40000) != 0 || (v49 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_34:
  v53 = *((_QWORD *)a1 + 5);
  v54 = *(_QWORD *)(v53 + 136);
  if ( v54 != 1 )
  {
    if ( v4 == 1 )
      goto LABEL_59;
    if ( v54 )
    {
      if ( (unsigned int)GreCombineRgn(v54, *(_QWORD *)(v53 + 136), v4, 2LL) )
        goto LABEL_38;
LABEL_59:
      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 1LL;
      goto LABEL_38;
    }
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic();
    v58 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
    if ( !v58 || !(unsigned int)GreCombineRgn(v58, v4, 0LL, 5LL) )
      goto LABEL_59;
  }
LABEL_38:
  if ( !v90 )
  {
    v55 = *((_QWORD *)a1 + 5);
    if ( *(_QWORD *)(v55 + 136) || (*(_BYTE *)(v55 + 17) & 0x10) != 0 )
    {
      if ( (a3 & 0x20000) == 0 )
      {
        v56 = a1;
LABEL_47:
        IncPaintCount(v56);
        return;
      }
      v85 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
      v86 = PtiCurrent();
      v56 = a1;
      if ( v85 == v86 )
        goto LABEL_47;
      IncPaintCountInterMoveSize(a1);
    }
  }
}
