/*
 * XREFs of SfnINLPHELPINFOSTRUCT @ 0x1C02082E0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E7F58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00E7FF8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnINLPHELPINFOSTRUCT(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagTHREADINFO *v14; // rax
  struct tagTHREADINFO *v15; // r14
  __int64 v16; // rsi
  unsigned __int8 *result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int8 *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 *v36; // rcx
  __int64 v37; // rdi
  _BYTE v38[4]; // [rsp+30h] [rbp-348h] BYREF
  int v39; // [rsp+34h] [rbp-344h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+38h] [rbp-340h] BYREF
  unsigned __int64 v41; // [rsp+50h] [rbp-328h] BYREF
  __int128 v42; // [rsp+60h] [rbp-318h]
  __int64 v43; // [rsp+70h] [rbp-308h]
  __int128 v44; // [rsp+78h] [rbp-300h] BYREF
  __int64 v45; // [rsp+88h] [rbp-2F0h]
  __int64 v46; // [rsp+90h] [rbp-2E8h]
  __int128 v47; // [rsp+B0h] [rbp-2C8h]
  __int128 v48; // [rsp+C0h] [rbp-2B8h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-2A8h]
  unsigned __int8 v50[96]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v51[512]; // [rsp+140h] [rbp-238h] BYREF

  memset_0(v50, 0, 0x58uLL);
  v41 = 0LL;
  v39 = 0;
  v48 = 0LL;
  v49 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v14 = PtiCurrentShared(v11, v10, v12, v13);
  v15 = v14;
  if ( a1 )
    v16 = a1[5] - *((_QWORD *)v14 + 59);
  else
    v16 = 0LL;
  result = AllocCallbackMessage(88, 1u, *(unsigned int *)a4, v51, 1, 0x200uLL);
  v22 = result;
  RegionSize[0] = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrentShared(v19, v18, v20, v21);
    v44 = 0LL;
    v45 = 0LL;
    if ( v22 != v50 && v22 != v51 )
      PushW32ThreadLock((__int64)v22, &v44, (__int64)Win32FreePool);
    *((_QWORD *)v22 + 5) = v16;
    *((_DWORD *)v22 + 12) = a2;
    *((_QWORD *)v22 + 7) = a3;
    *((_DWORD *)a4 + 3) = 0;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v22, a4, *(_DWORD *)a4, (void **)v22 + 8) < 0 )
      goto LABEL_21;
    *((_QWORD *)v22 + 9) = a5;
    *((_QWORD *)v22 + 10) = a6;
    ThreadLock(a1, &v48);
    v26 = *((_QWORD *)v15 + 60);
    v47 = *(_OWORD *)(v26 + 64);
    v42 = v47;
    v43 = *(_QWORD *)(v26 + 80);
    *(_QWORD *)(v26 + 72) = v16;
    v27 = a1 ? *a1 : 0LL;
    *(_QWORD *)(*((_QWORD *)v15 + 60) + 64LL) = v27;
    v28 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
    *(_QWORD *)(*((_QWORD *)v15 + 60) + 80LL) = v28;
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
      (LeaveEnterCritProperDisposition *)v38,
      v23,
      v24,
      v25);
    EtwTraceBeginCallback(13LL);
    *((_QWORD *)v22 + 2) = 0LL;
    v29 = KeUserModeCallback(13LL, v22, *(unsigned int *)v22, &v41, &v39);
    EtwTraceEndCallback(13LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v38, v30, v31);
    ThreadUnlock1(v33, v32, v34);
    v35 = *((_QWORD *)v15 + 60);
    *(_OWORD *)(v35 + 64) = v47;
    *(_QWORD *)(v35 + 80) = v43;
    if ( v29 < 0 )
      goto LABEL_21;
    if ( v39 == 24 )
    {
      v36 = (__int64 *)v41;
      if ( v41 + 8 < v41 || v41 + 8 > MmUserProbeAddress )
        v36 = (__int64 *)MmUserProbeAddress;
      v37 = *v36;
      v46 = *v36;
    }
    else
    {
LABEL_21:
      v37 = 0LL;
    }
    if ( v22 != v50 && v22 != v51 )
    {
      if ( *((_QWORD *)v22 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v22 + 4, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v44);
    }
    return (unsigned __int8 *)v37;
  }
  return result;
}
