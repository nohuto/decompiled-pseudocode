/*
 * XREFs of SfnINLPKDRAWSWITCHWND @ 0x1C0208A80
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBkColor @ 0x1C0041A40 (GreSetBkColor.c)
 *     GreSetTextColor @ 0x1C0042038 (GreSetTextColor.c)
 *     GetDPIServerInfo @ 0x1C00899B8 (GetDPIServerInfo.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E7F58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00E7FF8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     GreSelectFontInternal @ 0x1C011A874 (GreSelectFontInternal.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     _WindowFromDC @ 0x1C01BD748 (_WindowFromDC.c)
 */

unsigned __int8 *__fastcall SfnINLPKDRAWSWITCHWND(_QWORD *a1, int a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagTHREADINFO *v15; // rax
  struct tagTHREADINFO *v16; // r14
  __int64 v17; // rsi
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  unsigned __int8 *result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  const struct tagWND *v25; // rax
  HDC DC; // r12
  __int64 v27; // rcx
  __int64 DPIServerInfo; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int128 v33; // xmm6
  __int64 v34; // xmm7_8
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // edi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 *v44; // rcx
  __int64 v45; // rdi
  _BYTE v46[4]; // [rsp+30h] [rbp-388h] BYREF
  int v47; // [rsp+34h] [rbp-384h] BYREF
  int v48; // [rsp+38h] [rbp-380h]
  int v49; // [rsp+3Ch] [rbp-37Ch]
  unsigned __int8 *v50; // [rsp+50h] [rbp-368h]
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-360h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-358h] BYREF
  __int128 v53; // [rsp+70h] [rbp-348h]
  __int64 v54; // [rsp+80h] [rbp-338h]
  __int128 v55; // [rsp+88h] [rbp-330h] BYREF
  __int64 v56; // [rsp+98h] [rbp-320h]
  __int64 v57; // [rsp+A0h] [rbp-318h]
  __int128 v58; // [rsp+C0h] [rbp-2F8h] BYREF
  __int64 v59; // [rsp+D0h] [rbp-2E8h]
  unsigned __int8 v60[112]; // [rsp+E0h] [rbp-2D8h] BYREF
  unsigned __int8 v61[512]; // [rsp+150h] [rbp-268h] BYREF

  memset_0(v60, 0, 0x68uLL);
  v10 = v60;
  v52 = 0LL;
  v47 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v15 = PtiCurrentShared(v12, v11, v13, v14);
  v16 = v15;
  if ( a1 )
    v17 = a1[5] - *((_QWORD *)v15 + 59);
  else
    v17 = 0LL;
  v18 = *(_DWORD *)(a4 + 16);
  v19 = v18 + 2;
  if ( (unsigned int)v19 < v18 )
    goto LABEL_24;
  if ( *(int *)(a4 + 20) < 0 )
  {
    v19 *= 2LL;
    if ( v19 > 0xFFFFFFFF )
      goto LABEL_24;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v19, v61, 1, 0x200uLL);
  v10 = result;
  v50 = result;
  if ( !result )
    return result;
  PtiCurrentShared(v22, v21, v23, v24);
  v55 = 0LL;
  v56 = 0LL;
  if ( v10 != v60 && v10 != v61 )
    PushW32ThreadLock((__int64)v10, &v55, (__int64)Win32FreePool);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              *(char **)(a4 + 24),
              *(_DWORD *)(a4 + 16) + 2,
              (void **)v10 + 10) < 0 )
    goto LABEL_24;
  v25 = WindowFromDC(a3);
  DC = (HDC)_GetDC(v25);
  v49 = GreSetTextColor((__int64)DC, *(_DWORD *)(gpsi + 4640LL));
  v48 = GreSetBkColor(DC, *(_DWORD *)(gpsi + 4628LL));
  DPIServerInfo = GetDPIServerInfo(v27);
  RegionSize = GreSelectFontInternal((__int64)DC, *(_QWORD *)(DPIServerInfo + 8), 1);
  *((_QWORD *)v10 + 5) = v17;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = DC;
  *(_OWORD *)(v10 + 88) = *(_OWORD *)a4;
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  ThreadLock(a1, &v58);
  v32 = *((_QWORD *)v16 + 60);
  v33 = *(_OWORD *)(v32 + 64);
  v53 = v33;
  v34 = *(_QWORD *)(v32 + 80);
  v54 = v34;
  *(_QWORD *)(v32 + 72) = v17;
  v35 = a1 ? *a1 : 0LL;
  *(_QWORD *)(*((_QWORD *)v16 + 60) + 64LL) = v35;
  v36 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
  *(_QWORD *)(*((_QWORD *)v16 + 60) + 80LL) = v36;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v46,
    v29,
    v30,
    v31);
  EtwTraceBeginCallback(97LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v37 = KeUserModeCallback(97LL, v10, *(unsigned int *)v10, &v52, &v47);
  EtwTraceEndCallback(97LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v46, v38, v39);
  ThreadUnlock1(v41, v40, v42);
  v43 = *((_QWORD *)v16 + 60);
  *(_OWORD *)(v43 + 64) = v33;
  *(_QWORD *)(v43 + 80) = v34;
  GreSelectFontInternal((__int64)DC, RegionSize, 1);
  GreSetBkColor(DC, v48);
  GreSetTextColor((__int64)DC, v49);
  _ReleaseDC(DC);
  if ( v37 < 0 )
    goto LABEL_24;
  if ( v47 == 24 )
  {
    v44 = (__int64 *)v52;
    if ( v52 + 8 < v52 || v52 + 8 > MmUserProbeAddress )
      v44 = (__int64 *)MmUserProbeAddress;
    v45 = *v44;
    v57 = *v44;
  }
  else
  {
LABEL_24:
    v45 = 0LL;
  }
  if ( v10 != v60 && v10 != v61 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v55);
  }
  return (unsigned __int8 *)v45;
}
