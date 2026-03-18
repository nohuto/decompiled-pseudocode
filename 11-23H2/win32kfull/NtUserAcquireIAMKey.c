/*
 * XREFs of NtUserAcquireIAMKey @ 0x1C009CC00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserAcquireIAMKey(_QWORD *Address)
{
  int v2; // r8d
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  PDEVICE_OBJECT v12; // r9
  bool v13; // cl
  int v14; // edx
  __int16 v15; // [rsp+30h] [rbp-28h]

  EnterCrit(0LL, 0LL);
  v3 = *(_QWORD *)(gptiCurrent + 456LL);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 176);
  v6 = 0;
  if ( !v5 || !*(_QWORD *)(v4 + 168) )
  {
    v12 = WPP_GLOBAL_Control;
    v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v13 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v14 = 26;
    goto LABEL_40;
  }
  if ( *(_QWORD *)(gptiCurrent + 424LL) != v5 )
  {
    v12 = WPP_GLOBAL_Control;
    v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v13 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v14 = 27;
    goto LABEL_40;
  }
  if ( *(_QWORD *)(v3 + 288) )
  {
    v12 = WPP_GLOBAL_Control;
    v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v13 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v14 = 28;
    goto LABEL_40;
  }
  if ( !*(_DWORD *)(v3 + 272) )
  {
    v12 = WPP_GLOBAL_Control;
    v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v13 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v14 = 29;
LABEL_40:
    v15 = v14;
    LOBYTE(v14) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      v12->AttachedDevice,
      v14,
      v2,
      (_DWORD)v12,
      4,
      2,
      v15,
      (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids);
LABEL_41:
    UserSetLastError(5LL);
    goto LABEL_7;
  }
  ProbeForWrite(Address, 8uLL, 4u);
  *Address = *(_QWORD *)(v3 + 280);
  *(_DWORD *)(v3 + 272) = 0;
  *(_QWORD *)(v3 + 288) = gptiCurrent;
  v6 = 1;
LABEL_7:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
