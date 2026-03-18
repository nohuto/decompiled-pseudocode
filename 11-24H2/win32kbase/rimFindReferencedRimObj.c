/*
 * XREFs of rimFindReferencedRimObj @ 0x1401D3D60
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1401E5870 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1401E5C18 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1400C970C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimFindReferencedRimObj(__int64 a1, __int16 a2, __int16 a3, _QWORD *a4)
{
  _QWORD *v5; // rdi
  unsigned int v8; // ebp
  __int64 UserSessionState; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  int v15; // eax
  int v16; // r9d
  int v17; // r8d
  NTSTATUS v18; // ebx
  __int64 v19; // rax

  v5 = 0LL;
  v8 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  RIMLockExclusive(UserSessionState + 56);
  v11 = *(_QWORD **)(W32GetUserSessionState(v10) + 120);
  if ( v11 == (_QWORD *)(W32GetUserSessionState(v12) + 120) )
    goto LABEL_23;
  while ( 1 )
  {
    v14 = v11 - 2;
    if ( !*((_BYTE *)v11 + 64) && !*((_BYTE *)v14 + 81) && !*((_BYTE *)v14 + 10) && (v8 & *((_DWORD *)v14 + 21)) != 0 )
    {
      if ( v8 <= 0x10 )
      {
        v15 = 65814;
        if ( _bittest(&v15, v8) )
        {
          if ( *((_DWORD *)v14 + 264) )
            goto LABEL_19;
          v17 = 360;
          goto LABEL_18;
        }
      }
      if ( v8 == 32 )
        break;
    }
LABEL_12:
    v11 = (_QWORD *)*v11;
    if ( v11 == (_QWORD *)(W32GetUserSessionState(v13) + 120) )
      goto LABEL_20;
  }
  if ( !(unsigned int)rimIsExplicitRimUsagesMatchingUsages((__int64)(v11 - 2), a2, a3) )
  {
    if ( v16 )
      v5 = v11 - 2;
    goto LABEL_12;
  }
  if ( !v16 )
    goto LABEL_19;
  v17 = 370;
LABEL_18:
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v17);
LABEL_19:
  v5 = v11 - 2;
LABEL_20:
  if ( !v5 )
  {
LABEL_23:
    v18 = -1073741637;
    goto LABEL_24;
  }
  v18 = ObReferenceObjectByPointer(v5, 3u, ExRawInputManagerObjectType, 1);
  if ( v18 >= 0 )
    *a4 = v5;
LABEL_24:
  v19 = W32GetUserSessionState(v13);
  RIMUnlockExclusive(v19 + 56);
  return (unsigned int)v18;
}
