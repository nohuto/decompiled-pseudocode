/*
 * XREFs of SfnINOUTNCCALCSIZE @ 0x1C006CE00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SfnINOUTNCCALCSIZE(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
  PERESOURCE *v12; // rax
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rdi
  unsigned int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  ULONG_PTR v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  PERESOURCE *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  bool v32; // bl
  int v33; // edi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 *v41; // rax
  __int64 v42; // rdi
  ULONG64 v43; // rax
  __int128 *v44; // xmm0_8
  __int128 *v45; // rbx
  __int128 v46; // xmm0
  __int64 v47; // rax
  int v49; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v50; // [rsp+58h] [rbp-1A0h]
  unsigned __int64 v51[3]; // [rsp+78h] [rbp-180h] BYREF
  __int128 v52; // [rsp+90h] [rbp-168h]
  __int64 v53; // [rsp+A0h] [rbp-158h]
  __int64 v54; // [rsp+A8h] [rbp-150h]
  __int128 v55; // [rsp+D0h] [rbp-128h]
  __int128 v56; // [rsp+E0h] [rbp-118h] BYREF
  __int64 v57; // [rsp+F0h] [rbp-108h]
  __int128 v58; // [rsp+F8h] [rbp-100h]
  volatile void *Address; // [rsp+108h] [rbp-F0h]
  __int128 v60; // [rsp+110h] [rbp-E8h]
  __int128 *v61; // [rsp+120h] [rbp-D8h]
  __int64 v62; // [rsp+130h] [rbp-C8h] BYREF
  int v63; // [rsp+138h] [rbp-C0h]
  int v64; // [rsp+13Ch] [rbp-BCh]
  __int64 v65; // [rsp+140h] [rbp-B8h]
  __int64 v66; // [rsp+148h] [rbp-B0h]
  __int64 v67; // [rsp+150h] [rbp-A8h]
  __int128 v68; // [rsp+158h] [rbp-A0h]
  __int128 v69; // [rsp+168h] [rbp-90h]
  __int128 v70; // [rsp+178h] [rbp-80h]
  _OWORD v71[3]; // [rsp+188h] [rbp-70h] BYREF

  v10 = a2;
  v51[0] = 0LL;
  v49 = 0;
  v56 = 0LL;
  v57 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v12 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  if ( !ExIsResourceAcquiredSharedLite(*v12) )
  {
    LODWORD(v50) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  }
  v13 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(v13 + 472);
  else
    v15 = 0LL;
  v64 = 0;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  memset(v71, 0, sizeof(v71));
  v62 = v15;
  v63 = v10;
  v65 = a3;
  v66 = a5;
  v67 = a6;
  v68 = *a4;
  if ( a3 )
  {
    v69 = a4[1];
    v70 = a4[2];
    *(_QWORD *)&v71[0] = *((_QWORD *)a4 + 6);
    *(_DWORD *)(*(_QWORD *)&v71[0] + 36LL) = 0;
    *(_OWORD *)((char *)v71 + 8) = **(_OWORD **)&v71[0];
    *(_OWORD *)((char *)&v71[1] + 8) = *(_OWORD *)(*(_QWORD *)&v71[0] + 16LL);
    *((_QWORD *)&v71[2] + 1) = *(_QWORD *)(*(_QWORD *)&v71[0] + 32LL);
    *(_QWORD *)&v71[0] = 0LL;
    v16 = 136;
  }
  else
  {
    v16 = 56;
  }
  ThreadLock(a1, &v56);
  v19 = *(_QWORD *)(v13 + 480);
  v55 = *(_OWORD *)(v19 + 64);
  v52 = v55;
  v53 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v15;
  v20 = 0LL;
  if ( a1 )
    v20 = *a1;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v21;
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v21, v17, v18);
  if ( CurrentThreadWin32Thread )
  {
    v23 = *(unsigned int *)(CurrentThreadWin32Thread + 48);
    if ( (_DWORD)v23 )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, v23, 0LL, 0LL, 0LL);
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
  v27 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v24, v23, v25, v26);
  v32 = ExIsResourceAcquiredExclusiveLite(*v27) != 1 && IS_USERCRIT_OWNED_AT_ALL();
  UserSessionSwitchLeaveCrit(v29, v28, v30, v31);
  EtwTraceBeginCallback(21LL);
  v33 = KeUserModeCallback(21LL, &v62, v16, v51, &v49);
  EtwTraceEndCallback(21LL);
  if ( v32 )
    EnterSharedCrit(v35, v34, v36);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v38, v37, v39);
  v40 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v40 + 64) = v55;
  *(_QWORD *)(v40 + 80) = v53;
  if ( v33 < 0 || v49 != 24 )
    return 0LL;
  v41 = (__int64 *)v51[0];
  if ( v51[0] + 8 < v51[0] || v51[0] + 8 > MmUserProbeAddress )
    v41 = (__int64 *)MmUserProbeAddress;
  v42 = *v41;
  v54 = *v41;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v43 = v51[0];
    if ( v51[0] + 24 < v51[0] || v51[0] + 24 > MmUserProbeAddress )
      v43 = MmUserProbeAddress;
    v58 = *(_OWORD *)v43;
    v44 = *(__int128 **)(v43 + 16);
    Address = v44;
    v60 = v58;
    v61 = v44;
    v45 = v44;
    ProbeForRead(v44, 0x60uLL, 4u);
    v46 = *v44;
    if ( a3 )
    {
      v50 = *((_QWORD *)a4 + 6);
      v47 = v50;
      *a4 = v46;
      a4[1] = v45[1];
      a4[2] = v45[2];
      *((_QWORD *)a4 + 6) = *((_QWORD *)v45 + 6);
      *(_OWORD *)v47 = *(__int128 *)((char *)v45 + 56);
      *(_OWORD *)(v47 + 16) = *(__int128 *)((char *)v45 + 72);
      *(_QWORD *)(v47 + 32) = *((_QWORD *)v45 + 11);
      *((_QWORD *)a4 + 6) = v47;
    }
    else
    {
      *a4 = v46;
    }
  }
  return v42;
}
