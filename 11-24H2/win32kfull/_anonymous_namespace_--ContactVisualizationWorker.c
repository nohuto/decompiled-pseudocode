/*
 * XREFs of _anonymous_namespace_::ContactVisualizationWorker @ 0x14018E770
 * Callers:
 *     EditionContactVisualization @ 0x14018E750 (EditionContactVisualization.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     IsCurrentDesktopComposed @ 0x140094360 (IsCurrentDesktopComposed.c)
 *     _anonymous_namespace_::PointerEventIntToDigitizerContactInfo @ 0x14018EC38 (_anonymous_namespace_--PointerEventIntToDigitizerContactInfo.c)
 *     DwmAsyncSendTouchContacts @ 0x14018EDE0 (DwmAsyncSendTouchContacts.c)
 *     _anonymous_namespace_::DeferPointerCursorOperation @ 0x14018EF24 (_anonymous_namespace_--DeferPointerCursorOperation.c)
 *     _anonymous_namespace_::GetWindowBarrelVisualizationSetting @ 0x14018F114 (_anonymous_namespace_--GetWindowBarrelVisualizationSetting.c)
 *     _anonymous_namespace_::GetWindowVisualizationSetting @ 0x14018F1E8 (_anonymous_namespace_--GetWindowVisualizationSetting.c)
 *     _GetPointerDeviceType @ 0x14018F428 (_GetPointerDeviceType.c)
 *     _anonymous_namespace_::SwitchMouseCursors @ 0x1402A3D68 (_anonymous_namespace_--SwitchMouseCursors.c)
 */

