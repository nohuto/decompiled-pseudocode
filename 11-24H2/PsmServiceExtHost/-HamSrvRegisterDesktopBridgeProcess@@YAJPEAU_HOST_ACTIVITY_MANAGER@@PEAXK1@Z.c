/*
 * XREFs of ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180038F00
 * Callers:
 *     HamRpcSrvRegisterDesktopBridgeProcess @ 0x1800385E0 (HamRpcSrvRegisterDesktopBridgeProcess.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007744 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x1800080F8 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800092AC (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012F30 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180039470 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2K@Z @ 0x180039A4C (-HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2K@Z.c)
 *     ?HampSrvTraceHostRegisterProcessStart@@YAXXZ @ 0x180039CAC (-HampSrvTraceHostRegisterProcessStart@@YAXXZ.c)
 *     CempGetTokenHostInfo @ 0x180039DA0 (CempGetTokenHostInfo.c)
 *     ?HampPkgIsServicingEnabled@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x18005A074 (-HampPkgIsServicingEnabled@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvRegisterDesktopBridgeProcess(
        struct _HOST_ACTIVITY_MANAGER *a1,
        void *a2,
        unsigned int a3,
        void *a4)
{
  unsigned int v7; // r12d
  __int64 v8; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v9; // rsi
  unsigned __int64 v10; // r13
  DWORD v11; // edi
  NTSTATUS ProcessFullIdentity; // edi
  unsigned int v13; // r12d
  char v14; // al
  ULONG v15; // eax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  char *v19; // rax
  __int16 v20; // cx
  char *v21; // rcx
  int v22; // ebx
  DWORD v23; // ebx
  DWORD i; // esi
  unsigned __int8 v26; // r9
  int v27; // r8d
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v29; // rbx
  int v30; // eax
  unsigned int v31; // [rsp+40h] [rbp-C0h]
  unsigned int v32[2]; // [rsp+48h] [rbp-B8h] BYREF
  void *TokenHandle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID v35; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  struct _HOST_ACTIVITY_MANAGER *v37; // [rsp+78h] [rbp-88h]
  void *v38; // [rsp+80h] [rbp-80h]
  _BYTE ProcessInformation[4]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v40; // [rsp+94h] [rbp-6Ch]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  unsigned __int16 v42; // [rsp+C8h] [rbp-38h]
  unsigned __int16 v43; // [rsp+CCh] [rbp-34h]
  _DWORD v44[2]; // [rsp+F0h] [rbp-10h] BYREF
  char v45; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE DestinationSid[68]; // [rsp+2C8h] [rbp+1C8h] BYREF
  char v47; // [rsp+30Ch] [rbp+20Ch]
  char v48; // [rsp+30Dh] [rbp+20Dh]
  _WORD v49[232]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE Sid[68]; // [rsp+4E0h] [rbp+3E0h] BYREF
  int v51; // [rsp+524h] [rbp+424h]
  unsigned __int64 v52; // [rsp+530h] [rbp+430h]
  _BYTE TlsValue[144]; // [rsp+540h] [rbp+440h] BYREF

  v37 = a1;
  v38 = a4;
  memset_0(v49, 0, 0x228uLL);
  v7 = 0;
  v8 = -1LL;
  v32[0] = 0;
  Handle = 0LL;
  v36 = -1LL;
  v9 = 0LL;
  v10 = -1LL;
  memset_0(v44, 0, 0x220uLL);
  RtlCopySid(0xCu, DestinationSid, (char *)a1 + 1212);
  HampSrvTraceHostRegisterProcessStart();
  memset_0(TlsValue, 0, 0x88uLL);
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v11, TlsValue);
  }
  if ( a2 )
  {
    memset_0(ProcessInformation, 0, 0x60uLL);
    NtQueryInformationProcess(a2, (PROCESSINFOCLASS)64, ProcessInformation, 0x60u, 0LL);
    v35.Data1 = v40;
    v35.Data2 = v42;
    v35.Data3 = v43;
    *(_QWORD *)v35.Data4 = v41;
    ProcessFullIdentity = HampSystemGetProcessFullIdentity(a2, v32, 0LL);
    if ( ProcessFullIdentity < 0 )
    {
      v22 = 0;
    }
    else if ( (a3 & 0x382) == a3 )
    {
      TokenHandle = 0LL;
      ProcessFullIdentity = NtOpenProcessToken(a2, 8u, &TokenHandle);
      if ( ProcessFullIdentity >= 0 )
        ProcessFullIdentity = CempGetTokenHostInfo(TokenHandle, v49);
      if ( TokenHandle )
        NtClose(TokenHandle);
      if ( ProcessFullIdentity < 0 )
      {
        v22 = 0;
      }
      else
      {
        v13 = v32[0];
        v10 = v52;
        v44[0] = v51;
        v14 = v47;
        if ( !v32[0] )
          v14 = 4;
        v48 |= 1u;
        v47 = v14;
        v15 = RtlLengthSid(Sid);
        memcpy_0(DestinationSid, Sid, v15);
        while ( v49[++v8] != 0 )
          ;
        v17 = (unsigned __int64)(unsigned int)(2 * v8 + 2) >> 1;
        v44[1] = 2 * v8 + 2;
        if ( v17 )
        {
          v18 = 2147483646 - v17;
          v19 = &v45;
          do
          {
            if ( !(v18 + v17) )
              break;
            v20 = *((_WORD *)v19 + 268);
            if ( !v20 )
              break;
            *(_WORD *)v19 = v20;
            v19 += 2;
            --v17;
          }
          while ( v17 );
          v21 = v19 - 2;
          if ( v17 )
            v21 = v19;
          v22 = 0;
          *(_WORD *)v21 = 0;
        }
        else
        {
          v22 = 0;
        }
        ProcessFullIdentity = NtOpenProcessTokenEx(a2, 8u, 0, &Handle);
        if ( ProcessFullIdentity >= 0 )
        {
          v31 = 0;
          for ( i = 1; ; i *= 2 )
          {
            if ( v13 )
            {
              v26 = 0;
              v27 = 0;
            }
            else
            {
              v26 = 1;
              v27 = 2;
            }
            TokenHandle = 0LL;
            Host = RmHamFindOrCreateHost(v37, (__int64)v49, v27, v26, (struct _RM_HAM_ACTIVITY_HOST **)&TokenHandle);
            v29 = (struct _RM_HAM_ACTIVITY_HOST *)TokenHandle;
            ProcessFullIdentity = Host;
            if ( Host < 0
              || (ProcessFullIdentity = HampHostCheckCompletePackageInsertion((struct _RM_HAM_ACTIVITY_HOST *)TokenHandle),
                  ProcessFullIdentity < 0) )
            {
              *(_QWORD *)v32 = 0LL;
              if ( v29 )
              {
                RmHamHostDereference(v29);
                *(_QWORD *)v32 = 0LL;
              }
              v29 = 0LL;
              if ( ProcessFullIdentity < 0 )
              {
                v9 = *(struct _RM_HAM_ACTIVITY_HOST **)v32;
                goto LABEL_48;
              }
            }
            else
            {
              *(_QWORD *)v32 = v29;
            }
            v30 = HampHostRegisterProcess(v29, a2, Handle, (struct _PSM_APP_IDENTITY *)v44, v52, a3, v38, &v36);
            ProcessFullIdentity = v30;
            if ( v30 != -1073741790 )
              break;
            if ( v31 >= 0x3E8 )
            {
              v9 = *(struct _RM_HAM_ACTIVITY_HOST **)v32;
              if ( HampPkgIsServicingEnabled(*(struct _HAM_PACKAGE **)(*(_QWORD *)(*(_QWORD *)v32 + 792LL) + 88LL)) )
                ProcessFullIdentity = -1058275325;
              goto LABEL_61;
            }
            RmHamHostDereference(v29);
            Sleep(i);
            v31 += i;
          }
          v9 = *(struct _RM_HAM_ACTIVITY_HOST **)v32;
          if ( v30 >= 0 )
          {
            ProcessFullIdentity = 0;
LABEL_48:
            v22 = 0;
            goto LABEL_49;
          }
LABEL_61:
          v22 = 1;
LABEL_49:
          v7 = v31;
        }
        else
        {
          v7 = 0;
        }
      }
    }
    else
    {
      v22 = 0;
      ProcessFullIdentity = -1073741811;
    }
  }
  else
  {
    v22 = 0;
    v35 = 0LL;
    ProcessFullIdentity = -1073741816;
  }
  if ( Handle )
    NtClose(Handle);
  if ( v22 )
  {
    v32[0] = 0;
    HampHostQueueTerminateEx((__int64)v9, 1, 0x900u, 0LL, 0, 0, 0LL, v32);
  }
  if ( v9 )
    RmHamHostDereference(v9);
  v23 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v23, 0LL);
  }
  HampSrvTraceHostRegisterProcessStop(ProcessFullIdentity, a2, (struct _PSM_APP_IDENTITY *)v44, v10, a3, &v35, v36, v7);
  return (unsigned int)ProcessFullIdentity;
}
