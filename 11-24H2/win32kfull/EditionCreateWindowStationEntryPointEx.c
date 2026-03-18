/*
 * XREFs of EditionCreateWindowStationEntryPointEx @ 0x140291DE0
 * Callers:
 *     EditionCreateWindowStationEntryPoint @ 0x140291D90 (EditionCreateWindowStationEntryPoint.c)
 * Callees:
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14003D210 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14011C530 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x140164684 (--1-$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401646B0 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1?$Win32RawOptionalLockedItem@X$0A@@@QEAA@XZ @ 0x1401C34B0 (--1-$Win32RawOptionalLockedItem@X$0A@@@QEAA@XZ.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@X$0A@$00$00$00@@QEAAXPEAXP6AX0@Z@Z @ 0x140208D50 (--$ManualLock@X@-$Win32RawLockedItemBase@X$0A@$00$00$00@@QEAAXPEAXP6AX0@Z@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x14028A568 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x14028A884 (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

HANDLE __fastcall EditionCreateWindowStationEntryPointEx(
        struct _OBJECT_ATTRIBUTES *a1,
        ACCESS_MASK a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        void *Src,
        ULONG64 a7,
        int a8,
        char a9)
{
  ULONG64 v10; // rbx
  int v11; // ecx
  ULONG_PTR v12; // r8
  ULONG64 v13; // rdx
  _DWORD *v14; // r14
  ULONG_PTR v15; // rcx
  _OWORD *v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  _OWORD *v20; // rcx
  _OWORD *v21; // rax
  void *v22; // rbx
  NTSTATUS v23; // eax
  ULONG v24; // eax
  __int64 v25; // rdx
  char v26; // r15
  unsigned int *v27; // rcx
  bool v28; // r13
  char CurrentWin32kSessionId; // bl
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 UserSessionState; // rax
  int v33; // r8d
  int v34; // edx
  ULONG_PTR v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  NTSTATUS v38; // r15d
  __int64 v39; // rdx
  __int64 v40; // rdx
  ULONG v41; // eax
  __int64 v42; // rdx
  HANDLE v43; // rbx
  HANDLE v47; // [rsp+70h] [rbp-988h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-980h] BYREF
  ULONG_PTR v49; // [rsp+80h] [rbp-978h] BYREF
  int v50; // [rsp+88h] [rbp-970h]
  NTSTATUS v51; // [rsp+8Ch] [rbp-96Ch]
  ACCESS_MASK v52; // [rsp+90h] [rbp-968h]
  unsigned int v53; // [rsp+98h] [rbp-960h]
  _DWORD *v54; // [rsp+A0h] [rbp-958h]
  __int64 v55; // [rsp+A8h] [rbp-950h]
  __int64 v56; // [rsp+B0h] [rbp-948h]
  ULONG_PTR v57[4]; // [rsp+B8h] [rbp-940h] BYREF
  struct _UNICODE_STRING v58; // [rsp+D8h] [rbp-920h] BYREF
  ULONG_PTR BugCheckParameter2[3]; // [rsp+E8h] [rbp-910h] BYREF
  struct _OBJECT_ATTRIBUTES v60; // [rsp+100h] [rbp-8F8h] BYREF
  _QWORD v61[3]; // [rsp+130h] [rbp-8C8h] BYREF
  _BYTE v62[792]; // [rsp+148h] [rbp-8B0h] BYREF
  _BYTE v63[800]; // [rsp+460h] [rbp-598h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v64; // [rsp+780h] [rbp-278h] BYREF
  unsigned __int16 v65[272]; // [rsp+790h] [rbp-268h] BYREF

  v55 = a3;
  v52 = a2;
  v56 = a3;
  v53 = a4;
  v10 = a7;
  memset(&v60, 0, sizeof(v60));
  *(_QWORD *)&v64.Length = 0LL;
  *(_DWORD *)&v64.ContextTrackingMode = 0;
  BugCheckParameter3 = 0LL;
  v58 = 0LL;
  v54 = 0LL;
  v49 = 0LL;
  v47 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a7 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v11 = *(_DWORD *)v10;
  v50 = v11;
  LODWORD(v57[0]) = v11;
  v12 = *(_QWORD *)(v10 + 8);
  v57[1] = v12;
  if ( (v12 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = (unsigned __int16)v11 + v12 + 2;
  if ( v13 <= v12 || v13 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v11 > HIWORD(v50) )
  {
    if ( (v11 & 1) == 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( (v11 & 1) != 0 )
  {
LABEL_19:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 711);
LABEL_20:
    ExRaiseAccessViolation();
  }
  RtlStringCchCopyNW((char *)v65, 9LL, (char *)v12, (unsigned __int64)(unsigned __int16)v11 >> 1);
  v14 = (_DWORD *)Win32AllocPoolWithQuotaZInit(792LL, 1702064981LL);
  v54 = v14;
  if ( v14 )
  {
    memset_0(v62, 0, sizeof(v62));
    RtlCopyFromUser(v62, Src, 0x318uLL);
    v16 = v63;
    v17 = v62;
    v18 = 6LL;
    v19 = 6LL;
    do
    {
      *v16 = *v17;
      v16[1] = v17[1];
      v16[2] = v17[2];
      v16[3] = v17[3];
      v16[4] = v17[4];
      v16[5] = v17[5];
      v16[6] = v17[6];
      v16 += 8;
      *(v16 - 1) = v17[7];
      v17 += 8;
      --v19;
    }
    while ( v19 );
    *v16 = *v17;
    *((_QWORD *)v16 + 2) = *((_QWORD *)v17 + 2);
    v20 = v14;
    v21 = v63;
    do
    {
      *v20 = *v21;
      v20[1] = v21[1];
      v20[2] = v21[2];
      v20[3] = v21[3];
      v20[4] = v21[4];
      v20[5] = v21[5];
      v20[6] = v21[6];
      v20 += 8;
      *(v20 - 1) = v21[7];
      v21 += 8;
      --v18;
    }
    while ( v18 );
    *v20 = *v21;
    *((_QWORD *)v20 + 2) = *((_QWORD *)v21 + 2);
    if ( *v14 < 8u )
    {
      v23 = ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
              1,
              a1,
              (unsigned __int16 (*)[256])&v65[16],
              &v60,
              &v64,
              (void **)&BugCheckParameter3,
              &v58,
              (unsigned __int16 **)&v49);
      v51 = v23;
      if ( v23 >= 0 )
      {
        tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
        if ( BugCheckParameter3 )
          Win32RawLockedItemBase<void,0,1,1,1>::ManualLock<void>(
            BugCheckParameter2,
            BugCheckParameter3,
            (__int64)CleanupSecurityDescriptor);
        Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
          v61,
          (__int64)v14,
          (__int64)Win32FreePool);
        if ( (a9 & 2) != 0 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
            || (v26 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v26 = 0;
          }
          v27 = &WPP_RECORDER_INITIALIZED;
          v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
            UserSessionState = W32GetUserSessionState(v31, v30);
            LOBYTE(v33) = v28;
            LOBYTE(v34) = v26;
            WPP_RECORDER_AND_TRACE_SF_d(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v34,
              v33,
              *(_QWORD *)(UserSessionState + 69416),
              4,
              20,
              10,
              (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
              CurrentWin32kSessionId);
          }
          *(_DWORD *)(W32GetUserSessionState(v27, v25) + 356) = 1;
        }
        tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)v57);
        v35 = v49;
        if ( v49 )
          Win32RawLockedItemBase<void,0,1,1,1>::ManualLock<void>(v57, v49, (__int64)Win32FreePool);
        LOBYTE(v35) = 0;
        v38 = xxxCreateWindowStation((__int64)&v60, v35, a2, v55, a4, a5, (__int64)v14, (__int64)v65, a8, 0, -1, &v47);
        v22 = 0LL;
        BugCheckParameter3 = 0LL;
        if ( v38 < 0 && (a9 & 2) != 0 )
          *(_DWORD *)(W32GetUserSessionState(v37, v36) + 356) = 0;
        Win32RawOptionalLockedItem<void,0>::~Win32RawOptionalLockedItem<void,0>((__int64)v57, v36);
        Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v61, v39);
        Win32RawOptionalLockedItem<void,0>::~Win32RawOptionalLockedItem<void,0>((__int64)BugCheckParameter2, v40);
        if ( v38 < 0 )
        {
          v47 = 0LL;
          v41 = RtlNtStatusToDosError(v38);
          UserSetLastError(v41);
        }
      }
      else
      {
        v47 = 0LL;
        v24 = RtlNtStatusToDosError(v23);
        UserSetLastError(v24);
        v22 = (void *)v49;
      }
    }
    else
    {
      v47 = 0LL;
      UserSetLastError(87);
      v22 = (void *)v49;
    }
    Win32FreePool(v14);
    if ( v22 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 843);
      Win32FreePool(v22);
    }
    v15 = BugCheckParameter3;
    if ( BugCheckParameter3 )
    {
      LOBYTE(v42) = 1;
      SeReleaseSecurityDescriptor(BugCheckParameter3, v42, 0LL);
      BugCheckParameter3 = 0LL;
    }
  }
  else
  {
    v47 = 0LL;
    UserSetLastError(8);
  }
  v43 = v47;
  UserSessionSwitchLeaveCrit(v15);
  return v43;
}
