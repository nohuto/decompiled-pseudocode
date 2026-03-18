/*
 * XREFs of ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0073084
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002D8F8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00374DC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IsMessageOnlyWindow @ 0x1C0073600 (IsMessageOnlyWindow.c)
 *     _GetTopLevelWindow @ 0x1C00AE7B0 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C01226C0 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C0156B54 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01B4C10 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxActiveWindowTracking @ 0x1C01B6A30 (xxxActiveWindowTracking.c)
 */

__int64 __fastcall xxxMouseActivate(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        const struct tagQMSG *a3,
        unsigned int a4)
{
  unsigned int v6; // r13d
  __int64 v7; // rax
  int v8; // r12d
  int v9; // r15d
  unsigned int active; // edi
  int v11; // ecx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 TopLevelWindow; // rax
  struct tagWND *v15; // rsi
  _BYTE *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  struct tagWND *v20; // rax
  bool v21; // zf
  unsigned int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // eax
  __int64 v26; // [rsp+60h] [rbp-58h] BYREF
  struct tagWND *v27; // [rsp+68h] [rbp-50h]
  __int64 v28; // [rsp+70h] [rbp-48h]
  unsigned int v29; // [rsp+C0h] [rbp+8h]

  v6 = *((_DWORD *)a3 + 6);
  v7 = *((_QWORD *)a1 + 54);
  v8 = -__CFSHR__(*((_DWORD *)a3 + 25), 20);
  v9 = -__CFSHR__(*((_DWORD *)a3 + 25), 23);
  v28 = 0LL;
  if ( *(_QWORD *)(v7 + 112) )
    return 0LL;
  active = 0;
  if ( !v8 && (unsigned int)IsCompositionInputWindow(a2) && (unsigned int)IsMessageOnlyWindow(a2) )
  {
    if ( v6 - 513 <= 0xA )
    {
      v11 = 1097;
      if ( _bittest(&v11, v6 - 513) )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a2);
        if ( CompositionInputWindowUIOwner )
        {
          TopLevelWindow = GetTopLevelWindow(CompositionInputWindowUIOwner);
          PostEventMessageEx(
            *(struct tagTHREADINFO **)(TopLevelWindow + 16),
            *(struct tagQ **)(*(_QWORD *)(TopLevelWindow + 16) + 432LL),
            6u,
            0LL,
            0,
            0LL,
            *(_QWORD *)TopLevelWindow,
            0LL);
        }
      }
    }
    return 0LL;
  }
  v15 = a2;
  v26 = *((_QWORD *)a1 + 52);
  *((_QWORD *)a1 + 52) = &v26;
  v27 = a2;
  if ( a2 )
    HMLockObject(a2);
  v16 = (_BYTE *)*((_QWORD *)a2 + 5);
  v17 = 1LL;
  if ( (v16[21] & 2) != 0 )
    v17 = (v16[24] & 4) == 0;
  v29 = v17;
  if ( v6 == 513 || v6 == 516 || v6 == 519 || v6 == 523 )
  {
    if ( (v16[31] & 0xC0) == 0x40 )
    {
      do
      {
        v15 = (struct tagWND *)*((_QWORD *)v15 + 13);
        if ( (_DWORD)v17 )
        {
          ThreadUnlock1(v16, v17, a3);
          v26 = *((_QWORD *)a1 + 52);
          *((_QWORD *)a1 + 52) = &v26;
          v27 = v15;
          if ( v15 )
            HMLockObject(v15);
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout((ULONG_PTR)v15, 0, 0, 0LL, 1, 0);
          v17 = v29;
        }
        LOBYTE(v16) = *(_BYTE *)(*((_QWORD *)v15 + 5) + 31LL) & 0xC0;
      }
      while ( (_BYTE)v16 == 64 );
      active = 0;
    }
    if ( !(_DWORD)v17 )
    {
      ThreadUnlock1(v16, v17, a3);
      v26 = *((_QWORD *)a1 + 52);
      *((_QWORD *)a1 + 52) = &v26;
      v27 = v15;
      HMLockObject(v15);
    }
  }
  v18 = *((_QWORD *)a1 + 54);
  v19 = 0LL;
  v20 = *(struct tagWND **)(v18 + 128);
  if ( v9 )
    v21 = v20 == v15;
  else
    v21 = v20 == a2;
  LOBYTE(v19) = !v21;
  if ( !v8 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 && v6 == 512 )
  {
    LOWORD(v22) = a4;
    active = xxxActiveWindowTracking(a2, 512LL, a4);
    goto LABEL_67;
  }
  if ( !(_DWORD)v19 && (*(_DWORD *)(v18 + 396) & 0x8000) == 0 || v15 == (struct tagWND *)GetDesktopWindow(v15, v18) )
  {
    v22 = a4;
    goto LABEL_61;
  }
  if ( v6 != 513 && v6 != 516 && v6 != 519 && v6 != 523 )
  {
    LOWORD(v22) = a4;
    goto LABEL_67;
  }
  v22 = a4;
  if ( v8 )
  {
    active = (v9 != 0) + 3;
  }
  else
  {
    if ( v9 )
    {
      active = 2;
LABEL_45:
      if ( (v15 != *(struct tagWND **)(v18 + 128) || (*(_DWORD *)(v18 + 396) & 0x8000) != 0)
        && !xxxActivateWindowWithOptions(v15, 3, 49LL, *(_DWORD *)(v18 + 156) != 0)
        || (*(_BYTE *)(*((_QWORD *)v15 + 5) + 31LL) & 8) != 0
        || active == 2 )
      {
LABEL_50:
        active = 1;
        goto LABEL_67;
      }
LABEL_61:
      active = 0;
      v23 = (unsigned int)gpdwCPUserPreferencesMask;
      if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
      {
        if ( CheckOnTop(a1, v15, v6) )
        {
          if ( v22 == 1 )
          {
            v23 = *(unsigned int *)(*((_QWORD *)v15 + 2) + 488LL);
            if ( (v23 & 8) != 0 )
              active = (*(_BYTE *)(*((_QWORD *)v15 + 5) + 24LL) & 8) == 0;
          }
        }
      }
      goto LABEL_67;
    }
    if ( v15 )
      v24 = *(_QWORD *)v15;
    else
      v24 = 0LL;
    v25 = xxxSendMessage(a2, 33LL, v24, (unsigned __int16)a4 | ((unsigned __int16)v6 << 16));
    v18 = *((_QWORD *)a1 + 54);
    active = v25;
  }
  if ( active <= 2 )
    goto LABEL_45;
  if ( active == 3 )
  {
    active = 0;
    goto LABEL_67;
  }
  if ( active == 4 )
    goto LABEL_50;
LABEL_67:
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 54) + 112LL) )
    xxxSendMessage(a2, 32LL, *(_QWORD *)a2, (unsigned __int16)v22 | ((unsigned __int16)v6 << 16));
  ThreadUnlock1(v23, v18, v19);
  return active;
}
