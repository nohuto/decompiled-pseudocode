/*
 * XREFs of SfnINSTRINGNULL @ 0x1C00E6F70
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C022310C (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E7F58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1C013C550 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0204834 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 */

__int64 __fastcall SfnINSTRINGNULL(__int64 *a1, int a2, ULONG_PTR a3, int *a4, __int64 a5, __int64 a6, char a7)
{
  int v9; // r13d
  int *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  PERESOURCE *v15; // rax
  __int64 v16; // r14
  __int64 *ThreadWin32Thread; // rax
  unsigned int v18; // r12d
  unsigned __int64 v19; // rdx
  __int64 v20; // r14
  ULONG_PTR v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  PERESOURCE *v29; // rax
  __int64 v30; // r13
  void **v31; // r9
  unsigned int v32; // r8d
  CHAR *v33; // rdx
  char v34; // r12
  unsigned int v35; // r8d
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  PERESOURCE *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // esi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 *v58; // rcx
  __int64 v59; // rsi
  int v60; // [rsp+34h] [rbp-364h] BYREF
  int *v61; // [rsp+38h] [rbp-360h]
  int v62; // [rsp+40h] [rbp-358h]
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-340h] BYREF
  ULONG_PTR v64; // [rsp+60h] [rbp-338h] BYREF
  __int64 v65; // [rsp+68h] [rbp-330h]
  unsigned __int64 v66; // [rsp+70h] [rbp-328h] BYREF
  __int128 v67; // [rsp+78h] [rbp-320h]
  __int128 v68; // [rsp+90h] [rbp-308h]
  __int64 v69; // [rsp+A0h] [rbp-2F8h]
  __int128 v70; // [rsp+A8h] [rbp-2F0h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-2E0h]
  __int64 v72; // [rsp+C0h] [rbp-2D8h]
  __int128 v73; // [rsp+E0h] [rbp-2B8h] BYREF
  __int64 v74; // [rsp+F0h] [rbp-2A8h]
  int v75; // [rsp+100h] [rbp-298h] BYREF
  char v76[92]; // [rsp+104h] [rbp-294h] BYREF
  _BYTE v77[512]; // [rsp+160h] [rbp-238h] BYREF
  int v78; // [rsp+3D0h] [rbp+38h]

  v64 = a3;
  v62 = a2;
  v9 = a7 & 1;
  v78 = v9;
  memset_0(&v75, 0, 0x58uLL);
  v10 = &v75;
  v66 = 0LL;
  v60 = 0;
  v73 = 0LL;
  v74 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v15 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v12, v11, v13, v14);
  if ( !ExIsResourceAcquiredSharedLite(*v15) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v16 = 0LL;
  *(_QWORD *)&v67 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v16 = *ThreadWin32Thread;
    *(_QWORD *)&v67 = *ThreadWin32Thread;
  }
  if ( a1 )
    v65 = a1[5] - *(_QWORD *)(v16 + 472);
  else
    v65 = 0LL;
  v18 = 0;
  LODWORD(v19) = 0;
  if ( a4 && (*((_QWORD *)a4 + 1) >= (unsigned __int64)MmSystemRangeStart || (unsigned int)a4[1] >> 31 != v9) )
  {
    v18 = 1;
    v19 = (unsigned int)(*a4 + 2);
    if ( (unsigned int)v19 < *a4 )
      goto LABEL_67;
    if ( a4[1] < 0 && !v9 )
    {
      v19 *= 2LL;
      if ( v19 > 0xFFFFFFFF )
        goto LABEL_67;
    }
  }
  if ( v18 )
  {
    v20 = 8 * v18 + 88;
    v21 = ((unsigned int)v19 + 7LL * v18) & 0xFFFFFFFFFFFFFFF8uLL;
    RegionSize = v21;
    if ( v21 <= 0x800 )
    {
      if ( v21 + v20 <= 0x200 )
      {
        v10 = (int *)v77;
        memset_0(v77, 0, sizeof(v77));
      }
      else
      {
        v10 = (int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v21 + v20), 1667461973LL);
        if ( !v10 )
          return 0LL;
      }
      *((_QWORD *)v10 + 2) = (char *)v10 + v20;
      *((_QWORD *)v10 + 4) = 0LL;
      v25 = (unsigned int)(v20 + RegionSize);
      *v10 = v25;
    }
    else
    {
      v22 = Win32AllocPoolWithQuotaZInit(8 * v18 + 88, 1667461973LL);
      v10 = (int *)v22;
      if ( !v22 )
        return 0LL;
      v23 = (_QWORD *)(v22 + 32);
      *(_QWORD *)(v22 + 32) = 0LL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v22 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      {
        Win32FreePool(v10);
        return 0LL;
      }
      *((_QWORD *)v10 + 2) = *v23;
      *v10 = v20;
    }
    v10[1] = RegionSize;
    v10[2] = 0;
    v10[6] = 88;
    v61 = v10;
  }
  else
  {
    v10 = &v75;
    v61 = &v75;
    memset_0(v76, 0, 0x54uLL);
    v75 = 88;
  }
  v29 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v25, v24, v26, v27);
  if ( !ExIsResourceAcquiredSharedLite(*v29) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v70 = 0LL;
  v71 = 0LL;
  if ( v10 != &v75 && v10 != (int *)v77 )
    PushW32ThreadLock((__int64)v10, &v70, (__int64)Win32FreePool);
  v30 = v65;
  *((_QWORD *)v10 + 5) = v65;
  v10[12] = v62;
  *((_QWORD *)v10 + 7) = v64;
  if ( v18 )
  {
    v31 = (void **)(v10 + 20);
    v32 = *a4;
    v33 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( !v78 )
      {
        v36 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v33, 2 * v32 + 2, v31);
LABEL_40:
        if ( v36 < 0 )
          goto LABEL_67;
        goto LABEL_49;
      }
      v35 = v32 + 1;
    }
    else
    {
      if ( v78 )
      {
        v34 = 1;
        if ( (int)CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v33, (v32 >> 1) + 1, v31, 0) < 0 )
          goto LABEL_67;
        goto LABEL_50;
      }
      v35 = v32 + 2;
    }
    v36 = CaptureCallbackData((struct _CAPTUREBUF *)v10, v33, v35, v31);
    goto LABEL_40;
  }
  if ( a4 )
    v37 = *((_QWORD *)a4 + 1);
  else
    v37 = 0LL;
  *((_QWORD *)v10 + 10) = v37;
