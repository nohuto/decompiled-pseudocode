/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140166C88
 * Callers:
 *     ?xxxCheckImeShowStatusInThread@@YAHPEAUtagWND@@@Z @ 0x140166C3C (-xxxCheckImeShowStatusInThread@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1402804A4 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     unsafe_cast_class_to_PIMEWND @ 0x140282E4C (unsafe_cast_class_to_PIMEWND.c)
 */

__int64 __fastcall xxxCheckImeShowStatus(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  unsigned int v3; // ebx
  struct tagBWL *v4; // rax
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  struct tagBWL *v7; // r12
  __int64 *i; // r15
  __int64 v9; // r14
  struct tagWND *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r8
  char v18; // r14
  PRKPROCESS *v19; // rcx
  __int64 v20; // rbx
  ULONG64 v22; // [rsp+28h] [rbp-70h]
  int v23; // [rsp+30h] [rbp-68h]
  ULONG64 *v24; // [rsp+38h] [rbp-60h]
  struct tagTHREADINFO *v25; // [rsp+48h] [rbp-50h]
  ULONG64 v27; // [rsp+B0h] [rbp+18h]

  v3 = 0;
  v25 = PtiCurrent((__int64)a1, (__int64)a2);
  if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) < 0 )
    return 0LL;
  v4 = BuildHwndList(*(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL), 2LL, 0LL, 1);
  v7 = v4;
  if ( !v4 )
    return v3;
  for ( i = (__int64 *)((char *)v4 + 32); *i != 1; ++i )
  {
    v9 = *i;
    v10 = 0LL;
    W32GetCurrentThreadNonPaged(v6, v5);
    v6 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19928);
    if ( (unsigned __int64)(unsigned __int16)v9 >= *(_QWORD *)(v6 + 8) )
      goto LABEL_10;
    UserSessionState = W32GetUserSessionState(v6, v5);
    v16 = *(_DWORD *)(W32GetUserSessionState(v15, v14) + 19952) * (unsigned int)(unsigned __int16)v9
        + *(_QWORD *)(UserSessionState + 19944);
    v6 = HMPkheFromPhe(v16);
    v27 = v6;
    LOWORD(v9) = WORD1(v9) & 0x7FFF;
    if ( (WORD1(v9) & 0x7FFF) != *(_WORD *)(v16 + 26) && (_WORD)v9 != 0x7FFF )
    {
      if ( (_WORD)v9 || !PsGetCurrentProcessWow64Process(v6, v5, v17) )
        goto LABEL_10;
      v6 = v27;
    }
    if ( (*(_BYTE *)(v16 + 25) & 1) == 0 && *(_BYTE *)(v16 + 24) == 1 )
      v10 = *(struct tagWND **)v6;
LABEL_10:
    if ( v10 )
    {
      if ( a1 != v10 )
      {
        v24 = (ULONG64 *)unsafe_cast_class_to_PIMEWND(v10);
        if ( v24 )
        {
          if ( *(char *)(*((_QWORD *)v10 + 5) + 20LL) >= 0 && (!a2 || a2 == *((struct tagTHREADINFO **)v10 + 2)) )
          {
            v18 = 0;
            v19 = *(PRKPROCESS **)(*((_QWORD *)v10 + 2) + 464LL);
            if ( v19 != *((PRKPROCESS **)v25 + 58) )
            {
              KeAttachProcess(*v19);
              v18 = 1;
            }
            v6 = *v24;
            v22 = *v24;
            if ( !*v24 || v22 == -1LL )
            {
              if ( v18 )
                KeDetachProcess();
            }
            else
            {
              v6 = MmUserProbeAddress;
              if ( v22 < MmUserProbeAddress )
                v6 = *v24;
              if ( (*(_DWORD *)(v6 + 44) & 1) != 0 )
              {
                LOBYTE(v5) = 1;
                v20 = HMValidateHandleNoSecure(*(_QWORD *)(v22 + 16), v5);
                v23 = v20;
                if ( v20 )
                  *(_DWORD *)(v22 + 44) &= ~1u;
              }
              else
              {
                v20 = 0LL;
                v23 = 0;
              }
              if ( v18 )
                KeDetachProcess();
              if ( v20 )
              {
                v6 = *(_QWORD *)(v20 + 16);
                if ( v6 )
                {
                  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 528), 0, 0) & 1) == 0 )
                    PostMessage(v23, 642, 1, 0);
                }
              }
            }
          }
        }
      }
    }
  }
  FreeHwndList(v7, v5);
  return 1;
}
