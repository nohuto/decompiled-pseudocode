/*
 * XREFs of ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180038718
 * Callers:
 *     ?HampInProcCreateActivityForProcess@@YAJPEAX0PEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18006C410 (-HampInProcCreateActivityForProcess@@YAJPEAX0PEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x180017E20 (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180017F14 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180018200 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001E4BC (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001EA10 (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@.c)
 *     ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180038A6C (-HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180039470 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18003A094 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x18003A258 (-HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvCreateActivityForProcess(
        struct _HAM_CLIENT_CONTEXT *a1,
        HANDLE ProcessHandle,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v7; // rsi
  DWORD ProcessId; // r12d
  __int64 v9; // r13
  DWORD v10; // ebx
  signed int LastError; // ebx
  DWORD v12; // edi
  char v14; // bl
  int HostWithFullInfo; // eax
  struct _RM_HAM_ACTIVITY_HOST *v16; // rsi
  int v17; // eax
  struct _HAM_ACTIVITY *v18; // rcx
  unsigned int v19[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v20; // [rsp+68h] [rbp-98h]
  struct _RM_HAM_ACTIVITY_HOST *v21; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  struct _HAM_ACTIVITY *v23; // [rsp+80h] [rbp-80h] BYREF
  union _RM_SID *v24; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v25; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v26; // [rsp+98h] [rbp-68h]
  _BYTE TlsValue[144]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v28[464]; // [rsp+130h] [rbp+30h] BYREF
  char v29; // [rsp+300h] [rbp+200h] BYREF
  unsigned int v30; // [rsp+348h] [rbp+248h]
  unsigned __int64 v31; // [rsp+350h] [rbp+250h]

  v26 = a4;
  memset_0(v28, 0, 0x228uLL);
  v7 = -1LL;
  v22 = 0LL;
  ProcessId = 0;
  v19[0] = 0;
  v9 = -1LL;
  v23 = 0LL;
  v21 = 0LL;
  v25 = 0LL;
  v20 = 0;
  v24 = 0LL;
  HampSrvTraceActivityCreateStart();
  memset_0(TlsValue, 0, 0x88uLL);
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v10, TlsValue);
  }
  if ( !HampUtilCheckAndSanitizeActivityProperties(a3) )
    goto LABEL_24;
  if ( !HampClientIsActive(a1) )
  {
    LastError = -1073741661;
    goto LABEL_9;
  }
  if ( !ProcessHandle )
  {
    LastError = -1073741816;
    goto LABEL_9;
  }
  ProcessId = GetProcessId(ProcessHandle);
  if ( !ProcessId )
  {
    if ( (int)GetLastError() > 0 )
      LastError = (unsigned __int16)GetLastError() | 0xC0070000;
    else
      LastError = GetLastError();
    goto LABEL_9;
  }
  LastError = HampSystemGetProcessFullIdentity(ProcessHandle, v19, (struct _RM_PSM_HOST_INFO *)v28);
  if ( LastError < 0 )
    goto LABEL_9;
  v7 = v31;
  v25 = (unsigned __int16 *)v28;
  v14 = v19[0] == 0;
  v20 = v30;
  v24 = (union _RM_SID *)&v29;
  *(_QWORD *)v19 = v31;
  if ( !HampUtilAreActivityPropertiesValid((struct _RM_PSM_HOST_INFO *)v28, a3) )
  {
LABEL_24:
    LastError = -1073741583;
    goto LABEL_9;
  }
  if ( ((*(_DWORD *)a3 & 0x2000000) != 0) == v14 )
  {
    HostWithFullInfo = RmHamFindHostWithFullInfo(
                         (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *((unsigned __int8 *)a1 + 164) - 16,
                         (__int64)v28,
                         v14,
                         &v21);
    v16 = v21;
    LastError = HostWithFullInfo;
    if ( HostWithFullInfo >= 0 )
    {
      LastError = HampHostQueryHostGenerationForProcess(v21, ProcessHandle, &v22);
      if ( LastError >= 0 )
      {
        v17 = HampActCreate(
                a1,
                (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                                - 48LL * *((unsigned __int8 *)a1 + 164)
                                                - 16),
                v16,
                a3,
                0,
                v22,
                &v23);
        v18 = v23;
        LastError = v17;
        if ( v17 >= 0 )
        {
          LastError = 0;
          v9 = *((_QWORD *)v23 + 5);
          *v26 = v9;
        }
        if ( v18 )
          CemRcObjectDereference(v18);
      }
    }
    if ( v16 )
      RmHamHostDereference(v16);
    v7 = *(_QWORD *)v19;
  }
  else
  {
    LastError = -1073741776;
  }
LABEL_9:
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v12, 0LL);
  }
  HampSrvTraceActivityCreateStop(LastError, v9, a1, v25, v20, v24, v7, a3, ProcessId, 0, 0);
  return (unsigned int)LastError;
}
