/*
 * XREFs of SfnINCNTOUTSTRING @ 0x1C0206C10
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00E01D4 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00E0248 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00E02CC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00E7FF8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRING(
        __int64 *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagTHREADINFO *v15; // rax
  struct tagTHREADINFO *v16; // r12
  __int64 v17; // r15
  unsigned int v18; // eax
  unsigned __int64 v19; // rsi
  unsigned __int8 *result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int16 v25; // dx
  __int16 v26; // ax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // esi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 *v42; // rsi
  __int64 v43; // rsi
  ULONG64 v44; // rcx
  ULONG64 v45; // rdx
  __int64 v46; // xmm0_8
  __int64 v47; // rcx
  _WORD *v48; // rax
  _BYTE v49[4]; // [rsp+30h] [rbp-368h] BYREF
  int v50; // [rsp+34h] [rbp-364h]
  int v51; // [rsp+38h] [rbp-360h] BYREF
  int v52; // [rsp+3Ch] [rbp-35Ch]
  unsigned __int8 *v53; // [rsp+40h] [rbp-358h]
  unsigned __int64 v54; // [rsp+58h] [rbp-340h] BYREF
  __int64 v55; // [rsp+60h] [rbp-338h]
  ULONG_PTR RegionSize[2]; // [rsp+68h] [rbp-330h] BYREF
  __int128 v57; // [rsp+78h] [rbp-320h] BYREF
  __int64 v58; // [rsp+88h] [rbp-310h]
  __int128 v59; // [rsp+98h] [rbp-300h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-2F0h]
  __int128 v61; // [rsp+D8h] [rbp-2C0h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-2B0h]
  unsigned __int8 v63[112]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v64[512]; // [rsp+160h] [rbp-238h] BYREF

  RegionSize[0] = a3;
  v50 = a2;
  v52 = a7 & 1;
  memset_0(v63, 0, 0x68uLL);
  v10 = v63;
  v54 = 0LL;
  v51 = 0;
  v55 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v15 = PtiCurrentShared(v12, v11, v13, v14);
  v16 = v15;
  if ( a1 )
    v17 = a1[5] - *((_QWORD *)v15 + 59);
  else
    v17 = 0LL;
  v18 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v19 = v18 + 2;
  if ( (unsigned int)v19 < v18 )
    goto LABEL_41;
  if ( *(int *)(a4 + 4) < 0 && !v52 )
  {
    v19 *= 2LL;
    if ( v19 > 0xFFFFFFFF )
      goto LABEL_41;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v19, v64, 0, 0x200uLL);
  v10 = result;
  v53 = result;
  if ( !result )
    return result;
  PtiCurrentShared(v22, v21, v23, v24);
  v59 = 0LL;
  v60 = 0LL;
  if ( v10 != v63 && v10 != v64 )
    PushW32ThreadLock((__int64)v10, &v59, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 5) = v17;
  *((_DWORD *)v10 + 12) = v50;
  *((_QWORD *)v10 + 7) = RegionSize[0];
  v25 = *(_WORD *)(a4 + 4) >> 1;
  if ( *(int *)(a4 + 4) < 0 )
    v25 = *(_WORD *)(a4 + 4);
  LOWORD(v50) = v25;
  v26 = -1;
  if ( v25 != -1 )
    v26 = v25;
  *((_WORD *)v10 + 40) = v26;
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v10, v19, (void **)v10 + 11) < 0 )
    goto LABEL_41;
  *((_DWORD *)v10 + 24) = v19;
  ThreadLock(a1, &v61);
  v30 = *((_QWORD *)v16 + 60);
  *(_OWORD *)RegionSize = *(_OWORD *)(v30 + 64);
  v57 = *(_OWORD *)RegionSize;
  v58 = *(_QWORD *)(v30 + 80);
  *(_QWORD *)(v30 + 72) = v17;
  v31 = 0LL;
  if ( a1 )
    v31 = *a1;
  *(_QWORD *)(*((_QWORD *)v16 + 60) + 64LL) = v31;
  v32 = a1 ? *(_QWORD *)(a1[5] + 224) : 0LL;
  *(_QWORD *)(*((_QWORD *)v16 + 60) + 80LL) = v32;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v49,
    v27,
    v28,
    v29);
  EtwTraceBeginCallback(7LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v33 = KeUserModeCallback(7LL, v10, *(unsigned int *)v10, &v54, &v51);
  EtwTraceEndCallback(7LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v49, v34, v35);
  ThreadUnlock1(v37, v36, v38);
  v41 = *((_QWORD *)v16 + 60);
  *(_OWORD *)(v41 + 64) = *(_OWORD *)RegionSize;
  *(_QWORD *)(v41 + 80) = v58;
  if ( v33 < 0 || v51 != 24 )
    goto LABEL_41;
  v42 = (__int64 *)v54;
  if ( v54 + 8 < v54 || v54 + 8 > MmUserProbeAddress )
    v42 = (__int64 *)MmUserProbeAddress;
  v43 = *v42;
  v55 = v43;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_42;
  if ( !v43 )
  {
    v48 = *(_WORD **)(a4 + 8);
    if ( *(int *)(a4 + 4) >= 0 )
      *v48 = 0;
    else
      *(_BYTE *)v48 = 0;
    goto LABEL_42;
  }
  v44 = v54;
  v45 = v54 + 24;
  if ( v54 + 24 < v54 || v45 > MmUserProbeAddress )
    v44 = MmUserProbeAddress;
  v46 = *(_QWORD *)(v44 + 16);
  v57 = *(_OWORD *)v44;
  v58 = v46;
  v47 = *((_QWORD *)PtiCurrentShared(v44, v45, v39, v40) + 64);
  if ( v47 && (*(_DWORD *)(v47 + 84) & 1) != 0 && *(_QWORD *)(v47 + 96) == a4 )
  {
LABEL_41:
    v43 = 0LL;
  }
  else
  {
    v43 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v57, v43, *(_DWORD *)(a4 + 4) >> 31, v52);
    v55 = v43;
    CopyOutputString((struct _CALLBACKSTATUS *)&v57, (struct _LARGE_STRING *)a4, (unsigned __int16)v50, v52);
  }
LABEL_42:
  if ( v10 != v63 && v10 != v64 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v59);
  }
  return (unsigned __int8 *)v43;
}
