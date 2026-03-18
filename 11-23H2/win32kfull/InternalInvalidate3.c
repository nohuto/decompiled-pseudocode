/*
 * XREFs of InternalInvalidate3 @ 0x1C0051900
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C004F490 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxEndPaint @ 0x1C0061760 (xxxEndPaint.c)
 *     NtUserEndPaint @ 0x1C0071310 (NtUserEndPaint.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     CalcWindowRgn @ 0x1C00617F0 (CalcWindowRgn.c)
 *     DecPaintCount @ 0x1C0061860 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EBC94 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     IncPaintCount @ 0x1C0222520 (IncPaintCount.c)
 *     IncPaintCountInterMoveSize @ 0x1C0222570 (IncPaintCountInterMoveSize.c)
 */

void __fastcall InternalInvalidate3(__int64 *a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // r13
  int v6; // ebp
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  BOOL v11; // r12d
  __int64 v12; // rax
  int v13; // edi
  int v14; // r14d
  int v15; // r15d
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // rax
  int v19; // ecx
  int v20; // ebp
  int v21; // r14d
  int v22; // eax
  int v23; // r12d
  __int64 v24; // rax
  int v25; // edi
  int v26; // r14d
  int v27; // r15d
  unsigned int *v28; // rax
  int v29; // ebp
  int v30; // r14d
  int v31; // ecx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdi
  int v38; // ecx
  __int64 v39; // rax
  int v40; // r14d
  int v41; // ebp
  int v42; // edi
  _DWORD *v43; // rax
  int v44; // ebp
  int v45; // edi
  int v46; // r15d
  int v47; // r14d
  int v48; // eax
  int v49; // edi
  int v50; // r15d
  _DWORD *v51; // rax
  int v52; // edx
  int v53; // r14d
  int v54; // r15d
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rcx
  void *v64; // rax
  int v65; // r15d
  __int64 v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // rcx
  void *v69; // rax
  int v70; // r15d
  __int64 v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // rcx
  void *v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // rcx
  void *v78; // rax
  int v79; // [rsp+20h] [rbp-48h]
  int v80; // [rsp+24h] [rbp-44h]
  int v81; // [rsp+28h] [rbp-40h]
  BOOL v82; // [rsp+80h] [rbp+18h]
  int v83; // [rsp+80h] [rbp+18h]
  int v84; // [rsp+88h] [rbp+20h]
  int v85; // [rsp+88h] [rbp+20h]
  int v86; // [rsp+88h] [rbp+20h]
  int v87; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    goto LABEL_6;
  v7 = a1[3];
  v8 = 0LL;
  if ( v7 )
  {
    a3 = *(_QWORD *)(v7 + 8);
    if ( a3 )
      v8 = *(__int64 **)(a3 + 24);
  }
  if ( a1 != v8 || !(unsigned int)IsWindowDesktopComposed(a1) )
  {
LABEL_6:
    v9 = a1[5];
    v10 = 1LL;
    v11 = *(_QWORD *)(v9 + 136) || (*(_BYTE *)(v9 + 17) & 0x10) != 0;
    v82 = v11;
    if ( (v3 & 0x407) != 0 )
    {
      v79 = -16;
      if ( (v3 & 2) == 0 )
        goto LABEL_11;
      v48 = *(_DWORD *)(v9 + 232);
      v49 = *(_DWORD *)(v9 + 28);
      v50 = *(_DWORD *)(v9 + 24);
      *(_BYTE *)(v9 + 17) |= 0x10u;
      v86 = v48;
      if ( !(unsigned int)IsWindowDesktopComposed(a1) )
        goto LABEL_11;
      v51 = (_DWORD *)a1[5];
      v52 = v51[6];
      v53 = v50 ^ v52;
      v80 = v51[7];
      v54 = v51[58];
      v81 = v49 ^ v80;
      v55 = v86 ^ v54;
      if ( v49 == v80 )
      {
        if ( v53 )
          goto LABEL_84;
        if ( !v55 )
          goto LABEL_11;
      }
      if ( ((v49 ^ v80) & 0xB1CF0000) != 0 )
      {
        v54 = v80;
        v87 = -16;
        goto LABEL_88;
      }
LABEL_84:
      if ( (v53 & 0x4E27A9) != 0 )
      {
        v87 = -20;
        v54 = v52;
      }
      else
      {
        if ( (v55 & 0x12C0) == 0 )
          goto LABEL_89;
        v87 = -268435456;
      }
LABEL_88:
      DirtyVisRgnTrackers(a1);
      v61 = *a1;
      v64 = (void *)ReferenceDwmApiPort(v63, v62);
      DwmAsyncChildStyleChange(v64, v61, v87, v54);
LABEL_89:
      if ( (v53 & 0x200A0381) != 0 || (v81 & 0xC40000) != 0 )
        WindowMargins::CheckForChanges(a1, 1LL);
LABEL_11:
      if ( !v6 )
        goto LABEL_33;
      v12 = a1[5];
      v13 = *(_DWORD *)(v12 + 28);
      v14 = *(_DWORD *)(v12 + 24);
      v15 = *(_DWORD *)(v12 + 232);
      *(_BYTE *)(v12 + 17) &= ~1u;
      if ( !(unsigned int)IsWindowDesktopComposed(a1) )
      {
LABEL_17:
        if ( a1[2] != gptiCurrent )
        {
          SetOrClrWF(1LL, a1, 288LL, 1LL);
          if ( (*(_BYTE *)(a1[5] + 20) & 1) != 0 )
          {
            SetOrClrWF(1LL, a1, 1026LL, 1LL);
            gRdwFlags |= v3;
          }
        }
        if ( v4 == 1 && (*(_BYTE *)(a1[5] + 21) & 1) == 0 )
          SetOrClrWF(0LL, a1, 258LL, 1LL);
        if ( (v3 & 4) == 0 )
          goto LABEL_26;
        v24 = a1[5];
        v25 = *(_DWORD *)(v24 + 28);
        v26 = *(_DWORD *)(v24 + 24);
        v27 = *(_DWORD *)(v24 + 232);
        *(_BYTE *)(v24 + 17) |= 2u;
        if ( !(unsigned int)IsWindowDesktopComposed(a1) )
          goto LABEL_26;
        v28 = (unsigned int *)a1[5];
        v16 = v28[6];
        v29 = v26 ^ v28[6];
        v83 = v28[7];
        v30 = v28[58];
        v31 = v25 ^ v83;
        v85 = v25 ^ v83;
        v32 = v27 ^ v30;
        if ( v25 == v83 )
        {
          if ( v29 )
            goto LABEL_103;
          if ( !v32 )
          {
LABEL_26:
            if ( (v3 & 0x400) != 0 )
            {
              v39 = a1[5];
              v40 = *(_DWORD *)(v39 + 28);
              v41 = *(_DWORD *)(v39 + 24);
              v42 = *(_DWORD *)(v39 + 232);
              *(_BYTE *)(v39 + 17) |= 8u;
              if ( (unsigned int)IsWindowDesktopComposed(a1) )
              {
                v43 = (_DWORD *)a1[5];
                v44 = v43[6] ^ v41;
                v16 = (unsigned int)v43[58];
                v45 = v16 ^ v42;
                v46 = v43[7];
                v47 = v46 ^ v40;
                if ( v47 )
                  goto LABEL_111;
                if ( v44 )
                {
LABEL_112:
                  if ( (v44 & 0x4E27A9) != 0 )
                  {
                    v79 = -20;
                    v46 = v43[6];
                  }
                  else
                  {
                    if ( (v45 & 0x12C0) == 0 )
                    {
LABEL_117:
                      if ( (v47 & 0xC40000) != 0 || (v44 & 0x200A0381) != 0 )
                        WindowMargins::CheckForChanges(a1, 1LL);
                      goto LABEL_27;
                    }
                    v79 = -268435456;
                    v46 = v43[58];
                  }
LABEL_116:
                  DirtyVisRgnTrackers(a1);
                  v75 = *a1;
                  v78 = (void *)ReferenceDwmApiPort(v77, v76);
                  DwmAsyncChildStyleChange(v78, v75, v79, v46);
                  goto LABEL_117;
                }
                if ( v45 )
                {
LABEL_111:
                  if ( (v47 & 0xB1CF0000) != 0 )
                    goto LABEL_116;
                  goto LABEL_112;
                }
              }
            }
LABEL_27:
            v33 = a1[5];
            v34 = *(_QWORD *)(v33 + 136);
            if ( v34 != 1 )
            {
              if ( v4 == 1 )
                goto LABEL_32;
              if ( v34 )
              {
                if ( (unsigned int)GreCombineRgn(v34, *(_QWORD *)(v33 + 136), v4, 2LL) )
                  goto LABEL_33;
                goto LABEL_32;
              }
              *(_QWORD *)(a1[5] + 136) = CreateEmptyRgnPublic(0LL, v16, v17, v10);
              v35 = *(_QWORD *)(a1[5] + 136);
              if ( !v35 || !(unsigned int)GreCombineRgn(v35, v4, 0LL, 5LL) )
              {
LABEL_32:
                DeleteMaybeSpecialRgn(*(_QWORD *)(a1[5] + 136));
                *(_QWORD *)(a1[5] + 136) = 1LL;
              }
            }
LABEL_33:
            if ( !v11 )
            {
              v36 = a1[5];
              if ( *(_QWORD *)(v36 + 136) || (*(_BYTE *)(v36 + 17) & 0x10) != 0 )
              {
                v37 = a1[2];
                if ( (v3 & 0x20000) != 0 )
                {
                  if ( (struct tagTHREADINFO *)v37 == PtiCurrentShared() )
                    IncPaintCount(a1);
                  else
                    IncPaintCountInterMoveSize(a1);
                }
                else
                {
                  v38 = *(_DWORD *)(v37 + 600);
                  *(_DWORD *)(v37 + 600) = v38 + 1;
                  if ( !v38 )
                  {
                    EtwTraceWakePump(v37, a1, 15LL, v10);
                    if ( (*(_DWORD *)(v37 + 488) & 1) == 0 )
                    {
                      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v37 + 448) + 8LL), 0x20u);
                      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v37 + 448) + 4LL), 0x20u);
                      if ( (*(_DWORD *)(*(_QWORD *)(v37 + 448) + 16LL) & 0x20) != 0 )
                        KeSetEvent(*(PRKEVENT *)(v37 + 736), 2, 0);
                    }
                  }
                }
              }
            }
            return;
          }
        }
        if ( (v31 & 0xB1CF0000) != 0 )
        {
          v30 = v83;
          v70 = -16;
          goto LABEL_107;
        }
