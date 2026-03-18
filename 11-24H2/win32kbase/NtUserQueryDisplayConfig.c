/*
 * XREFs of NtUserQueryDisplayConfig @ 0x14016F580
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DrvQueryDisplayConfigAndLeaveUserCrit @ 0x140023794 (DrvQueryDisplayConfigAndLeaveUserCrit.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     ?CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA?AV1@XZ @ 0x14004E0AC (-CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA-AV1@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x140097A5C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     DrvSampleDisplayState @ 0x1400C8DA0 (DrvSampleDisplayState.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E5170 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     DrvShouldTranslateQdcDatabaseToActive @ 0x1400E92E8 (DrvShouldTranslateQdcDatabaseToActive.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1400ECD78 (_QdcSdcTranslateStatusDefault.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserQueryDisplayConfig(
        unsigned int a1,
        unsigned int *a2,
        volatile void *a3,
        int *a4,
        _OWORD *Address)
{
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  ULONG_PTR v17; // r14
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v19; // rax
  ULONG_PTR *v20; // rcx
  __int64 v21; // rax
  char ShouldTranslateQdcDatabaseToActive; // r15
  enum DISPLAYCONFIG_TOPOLOGY_ID *v23; // r9
  unsigned int i; // ecx
  __int64 v25; // rax
  char v27; // [rsp+30h] [rbp-B8h]
  unsigned int v28; // [rsp+34h] [rbp-B4h] BYREF
  int v29; // [rsp+38h] [rbp-B0h]
  int v30; // [rsp+3Ch] [rbp-ACh] BYREF
  unsigned int v31; // [rsp+40h] [rbp-A8h] BYREF
  int v32; // [rsp+44h] [rbp-A4h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+58h] [rbp-90h] BYREF
  void (__fastcall *v34)(char *); // [rsp+68h] [rbp-80h]
  ULONG_PTR v35; // [rsp+78h] [rbp-70h]
  __int128 v36; // [rsp+80h] [rbp-68h] BYREF
  __int64 v37; // [rsp+90h] [rbp-58h]
  int v38; // [rsp+98h] [rbp-50h]
  _BYTE v39[32]; // [rsp+A0h] [rbp-48h] BYREF

  v35 = 0LL;
  v28 = 0;
  v30 = -1;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  v27 = 1;
  EnterSharedCrit(1u, 1u);
  DISPLAYCONFIG_USER_SESSION_STATE::CreateWithUserCritHeld((__int64)v39);
  if ( !*(_DWORD *)(W32GetUserGdiSessionState(v9) + 32) )
  {
    v10 = -1073741823;
    goto LABEL_47;
  }
  if ( (a1 & 0xFFFFFF88) != 0 || (v11 = a1 & 7, (((_DWORD)v11 - 1) & 0xFFFFFFFC) != 0) || (_DWORD)v11 == 3 )
  {
    v10 = -1073741811;
  }
  else
  {
    if ( !(unsigned int)UserIsWddmConnectedSession(v11) )
    {
      v10 = -1073741790;
      goto LABEL_47;
    }
    if ( !v39[8] )
    {
      v10 = -1073741637;
      goto LABEL_47;
    }
    PtiCurrent(v12);
    v13 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v13 = (_DWORD *)MmUserProbeAddress;
    *v13 = *v13;
    v28 = *a2;
    if ( !v28 )
    {
      v10 = -1073741811;
      v29 = -1073741811;
      goto LABEL_47;
    }
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a3, 216LL * v28, CurrentProcessWow64Process != 0 ? 1 : 4);
    v17 = Win32AllocPoolWithQuotaZInitImpl(v15, 216LL * v28, 0x63447355u);
    v35 = v17;
    if ( !v17 )
      ExRaiseStatus(-1073741801);
    if ( v34 != (void (__fastcall *)(char *))-1LL )
    {
      BugCheckParameter4 = PtiCurrent(v16);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, v17, (ULONG_PTR)BugCheckParameter4);
    }
    v19 = PtiCurrent(v16);
    BugCheckParameter2[0] = *((_QWORD *)v19 + 48);
    v20 = BugCheckParameter2;
    *((_QWORD *)v19 + 48) = BugCheckParameter2;
    BugCheckParameter2[1] = v17;
    v34 = GreDeleteFastMutex;
    v32 = a1 & 4;
    if ( (a1 & 4) != 0 )
    {
      ProbeForWrite(a4, 4uLL, 4u);
    }
    else if ( a4 )
    {
      v10 = -1073741811;
      v29 = -1073741811;
      goto LABEL_47;
    }
    if ( Address )
    {
      v21 = PsGetCurrentProcessWow64Process();
      ProbeForWrite(Address, 0x1CuLL, v21 != 0 ? 1 : 4);
    }
    v31 = a1;
    ShouldTranslateQdcDatabaseToActive = DrvShouldTranslateQdcDatabaseToActive((__int64)v20, &v31);
    if ( Address )
      DrvSampleDisplayState((__int64)&v36);
    v27 = 0;
    v23 = (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v30;
    if ( ShouldTranslateQdcDatabaseToActive )
      v23 = 0LL;
    v10 = DrvQueryDisplayConfigAndLeaveUserCrit(v31, &v28, (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v17, v23);
    v29 = v10;
    if ( v10 >= 0 && ShouldTranslateQdcDatabaseToActive )
    {
      if ( v28 > 1 )
      {
        for ( i = 1; i < v28; ++i )
        {
          v25 = 216LL * i;
          if ( *(_DWORD *)(v17 + 116) != *(_DWORD *)(v25 + v17 + 116) )
            break;
          if ( *(_DWORD *)(v17 + 120) != *(_DWORD *)(v25 + v17 + 120) )
            break;
        }
        v30 = i < v28 ? 4 : 2;
      }
      else
      {
        v30 = 1;
      }
    }
    if ( v10 == -2147483643 )
    {
      v10 = -1073741789;
      v29 = -1073741789;
    }
    else if ( v10 != -1073741789 )
    {
      v10 = QdcSdcTranslateStatusDefault(v10);
      v29 = v10;
    }
    RtlCopyVolatileMemory((void *)a3, (const void *)v17, 216LL * v28);
    *a2 = v28;
    if ( v32 )
      *a4 = v30;
    if ( Address )
    {
      *Address = v36;
      *((_QWORD *)Address + 2) = v37;
      *((_DWORD *)Address + 6) = v38;
    }
  }
LABEL_47:
  if ( v27 )
    UserSessionSwitchLeaveCritWithNonPaged();
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  return (unsigned int)v10;
}
