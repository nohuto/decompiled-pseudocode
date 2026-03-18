/*
 * XREFs of xxxChangeForegroundKeyboardTable @ 0x1400F3F20
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x140096CA0 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1400F44E8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     ?ActivateKeyboardLayout@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@0W4_ChangeKbdTableReason@@@Z @ 0x1400F42D0 (-ActivateKeyboardLayout@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@0W4_ChangeKbdTableReason@@@Z.c)
 *     SetGlobalKeyboardTableInfo @ 0x1400F43C4 (SetGlobalKeyboardTableInfo.c)
 *     ApiSetEditionResetIMEConversionStatus @ 0x1400F4478 (ApiSetEditionResetIMEConversionStatus.c)
 *     HMAssignmentLock @ 0x1400F47B0 (HMAssignmentLock.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x140149C2C (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     UpdateKeyLights @ 0x140189CD0 (UpdateKeyLights.c)
 */

__int64 __fastcall xxxChangeForegroundKeyboardTable(struct tagKL *a1, struct tagKL *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int16 v12; // dx
  bool v13; // bl
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int16 v22; // ax
  bool v23; // bl
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD v39[3]; // [rsp+20h] [rbp-18h] BYREF

  result = W32GetUserSessionState(a1);
  if ( a2 == *(struct tagKL **)(result + 14232) )
    return result;
  v39[1] = a2;
  v39[0] = W32GetUserSessionState(v7) + 14240;
  HMAssignmentLock(v39, 0LL);
  InputTraceLogging::Keyboard::ActivateKeyboardLayout(a1, a2, a3);
  ApiSetEditionResetIMEConversionStatus(a1, a2);
  if ( !*(_QWORD *)(W32GetUserSessionState(v8) + 14232) )
  {
    *(_QWORD *)(W32GetUserSessionState(v9) + 14232) = a2;
    return SetGlobalKeyboardTableInfo(a2);
  }
  *(_QWORD *)(W32GetUserSessionState(v9) + 14232) = a2;
  if ( a1 != a2 && (!a1 || *((_QWORD *)a1 + 6) != *((_QWORD *)a2 + 6))
    || (result = W32GetUserSessionState(v10), !*(_QWORD *)(result + 14224)) )
  {
    xxxManageKeyboardModifiers(a1, a2);
    v11 = 0LL;
    v12 = *((_WORD *)a2 + 20) & 0x3FF;
    if ( v12 != 17 )
    {
      if ( !a1 )
        return SetGlobalKeyboardTableInfo(a2);
      v22 = *((_WORD *)a1 + 20) & 0x3FF;
      if ( v22 == 17 )
      {
        v23 = (*(_BYTE *)(W32GetUserSessionState(0LL) + 14341) & 8) != 0;
        *(_BYTE *)(W32GetUserSessionState(v24) + 14332) = v23;
      }
      else if ( v22 != 18 || v12 == 18 )
      {
        goto LABEL_32;
      }
      goto LABEL_27;
    }
    if ( a1 )
    {
      if ( (*((_WORD *)a1 + 20) & 0x3FF) == 0x11 )
      {
LABEL_15:
        if ( (_DWORD)v11 == 1 )
        {
          UserSessionState = W32GetUserSessionState(v11);
          *(_BYTE *)(UserSessionState + 14341) |= 8u;
          v17 = W32GetUserSessionState(v16);
          *(_BYTE *)(v17 + 14405) |= 8u;
          if ( *(_QWORD *)(W32GetUserSessionState(v18) + 18960) )
          {
            v20 = *(_QWORD *)(W32GetUserSessionState(v19) + 18960);
            if ( *(_QWORD *)(v20 + 472) )
            {
              v21 = W32GetUserSessionState(v20);
              *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v21 + 18960) + 472LL) + 285LL) |= 8u;
            }
          }
          goto LABEL_30;
        }
        if ( (_DWORD)v11 != 2 )
        {
          if ( !(_DWORD)v11 )
          {
LABEL_31:
            if ( !a1 )
              return SetGlobalKeyboardTableInfo(a2);
LABEL_32:
            if ( (*((_WORD *)a1 + 20) & 0x3FF) == 0x12 && (*((_WORD *)a2 + 20) & 0x3FF) != 0x12 )
            {
              v32 = W32GetUserSessionState(v11);
              *(_BYTE *)(v32 + 14405) &= ~4u;
              v34 = W32GetUserSessionState(v33);
              *(_BYTE *)(v34 + 14341) &= ~4u;
              if ( *(_QWORD *)(W32GetUserSessionState(v35) + 18960) )
              {
                v37 = *(_QWORD *)(W32GetUserSessionState(v36) + 18960);
                if ( *(_QWORD *)(v37 + 472) )
                {
                  v38 = W32GetUserSessionState(v37);
                  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v38 + 18960) + 472LL) + 285LL) &= ~4u;
                }
              }
            }
            return SetGlobalKeyboardTableInfo(a2);
          }
LABEL_30:
          UpdateKeyLights(1LL);
          goto LABEL_31;
        }
LABEL_27:
        v25 = W32GetUserSessionState(v11);
        *(_BYTE *)(v25 + 14341) &= ~8u;
        v27 = W32GetUserSessionState(v26);
        *(_BYTE *)(v27 + 14405) &= ~8u;
        if ( *(_QWORD *)(W32GetUserSessionState(v28) + 18960)
          && *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v29) + 18960) + 472LL) )
        {
          v31 = W32GetUserSessionState(v30);
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v31 + 18960) + 472LL) + 285LL) &= ~8u;
        }
        goto LABEL_30;
      }
    }
    else
    {
      v13 = (*(_BYTE *)(W32GetUserSessionState(0LL) + 14341) & 8) != 0;
      *(_BYTE *)(W32GetUserSessionState(v14) + 14332) = v13;
    }
    v11 = 2 - (unsigned int)(*(_BYTE *)(W32GetUserSessionState(v11) + 14332) != 0);
    goto LABEL_15;
  }
  return result;
}