LABEL_49:
  v34 = 1;
LABEL_50:
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  ThreadLock(a1, &v73);
  v41 = v67;
  v42 = *(_QWORD *)(v67 + 480);
  v67 = *(_OWORD *)(v42 + 64);
  v68 = v67;
  v69 = *(_QWORD *)(v42 + 80);
  *(_QWORD *)(v42 + 72) = v30;
  v43 = 0LL;
  if ( a1 )
    v43 = *a1;
  *(_QWORD *)(*(_QWORD *)(v41 + 480) + 64LL) = v43;
  if ( a1 )
    v44 = *(_QWORD *)(a1[5] + 224);
  else
    v44 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v41 + 480) + 80LL) = v44;
  v45 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v44, v38, v39, v40);
  if ( ExIsResourceAcquiredExclusiveLite(*v45) == 1 || !IS_USERCRIT_OWNED_AT_ALL() )
    v34 = 0;
  UserSessionSwitchLeaveCrit(v47, v46, v48, v49);
  EtwTraceBeginCallback(27LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v50 = KeUserModeCallback(27LL, v10, (unsigned int)*v10, &v66, &v60);
  EtwTraceEndCallback(27LL);
  if ( v34 )
    EnterSharedCrit(v52, v51, v53);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v55, v54, v56);
  v57 = *(_QWORD *)(v41 + 480);
  *(_OWORD *)(v57 + 64) = v67;
  *(_QWORD *)(v57 + 80) = v69;
  if ( v50 >= 0 && v60 == 24 )
  {
    v58 = (__int64 *)v66;
    if ( v66 + 8 < v66 || v66 + 8 > MmUserProbeAddress )
      v58 = (__int64 *)MmUserProbeAddress;
    v59 = *v58;
    v72 = *v58;
    goto LABEL_68;
  }
LABEL_67:
  v59 = 0LL;
LABEL_68:
  if ( v10 != &v75 && v10 != (int *)v77 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      v64 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &v64, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v70);
  }
  return v59;
}
