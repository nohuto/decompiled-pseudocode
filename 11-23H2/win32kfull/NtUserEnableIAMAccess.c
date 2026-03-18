/*
 * XREFs of NtUserEnableIAMAccess @ 0x1C0030C10
 * Callers:
 *     <none>
 * Callees:
 *     _EnableIAMThreadAccess @ 0x1C0030D60 (_EnableIAMThreadAccess.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserEnableIAMAccess(__int64 *a1, unsigned int a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r9
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _UNKNOWN **v15; // r8

  EnterCrit(0LL, 0LL);
  if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v4 = *a1;
  v5 = *(_QWORD **)(gptiCurrent + 456LL);
  v6 = v5[1];
  v7 = *(_QWORD *)(v6 + 176);
  v8 = 0;
  if ( *(_QWORD *)(gptiCurrent + 424LL) == v7 && v7 && *(_QWORD *)(v6 + 168) )
  {
    v9 = 0;
    if ( v5[36] )
      LOBYTE(v9) = v4 == v5[35];
  }
  else
  {
    v9 = 0;
  }
  if ( v9 )
  {
    v8 = EnableIAMThreadAccess(gptiCurrent, a2);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v4) = 0;
    }
    v15 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        (_DWORD)v15,
        30,
        4,
        2,
        30,
        (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids);
    }
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v8;
}
