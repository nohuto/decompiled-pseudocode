/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x1C00E75C0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ULongAdd @ 0x1C00E7F38 (ULongAdd.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E7F58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1C013C550 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     ?GetMultiByteSizeFromUnicodeString@@YAHU_LARGE_STRING@@PEAK@Z @ 0x1C013C704 (-GetMultiByteSizeFromUnicodeString@@YAHU_LARGE_STRING@@PEAK@Z.c)
 *     ?GetProcessACP@@YAGPEAUtagPROCESSINFO@@@Z @ 0x1C013C75C (-GetProcessACP@@YAGPEAUtagPROCESSINFO@@@Z.c)
 *     Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage @ 0x1C013C83C (Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ULongMult @ 0x1C01AFB54 (ULongMult.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0204834 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     _W32ExceptionHandler @ 0x1C024AEB4 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINLPCREATESTRUCT(__int64 *a1, int a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 *v8; // r12
  unsigned int v9; // r15d
  int v10; // r14d
  int *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  PERESOURCE *v16; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  ULONG v21; // eax
  __int64 v22; // r12
  ULONG_PTR v23; // rdx
  unsigned int v24; // r15d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  PERESOURCE *v31; // rax
  __int64 v32; // r13
  WCHAR *v33; // rdx
  void **v34; // r9
  struct _CAPTUREBUF *v35; // rcx
  unsigned int v36; // r8d
  unsigned int v37; // r8d
  int v38; // r15d
  WCHAR *v39; // rax
  int v40; // r8d
  void **v41; // r9
  unsigned int v42; // r8d
  void *v43; // rdx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  PERESOURCE *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  bool v57; // di
  int v58; // r14d
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 *v66; // rax
  __int64 v67; // rdi
  BOOL v68; // [rsp+30h] [rbp-3A8h]
  ULONG pulResult; // [rsp+34h] [rbp-3A4h] BYREF
  ULONG ulMultiplicand; // [rsp+38h] [rbp-3A0h] BYREF
  ULONG v71[2]; // [rsp+40h] [rbp-398h] BYREF
  int v72; // [rsp+48h] [rbp-390h]
  char v73; // [rsp+4Ch] [rbp-38Ch]
  int v74; // [rsp+50h] [rbp-388h] BYREF
  int v75; // [rsp+54h] [rbp-384h] BYREF
  ULONG_PTR v76; // [rsp+58h] [rbp-380h] BYREF
  WCHAR v77; // [rsp+60h] [rbp-378h]
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-370h] BYREF
  __int64 v79; // [rsp+70h] [rbp-368h]
  __int64 v80; // [rsp+78h] [rbp-360h]
  unsigned __int64 v81; // [rsp+80h] [rbp-358h] BYREF
  __int128 v82; // [rsp+90h] [rbp-348h] BYREF
  __int64 *v83; // [rsp+A0h] [rbp-338h]
  __int128 v84; // [rsp+A8h] [rbp-330h] BYREF
  __int64 v85; // [rsp+B8h] [rbp-320h]
  __int64 v86; // [rsp+C0h] [rbp-318h]
  __int128 v87; // [rsp+D0h] [rbp-308h] BYREF
  __int64 v88; // [rsp+E0h] [rbp-2F8h]
  int v89; // [rsp+F0h] [rbp-2E8h] BYREF
  _BYTE v90[172]; // [rsp+F4h] [rbp-2E4h] BYREF
  _BYTE v91[512]; // [rsp+1A0h] [rbp-238h] BYREF

  v76 = a3;
  v74 = a2;
  v8 = a1;
  v83 = a1;
  pulResult = 0;
  ulMultiplicand = 0;
  v9 = 0;
  v71[0] = 0;
  v10 = a7 & 1;
  v68 = 0;
  if ( (unsigned int)Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage() )
    v68 = GetProcessACP(*(struct tagPROCESSINFO **)(v8[2] + 424)) == 0xFDE9;
  memset_0(&v89, 0, 0xA8uLL);
  v11 = &v89;
  v81 = 0LL;
  v75 = 0;
  v87 = 0LL;
  v88 = 0LL;
  v16 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v13, v12, v14, v15);
  if ( !ExIsResourceAcquiredSharedLite(*v16) )
  {
    v72 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  }
  v80 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v18 = *ThreadWin32Thread;
    v80 = v18;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v8 )
    v79 = v8[5] - *(_QWORD *)(v18 + 472);
  else
    v79 = 0LL;
  if ( a4 )
  {
    v19 = *(_QWORD *)(a4 + 56);
    if ( v19 && (*(_DWORD *)(a4 + 84) >> 31 != v10 || v19 >= (unsigned __int64)MmSystemRangeStart) )
    {
      if ( (unsigned int)Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage()
        && (a7 & 1) != 0
        && *(int *)(a4 + 84) >= 0
        && v68 )
      {
        v82 = *(_OWORD *)(a4 + 80);
        if ( !(unsigned int)GetMultiByteSizeFromUnicodeString(&v82, &pulResult) )
          goto LABEL_113;
      }
      else if ( ULongAdd(*(_DWORD *)(a4 + 80), 2u, &pulResult) < 0
             || *(int *)(a4 + 84) < 0 && (a7 & 1) == 0 && ULongMult(pulResult, 2u, &pulResult) < 0 )
      {
        goto LABEL_113;
      }
      v9 = 1;
    }
    v20 = *(_QWORD *)(a4 + 64);
    if ( (v20 & 0xFFFFFFFFFFFF0000uLL) != 0
      && (*(_DWORD *)(a4 + 100) >> 31 != v10 || v20 >= (unsigned __int64)MmSystemRangeStart) )
    {
      if ( (unsigned int)Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage()
        && (a7 & 1) != 0
        && *(int *)(a4 + 100) >= 0
        && v68 )
      {
        v82 = *(_OWORD *)(a4 + 96);
        if ( !(unsigned int)GetMultiByteSizeFromUnicodeString(&v82, &ulMultiplicand) )
          goto LABEL_113;
      }
      else if ( ULongAdd(*(_DWORD *)(a4 + 96), 2u, &ulMultiplicand) < 0
             || *(int *)(a4 + 100) < 0 && (a7 & 1) == 0 && ULongMult(ulMultiplicand, 2u, &ulMultiplicand) < 0 )
      {
        goto LABEL_113;
      }
      ++v9;
    }
  }
  if ( (unsigned int)Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage() )
  {
    if ( ULongAdd(pulResult, ulMultiplicand, v71) < 0 )
      goto LABEL_113;
    v21 = v71[0];
    if ( v71[0] >= 0x7FFFFFFF )
      goto LABEL_113;
  }
  else
  {
    if ( ULongAdd(pulResult, ulMultiplicand, v71) < 0 )
      goto LABEL_113;
    v21 = v71[0];
  }
  if ( v9 )
  {
    v22 = 8 * v9 + 168;
    v23 = (v21 + 7LL * v9) & 0xFFFFFFFFFFFFFFF8uLL;
    RegionSize = v23;
    v24 = 8 * v9 + 168;
    if ( v23 > 0x800 )
    {
      v25 = Win32AllocPoolWithQuotaZInit(v24, 1667461973LL);
      v11 = (int *)v25;
      if ( v25 )
      {
        *(_QWORD *)(v25 + 32) = 0LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v25 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        {
          Win32FreePool(v11);
          return 0LL;
        }
        *((_QWORD *)v11 + 2) = *((_QWORD *)v11 + 4);
        *v11 = v22;
        goto LABEL_57;
      }
      return 0LL;
    }
    if ( v22 + v23 <= 0x200 )
    {
      v11 = (int *)v91;
      memset_0(v91, 0, sizeof(v91));
    }
    else
    {
      v11 = (int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v23 + v22), 1667461973LL);
      if ( !v11 )
        return 0LL;
    }
    *((_QWORD *)v11 + 2) = (char *)v11 + v22;
    *((_QWORD *)v11 + 4) = 0LL;
    v27 = (unsigned int)(v22 + RegionSize);
    *v11 = v27;
LABEL_57:
    v11[1] = RegionSize;
    v11[2] = 0;
    v11[6] = 168;
    *(_QWORD *)v71 = v11;
    v8 = v83;
    goto LABEL_59;
  }
  v11 = &v89;
  *(_QWORD *)v71 = &v89;
  memset_0(v90, 0, 0xA4uLL);
  v89 = 168;
