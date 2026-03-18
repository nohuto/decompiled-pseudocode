/*
 * XREFs of NtUserDrawCaptionTemp @ 0x1C01CE4F0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     xxxDrawCaptionTemp @ 0x1C022B7E4 (xxxDrawCaptionTemp.c)
 */

__int64 __fastcall NtUserDrawCaptionTemp(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        ULONG64 a6,
        int a7)
{
  ULONG64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  __int64 v17; // rdi
  int v18; // ecx
  void *v19; // r14
  ULONG64 v20; // rdx
  void *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v29; // [rsp+40h] [rbp-C8h]
  int v30; // [rsp+44h] [rbp-C4h]
  void *v31[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h]
  __int128 v33; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h]
  __int128 v35; // [rsp+78h] [rbp-90h] BYREF
  __int64 v36; // [rsp+88h] [rbp-80h]
  __int128 v37; // [rsp+90h] [rbp-78h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-68h]
  __int128 v39; // [rsp+B0h] [rbp-58h] BYREF

  v32 = a4;
  v10 = a6;
  v35 = 0LL;
  v36 = 0LL;
  v39 = 0LL;
  *(_OWORD *)v31 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v30 = 0;
  EnterCrit(0LL, 0LL);
  if ( a1 )
  {
    v13 = ValidateHwnd(a1);
    if ( !v13 )
    {
LABEL_3:
      v16 = 0;
      goto LABEL_34;
    }
  }
  else
  {
    v13 = 0LL;
  }
  if ( a5 )
  {
    v17 = HMValidateHandle(a5, 3u);
    if ( !v17 )
      goto LABEL_3;
  }
  else
  {
    v17 = 0LL;
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int128 *)MmUserProbeAddress;
  v39 = *a3;
  if ( a6 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v18 = *(_DWORD *)v10;
  v29 = *(_DWORD *)v10;
  LODWORD(v31[0]) = *(_DWORD *)v10;
  v19 = *(void **)(v10 + 8);
  v31[1] = v19;
  if ( v19 )
  {
    if ( ((unsigned __int8)v19 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = (ULONG64)v19 + (unsigned __int16)v18 + 2;
    if ( v20 <= (unsigned __int64)v19 || v20 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v18 > HIWORD(v29) )
    {
      if ( (v18 & 1) == 0 )
        goto LABEL_30;
    }
    else if ( (v18 & 1) == 0 )
    {
      v21 = (void *)Win32AllocPoolWithQuotaZInit((unsigned __int16)v18 + 2LL, 2020897621LL);
      v31[1] = v21;
      if ( !v21 )
        ExRaiseStatus(-1073741801);
      v30 = 1;
      PushW32ThreadLock((__int64)v21, &v37, (__int64)Win32FreePool);
      memmove(v31[1], v19, LOWORD(v31[0]));
      *((_WORD *)v31[1] + ((unsigned __int64)LOWORD(v31[0]) >> 1)) = 0;
      WORD1(v31[0]) = LOWORD(v31[0]) + 2;
      goto LABEL_22;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10509);
LABEL_30:
    ExRaiseAccessViolation();
  }
LABEL_22:
  *(_QWORD *)&v33 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v33;
  *((_QWORD *)&v33 + 1) = v13;
  if ( v13 )
    HMLockObject(v13);
  *(_QWORD *)&v35 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v35;
  *((_QWORD *)&v35 + 1) = v17;
  if ( v17 )
    HMLockObject(v17);
  v16 = xxxDrawCaptionTemp(v13, a2, &v39, v32, v17, (unsigned __int64)v31 & -(__int64)(v31[1] != 0LL), a7);
  ThreadUnlock1(v23, v22, v24);
  ThreadUnlock1(v26, v25, v27);
  if ( v30 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v37);
LABEL_34:
  UserSessionSwitchLeaveCrit(v12, v11, v14, v15);
  return v16;
}