LABEL_103:
        if ( (v29 & 0x4E27A9) != 0 )
        {
          v70 = -20;
          v30 = v16;
        }
        else
        {
          if ( (v32 & 0x12C0) == 0 )
          {
LABEL_108:
            if ( (v31 & 0xC40000) != 0 || (v29 & 0x200A0381) != 0 )
              WindowMargins::CheckForChanges(a1, 1LL);
            goto LABEL_26;
          }
          v70 = -268435456;
        }
LABEL_107:
        DirtyVisRgnTrackers(a1);
        v71 = *a1;
        v74 = (void *)ReferenceDwmApiPort(v73, v72);
        DwmAsyncChildStyleChange(v74, v71, v70, v30);
        v31 = v85;
        goto LABEL_108;
      }
      v18 = (_DWORD *)a1[5];
      v84 = v18[7];
      v19 = v18[6];
      v20 = v14 ^ v19;
      v21 = v18[58];
      v22 = v15 ^ v21;
      v23 = v13 ^ v84;
      if ( v13 == v84 )
      {
        if ( v20 )
          goto LABEL_93;
        if ( !v22 )
        {
LABEL_16:
          v11 = v82;
          goto LABEL_17;
        }
      }
      if ( (v23 & 0xB1CF0000) != 0 )
      {
        v21 = v84;
        v65 = -16;
        goto LABEL_97;
      }