LABEL_59:
  v31 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v27, v26, v28, v29);
  if ( !ExIsResourceAcquiredSharedLite(*v31) )
  {
    v72 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  }
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v84 = 0LL;
  v85 = 0LL;
  if ( v11 != &v89 && v11 != (int *)v91 )
    PushW32ThreadLock((__int64)v11, &v84, (__int64)Win32FreePool);
  v32 = v79;
  *((_QWORD *)v11 + 5) = v79;
  v11[12] = v74;
  *((_QWORD *)v11 + 7) = v76;
  *((_QWORD *)v11 + 8) = a4 != 0;
  if ( a4 )
  {
    *(_DWORD *)(a4 + 52) = 0;
    *(_DWORD *)(a4 + 76) = 0;
    *(_OWORD *)(v11 + 18) = *(_OWORD *)a4;
    *(_OWORD *)(v11 + 22) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(v11 + 26) = *(_OWORD *)(a4 + 32);
    *(_OWORD *)(v11 + 30) = *(_OWORD *)(a4 + 48);
    *(_OWORD *)(v11 + 34) = *(_OWORD *)(a4 + 64);
    if ( pulResult )
    {
      if ( *(int *)(a4 + 84) >= 0 )
      {
        v33 = *(WCHAR **)(a4 + 56);
        v77 = *v33;
        v34 = (void **)(v11 + 32);
        v35 = (struct _CAPTUREBUF *)v11;
        if ( v77 == 0xFFFF )
        {
          if ( (a7 & 1) != 0 )
          {
            v33 = (WCHAR *)((char *)v33 + 1);
            v36 = 3;
          }
          else
          {
            v36 = 4;
          }
        }
        else
        {
          v37 = *(_DWORD *)(a4 + 80);
          v33 = *(WCHAR **)(a4 + 88);
          if ( (a7 & 1) != 0 )
          {
            v38 = v68;
            if ( (int)CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, v33, (v37 >> 1) + 1, v34, v68) < 0 )
              goto LABEL_113;
            goto LABEL_86;
          }
          v36 = v37 + 2;
        }
        goto LABEL_84;
      }
      v39 = *(WCHAR **)(a4 + 56);
      v73 = *(_BYTE *)v39;
      if ( v73 == -1 )
      {
        if ( (a7 & 1) != 0 )
        {
          v36 = 3;
          v33 = v39;
        }
        else
        {
          v74 = ((unsigned __int16)(*(_DWORD *)v39 >> 8) << 16) | 0xFFFF;
          v36 = 4;
          v33 = (WCHAR *)&v74;
        }
        v34 = (void **)(v11 + 32);
        v35 = (struct _CAPTUREBUF *)v11;
LABEL_84:
        if ( CaptureCallbackData(v35, v33, v36, v34) < 0 )
          goto LABEL_113;
        goto LABEL_85;
      }
      v34 = (void **)(v11 + 32);
      v40 = *(_DWORD *)(a4 + 80);
      v33 = *(WCHAR **)(a4 + 88);
      v35 = (struct _CAPTUREBUF *)v11;
      if ( (a7 & 1) != 0 )
      {
        v36 = v40 + 1;
        goto LABEL_84;
      }
      if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, (CHAR *)v33, 2 * v40 + 2, v34) < 0 )
        goto LABEL_113;
    }
