/*
 * XREFs of ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x14015F628
 * Callers:
 *     xxxCsDdeInitialize @ 0x14015F1B4 (xxxCsDdeInitialize.c)
 *     NtUserSetWindowLongPtr @ 0x14015F4F0 (NtUserSetWindowLongPtr.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     safe_cast_wf_to_PDIALOG @ 0x140282DC4 (safe_cast_wf_to_PDIALOG.c)
 *     ?FCallerOk@@YAHPEAUtagWND@@@Z @ 0x1402DCAB4 (-FCallerOk@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetWindowData @ 0x1402DD148 (xxxSetWindowData.c)
 */

__int64 __fastcall xxxSetWindowLongPtr(struct tagWND *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // r15
  char v8; // bl
  unsigned __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  const struct tagUIPI_INFO *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  char *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rdi
  __int64 v25; // rsi
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  const signed __int16 *v36; // rcx
  unsigned int v37; // edi
  int *v38; // rsi
  __int64 UserSessionState; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // r8
  __int64 *v42; // rcx
  __int64 v43; // rcx
  __int64 *v44; // [rsp+28h] [rbp-90h]
  __int64 v45; // [rsp+30h] [rbp-88h]
  __int64 v46; // [rsp+30h] [rbp-88h]

  v6 = a2;
  v8 = 0;
  if ( !(unsigned int)FCallerOk(a1) )
    goto LABEL_68;
  if ( (int)v6 < 0 )
    goto LABEL_14;
  v9 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 248LL);
  if ( v6 + 8 <= v9 )
    goto LABEL_14;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  v11 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v12 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL);
  if ( v12 == v11 )
    goto LABEL_14;
  v13 = (const struct tagUIPI_INFO *)(v12 + 872);
  v14 = PsGetCurrentProcessWin32Process(v12);
  if ( v14 )
  {
    v15 = -(__int64)(*(_QWORD *)v14 != 0LL);
    v14 &= v15;
  }
  if ( !UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v14 + 872), v13, (const struct tagUIPI_INFO *)v15) )
  {
    v17 = PsGetCurrentProcessWin32Process(v16);
    if ( v17 )
      v17 &= -(__int64)(*(_QWORD *)v17 != 0LL);
    if ( *(int *)(v17 + 12) >= 0 )
    {
LABEL_68:
      UserSetLastError(5);
      return 0LL;
    }
  }
  KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 464LL));
  v8 = 1;
LABEL_14:
  v18 = (char *)a1 + 40;
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0 )
    goto LABEL_57;
  v44 = (__int64 *)safe_cast_wf_to_PDIALOG(a1);
  if ( v44 )
  {
    if ( !(_DWORD)v6 )
    {
      v46 = *v44;
      *v44 = a3;
      v23 = v46;
      goto LABEL_28;
    }
    if ( (_DWORD)v6 == 16 )
    {
      v22 = *(_DWORD *)(*(_QWORD *)v18 + 248LL);
      if ( v22 || *(int *)(*(_QWORD *)v18 + 200LL) < 30 )
      {
        v23 = 0LL;
        if ( v22 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 509LL);
        if ( *(int *)(*(_QWORD *)v18 + 200LL) < 30 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 510LL);
      }
      else
      {
        v45 = v44[2];
        v44[2] = a3;
        v23 = v45;
      }
      goto LABEL_28;
    }
    if ( (unsigned int)v6 <= 0x1D )
    {
      v21 = 1415;
      goto LABEL_63;
    }
    goto LABEL_57;
  }
  if ( (int)v6 < 0 )
  {
LABEL_58:
    v23 = xxxSetWindowData(a1);
    goto LABEL_28;
  }
  v25 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 19928);
  v26 = *(unsigned __int16 *)(*(_QWORD *)v18 + 42LL);
  if ( (int)v6 >= *(unsigned __int16 *)(v25 + 2LL * ((v26 & 0xFFFF2FFF) - 666) + 328)
                - *(unsigned __int16 *)(W32GetUserSessionState(v28, v27) + 71436) )
  {
LABEL_57:
    if ( (int)v6 < 0 )
      goto LABEL_58;
    goto LABEL_48;
  }
  v29 = *(_QWORD *)v18;
  v30 = *(_WORD *)(*(_QWORD *)v18 + 42LL) & 0x2FFF;
  if ( v30 <= 0x2A6 )
  {
    if ( v30 == 678 || (v31 = v30 - 673) == 0 || (v32 = v31 - 1) == 0 )
    {
LABEL_42:
      if ( (_DWORD)v6 )
      {
LABEL_39:
        v21 = 1413;
LABEL_63:
        UserSetLastError(v21);
        if ( v8 )
          KeDetachProcess();
        return 0LL;
      }
      if ( *(_DWORD *)(v29 + 248) )
        v34 = **((_QWORD **)a1 + 35);
      else
        v34 = **(_QWORD **)(v29 + 296);
      goto LABEL_46;
    }
LABEL_37:
    v33 = v32 - 1;
    if ( v33 && v33 - 1 >= 2 )
      goto LABEL_39;
    goto LABEL_42;
  }
  v32 = v30 - 679;
  if ( v32 )
    goto LABEL_37;
  if ( (_DWORD)v6 != 8 )
    goto LABEL_39;
  v34 = **(_QWORD **)(v29 + 296);
LABEL_46:
  if ( v34 && *(char *)(*(_QWORD *)v18 + 19LL) >= 0 )
    goto LABEL_39;
LABEL_48:
  v35 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v18 + 248LL) + *(_DWORD *)(*(_QWORD *)v18 + 200LL));
  if ( (unsigned __int64)(unsigned int)v6 + 8 > v35 )
    goto LABEL_39;
  if ( a5 )
  {
    v36 = *(const signed __int16 **)(*((_QWORD *)a1 + 17) + 8LL);
    if ( _bittest16(v36 + 3, 8u) )
    {
      v37 = 0;
      v38 = gDefaultServerClasses;
      while ( 1 )
      {
        UserSessionState = W32GetUserSessionState(v36, v35);
        v36 = *(const signed __int16 **)(*((_QWORD *)a1 + 17) + 8LL);
        v35 = *(unsigned __int16 *)v36;
        if ( (_WORD)v35 == *(_WORD *)(*(_QWORD *)(UserSessionState + 19928)
                                    + 2LL * (((unsigned int)*v38 >> 3) & 0x1F)
                                    + 868) )
          break;
        ++v37;
        v38 += 12;
        if ( v37 >= 5 )
          goto LABEL_65;
      }
      if ( (int)v6 < gDefaultServerClasses[12 * v37 + 6] )
      {
        if ( (*v38 & 0xF8) == 0xB0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 613LL);
        v21 = 5;
        goto LABEL_63;
      }
    }
  }
LABEL_65:
  v40 = *((_QWORD *)a1 + 5);
  v41 = *(unsigned int *)(v40 + 248);
  if ( (int)v6 + 8LL <= v41 )
  {
    v43 = *((_QWORD *)a1 + 35);
    v23 = *(_QWORD *)((int)v6 + v43);
    *(_QWORD *)((int)v6 + v43) = a3;
  }
  else
  {
    v42 = (__int64 *)(*(_QWORD *)(v40 + 296) + (int)v6 - (int)v41);
    v23 = *v42;
    *v42 = a3;
  }
LABEL_28:
  if ( v8 )
    KeDetachProcess();
  return v23;
}
