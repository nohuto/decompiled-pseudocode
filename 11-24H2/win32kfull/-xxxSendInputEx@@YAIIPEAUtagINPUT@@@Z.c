/*
 * XREFs of ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x140274624
 * Callers:
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x140274038 (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1400942AC (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1401C8EA8 (xxxWaitForDITMouseInjectionFlush.c)
 *     xxxSynchronizeDWMWindowChanges @ 0x14021A598 (xxxSynchronizeDWMWindowChanges.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14022FDC8 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?DoInputCheck@@YA?AW4InputCheckResult@@W4InputCheckRequest@@@Z @ 0x140272DAC (-DoInputCheck@@YA-AW4InputCheckResult@@W4InputCheckRequest@@@Z.c)
 *     ?xxxInternalKeyEventDirect@@YA_NEGKK_K@Z @ 0x140273C6C (-xxxInternalKeyEventDirect@@YA_NEGKK_K@Z.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140274CD4 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxSendInputEx(unsigned int a1, struct tagINPUT *a2)
{
  char v3; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v7; // zf
  bool v8; // r13
  unsigned int v9; // r14d
  unsigned __int64 *v10; // rdi
  char v11; // bl
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // esi
  __int64 v17; // rcx
  char v18; // si
  bool v19; // bp
  __int64 v20; // rax
  int v21; // edx
  int v22; // r8d
  int v23; // r8d
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  bool v26; // di
  __int64 UserSessionState; // rax
  int v28; // edx
  int v29; // r8d
  __int64 v30; // rdx
  bool v31; // di
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  __int16 v36; // [rsp+30h] [rbp-48h]
  __int16 v37; // [rsp+30h] [rbp-48h]

  v3 = 0;
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    v7 = *(_DWORD *)(W32GetUserSessionState(v6, v5) + 18800) == 0;
  else
    v7 = *(_DWORD *)(W32GetUserSessionState(v6, v5) + 16340) == 0;
  v8 = v7;
  v9 = 0;
  if ( !a1 )
    return v9;
  v10 = (unsigned __int64 *)((char *)a2 + 24);
  v11 = 1;
  while ( 1 )
  {
    v12 = *((_DWORD *)v10 - 6);
    if ( v12 == 2 )
      break;
    v13 = 119LL;
    if ( !v12 )
    {
      if ( (*((_DWORD *)v10 - 1) & 0x50000) == 0x50000 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
        {
          v11 = 0;
        }
        v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
          v37 = 32;
LABEL_76:
          LOBYTE(v29) = v26;
          LOBYTE(v28) = v11;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v28,
            v29,
            *(_QWORD *)(UserSessionState + 69416),
            2,
            20,
            v37,
            (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
          return v9;
        }
        return v9;
      }
      v13 = 127LL;
    }
    v16 = DoInputCheck(v13, &WPP_GLOBAL_Control);
    switch ( v16 )
    {
      case 1:
        v17 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
          || (v18 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
        {
          v18 = 0;
        }
        v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v18 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_19;
        v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        v36 = 33;
        goto LABEL_18;
      case 4:
        v17 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
          || (v18 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
        {
          v18 = 0;
        }
        v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v18 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_19;
        v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        v36 = 34;
        goto LABEL_18;
      case 5:
        MSGLUA_GPQFOREGROUND(v15, v14);
        v17 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
          || (v18 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
        {
          v18 = 0;
        }
        v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v18 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_19;
        v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        v36 = 35;
LABEL_18:
        LOBYTE(v22) = v19;
        LOBYTE(v21) = v18;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v21,
          v22,
          *(_QWORD *)(v20 + 69416),
          3,
          20,
          v36,
          (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
        goto LABEL_19;
    }
    if ( v16 )
    {
      UserSetLastError(5);
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v11 = 0;
      }
      v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v32 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v30);
        LOBYTE(v33) = v31;
        LOBYTE(v34) = v11;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v34,
          v33,
          *(_QWORD *)(v32 + 69416),
          2,
          20,
          36,
          (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids,
          v16);
      }
      return v9;
    }
    v17 = *((unsigned int *)v10 - 6);
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)v17 == 1 )
      {
        if ( v3 )
        {
          v3 = 0;
          xxxWaitForDITMouseInjectionFlush(v17, v14);
        }
        v23 = *((_DWORD *)v10 - 3);
        if ( (v23 & 4) == 0 || *((_WORD *)v10 - 8) || (v23 & 0xFFFFFFF9) != 0 )
        {
          LOBYTE(v17) = *((_BYTE *)v10 - 16);
          v24 = *((unsigned __int8 *)v10 - 14);
        }
        else
        {
          v24 = *((unsigned __int16 *)v10 - 7);
          LOBYTE(v17) = -25;
        }
        xxxInternalKeyEventDirect(v17, v24, v23, *((_DWORD *)v10 - 2), *v10);
      }
    }
    else
    {
      if ( (*((_DWORD *)v10 - 1) & 0xAA) != 0 )
        xxxSynchronizeDWMWindowChanges(v17, v14);
      if ( !v8 )
        v3 = 1;
      v25 = UpconvertTime(*(unsigned int *)v10);
      xxxMouseEventDirect(
        *((unsigned int *)v10 - 4),
        *((unsigned int *)v10 - 3),
        *((_DWORD *)v10 - 2),
        *((_DWORD *)v10 - 1),
        v25,
        gliQpcFreq * v25 / 0x3E8,
        v10[1],
        v8);
    }
LABEL_19:
    ++v9;
    v10 += 5;
    if ( v9 >= a1 )
    {
      if ( v3 )
        xxxWaitForDITMouseInjectionFlush(v17, (__int64)&WPP_GLOBAL_Control);
      return v9;
    }
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
  {
    v11 = 0;
  }
  v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    v37 = 31;
    goto LABEL_76;
  }
  return v9;
}
