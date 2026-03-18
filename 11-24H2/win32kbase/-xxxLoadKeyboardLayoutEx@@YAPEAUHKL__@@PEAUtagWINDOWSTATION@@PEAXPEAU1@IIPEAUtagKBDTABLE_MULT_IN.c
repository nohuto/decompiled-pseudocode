/*
 * XREFs of ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011AEC8
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x14011AD30 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     HMAllocObjectEx @ 0x140041FF0 (HMAllocObjectEx.c)
 *     _HMPheFromObject @ 0x140042A90 (_HMPheFromObject.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     DestroyKF @ 0x140064130 (DestroyKF.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ @ 0x1400960F0 (--1-$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAAPEAUtagKL@@XZ @ 0x140096354 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAAPEAUtagKL@@XZ.c)
 *     HKLtoPKL @ 0x140096C10 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x140096CA0 (xxxInternalActivateKeyboardLayout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1400F3EC8 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     SetGlobalKeyboardTableInfo @ 0x1400F43C4 (SetGlobalKeyboardTableInfo.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1400F44E8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     HMAssignmentLock @ 0x1400F47B0 (HMAssignmentLock.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x14010D000 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ?GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z @ 0x140110414 (-GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14011BE88 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     xxxWindowEvent @ 0x140140F70 (xxxWindowEvent.c)
 *     xxxFreeKeyboardLayouts @ 0x140147D8C (xxxFreeKeyboardLayouts.c)
 *     EditionResetIMELayout @ 0x140150A44 (EditionResetIMELayout.c)
 *     ?LoadKeyboardLayoutW@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z @ 0x140152120 (-LoadKeyboardLayoutW@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z.c)
 *     IsEditionResetIMELayoutSupported @ 0x140158A1C (IsEditionResetIMELayoutSupported.c)
 *     ApiSetEditionFreeIMEKeyboardLayouts @ 0x140191AA8 (ApiSetEditionFreeIMEKeyboardLayouts.c)
 *     ApiSetEditionInitSystemCharsetInfoForLayout @ 0x140192124 (ApiSetEditionInitSystemCharsetInfoForLayout.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x140192994 (ApiSetEditionNotifyShellLanguageHook.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x14020F75C (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x14020F940 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        wchar_t *a6,
        const unsigned __int16 *a7,
        signed int a8,
        unsigned int a9)
{
  __int64 v11; // rbx
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r12
  int v16; // esi
  HANDLE v17; // rbx
  struct tagKL *KbdLayoutListHead; // r8
  __int64 v19; // rdi
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rax
  char v23; // r15
  int inited; // r13d
  const unsigned __int16 *v25; // r9
  struct tagKBDFILE *KeyboardLayoutFile; // rbx
  __int64 v27; // rax
  unsigned int v28; // ebx
  unsigned int v29; // r13d
  struct tagKBDFILE *v30; // rax
  __int64 v31; // rcx
  const WCHAR *v32; // rdx
  const WCHAR *v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  struct tagKL *v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 UserSessionState; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  int v43; // [rsp+44h] [rbp-ADh]
  PVOID Buffer; // [rsp+58h] [rbp-99h] BYREF
  __int64 v46[2]; // [rsp+60h] [rbp-91h] BYREF
  PCWSTR SourceString[2]; // [rsp+70h] [rbp-81h] BYREF
  _QWORD v48[2]; // [rsp+80h] [rbp-71h] BYREF
  __int64 v49; // [rsp+90h] [rbp-61h] BYREF
  __int64 v50; // [rsp+98h] [rbp-59h]
  void *v51[2]; // [rsp+A0h] [rbp-51h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-41h] BYREF
  __int128 v53; // [rsp+C0h] [rbp-31h] BYREF
  __int128 v54; // [rsp+D0h] [rbp-21h]

  v11 = 0LL;
  SourceString[0] = a7;
  v46[0] = a3;
  v51[0] = a2;
  Buffer = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  DestinationString = 0LL;
  if ( !a8 || a1 && (*((_DWORD *)a1 + 16) & 4) != 0 )
    return 0LL;
  v12 = PtiCurrent((__int64)a1);
  v14 = (__int64)v12;
  if ( a3 )
  {
    v11 = HKLtoPKL((__int64)v12, a3);
    if ( !v11 )
      return 0LL;
  }
  if ( a8 == (_DWORD)a3 )
    return *(_QWORD *)(v11 + 40);
  v16 = a9;
  if ( (a9 & 0x40000000) != 0 )
  {
    v17 = *(HANDLE *)(W32GetUserSessionState(v13) + 63584);
    if ( PsGetThreadProcessId(*(PETHREAD *)v14) != v17 )
    {
      UserSetLastError(1004);
      return 0LL;
    }
    if ( !a1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2056LL);
    ApiSetEditionFreeIMEKeyboardLayouts(a1);
    xxxFreeKeyboardLayouts(a1);
  }
  KbdLayoutListHead = GetKbdLayoutListHead(a1);
  v19 = (__int64)KbdLayoutListHead;
  if ( !KbdLayoutListHead )
  {
    v20 = a8;
LABEL_27:
    if ( (int)IsEditionResetIMELayoutSupported() >= 0 && !(unsigned int)EditionResetIMELayout(v20, a9, &Buffer) )
      return 0LL;
    inited = ApiSetEditionInitSystemCharsetInfoForLayout(SourceString[0], &v53);
    v43 = inited;
    KeyboardLayoutFile = LoadKeyboardLayoutFile(v51[0], a4, a5, v25, a6 + 290, 0, 0);
    if ( KeyboardLayoutFile )
    {
      v19 = HMAllocObjectEx(0LL, 0LL, 0xDu, 0xA0u, 0);
      if ( v19 )
      {
        v51[1] = KeyboardLayoutFile;
        v51[0] = (void *)(v19 + 56);
        HMAssignmentLock((__int64)v51, 1);
        if ( *(_DWORD *)a6 )
        {
          v27 = Win32AllocPoolZInitImpl(256LL, 8LL * *(unsigned int *)a6, 0x746B7355u);
          *(_QWORD *)(v19 + 96) = v27;
          if ( v27 )
          {
            v28 = 0;
            v29 = 0;
            if ( *(_DWORD *)a6 )
            {
              do
              {
                if ( *(_QWORD *)&a6[8 * v28 + 324] )
                {
                  a6[36 * v28 + 33] = 0;
                  v30 = LoadKeyboardLayoutFile(
                          *(void **)&a6[8 * v28 + 324],
                          *(_DWORD *)&a6[8 * v28 + 328],
                          *(_DWORD *)&a6[8 * v28 + 330],
                          (const unsigned __int16 *)(2LL * v28),
                          &a6[36 * v28 + 2],
                          *(_DWORD *)&a6[36 * v28 + 34],
                          *(_DWORD *)&a6[36 * v28 + 36]);
                  if ( !v30 )
                    break;
                  v31 = *(_QWORD *)(v19 + 96);
                  v50 = (__int64)v30;
                  v49 = v31 + 8LL * v29;
                  HMAssignmentLock((__int64)&v49, 0);
                  ++v29;
                }
                ++v28;
              }
              while ( v28 < *(_DWORD *)a6 );
              v16 = a9;
            }
            *(_DWORD *)(v19 + 88) = v29;
            inited = v43;
          }
        }
        v32 = SourceString[0];
        *(_DWORD *)(v19 + 32) = 0;
        *(_WORD *)(v19 + 74) = 0;
        *(_QWORD *)(v19 + 40) = a8;
        *(_QWORD *)(v19 + 16) = v19;
        *(_QWORD *)(v19 + 24) = v19;
        RtlInitUnicodeString(&DestinationString, v32);
        RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)(v19 + 112));
        if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
          *(_DWORD *)(v19 + 32) |= 0x80000000;
        v33 = *(const WCHAR **)(v19 + 56);
        SourceString[0] = (PCWSTR)(v19 + 48);
        SourceString[1] = v33;
        HMAssignmentLock((__int64)SourceString, 1);
        v34 = *(_QWORD *)(v19 + 48);
        v35 = *((_DWORD *)a6 + 195);
        if ( !v35 )
          v35 = *(_DWORD *)(*(_QWORD *)(v34 + 32) + 96LL);
        *(_DWORD *)(v19 + 104) = v35;
        v36 = *((_DWORD *)a6 + 196);
        if ( !v36 )
          v36 = *(_DWORD *)(*(_QWORD *)(v34 + 32) + 100LL);
        *(_DWORD *)(v19 + 108) = v36;
        *(_DWORD *)(v19 + 116) = *((_DWORD *)a6 + 195);
        *(_DWORD *)(v19 + 120) = *((_DWORD *)a6 + 196);
        *(_DWORD *)(*(_QWORD *)(v34 + 32) + 80LL) |= ((unsigned int)v16 >> 15) & 7;
        *(_QWORD *)(v19 + 80) = Buffer;
        if ( inited )
        {
          *(_WORD *)(v19 + 72) = WORD2(v53);
          *(_DWORD *)(v19 + 64) = HIDWORD(v54);
          *(_DWORD *)(v19 + 68) = v53;
        }
        else
        {
          *(_WORD *)(v19 + 72) = 0;
          *(_QWORD *)(v19 + 64) = 1LL;
        }
        RtlStringCchCopyNW(
          (unsigned __int16 *)(v19 + 124),
          0x10uLL,
          (const unsigned __int16 *)(*(_QWORD *)(v14 + 464) + 984LL),
          0x10uLL);
        v37 = GetKbdLayoutListHead(a1);
        if ( v37 )
        {
          *(_QWORD *)(v19 + 16) = v37;
          *(_QWORD *)(v19 + 24) = *((_QWORD *)v37 + 3);
          *(_QWORD *)(*((_QWORD *)v37 + 3) + 16LL) = v19;
          *((_QWORD *)v37 + 3) = v19;
        }
        else
        {
          LockKbdLayoutListHead(a1, (struct tagKL *)v19);
        }
        InputTraceLogging::Keyboard::LoadKeyboardLayoutW((struct tagKL *const)v19);
        v23 = 0;
        goto LABEL_57;
      }
      DestroyKF(KeyboardLayoutFile);
    }
    if ( Buffer )
      GreDeleteFastMutex((char *)Buffer);
    return 0LL;
  }
  v20 = a8;
  while ( 1 )
  {
    if ( *(_QWORD *)(v19 + 40) == a8 )
    {
      v21 = *(unsigned int *)(v19 + 32);
      if ( (int)v21 >= 0 || (*((_DWORD *)a6 + 194) & 1) != 0 )
        break;
    }
    v19 = *(_QWORD *)(v19 + 16);
    if ( (struct tagKL *)v19 == KbdLayoutListHead )
      goto LABEL_27;
  }
  if ( (v21 & 0x20000000) != 0 )
  {
    v22 = HMPheFromObject((int *)v19);
    *(_BYTE *)(v22 + 25) &= ~1u;
    *(_DWORD *)(v19 + 32) &= ~0x20000000u;
    InputTraceLogging::Keyboard::LoadKeyboardLayoutW((struct tagKL *const)v19);
  }
  else if ( (a9 & 0x40000000) == 0 )
  {
    v16 = a9 & 0xFFFFFF7F;
  }
  v23 = 1;
LABEL_57:
  v48[0] = *(_QWORD *)(v14 + 456);
  *(_QWORD *)(v14 + 456) = v48;
  v48[1] = v19;
  _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
  if ( v46[0] )
  {
    v38 = HKLtoPKL(v14, v46[0]);
    if ( v38 )
    {
      v46[0] = *(_QWORD *)(v14 + 456);
      *(_QWORD *)(v14 + 456) = v46;
      v46[1] = v38;
      _InterlockedIncrement((volatile signed __int32 *)(v38 + 8));
      xxxSetPKLinThreads((struct tagKL *)v19, (struct tagKL *)v38);
      xxxInternalUnloadKeyboardLayout(a1, (struct tagKL *)v38, 0x80000000);
      Win32HMThreadLockBase<tagKL,0,1>::ManualUnlock<void>(v46);
      Win32HMThreadLockBase<tagMONITOR,0,1>::~Win32HMThreadLockBase<tagMONITOR,0,1>(v46);
    }
  }
  if ( (v16 & 8) != 0 )
    ReorderKeyboardLayouts(a1, (struct tagKL *)v19);
  if ( !v23 )
    xxxWindowEvent(0x80000000, 0, 0, 0, 0);
  if ( (v16 & 0x80u) == 0 )
    ApiSetEditionNotifyShellLanguageHook(v14, 0LL, 0LL);
  if ( (v16 & 1) != 0 )
    xxxInternalActivateKeyboardLayout((__int64)a1, v19, v16, 0LL);
  if ( (v16 & 0x40000000) != 0 )
  {
    SetGlobalKeyboardTableInfo(v19);
    UserSessionState = W32GetUserSessionState(v39);
    v50 = v19;
    v49 = UserSessionState + 14272;
    HMAssignmentLock((__int64)&v49, 0);
    xxxSetPKLinThreads((struct tagKL *)v19, 0LL);
  }
  if ( v16 < 0 && !*(_QWORD *)(W32GetUserSessionState(v21) + 14272) )
    SetGlobalKeyboardTableInfo(v19);
  v41 = Win32HMThreadLockBase<tagKL,0,1>::ManualUnlock<void>(v48);
  if ( !v41 )
  {
    Win32HMThreadLockBase<tagMONITOR,0,1>::~Win32HMThreadLockBase<tagMONITOR,0,1>(v48);
    return 0LL;
  }
  v42 = *(_QWORD *)(v41 + 40);
  Win32HMThreadLockBase<tagMONITOR,0,1>::~Win32HMThreadLockBase<tagMONITOR,0,1>(v48);
  return v42;
}
