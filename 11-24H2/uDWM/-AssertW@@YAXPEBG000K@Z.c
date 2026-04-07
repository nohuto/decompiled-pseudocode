/*
 * XREFs of ?AssertW@@YAXPEBG000K@Z @ 0x1800F4BA0
 * Callers:
 *     ?EnsureCrossFadeEffectInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x180034B64 (-EnsureCrossFadeEffectInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z @ 0x180034D38 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z.c)
 *     ?EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x18007292C (-EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 *     ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x1800DABC8 (-CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EECB0 (-CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x1800F1764 (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800F1860 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800F4F44 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1800F4E2C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall AssertW(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned int a5)
{
  const wchar_t *v9; // r15
  const char *v10; // r14
  const char *v11; // r12
  const wchar_t *v12; // r13
  const wchar_t *v13; // rax
  int v14; // eax
  int v15; // ebx
  BOOL v16; // eax
  CHAR v17; // cl
  const wchar_t *v18; // rax
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  CHAR Response[8]; // [rsp+60h] [rbp-38h] BYREF
  const wchar_t *v22; // [rsp+68h] [rbp-30h]

  if ( IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent() )
  {
    v9 = a3;
    if ( !a3 )
      v9 = (const wchar_t *)&unk_180107C78;
    v10 = ", ";
    if ( !a3 )
      v10 = (const char *)&word_180108DA0;
    v11 = "Function: ";
    if ( !a3 )
      v11 = (const char *)&word_180108DA0;
    v12 = a2;
    v13 = a1;
    if ( !a2 )
      v12 = (const wchar_t *)&unk_180107C78;
    if ( !a1 )
      v13 = (const wchar_t *)&unk_180107C78;
    v22 = v13;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = IsKernelDebuggerPresent();
        strcpy(Response, "?");
        v15 = v14;
        if ( !v14 )
        {
          v16 = IsDebuggerPresent();
          v17 = Response[0];
          if ( v16 )
            v17 = 103;
          Response[0] = v17;
        }
        if ( !a1 || (v18 = L"\n***  ", !a2) )
          v18 = (const wchar_t *)&unk_180107C78;
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          v22,
          v18,
          v12,
          v11,
          v9,
          v10,
          a4,
          a5);
        if ( v15 )
        {
          DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
        }
        else
        {
          DbgPrintEx(
            0x65u,
            0,
            "(No kernel debugger is present.) Respond with:\n"
            "  g                    -- Go (continue)\n"
            "  eb 0x%p 'p';g  -- terminate Process\n"
            "  eb 0x%p 't';g  -- terminate Thread\n"
            " or regular debugging.\n",
            Response,
            Response);
          __debugbreak();
        }
        if ( Response[0] <= 98 )
          break;
        if ( Response[0] == 103 )
          return;
        if ( Response[0] != 105 )
        {
          if ( Response[0] != 112 )
          {
            if ( Response[0] != 116 )
              goto LABEL_38;
LABEL_36:
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_38;
          }
LABEL_37:
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_38;
        }
LABEL_39:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
      switch ( Response[0] )
      {
        case 'b':
        case 'B':
          __debugbreak();
          return;
        case 'G':
          return;
        case 'I':
          goto LABEL_39;
        case 'P':
          goto LABEL_37;
        case 'T':
          goto LABEL_36;
      }
LABEL_38:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
  }
}
