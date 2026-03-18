/*
 * XREFs of NtUserGrantJobUIRestrictionException @ 0x140298200
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_GrantJobUIRestrictionException__private_IsEnabledDeviceUsageNoInline @ 0x14029257C (Feature_GrantJobUIRestrictionException__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserGrantJobUIRestrictionException(HANDLE Handle, HANDLE a2, int a3)
{
  int v5; // ecx
  __int64 v6; // rdx
  char v7; // bl
  int v8; // esi
  bool v9; // di
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  ULONG v13; // ecx
  bool v14; // di
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // edi
  bool v19; // si
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  ULONG v23; // eax
  __int64 v24; // rcx
  PVOID v26; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v27[8]; // [rsp+58h] [rbp-20h] BYREF
  __int64 v28; // [rsp+60h] [rbp-18h]
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  if ( (a3 & 0xFFFFFFFE) == 0 )
  {
    if ( !(unsigned int)Feature_GrantJobUIRestrictionException__private_IsEnabledDeviceUsageNoInline() )
    {
      v5 = 5023;
      goto LABEL_3;
    }
    EnterCrit(0LL, 0LL);
    v28 = 0LL;
    v27[0] = 0;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v27, v6);
    Object = 0LL;
    v7 = 1;
    v8 = ObReferenceObjectByHandleWithTag(Handle, 2u, (POBJECT_TYPE)PsJobType, 1, 0x47727355u, &Object, 0LL);
    if ( v8 >= 0 )
    {
      if ( (PsGetJobUIRestrictionsClass(Object) & 0x200) != 0 )
      {
        v26 = 0LL;
        v18 = ObReferenceObjectByHandleWithTag(a2, 0x100u, (POBJECT_TYPE)PsProcessType, 1, 0x47727355u, &v26, 0LL);
        if ( v18 < 0 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x8000) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
          {
            v7 = 0;
          }
          v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(&WPP_GLOBAL_Control, *(_QWORD *)&WPP_GLOBAL_Control);
            LOBYTE(v21) = v19;
            LOBYTE(v22) = v7;
            WPP_RECORDER_AND_TRACE_SF_d(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v22,
              v21,
              *(_QWORD *)(UserSessionState + 69416),
              3,
              16,
              126,
              (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
              v18);
          }
          v23 = RtlNtStatusToDosError(v18);
          UserSetLastError(v23);
        }
        ObfDereferenceObjectWithTag(Object, 0x47727355u);
        if ( v26 )
          ObfDereferenceObjectWithTag(v26, 0x47727355u);
        goto LABEL_36;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x8000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v7 = 0;
      }
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v15 = W32GetUserSessionState(&WPP_GLOBAL_Control, *(_QWORD *)&WPP_GLOBAL_Control);
        LOBYTE(v16) = v14;
        LOBYTE(v17) = v7;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v17,
          v16,
          *(_QWORD *)(v15 + 69416),
          3,
          16,
          125,
          (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids);
      }
      v13 = 5023;
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x8000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v7 = 0;
      }
      v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v10 = W32GetUserSessionState(&WPP_GLOBAL_Control, *(_QWORD *)&WPP_GLOBAL_Control);
        LOBYTE(v11) = v9;
        LOBYTE(v12) = v7;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v12,
          v11,
          *(_QWORD *)(v10 + 69416),
          3,
          16,
          124,
          (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
          v8);
      }
      v13 = RtlNtStatusToDosError(v8);
    }
    UserSetLastError(v13);
LABEL_36:
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v27);
    UserSessionSwitchLeaveCrit(v24);
    return 0LL;
  }
  v5 = 87;
LABEL_3:
  UserSetLastError(v5);
  return 0LL;
}
