/*
 * XREFs of RIMFindTouchDigitizerWithSize @ 0x1401E1890
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectReference @ 0x140063B80 (RawInputManagerDeviceObjectReference.c)
 */

void __fastcall RIMFindTouchDigitizerWithSize(_QWORD *a1, _QWORD *a2)
{
  _QWORD **v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax

  v4 = (_QWORD **)(W32GetUserSessionState(a1) + 136);
  v5 = *v4;
  *a2 = 0LL;
  UserSessionState = W32GetUserSessionState(v6);
  RIMLockExclusive(UserSessionState + 56);
  while ( v5 != v4 )
  {
    v9 = v5 - 2;
    if ( !*((_BYTE *)v5 - 5)
      && *((_DWORD *)v9 + 30) == 2
      && (*((_DWORD *)v9 + 64) & 0x80u) != 0
      && (v9[30] & 0x400) == 0 )
    {
      v10 = v9[66];
      if ( (unsigned int)(*(_DWORD *)(v10 + 24) - 1) <= 3 )
      {
        v8 = *(_QWORD *)(v10 + 140) - *a1;
        if ( !v8 )
          v8 = *(_QWORD *)(v10 + 148) - a1[1];
        if ( !v8 )
        {
          RawInputManagerDeviceObjectReference(v5 - 2);
          *a2 = v9;
          break;
        }
      }
    }
    v5 = (_QWORD *)*v5;
  }
  v11 = W32GetUserSessionState(v8);
  RIMUnlockExclusive(v11 + 56);
}
