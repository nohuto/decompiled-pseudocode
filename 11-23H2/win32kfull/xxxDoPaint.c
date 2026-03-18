/*
 * XREFs of xxxDoPaint @ 0x1C00619B8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     _IsChild @ 0x1C0016C3C (_IsChild.c)
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0061DA0 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     ExchangeW32ThreadLock @ 0x1C00AD5D8 (ExchangeW32ThreadLock.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EBC94 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 */

__int64 __fastcall xxxDoPaint(__int64 a1, __int64 a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rax
  char v6; // cl
  __int64 v7; // rax
  int v8; // ebx
  int v9; // esi
  int v10; // r12d
  _DWORD *v11; // rax
  int v12; // r14d
  int v13; // ecx
  int v14; // edx
  int v15; // ebp
  int v16; // eax
  int v17; // r15d
  __int64 v18; // rax
  int v19; // ebx
  int v20; // esi
  int v21; // r12d
  _DWORD *v22; // rax
  int v23; // r14d
  int v24; // ecx
  int v25; // edx
  int v26; // ebp
  int v27; // eax
  int v28; // r15d
  __int64 *v29; // rdx
  __int64 v30; // rax
  int v31; // ebx
  int v32; // r15d
  int v33; // r12d
  _DWORD *v34; // rax
  int v35; // esi
  int v36; // ecx
  int v37; // edx
  int v38; // ebp
  int v39; // eax
  int v40; // r14d
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  int v45; // ebx
  int v46; // esi
  int v47; // r12d
  _DWORD *v48; // rax
  int v49; // r14d
  int v50; // ecx
  int v51; // edx
  int v52; // ebp
  int v53; // eax
  int v54; // r15d
  __int64 v55; // rcx
  __int64 v57; // rbx
  __int64 v58; // rax
  _QWORD *i; // rbx
  int v60; // esi
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  void *v64; // rax
  int v65; // esi
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  void *v69; // rax
  int v70; // esi
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  void *v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  void *v78; // rax
  __int128 v79; // [rsp+20h] [rbp-48h] BYREF
  __int64 v80; // [rsp+30h] [rbp-38h]
  int v81; // [rsp+80h] [rbp+18h]

  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
  {
    v57 = *(_QWORD *)(gptiCurrent + 616LL);
    if ( !v57 )
      return 0LL;
    v4 = *(__int64 **)(*(_QWORD *)(v57 + 56) + 8LL);
    v58 = v4[5];
    if ( !*(_QWORD *)(v58 + 136) && (*(_BYTE *)(v58 + 17) & 0x10) == 0 )
    {
      v4 = 0LL;
      v80 = 0LL;
      v79 = 0LL;
      PushW32ThreadLock(0LL, &v79, UserDereferenceObject);
      for ( i = *(_QWORD **)(v57 + 16); i; i = (_QWORD *)i[4] )
      {
        ObfReferenceObject(i);
        ExchangeW32ThreadLock(i, &v79);
        v4 = (__int64 *)xxxInternalDoPaint(*(struct tagWND **)(i[1] + 24LL), gptiCurrent);
        if ( v4 )
          break;
      }
      PopAndFreeW32ThreadLock(&v79);
    }
  }
  else
  {
    v4 = (__int64 *)xxxInternalDoPaint(
                      *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL),
                      gptiCurrent);
  }
  if ( !v4 || a1 && (__int64 *)a1 != v4 && !(unsigned int)IsChild(a1, (__int64)v4) )
    return 0LL;
  v5 = v4[5];
  v81 = -16;
  v6 = *(_BYTE *)(v5 + 17);
  if ( (v6 & 0x10) != 0 )
  {
    v45 = *(_DWORD *)(v5 + 28);
    v46 = *(_DWORD *)(v5 + 24);
    v47 = *(_DWORD *)(v5 + 232);
    *(_BYTE *)(v5 + 17) = v6 & 0xEF;
    if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    {
LABEL_30:
      if ( !*(_QWORD *)(v4[5] + 136) )
      {
        v55 = v4[2];
        if ( (*(_DWORD *)(v55 + 600))-- == 1 )
        {
          _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v55 + 448) + 8LL), 0xFFFFFFDF);
          _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v55 + 448) + 4LL), 0xFFFFFFDF);
        }
      }
      goto LABEL_6;
    }
    v48 = (_DWORD *)v4[5];
    v49 = v48[7];
    v50 = v48[6];
    v51 = v48[58];
    v52 = v46 ^ v50;
    v53 = v47 ^ v51;
    v54 = v45 ^ v49;
    if ( v45 == v49 )
    {
      if ( v52 )
        goto LABEL_49;
      if ( !v53 )
        goto LABEL_30;
    }
    if ( (v54 & 0xB1CF0000) != 0 )
    {
      v60 = -16;
      goto LABEL_53;
    }
LABEL_49:
    if ( (v52 & 0x4E27A9) != 0 )
    {
      v60 = -20;
      v49 = v50;
    }
    else
    {
      if ( (v53 & 0x12C0) == 0 )
        goto LABEL_54;
      v60 = -268435456;
      v49 = v51;
    }
LABEL_53:
    DirtyVisRgnTrackers(v4);
    v61 = *v4;
    v64 = (void *)ReferenceDwmApiPort(v63, v62);
    DwmAsyncChildStyleChange(v64, v61, v60, v49);
LABEL_54:
    if ( (v52 & 0x200A0381) != 0 || (v54 & 0xC40000) != 0 )
      WindowMargins::CheckForChanges(v4, 1LL);
    goto LABEL_30;
  }
