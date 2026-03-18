/*
 * XREFs of xxxDoPaint @ 0x140033DBC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x140032044 (DwmAsyncChildStyleChange.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x140034330 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     DecPaintCount @ 0x140035D9C (DecPaintCount.c)
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140049338 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 *     ExchangeW32ThreadLock @ 0x140117394 (ExchangeW32ThreadLock.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxDoPaint(struct tagWND *a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rbx
  struct tagWND *v5; // rdi
  struct tagWND *v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  int v9; // r13d
  char v10; // cl
  int v11; // ebx
  int v12; // esi
  int v13; // r12d
  _DWORD *v14; // rax
  int v15; // r14d
  int v16; // ecx
  int v17; // edx
  int v18; // ebp
  int v19; // eax
  int v20; // r15d
  __int64 v21; // rax
  int v22; // ebx
  int v23; // r15d
  int v24; // r12d
  _DWORD *v25; // rax
  int v26; // esi
  int v27; // ecx
  int v28; // edx
  int v29; // ebp
  int v30; // eax
  int v31; // r14d
  struct tagWND *v32; // rdx
  __int64 v33; // rax
  int v35; // ebx
  int v36; // esi
  int v37; // r12d
  _DWORD *v38; // rax
  int v39; // r14d
  int v40; // ecx
  int v41; // edx
  int v42; // ebp
  int v43; // eax
  int v44; // r15d
  __int64 v45; // rsi
  int v46; // esi
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  void *v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  void *v54; // rax
  int v55; // esi
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  void *v59; // rax
  __int64 v60; // rax
  struct tagTHREADINFO *v61; // rax
  _QWORD *v62; // rsi
  __int64 v63; // rax
  _QWORD v64[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v65; // [rsp+30h] [rbp-38h]

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 528), 0, 0) & 4) != 0 )
  {
    v45 = *(_QWORD *)(v4 + 656);
    if ( !v45 )
      return 0LL;
    v5 = *(struct tagWND **)(*(_QWORD *)(v45 + 56) + 8LL);
    v60 = *((_QWORD *)v5 + 5);
    if ( !*(_QWORD *)(v60 + 136) && (*(_BYTE *)(v60 + 17) & 0x10) == 0 )
    {
      v5 = 0LL;
      v61 = PtiCurrent();
      v64[0] = *((_QWORD *)v61 + 48);
      *((_QWORD *)v61 + 48) = v64;
      v62 = *(_QWORD **)(v45 + 16);
      v63 = UserDereferenceObject;
      v64[1] = 0LL;
      v65 = UserDereferenceObject;
      if ( v62 )
      {
        do
        {
          ObfReferenceObject(v62);
          ExchangeW32ThreadLock(v62, v64);
          v5 = xxxInternalDoPaint(*(struct tagWND **)(v62[1] + 24LL), (struct tagTHREADINFO *)v4);
          if ( v5 )
            break;
          v62 = (_QWORD *)v62[4];
        }
        while ( v62 );
        v63 = v65;
      }
      if ( v63 != -1 )
      {
        PopAndFreeW32ThreadLock(v64);
        v65 = -1LL;
      }
    }
  }
  else
  {
    v5 = xxxInternalDoPaint(
           *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v4 + 496) + 8LL) + 24LL),
           (struct tagTHREADINFO *)v4);
  }
  if ( !v5 )
    return 0LL;
  if ( a1 && a1 != v5 )
  {
    v6 = v5;
    while ( v6 && (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0xC0) == 0x40 )
    {
      v6 = (struct tagWND *)*((_QWORD *)v6 + 13);
      if ( a1 == v6 )
      {
        v7 = 1;
        goto LABEL_13;
      }
    }
    v7 = 0;
LABEL_13:
    if ( !v7 )
      return 0LL;
  }
  v8 = *((_QWORD *)v5 + 5);
  v9 = -16;
  v10 = *(_BYTE *)(v8 + 17);
  if ( (v10 & 0x10) == 0 )
    goto LABEL_15;
  v35 = *(_DWORD *)(v8 + 28);
  v36 = *(_DWORD *)(v8 + 24);
  v37 = *(_DWORD *)(v8 + 232);
  *(_BYTE *)(v8 + 17) = v10 & 0xEF;
  if ( (unsigned int)IsWindowDesktopComposed(v5) )
  {
    v38 = (_DWORD *)*((_QWORD *)v5 + 5);
    v39 = v38[7];
    v40 = v38[6];
    v41 = v38[58];
    v42 = v36 ^ v40;
    v43 = v37 ^ v41;
    v44 = v35 ^ v39;
    if ( v35 == v39 )
    {
      if ( v42 )
        goto LABEL_55;
      if ( !v43 )
        goto LABEL_33;
    }
    if ( (v44 & 0xB9CF0000) != 0 )
    {
      v55 = -16;
      goto LABEL_59;
    }
LABEL_55:
    if ( (v42 & 0x4E27A9) != 0 )
    {
      v55 = -20;
      v39 = v40;
    }
    else
    {
      if ( (v43 & 0x3F2C0) == 0 )
      {
LABEL_60:
        if ( (v44 & 0x1C40000) != 0 || (v42 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(v5, 1LL);
        goto LABEL_33;
      }
      v55 = -268435456;
      v39 = v41;
    }
LABEL_59:
    DirtyVisRgnTrackers(v5);
    v56 = *(_QWORD *)v5;
    v59 = (void *)ReferenceDwmApiPort(v58, v57);
    DwmAsyncChildStyleChange(v59, v56, v55, v39);
    goto LABEL_60;
  }
LABEL_33:
  v8 = *((_QWORD *)v5 + 5);
  if ( !*(_QWORD *)(v8 + 136) )
  {
    DecPaintCount(v5);
    v8 = *((_QWORD *)v5 + 5);
  }
LABEL_15:
  v11 = *(_DWORD *)(v8 + 28);
  v12 = *(_DWORD *)(v8 + 24);
  v13 = *(_DWORD *)(v8 + 232);
  *(_BYTE *)(v8 + 20) &= ~4u;
  if ( !(unsigned int)IsWindowDesktopComposed(v5) )
    goto LABEL_19;
  v14 = (_DWORD *)*((_QWORD *)v5 + 5);
  v15 = v14[7];
  v16 = v14[6];
  v17 = v14[58];
  v18 = v12 ^ v16;
  v19 = v13 ^ v17;
  v20 = v11 ^ v15;
  if ( v11 == v15 )
  {
    if ( v18 )
      goto LABEL_38;
    if ( !v19 )
      goto LABEL_19;
  }
  if ( (v20 & 0xB9CF0000) != 0 )
  {
    v46 = -16;
    goto LABEL_49;
  }
LABEL_38:
  if ( (v18 & 0x4E27A9) != 0 )
  {
    v46 = -20;
    v15 = v16;
    goto LABEL_49;
  }
  if ( (v19 & 0x3F2C0) != 0 )
  {
    v46 = -268435456;
    v15 = v17;
LABEL_49:
    DirtyVisRgnTrackers(v5);
    v51 = *(_QWORD *)v5;
    v54 = (void *)ReferenceDwmApiPort(v53, v52);
    DwmAsyncChildStyleChange(v54, v51, v46, v15);
  }
  if ( (v20 & 0x1C40000) != 0 || (v18 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(v5, 1LL);
LABEL_19:
  v21 = *((_QWORD *)v5 + 5);
  v22 = *(_DWORD *)(v21 + 28);
  v23 = *(_DWORD *)(v21 + 24);
  v24 = *(_DWORD *)(v21 + 232);
  *(_BYTE *)(v21 + 17) &= ~0x20u;
  if ( !(unsigned int)IsWindowDesktopComposed(v5) )
    goto LABEL_23;
  v25 = (_DWORD *)*((_QWORD *)v5 + 5);
  v26 = v25[7];
  v27 = v25[6];
  v28 = v25[58];
  v29 = v23 ^ v27;
  v30 = v24 ^ v28;
  v31 = v22 ^ v26;
  if ( v22 == v26 )
  {
    if ( v29 )
      goto LABEL_42;
    if ( !v30 )
      goto LABEL_23;
  }
  if ( (v31 & 0xB9CF0000) != 0 )
  {
LABEL_45:
    DirtyVisRgnTrackers(v5);
    v47 = *(_QWORD *)v5;
    v50 = (void *)ReferenceDwmApiPort(v49, v48);
    DwmAsyncChildStyleChange(v50, v47, v9, v26);
    goto LABEL_46;
  }
LABEL_42:
  if ( (v29 & 0x4E27A9) != 0 )
  {
    v9 = -20;
    v26 = v27;
    goto LABEL_45;
  }
  if ( (v30 & 0x3F2C0) != 0 )
  {
    v9 = -268435456;
    v26 = v28;
    goto LABEL_45;
  }
LABEL_46:
  if ( (v31 & 0x1C40000) != 0 || (v29 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(v5, 1LL);
LABEL_23:
  v32 = v5;
  while ( v32 && (*(_WORD *)(*((_QWORD *)v32 + 5) + 42LL) & 0x2FFF) != 0x29D )
  {
    v32 = (struct tagWND *)*((_QWORD *)v32 + 13);
    if ( (*(_BYTE *)(*((_QWORD *)v32 + 5) + 31LL) & 2) == 0 )
    {
      SetOrClrWF(1LL, v5, 1025LL, 1LL);
      break;
    }
  }
  *(_QWORD *)a2 = *(_QWORD *)v5;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v33 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)v5 + 5) + 288LL));
  *(_DWORD *)(a2 + 8) = 15;
  *(_QWORD *)(a2 + 36) = v33;
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
