/*
 * XREFs of ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x180038B68
 * Callers:
 *     PsmHamRegisterProcess @ 0x180038750 (PsmHamRegisterProcess.c)
 * Callees:
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x1800080E8 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000932C (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012FB0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001834C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x1800394F0 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2K@Z @ 0x180039ACC (-HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2K@Z.c)
 *     ?HampSrvTraceHostRegisterProcessStart@@YAXXZ @ 0x180039D2C (-HampSrvTraceHostRegisterProcessStart@@YAXXZ.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvRegisterProcess(
        struct _HOST_ACTIVITY_MANAGER *a1,
        void *a2,
        void *a3,
        struct _PSM_APP_IDENTITY *a4,
        unsigned __int64 a5,
        unsigned int a6,
        void *a7)
{
  DWORD v9; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v10; // rsi
  unsigned int v11; // ebx
  char *v12; // r14
  ULONG v13; // eax
  char *v14; // r15
  unsigned int v15; // edi
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r15
  _WORD *v19; // rcx
  __int16 v20; // ax
  _WORD *v21; // rax
  int ProcessFullIdentity; // ebx
  int v23; // eax
  struct _RM_HAM_ACTIVITY_HOST *v24; // rdi
  unsigned int v25; // r14d
  struct _PSM_APP_IDENTITY *v26; // r15
  int v27; // ebx
  DWORD v28; // edi
  unsigned int v30; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v31; // [rsp+48h] [rbp-B8h] BYREF
  struct _PSM_APP_IDENTITY *v32; // [rsp+50h] [rbp-B0h]
  int v33; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v35; // [rsp+70h] [rbp-90h] BYREF
  struct _HOST_ACTIVITY_MANAGER *v36; // [rsp+80h] [rbp-80h]
  void *v37; // [rsp+88h] [rbp-78h]
  void *v38; // [rsp+90h] [rbp-70h]
  _BYTE ProcessInformation[4]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v40; // [rsp+A4h] [rbp-5Ch]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v42; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v43; // [rsp+DCh] [rbp-24h]
  _BYTE v44[464]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE DestinationSid[68]; // [rsp+2D0h] [rbp+1D0h] BYREF
  int v46; // [rsp+314h] [rbp+214h]
  unsigned int v47; // [rsp+318h] [rbp+218h]
  unsigned __int64 v48; // [rsp+320h] [rbp+220h]
  _BYTE TlsValue[144]; // [rsp+330h] [rbp+230h] BYREF

  v38 = a3;
  v36 = a1;
  v37 = a7;
  v32 = a4;
  memset_0(v44, 0, 0x228uLL);
  v30 = 0;
  HampSrvTraceHostRegisterProcessStart();
  memset_0(TlsValue, 0, 0x88uLL);
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v9, TlsValue);
  }
  v34 = -1LL;
  v10 = 0LL;
  memset_0(ProcessInformation, 0, 0x60uLL);
  NtQueryInformationProcess(a2, (PROCESSINFOCLASS)64, ProcessInformation, 0x60u, 0LL);
  v35.Data1 = v40;
  v35.Data2 = v42;
  v35.Data3 = v43;
  *(_QWORD *)v35.Data4 = v41;
  if ( (a6 & 4) != 0 )
    v11 = 8;
  else
    v11 = (a6 & 8) != 0 ? 4 : 2;
  v12 = (char *)a4 + 472;
  v33 = *(_DWORD *)a4;
  v13 = RtlLengthSid((char *)a4 + 472);
  v14 = (char *)a4 + 8;
  LODWORD(v31) = 0;
  v15 = v13;
  if ( (unsigned __int8)PsmIsValidKey(v14) )
  {
    if ( v15 >= 0xC && RtlValidSid(v12) && RtlLengthSid(v12) == v15 )
    {
      if ( ((v11 - 1) & v11) != 0 || (_BitScanForward(&v16, v11), v16 >= 4) )
      {
        v27 = -1073741581;
      }
      else
      {
        if ( a5 != v34 )
        {
          memset_0(v44, 0, 0x228uLL);
          v17 = 232LL;
          v18 = v14 - v44;
          v19 = v44;
          do
          {
            if ( v17 == -2147483414 )
              break;
            v20 = *(_WORD *)((char *)v19 + v18);
            if ( !v20 )
              break;
            *v19++ = v20;
            --v17;
          }
          while ( v17 );
          v21 = v19 - 1;
          if ( v17 )
            v21 = v19;
          *v21 = 0;
          RtlCopySid(0x44u, DestinationSid, v12);
          v46 = v33;
          v47 = v11;
          v48 = a5;
          goto LABEL_20;
        }
        v27 = -1073741580;
      }
    }
    else
    {
      v27 = -1073741584;
    }
  }
  else
  {
    v27 = -1073741585;
  }
  ProcessFullIdentity = v27 + 1;
  if ( ProcessFullIdentity < 0 )
    goto LABEL_33;
LABEL_20:
  ProcessFullIdentity = HampSystemGetProcessFullIdentity(a2, &v30, 0LL);
  if ( ProcessFullIdentity < 0 )
  {
LABEL_33:
    v26 = v32;
    v25 = a6;
    goto LABEL_34;
  }
  v31 = 0LL;
  v23 = RmHamFindOrCreateHost(v36, (__int64)v44, 0, v30 == 0, &v31);
  v24 = v31;
  ProcessFullIdentity = v23;
  if ( v23 >= 0 )
  {
    ProcessFullIdentity = HampHostCheckCompletePackageInsertion(v31);
    if ( ProcessFullIdentity >= 0 )
    {
      v10 = v24;
      v24 = 0LL;
    }
  }
  if ( v24 )
    RmHamHostDereference(v24);
  v25 = a6;
  v26 = v32;
  if ( ProcessFullIdentity >= 0 )
  {
    ProcessFullIdentity = HampHostRegisterProcess(v10, a2, v38, v32, a5, a6, v37, &v34);
    if ( ProcessFullIdentity >= 0 )
      ProcessFullIdentity = 0;
  }
  if ( v10 )
    RmHamHostDereference(v10);
LABEL_34:
  v28 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v28, 0LL);
  }
  HampSrvTraceHostRegisterProcessStop(ProcessFullIdentity, a2, v26, a5, v25, &v35, v34, 0);
  return (unsigned int)ProcessFullIdentity;
}
