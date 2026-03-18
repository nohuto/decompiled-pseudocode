/*
 * XREFs of ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1400FA26C
 * Callers:
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x14010415C (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 * Callees:
 *     GetActiveHKL @ 0x1400489F0 (GetActiveHKL.c)
 *     ?ProcessInput@Keyboard@InputTraceLogging@@SAXPEBU_KEYBOARD_INPUT_DATA@@_N@Z @ 0x1400FA468 (-ProcessInput@Keyboard@InputTraceLogging@@SAXPEBU_KEYBOARD_INPUT_DATA@@_N@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1400FA4E4 (ProcessKeyboardInputWorker.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1400FABC0 (ProcessKeyboardInjectedInputViaRim.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1400FB48C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?TypeSubtypeUpdated@Keyboard@InputTraceLogging@@SAXPEAUHKL__@@KKKK@Z @ 0x14020A93C (-TypeSubtypeUpdated@Keyboard@InputTraceLogging@@SAXPEAUHKL__@@KKKK@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x14020F7D8 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 */

__int64 __fastcall CKeyboardProcessor::ProcessInputNoLock(
        __int64 a1,
        __int64 a2,
        const struct _KEYBOARD_INPUT_DATA *a3,
        unsigned int a4,
        bool a5)
{
  __int64 v5; // r12
  _DWORD *v8; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebp
  __int64 UserSessionState; // rax
  unsigned int v13; // edi
  unsigned int v14; // esi
  __int64 v15; // rcx
  unsigned int v16; // ebx
  HKL ActiveHKL; // rax
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  const struct _KEYBOARD_INPUT_DATA *v22; // rdi
  __int64 v23; // r8

  v5 = a4;
  if ( a2 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(a1) + 14224) )
    {
      v8 = *(_DWORD **)(W32GetUserSessionState(v8) + 14224);
      if ( v8[22] )
      {
        v8 = *(_DWORD **)(W32GetUserSessionState(v8) + 14224);
        if ( !v8[29] )
        {
          v8 = *(_DWORD **)(W32GetUserSessionState(v8) + 14224);
          if ( v8[26] != *(_DWORD *)(a2 + 468)
            || (v8 = *(_DWORD **)(W32GetUserSessionState(v8) + 14224), v8[27] != *(_DWORD *)(a2 + 472)) )
          {
            v10 = *(_QWORD *)(W32GetUserSessionState(v8) + 14224);
            v11 = *(_DWORD *)(v10 + 108);
            UserSessionState = W32GetUserSessionState(v10);
            v13 = *(_DWORD *)(a2 + 472);
            v14 = *(_DWORD *)(a2 + 468);
            v15 = *(_QWORD *)(UserSessionState + 14224);
            v16 = *(_DWORD *)(v15 + 104);
            ActiveHKL = (HKL)GetActiveHKL(v15);
            InputTraceLogging::Keyboard::TypeSubtypeUpdated(ActiveHKL, v14, v13, v16, v11);
            SearchAndSetKbdTbl((struct DEVICEINFO *)a2, *(_DWORD *)(a2 + 468), *(_DWORD *)(a2 + 472));
            v18 = *(_DWORD *)(a2 + 468);
            v20 = *(_QWORD *)(W32GetUserSessionState(v19) + 14224);
            *(_DWORD *)(v20 + 104) = v18;
            v21 = *(_DWORD *)(a2 + 472);
            v8 = *(_DWORD **)(W32GetUserSessionState(v20) + 14224);
            v8[27] = v21;
          }
        }
      }
    }
    if ( (**(_DWORD **)(W32GetUserSessionState(v8) + 19928) & 0x2000) != 0 )
    {
      InputTraceLogging::Keyboard::DropInput(1LL);
    }
    else if ( a3 )
    {
      v22 = (const struct _KEYBOARD_INPUT_DATA *)((char *)a3 + v5);
      do
      {
        if ( a3 >= v22 )
          break;
        InputTraceLogging::Keyboard::ProcessInput(a3, a5);
        if ( a5 )
        {
          ProcessKeyboardInjectedInputViaRim(a3, a2);
        }
        else
        {
          LOBYTE(v23) = 1;
          ProcessKeyboardInputWorker(a3, a2, v23);
        }
        ++a3;
      }
      while ( a3 );
    }
  }
  return 0LL;
}
