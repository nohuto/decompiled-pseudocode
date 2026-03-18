/*
 * XREFs of VKFromVSC @ 0x1401157C0
 * Callers:
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14004FA04 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 *     ProcessKeyboardInputWorker @ 0x1400FA4E4 (ProcessKeyboardInputWorker.c)
 *     ProcessKeyboardInjectedInput @ 0x1400FB4F8 (ProcessKeyboardInjectedInput.c)
 * Callees:
 *     ?IsWinstaLessSession@@YA_NXZ @ 0x1400247B0 (-IsWinstaLessSession@@YA_NXZ.c)
 *     GetActiveHKL @ 0x1400489F0 (GetActiveHKL.c)
 *     GetModifierBits @ 0x1400F0240 (GetModifierBits.c)
 *     GetModificationNumber @ 0x14010F4DC (GetModificationNumber.c)
 */

char __fastcall VKFromVSC(unsigned __int8 *a1, char a2)
{
  __int16 v3; // di
  __int16 ActiveHKL; // si
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // eax
  char v13; // cl
  __int64 UserSessionState; // rax
  unsigned __int16 ModifierBits; // ax
  __int64 v16; // rcx
  __int64 ModificationNumber; // rsi
  unsigned int *v18; // rdx
  unsigned int v19; // eax

  v3 = 255;
  *((_WORD *)a1 + 1) = 255;
  ActiveHKL = GetActiveHKL((__int64)a1);
  if ( ((**(_DWORD **)(W32GetUserSessionState(v6) + 19928) & 4) != 0 || IsWinstaLessSession())
    && (unsigned __int16)((ActiveHKL & 0x3FF) - 17) <= 1u )
  {
    v13 = *a1;
    if ( (unsigned __int8)(*a1 - 113) <= 1u )
    {
      LOBYTE(v7) = v13 | 0x80;
      a2 = -32;
    }
    else
    {
      LOBYTE(v7) = v13 & 0x7F;
    }
    *a1 = v7;
  }
  else
  {
    *a1 &= ~0x80u;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v7) + 18960)
    && (v8 = *(_QWORD *)(W32GetUserSessionState(v8) + 18960), *(_QWORD *)(v8 + 480)) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8) + 18960) + 480LL) + 48LL) + 32LL);
  }
  else
  {
    v9 = *(_QWORD *)(W32GetUserSessionState(v8) + 14064);
  }
  switch ( a2 )
  {
    case 0:
      if ( *a1 < *(_BYTE *)(v9 + 56) )
      {
        v10 = *a1;
        v3 = *(_WORD *)(*(_QWORD *)(v9 + 48) + 2 * v10);
        if ( v3 )
          goto LABEL_10;
      }
LABEL_26:
      LOBYTE(v12) = -1;
      return v12;
    case -32:
      v3 = 511;
      if ( *a1 == 42 || *a1 == 54 )
        goto LABEL_25;
      v10 = *(_QWORD *)(v9 + 64);
      break;
    case -31:
      v10 = *(_QWORD *)(v9 + 72);
      break;
    default:
      goto LABEL_26;
  }
  if ( v10 )
  {
    while ( *(_WORD *)(v10 + 2) )
    {
      if ( *(_BYTE *)v10 == *a1 )
      {
        v3 = *(_WORD *)(v10 + 2);
        break;
      }
      v10 += 4LL;
    }
  }
LABEL_10:
  if ( *(_DWORD *)(W32GetUserSessionState(v10) + 13988) )
  {
    *(_DWORD *)(W32GetUserSessionState(v11) + 13988) = 0;
LABEL_25:
    LOBYTE(v12) = 0;
    return v12;
  }
  if ( v3 == 19 )
  {
    *a1 = 69;
    *(_DWORD *)(W32GetUserSessionState(v11) + 13988) = 1;
  }
  else if ( (v3 & 0x200) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v11);
    ModifierBits = GetModifierBits((unsigned __int8 **)&Modifiers_VK_STANDARD, UserSessionState + 14400);
    ModificationNumber = (unsigned __int16)GetModificationNumber((__int64)&Modifiers_VK_STANDARD, ModifierBits);
    if ( (_DWORD)ModificationNumber != 15 )
    {
      v18 = *(unsigned int **)(*(_QWORD *)(W32GetUserSessionState(v16) + 13976) + 8 * ModificationNumber);
      if ( v18 )
      {
        while ( 1 )
        {
          v19 = *v18;
          if ( !*v18 )
            break;
          if ( (_BYTE)v19 == (_BYTE)v3 )
          {
            v12 = HIWORD(v19);
            *((_WORD *)a1 + 1) = v12;
            return v12;
          }
          ++v18;
        }
      }
    }
  }
  *((_WORD *)a1 + 1) = v3;
  LOBYTE(v12) = v3;
  return v12;
}
