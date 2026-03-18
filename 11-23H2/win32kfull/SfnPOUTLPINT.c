/*
 * XREFs of SfnPOUTLPINT @ 0x1C020E200
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00E01D4 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E7F58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00E7FF8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnPOUTLPINT(
        __int64 *a1,
        int a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct tagTHREADINFO *v16; // rax
  struct tagTHREADINFO *v17; // r15
  __int64 v18; // r14
  unsigned __int64 v19; // rdi
  unsigned __int8 *result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  void *v25; // r13
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // esi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 *v39; // rcx
  __int64 v40; // rsi
  ULONG64 v41; // rcx
  _BYTE v42[4]; // [rsp+30h] [rbp-398h] BYREF
  int v43; // [rsp+34h] [rbp-394h] BYREF
  unsigned __int8 *v44; // [rsp+38h] [rbp-390h]
  unsigned __int64 v45; // [rsp+58h] [rbp-370h] BYREF
  SIZE_T Length; // [rsp+60h] [rbp-368h] BYREF
  void *v47[2]; // [rsp+68h] [rbp-360h]
  volatile void *Address; // [rsp+78h] [rbp-350h]
  __int128 v49; // [rsp+90h] [rbp-338h]
  __int64 v50; // [rsp+A0h] [rbp-328h]
  __int128 v51; // [rsp+A8h] [rbp-320h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-310h]
  __int64 v53; // [rsp+C0h] [rbp-308h]
  __int128 v54; // [rsp+E8h] [rbp-2E0h] BYREF
  __int64 v55; // [rsp+F8h] [rbp-2D0h]
  __int128 v56; // [rsp+100h] [rbp-2C8h]
  volatile void *v57; // [rsp+110h] [rbp-2B8h]
  unsigned __int8 v58[96]; // [rsp+120h] [rbp-2A8h] BYREF
  unsigned __int8 v59[512]; // [rsp+180h] [rbp-248h] BYREF

  v47[0] = a4;
  memset_0(v58, 0, sizeof(v58));
  v11 = v58;
  v45 = 0LL;
  v43 = 0;
  v54 = 0LL;
  v55 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v16 = PtiCurrentShared(v13, v12, v14, v15);
  v17 = v16;
  if ( a1 )
    v18 = a1[5] - *((_QWORD *)v16 + 59);
  else
    v18 = 0LL;
  v19 = 4LL * (unsigned int)a3;
  if ( v19 > 0xFFFFFFFF )
    goto LABEL_33;
  Length = (unsigned int)v19;
  result = AllocCallbackMessage(96, 1u, (unsigned int)v19, v59, 0, 0x200uLL);
  v11 = result;
  v44 = result;
  if ( !result )
    return result;
  PtiCurrentShared(v22, v21, v23, v24);
  v51 = 0LL;
  v52 = 0LL;
  if ( v11 != v58 && v11 != v59 )
    PushW32ThreadLock((__int64)v11, &v51, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v18;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = a3;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (a7 & 2) != 0 )
  {
    *((_DWORD *)v11 + 22) = v19;
    v25 = v47[0];
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, (char *)v47[0], v19, (void **)v11 + 10) < 0 )
      goto LABEL_33;
  }
  else
  {
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v19, (void **)v11 + 10) < 0 )
      goto LABEL_33;
    *((_DWORD *)v11 + 22) = v19;
    v25 = v47[0];
  }
  ThreadLock(a1, &v54);
  v29 = *((_QWORD *)v17 + 60);
  *(_OWORD *)v47 = *(_OWORD *)(v29 + 64);
  v49 = *(_OWORD *)v47;
  v50 = *(_QWORD *)(v29 + 80);
  *(_QWORD *)(v29 + 72) = v18;
  if ( a1 )
    v30 = *a1;
  else
    v30 = 0LL;
  *(_QWORD *)(*((_QWORD *)v17 + 60) + 64LL) = v30;
  if ( a1 )
    v31 = *(_QWORD *)(a1[5] + 224);
  else
    v31 = 0LL;
  *(_QWORD *)(*((_QWORD *)v17 + 60) + 80LL) = v31;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v42,
    v26,
    v27,
    v28);
  EtwTraceBeginCallback(37LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v32 = KeUserModeCallback(37LL, v11, *(unsigned int *)v11, &v45, &v43);
  EtwTraceEndCallback(37LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v42, v33, v34);
  ThreadUnlock1(v36, v35, v37);
  v38 = *((_QWORD *)v17 + 60);
  *(_OWORD *)(v38 + 64) = *(_OWORD *)v47;
  *(_QWORD *)(v38 + 80) = v50;
  if ( v32 >= 0 && v43 == 24 )
  {
    v39 = (__int64 *)v45;
    if ( v45 + 8 < v45 || v45 + 8 > MmUserProbeAddress )
      v39 = (__int64 *)MmUserProbeAddress;
    v40 = *v39;
    v53 = *v39;
    if ( (_DWORD)v19 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v41 = v45;
      if ( v45 + 24 < v45 || v45 + 24 > MmUserProbeAddress )
        v41 = MmUserProbeAddress;
      *(_OWORD *)v47 = *(_OWORD *)v41;
      Address = *(volatile void **)(v41 + 16);
      v56 = *(_OWORD *)v47;
      v57 = Address;
      ProbeForRead(Address, Length, 4u);
      memmove(v25, (const void *)Address, Length);
    }
    goto LABEL_34;
  }
LABEL_33:
  v40 = 0LL;
LABEL_34:
  if ( v11 != v58 && v11 != v59 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      Length = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &Length, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v51);
  }
  return (unsigned __int8 *)v40;
}
