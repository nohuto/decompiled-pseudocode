/*
 * XREFs of NtUserFindExistingCursorIcon @ 0x1C0066280
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0013298 (UserSetLastStatus.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     ?ResStrCmp@@YAHPEAU_UNICODE_STRING@@0@Z @ 0x1C0066778 (-ResStrCmp@@YAHPEAU_UNICODE_STRING@@0@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserFindExistingCursorIcon(int *a1, ULONG64 a2, __int64 *a3)
{
  __int64 *v3; // r14
  ULONG64 v4; // rsi
  int *v5; // rbx
  __int64 v6; // rdi
  int **v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edx
  _WORD *v13; // rcx
  ULONG64 v14; // r8
  int v15; // edx
  WCHAR *v16; // r8
  ULONG64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  _WORD *v20; // rax
  NTSTATUS v21; // r11d
  __int64 v22; // r9
  __int16 v23; // r10
  __int64 i; // rbx
  PERESOURCE *v25; // rax
  __int64 v26; // rbx
  __int64 *ThreadWin32Thread; // rax
  int v29; // [rsp+20h] [rbp-2F8h]
  int v30; // [rsp+20h] [rbp-2F8h]
  __int16 Atom; // [rsp+24h] [rbp-2F4h]
  __int128 v32; // [rsp+30h] [rbp-2E8h]
  __int64 v33; // [rsp+40h] [rbp-2D8h]
  __int64 v34; // [rsp+58h] [rbp-2C0h]
  struct _UNICODE_STRING v35; // [rsp+78h] [rbp-2A0h] BYREF
  _WORD *v36; // [rsp+90h] [rbp-288h]
  __int64 v37; // [rsp+98h] [rbp-280h]
  __int64 v38; // [rsp+A0h] [rbp-278h]
  __int128 v39; // [rsp+A8h] [rbp-270h]
  _BYTE v40[512]; // [rsp+D0h] [rbp-248h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v39 = 0LL;
  v35 = 0LL;
  v6 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v7 = (int **)MmUserProbeAddress;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v32 = *(_OWORD *)v3;
  v33 = v3[2];
  if ( *v3 )
  {
    v34 = HMValidateHandle(*v3, 3u);
    if ( !v34 )
      goto LABEL_87;
    v7 = (int **)MmUserProbeAddress;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v5 >= *v7 )
    v5 = *v7;
  v12 = *v5;
  v29 = *v5;
  LODWORD(v39) = *v5;
  v13 = (_WORD *)*((_QWORD *)v5 + 1);
  *((_QWORD *)&v39 + 1) = v13;
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (ULONG64)v13 + (unsigned __int16)v12 + 2;
  if ( v14 <= (unsigned __int64)v13 || v14 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v12 > HIWORD(v29) )
  {
    if ( (v12 & 1) == 0 )
      goto LABEL_85;
    goto LABEL_84;
  }
  if ( (v12 & 1) != 0 )
  {
LABEL_84:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7854LL);
LABEL_85:
    ExRaiseAccessViolation();
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  v15 = *(_DWORD *)v4;
  v30 = *(_DWORD *)v4;
  *(_DWORD *)&v35.Length = *(_DWORD *)v4;
  v16 = *(WCHAR **)(v4 + 8);
  v35.Buffer = v16;
  if ( ((unsigned __int64)v16 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v16 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (ULONG64)v16 + (unsigned __int16)v15 + 2;
    if ( v17 <= (unsigned __int64)v16 || v17 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v15 > HIWORD(v30) || (v15 & 1) != 0 )
    {
      if ( (v15 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7857LL);
      ExRaiseAccessViolation();
    }
  }
  v18 = 2147483646LL;
  v38 = 2147483646LL;
  v36 = v13;
  v19 = 256LL;
  v37 = 256LL;
  v20 = v40;
  v21 = 0;
  v22 = 0LL;
  while ( v19 )
  {
    if ( !v18 )
      goto LABEL_35;
    v23 = *v13;
    if ( !*v13 )
      goto LABEL_35;
    v36 = ++v13;
    *v20++ = v23;
    v37 = --v19;
    v38 = --v18;
    ++v22;
  }
  --v20;
  v21 = -2147483643;
LABEL_35:
  *v20 = 0;
  if ( v21 < 0 )
  {
    UserSetLastStatus(v21, 1);
  }
  else
  {
    Atom = UserFindAtom(v40);
    if ( Atom )
    {
      i = 0LL;
      if ( DWORD2(v32) )
      {
        v25 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v9, v8, v10, v11);
        if ( !ExIsResourceAcquiredSharedLite(*v25) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
        v26 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( ThreadWin32Thread )
          v26 = *ThreadWin32Thread;
        if ( (*(_DWORD *)(v26 + 1272) & 0x8000000) != 0 )
          v26 = *(_QWORD *)(v26 + 1520);
        for ( i = *(_QWORD *)(*(_QWORD *)(v26 + 424) + 736LL); i; i = *(_QWORD *)(i + 32) )
        {
          if ( v34 && i == v34 )
          {
            i = v34;
            goto LABEL_81;
          }
          if ( Atom == *(_WORD *)(i + 72)
            && (*(_DWORD *)(i + 80) & 0x1004) == 4
            && *(_WORD *)(i + 74) == WORD4(v32)
            && (unsigned int)ResStrCmp(&v35, (struct _UNICODE_STRING *)(i + 56))
            && ((*(_DWORD *)(i + 80) & 8) != 0
             || (!HIDWORD(v32) || *(_DWORD *)(i + 140) == HIDWORD(v32))
             && (!(_DWORD)v33 || *(_DWORD *)(i + 144) >> 1 == (_DWORD)v33)
             && (!HIDWORD(v33) || *(_DWORD *)(i + 136) == HIDWORD(v33))) )
          {
            goto LABEL_81;
          }
        }
        for ( i = gpcurFirst; i; i = *(_QWORD *)(i + 32) )
        {
          if ( v34 && i == v34 )
          {
            i = v34;
            goto LABEL_80;
          }
          if ( Atom == *(_WORD *)(i + 72)
            && (*(_DWORD *)(i + 80) & 0x1004) == 4
            && *(_WORD *)(i + 74) == WORD4(v32)
            && (unsigned int)ResStrCmp(&v35, (struct _UNICODE_STRING *)(i + 56))
            && ((*(_DWORD *)(i + 80) & 8) != 0
             || (!HIDWORD(v32) || *(_DWORD *)(i + 140) == HIDWORD(v32))
             && (!(_DWORD)v33 || *(_DWORD *)(i + 144) >> 1 == (_DWORD)v33)
             && (!HIDWORD(v33) || *(_DWORD *)(i + 136) == HIDWORD(v33))) )
          {
            goto LABEL_80;
          }
        }
        i = 0LL;
      }
LABEL_80:
      if ( i )
LABEL_81:
        v6 = *(_QWORD *)i;
    }
  }
LABEL_87:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v6;
}