LABEL_93:
      if ( (v20 & 0x4E27A9) != 0 )
      {
        v65 = -20;
        v21 = v19;
      }
      else
      {
        if ( (v22 & 0x12C0) == 0 )
        {
LABEL_98:
          if ( (v23 & 0xC40000) != 0 || (v20 & 0x200A0381) != 0 )
          {
            WindowMargins::CheckForChanges(a1, 1LL);
            v11 = v82;
            goto LABEL_17;
          }
          goto LABEL_16;
        }
        v65 = -268435456;
      }
LABEL_97:
      DirtyVisRgnTrackers(a1);
      v66 = *a1;
      v69 = (void *)ReferenceDwmApiPort(v68, v67);
      DwmAsyncChildStyleChange(v69, v66, v65, v21);
      goto LABEL_98;
    }
    if ( (v3 & 0x838) == 0 || (*(_BYTE *)(v9 + 17) & 0x20) != 0 && (v3 & 0x8000) == 0 )
      return;
    if ( (v3 & 0x10) != 0 )
    {
      SetOrClrWF(0LL, a1, 272LL, 1LL);
      v10 = 1LL;
    }
    if ( (v3 & 8) == 0 )
      goto LABEL_70;
    if ( (v3 & 0x20) != 0 )
    {
      SetOrClrWF(0LL, a1, 258LL, 1LL);
      v10 = 1LL;
    }
    if ( (v3 & 0x800) != 0 )
    {
      SetOrClrWF(0LL, a1, 264LL, 1LL);
      SetOrClrWF(0LL, a1, 1664LL, 1LL);
      v10 = 1LL;
    }
    v56 = a1[5];
    if ( !*(_QWORD *)(v56 + 136) )
      goto LABEL_70;
    if ( (*(_BYTE *)(v56 + 17) & 8) != 0 )
    {
      if ( v4 != 1 )
        goto LABEL_76;
      v4 = ghrgnInv2;
      CalcWindowRgn(a1, ghrgnInv2, 1LL);
    }
    if ( v4 == 1 )
    {
LABEL_81:
      DeleteMaybeSpecialRgn(*(_QWORD *)(a1[5] + 136));
      *(_QWORD *)(a1[5] + 136) = 0LL;
      SetOrClrWF(0LL, a1, 258LL, 1LL);
LABEL_70:
      if ( v11 )
      {
        v57 = a1[5];
        if ( !*(_QWORD *)(v57 + 136) && (*(_BYTE *)(v57 + 17) & 0x10) == 0 )
          DecPaintCount(a1, a2, a3, v10);
      }
      return;
    }
LABEL_76:
    if ( *(_QWORD *)(a1[5] + 136) == 1LL )
    {
      *(_QWORD *)(a1[5] + 136) = CreateEmptyRgnPublic(v9, a2, a3, v10);
      v58 = a1[5];
      v59 = *(_QWORD *)(v58 + 136);
      if ( !v59 || !(unsigned int)CalcWindowRgn(a1, v59, (*(_BYTE *)(v58 + 17) & 8) == 0) )
        goto LABEL_32;
    }
    v60 = GreCombineRgn(*(_QWORD *)(a1[5] + 136), *(_QWORD *)(a1[5] + 136), v4, 4LL);
    if ( !v60 )
      goto LABEL_32;
    if ( v60 != 1 )
      goto LABEL_70;
    goto LABEL_81;
  }
}