_BOOL8 __fastcall anonymous_namespace_::ContactVisualizationWorker(
        unsigned int a1,
        char *a2,
        __int64 a3,
        int a4,
        int a5)
{
  __int64 v5; // rbx
  int v6; // r14d
  char *v7; // rdi
  void *v8; // r12
  __int64 v9; // r15
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 UserSessionState; // rax
  const struct tagPOINTEREVENTINT *ContactVisualizationPointerEventInt; // rax
  unsigned int *v19; // rbx
  int v20; // esi
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned int Prop; // eax
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rcx
  BOOL v28; // edi
  __int64 v29; // rdx
  __int64 v30; // rsi
  BOOL v31; // edx
  const struct tagPOINTEREVENTINT *v32; // rbx
  int v33; // eax
  unsigned int i; // edi
  int v35; // esi
  __int64 v36; // rdx
  __int64 v37; // rcx
  void *v38; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // [rsp+30h] [rbp-48h]
  int v45; // [rsp+34h] [rbp-44h] BYREF
  int v46; // [rsp+38h] [rbp-40h]
  const struct tagPOINTEREVENTINT *v47; // [rsp+40h] [rbp-38h]
  _DWORD v48[4]; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v49[8]; // [rsp+58h] [rbp-20h] BYREF
  int v50; // [rsp+C0h] [rbp+48h] BYREF
  char *v51; // [rsp+C8h] [rbp+50h]
  __int64 v52; // [rsp+D0h] [rbp+58h]
  int v53; // [rsp+D8h] [rbp+60h]

  v53 = a4;
  v52 = a3;
  v51 = a2;
  v5 = a1;
  v6 = 0;
  v46 = 0;
  v7 = a2;
  v8 = 0LL;
  v9 = a1;
  v10 = *(_DWORD *)UPDWORDPointer(8216LL);
  v44 = v10;
  if ( (unsigned int)IsCurrentDesktopComposed(v12, v11) )
    v8 = (void *)Win32AllocPoolZInit(40 * v5, 1987081045LL);
  v15 = 0LL;
  if ( (_DWORD)v5 )
  {
    v16 = v52;
    do
    {
      v45 = 0;
      UserSessionState = W32GetUserSessionState(v14, v13);
      ContactVisualizationPointerEventInt = CTouchProcessor::GetContactVisualizationPointerEventInt(
                                              *(CTouchProcessor **)(UserSessionState + 3264),
                                              v7,
                                              &v45);
      v47 = ContactVisualizationPointerEventInt;
      if ( ContactVisualizationPointerEventInt )
      {
        v19 = (unsigned int *)((char *)ContactVisualizationPointerEventInt + 8);
        if ( (unsigned int)(*((_DWORD *)ContactVisualizationPointerEventInt + 2) - 2) <= 1
          && !(unsigned int)GetWorkspaceId(*((_QWORD *)ContactVisualizationPointerEventInt + 3)) )
        {
          if ( *v19 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)v19 + 2)) == 1 )
          {
            v40 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 36368);
            *(_DWORD *)(v40 + 84) = (v19[3] >> 1) & 1;
            v43 = *(_QWORD *)(W32GetUserSessionState(v40, v41) + 36368);
            if ( !*(_DWORD *)(v43 + 88)
              || *(_DWORD *)(W32GetUserSessionState(v43, v42) + 36396) == 2
              || (v19[3] & 0x10001) != 0 )
            {
              anonymous_namespace_::SwitchMouseCursors(3LL);
            }
            v48[0] = v19[3];
            v48[1] = v19[8];
            v48[2] = v19[9];
            anonymous_namespace_::DeferPointerCursorOperation(v19, v48);
          }
          else
          {
            v14 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 36368);
            if ( !*(_DWORD *)(v14 + 84) && (v19[3] & 0x2000) != 0 )
            {
              v49[0] = v19[3];
              v20 = 0;
              v49[1] = v19[8];
              v49[2] = v19[9];
              if ( *v19 - 2 <= 1 )
              {
                v14 = *((_QWORD *)v19 + 3);
                if ( v14 )
                {
                  v21 = ValidateHwnd(v14);
                  if ( v21 )
                  {
                    while ( v21 )
                    {
                      v22 = W32GetUserSessionState(v14, v13);
                      Prop = GetProp(v21, *(unsigned __int16 *)(v22 + 41414), 1u);
                      if ( (Prop & 0x20000000) != 0 )
                      {
                        v20 = (Prop >> 13) & 1;
                        break;
                      }
                      if ( IsTopLevelWindow(v21) )
                        v21 = 0LL;
                      else
                        v21 = *(_QWORD *)(v21 + 104);
                    }
                  }
                }
              }
              if ( (v19[3] & 0x10001) != 0 )
              {
                if ( *v19 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)v19 + 2)) == 2 || v20 )
                {
                  v27 = 4LL;
                }
                else
                {
                  if ( *v19 == 2 )
                  {
                    v14 = *((_QWORD *)v19 + 3);
                    if ( v14 )
                    {
                      v24 = ValidateHwnd(v14);
                      if ( v24 )
                      {
                        while ( v24 )
                        {
                          v25 = W32GetUserSessionState(v14, v13);
                          v26 = GetProp(v24, *(unsigned __int16 *)(v25 + 41414), 1u);
                          if ( (v26 & 0x10000000) != 0 )
                          {
                            if ( ((v26 >> 12) & 1) != 0 )
                              goto LABEL_29;
                            break;
                          }
                          if ( IsTopLevelWindow(v24) )
                            v24 = 0LL;
                          else
                            v24 = *(_QWORD *)(v24 + 104);
                        }
                      }
                    }
                  }
                  IsCurrentDesktopComposed(v14, v13);
LABEL_29:
                  v27 = *v19;
                }
                anonymous_namespace_::SwitchMouseCursors(v27);
              }
              if ( !v20 )
                anonymous_namespace_::DeferPointerCursorOperation(v19, v49);
              v10 = v44;
              v7 = v51;
            }
          }
          if ( a5 != 3 )
          {
            v50 = 0;
            if ( *v19 != 2
              || (unsigned int)anonymous_namespace_::GetWindowVisualizationSetting(
                                 (_DWORD)v19,
                                 v10 == 0,
                                 a5 == 2,
                                 v10 == 2,
                                 (__int64)&v50)
              || v50 )
            {
              if ( v8 )
              {
                v28 = 1;
                v29 = 5 * v15;
                v15 = (unsigned int)(v15 + 1);
                v30 = (__int64)v8 + 8 * v29;
                if ( *v19 == 3 )
                  v28 = anonymous_namespace_::GetWindowBarrelVisualizationSetting(v19, v45 != 0) != 0;
                v31 = v53 && a5 == 2;
                v32 = v47;
                anonymous_namespace_::PointerEventIntToDigitizerContactInfo((_DWORD)v47, v31, v28, v50, v30);
                v33 = *((_DWORD *)v32 + 5);
                if ( (v33 & 0x10000) != 0 )
                {
                  EtwTraceContactVisualizationDown();
                }
                else if ( (v33 & 0x40000) != 0 )
                {
                  EtwTraceContactVisualizationUp();
                }
                v7 = v51;
              }
            }
          }
        }
      }
      v10 = v44;
      v7 += v16;
      v51 = v7;
      --v9;
    }
    while ( v9 );
    v6 = v46;
  }
  if ( v8 )
  {
    for ( i = 0; i < (unsigned int)v15; i += v35 )
    {
      v35 = v15 - i;
      if ( (unsigned int)v15 - i > 0xB )
        v35 = 11;
      W32GetUserSessionState(v14, v13);
      v38 = (void *)ReferenceDwmApiPort(v37, v36);
      v6 = DwmAsyncSendTouchContacts(v38);
      if ( v6 < 0 )
        break;
    }
    Win32FreePool(v8);
  }
  return v6 >= 0;
}
