/*
 * XREFs of ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1401721A8
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x140171ED8 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     FreeHidData @ 0x140082EF0 (FreeHidData.c)
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 *     AllocateHidData @ 0x14012F38C (AllocateHidData.c)
 *     PtiKbdFromQ @ 0x1401534FC (PtiKbdFromQ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall PostRawKeyboardInputToSinks(
        __int64 a1,
        void *a2,
        struct _KEYBOARD_INPUT_DATA *a3,
        int a4,
        unsigned __int16 a5,
        int a6)
{
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 i; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  const struct tagUIPI_INFO *v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 HidData; // rax
  __int64 v34; // rbx
  LARGE_INTEGER *v35; // rdx
  __int64 v36; // r8
  unsigned int v37; // [rsp+80h] [rbp-68h]
  __int64 v38; // [rsp+88h] [rbp-60h]
  __int64 v39; // [rsp+90h] [rbp-58h] BYREF
  int v40; // [rsp+98h] [rbp-50h]
  __int64 v41; // [rsp+A0h] [rbp-48h] BYREF
  int v42; // [rsp+A8h] [rbp-40h]

  v37 = a1;
  v41 = 0LL;
  v42 = 0;
  v9 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944) )
  {
    UserSessionState = W32GetUserSessionState(v11, v10);
    v9 = *(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(UserSessionState + 18944)) + 464);
    v15 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18944);
    v41 = *(_QWORD *)(v15 + 472);
    v42 = *(_DWORD *)(v15 + 480);
  }
  v16 = *(__int64 **)(W32GetUserSessionState(v11, v10) + 224);
  for ( i = W32GetUserSessionState(v18, v17) + 224; v16 != (__int64 *)i; v16 = (__int64 *)*v16 )
  {
    v21 = *((unsigned int *)v16 + 25);
    if ( (v21 & 0x40) != 0 )
    {
      v22 = v16[9];
      if ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 40);
        if ( *(char *)(v23 + 20) >= 0 && *(char *)(v23 + 19) >= 0 )
        {
          v24 = *(_QWORD *)(W32GetUserSessionState(v21, v19) + 19200);
          v26 = v16[9];
          if ( *(_QWORD *)(v26 + 24) == v24 )
          {
            if ( !v9
              || UIPrivilegeIsolation::CheckAccess(
                   (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 464LL) + 872LL),
                   (const struct tagUIPI_INFO *)&v41,
                   v25)
              || (v27 = *(_QWORD *)(v16[9] + 16), *(int *)(*(_QWORD *)(v27 + 464) + 12LL) < 0) )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v16[9] + 16) + 464LL) != v9 && ((*((_DWORD *)v16 + 25) & 0x80u) == 0 || !a6) )
              {
                HidData = AllocateHidData(a2, 1LL, 16LL, 1LL, (__int64 *)v16[9]);
                v34 = HidData;
                if ( !HidData )
                  return;
                v35 = *(LARGE_INTEGER **)(HidData + 24);
                v36 = *(_QWORD *)HidData;
                *(_WORD *)(HidData + 80) = a3->MakeCode;
                *(_WORD *)(HidData + 82) = a3->Flags;
                *(_WORD *)(HidData + 84) = a3->Reserved;
                *(_DWORD *)(HidData + 88) = a4;
                *(_WORD *)(HidData + 86) = a5;
                *(_DWORD *)(HidData + 92) = a3->ExtraInformation;
                if ( !(unsigned int)PostInputMessage(
                                      *(struct tagQ **)(v35[2].QuadPart + 472),
                                      v35,
                                      0xFFu,
                                      1uLL,
                                      v36,
                                      v37,
                                      0LL,
                                      a3->ExtraInformation,
                                      0,
                                      0LL,
                                      a2,
                                      0LL,
                                      0,
                                      0,
                                      0LL) )
                  FreeHidData(v34);
              }
            }
            else
            {
              v28 = v42;
              v38 = v41;
              v29 = W32GetUserSessionState(v27, v19);
              v30 = v16[9];
              v39 = v38;
              v31 = *(_QWORD *)(v29 + 18944);
              v32 = *(_QWORD *)(v30 + 16);
              v40 = v28;
              EtwTraceUIPIInputError(v32, 0LL, v31, &v39, 5);
            }
          }
        }
      }
    }
  }
}
