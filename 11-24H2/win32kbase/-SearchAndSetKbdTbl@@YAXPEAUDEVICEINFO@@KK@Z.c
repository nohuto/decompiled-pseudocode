/*
 * XREFs of ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x14020F7D8
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1400FA26C (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 * Callees:
 *     SetGlobalKeyboardTableInfo @ 0x1400F43C4 (SetGlobalKeyboardTableInfo.c)
 *     HMAssignmentLock @ 0x1400F47B0 (HMAssignmentLock.c)
 */

void __fastcall SearchAndSetKbdTbl(struct DEVICEINFO *a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 i; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 14224) + 56LL);
  if ( *(_QWORD *)(*(_QWORD *)(v7 + 32) + 96LL) != __PAIR64__(a3, a2) && (*((_DWORD *)a1 + 42) & 0x20) == 0 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v9 = *(_QWORD *)(W32GetUserSessionState(v6) + 14224);
      if ( (unsigned int)i >= *(_DWORD *)(v9 + 88) )
        break;
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v9) + 14224) + 96LL) + 8 * i);
      if ( *(_DWORD *)(*(_QWORD *)(v6 + 32) + 96LL) == a2 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6) + 14224) + 96LL) + 8 * i);
        if ( *(_DWORD *)(*(_QWORD *)(v6 + 32) + 100LL) == a3 )
        {
          v9 = *(_QWORD *)(W32GetUserSessionState(v6) + 14224);
          v7 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 8 * i);
          break;
        }
      }
    }
    W32GetUserSessionState(v9);
  }
  v10 = *(_QWORD *)(W32GetUserSessionState(v6) + 14224);
  if ( *(_QWORD *)(v10 + 48) != v7 )
  {
    v13[1] = v7;
    v13[0] = *(_QWORD *)(W32GetUserSessionState(v10) + 14224) + 48LL;
    HMAssignmentLock((__int64)v13, 0);
    UserSessionState = W32GetUserSessionState(v11);
    SetGlobalKeyboardTableInfo(*(_QWORD *)(UserSessionState + 14224));
  }
}