LABEL_6:
  v7 = v4[5];
  v8 = *(_DWORD *)(v7 + 28);
  v9 = *(_DWORD *)(v7 + 24);
  v10 = *(_DWORD *)(v7 + 232);
  *(_BYTE *)(v7 + 20) &= ~4u;
  if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    goto LABEL_10;
  v11 = (_DWORD *)v4[5];
  v12 = v11[7];
  v13 = v11[6];
  v14 = v11[58];
  v15 = v9 ^ v13;
  v16 = v10 ^ v14;
  v17 = v8 ^ v12;
  if ( v8 == v12 )
  {
    if ( v15 )
      goto LABEL_58;
    if ( !v16 )
      goto LABEL_10;
  }
  if ( (v17 & 0xB1CF0000) != 0 )
  {
    v65 = -16;
    goto LABEL_62;
  }
LABEL_58:
  if ( (v15 & 0x4E27A9) != 0 )
  {
    v65 = -20;
    v12 = v13;
  }
  else
  {
    if ( (v16 & 0x12C0) == 0 )
      goto LABEL_63;
    v65 = -268435456;
    v12 = v14;
  }
LABEL_62:
  DirtyVisRgnTrackers(v4);
  v66 = *v4;
  v69 = (void *)ReferenceDwmApiPort(v68, v67);
  DwmAsyncChildStyleChange(v69, v66, v65, v12);
LABEL_63:
  if ( (v15 & 0x200A0381) != 0 || (v17 & 0xC40000) != 0 )
    WindowMargins::CheckForChanges(v4, 1LL);
LABEL_10:
  v18 = v4[5];
  v19 = *(_DWORD *)(v18 + 28);
  v20 = *(_DWORD *)(v18 + 24);
  v21 = *(_DWORD *)(v18 + 232);
  *(_BYTE *)(v18 + 17) &= ~0x20u;
  if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    goto LABEL_14;
  v22 = (_DWORD *)v4[5];
  v23 = v22[7];
  v24 = v22[6];
  v25 = v22[58];
  v26 = v20 ^ v24;
  v27 = v21 ^ v25;
  v28 = v19 ^ v23;
  if ( v19 == v23 )
  {
    if ( v26 )
      goto LABEL_67;
    if ( !v27 )
      goto LABEL_14;
  }
  if ( (v28 & 0xB1CF0000) != 0 )
  {
    v70 = -16;
    goto LABEL_71;
  }
LABEL_67:
  if ( (v26 & 0x4E27A9) != 0 )
  {
    v70 = -20;
    v23 = v24;
  }
  else
  {
    if ( (v27 & 0x12C0) == 0 )
      goto LABEL_72;
    v70 = -268435456;
    v23 = v25;
  }
LABEL_71:
  DirtyVisRgnTrackers(v4);
  v71 = *v4;
  v74 = (void *)ReferenceDwmApiPort(v73, v72);
  DwmAsyncChildStyleChange(v74, v71, v70, v23);
LABEL_72:
  if ( (v26 & 0x200A0381) != 0 || (v28 & 0xC40000) != 0 )
    WindowMargins::CheckForChanges(v4, 1LL);
LABEL_14:
  v29 = v4;
  while ( (*(_WORD *)(v29[5] + 42) & 0x2FFF) != 0x29D )
  {
    v29 = (__int64 *)v29[13];
    if ( (*(_BYTE *)(v29[5] + 31) & 2) == 0 )
    {
      v30 = v4[5];
      v31 = *(_DWORD *)(v30 + 28);
      v32 = *(_DWORD *)(v30 + 24);
      v33 = *(_DWORD *)(v30 + 232);
      *(_BYTE *)(v30 + 20) |= 1u;
      if ( !(unsigned int)IsWindowDesktopComposed(v4) )
        break;
      v34 = (_DWORD *)v4[5];
      v35 = v34[7];
      v36 = v34[6];
      v37 = v34[58];
      v38 = v32 ^ v36;
      v39 = v33 ^ v37;
      v40 = v31 ^ v35;
      if ( v31 != v35 )
        goto LABEL_74;
      if ( v38 )
        goto LABEL_75;
      if ( !v39 )
        break;
LABEL_74:
      if ( (v40 & 0xB1CF0000) != 0 )
      {
LABEL_79:
        DirtyVisRgnTrackers(v4);
        v75 = *v4;
        v78 = (void *)ReferenceDwmApiPort(v77, v76);
        DwmAsyncChildStyleChange(v78, v75, v81, v35);
      }
      else
      {
LABEL_75:
        if ( (v38 & 0x4E27A9) != 0 )
        {
          v81 = -20;
          v35 = v36;
          goto LABEL_79;
        }
        if ( (v39 & 0x12C0) != 0 )
        {
          v81 = -268435456;
          v35 = v37;
          goto LABEL_79;
        }
      }
      if ( (v38 & 0x200A0381) != 0 || (v40 & 0xC40000) != 0 )
        WindowMargins::CheckForChanges(v4, 1LL);
      break;
    }
    if ( !v29 )
      break;
  }
  v41 = *v4;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)a2 = v41;
  *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_QWORD *)(a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(v4[5] + 288));
  v42 = v4[5];
  if ( (*(_BYTE *)(v42 + 21) & 2) == 0 && (*(_BYTE *)(v42 + 31) & 0x20) != 0 && *(_QWORD *)(v4[17] + 80) )
  {
    *(_QWORD *)(a2 + 16) = 1LL;
    v43 = 38;
  }
  else
  {
    v43 = 15;
  }
  *(_DWORD *)(a2 + 8) = v43;
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