LABEL_85:
    v38 = v68;
LABEL_86:
    if ( ulMultiplicand )
    {
      v41 = (void **)(v11 + 34);
      v42 = *(_DWORD *)(a4 + 96);
      v43 = *(void **)(a4 + 104);
      if ( *(int *)(a4 + 100) < 0 )
        v44 = (a7 & 1) != 0
            ? CaptureCallbackData((struct _CAPTUREBUF *)v11, v43, v42 + 1, v41)
            : CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, (CHAR *)v43, 2 * v42 + 2, v41);
      else
        v44 = (a7 & 1) != 0
            ? CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v43, (v42 >> 1) + 1, v41, v38)
            : CaptureCallbackData((struct _CAPTUREBUF *)v11, v43, v42 + 2, v41);
      if ( v44 < 0 )
        goto LABEL_113;
    }
  }
  *((_QWORD *)v11 + 19) = a5;
  *((_QWORD *)v11 + 20) = a6;
  ThreadLock(v8, &v87);
  v48 = v80;
  v49 = *(_QWORD *)(v80 + 480);
  v82 = *(_OWORD *)(v49 + 64);
  v76 = *(_QWORD *)(v49 + 80);
  *(_QWORD *)(v49 + 72) = v32;
  v50 = 0LL;
  if ( v8 )
    v50 = *v8;
  *(_QWORD *)(*(_QWORD *)(v48 + 480) + 64LL) = v50;
  if ( v8 )
    v51 = *(_QWORD *)(v8[5] + 224);
  else
    v51 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v48 + 480) + 80LL) = v51;
  v52 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v51, v45, v46, v47);
  v57 = ExIsResourceAcquiredExclusiveLite(*v52) != 1 && IS_USERCRIT_OWNED_AT_ALL();
  UserSessionSwitchLeaveCrit(v54, v53, v55, v56);
  EtwTraceBeginCallback(10LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v58 = KeUserModeCallback(10LL, v11, (unsigned int)*v11, &v81, &v75);
  EtwTraceEndCallback(10LL);
  if ( v57 )
    EnterSharedCrit(v60, v59, v61);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v63, v62, v64);
  v65 = *(_QWORD *)(v48 + 480);
  *(_OWORD *)(v65 + 64) = v82;
  *(_QWORD *)(v65 + 80) = v76;
  if ( v58 >= 0 && v75 == 24 )
  {
    v66 = (__int64 *)v81;
    if ( v81 + 8 < v81 || v81 + 8 > MmUserProbeAddress )
      v66 = (__int64 *)MmUserProbeAddress;
    v67 = *v66;
    v86 = *v66;
    goto LABEL_114;
  }
LABEL_113:
  v67 = 0LL;
LABEL_114:
  if ( v11 != &v89 && v11 != (int *)v91 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      v76 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &v76, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v84);
  }
  return v67;
}
