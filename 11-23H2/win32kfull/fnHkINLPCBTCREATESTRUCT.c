/*
 * XREFs of fnHkINLPCBTCREATESTRUCT @ 0x1C020FB38
 * Callers:
 *     xxxHkCallHook @ 0x1C0120F60 (xxxHkCallHook.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E7F58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00E7FF8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     GetThreadDesktopWindow @ 0x1C00E9600 (GetThreadDesktopWindow.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1C013C550 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0204834 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 */

unsigned __int8 *__fastcall fnHkINLPCBTCREATESTRUCT(int a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned int v8; // r15d
  __int64 *ThreadDesktopWindow; // r13
  int *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned __int64 v19; // r8
  unsigned int v20; // eax
  unsigned __int8 *result; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // r15
  _OWORD *v27; // rax
  CHAR *v28; // rdx
  void **v29; // r9
  struct _CAPTUREBUF *v30; // rcx
  unsigned int v31; // r8d
  unsigned int v32; // r8d
  int v33; // eax
  CHAR *v34; // rax
  int v35; // r8d
  void **v36; // r9
  unsigned int v37; // r8d
  CHAR *v38; // rdx
  int v39; // eax
  unsigned int v40; // r8d
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  ULONG_PTR v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // edi
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 *v57; // rcx
  ULONG64 v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // rcx
  ULONG64 v61; // rcx
  __int128 v62; // xmm4
  __int128 v63; // xmm5
  __int128 v64; // xmm2
  __int128 v65; // xmm3
  _BYTE v66[4]; // [rsp+30h] [rbp-4D8h] BYREF
  int v67; // [rsp+34h] [rbp-4D4h] BYREF
  int *v68; // [rsp+38h] [rbp-4D0h]
  CHAR v69; // [rsp+40h] [rbp-4C8h]
  int v70; // [rsp+44h] [rbp-4C4h] BYREF
  __int16 v71; // [rsp+48h] [rbp-4C0h]
  __int64 v72; // [rsp+78h] [rbp-490h]
  unsigned __int64 v73; // [rsp+80h] [rbp-488h] BYREF
  ULONG_PTR RegionSize[4]; // [rsp+88h] [rbp-480h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-460h]
  _QWORD *v76; // [rsp+B0h] [rbp-458h]
  __int64 v77; // [rsp+B8h] [rbp-450h]
  __int128 v78; // [rsp+C8h] [rbp-440h]
  __int64 v79; // [rsp+D8h] [rbp-430h]
  __int128 v80; // [rsp+E0h] [rbp-428h] BYREF
  __int64 v81; // [rsp+F0h] [rbp-418h]
  __int64 v82; // [rsp+110h] [rbp-3F8h]
  __int128 v83; // [rsp+138h] [rbp-3D0h] BYREF
  __int64 v84; // [rsp+148h] [rbp-3C0h]
  _OWORD v85[5]; // [rsp+150h] [rbp-3B8h] BYREF
  __int64 v86; // [rsp+1A0h] [rbp-368h]
  __int128 v87; // [rsp+1D0h] [rbp-338h]
  __int64 v88; // [rsp+200h] [rbp-308h]
  int v89; // [rsp+210h] [rbp-2F8h] BYREF
  char v90[172]; // [rsp+214h] [rbp-2F4h] BYREF
  unsigned __int8 v91[512]; // [rsp+2C0h] [rbp-248h] BYREF

  v77 = a4;
  v76 = a3;
  v75 = a2;
  v67 = a1;
  LODWORD(v6) = 0;
  LODWORD(v7) = 0;
  v8 = 0;
  memset_0(v85, 0, 0x58uLL);
  ThreadDesktopWindow = (__int64 *)GetThreadDesktopWindow(0LL);
  memset_0(&v89, 0, 0xA8uLL);
  v10 = &v89;
  v73 = 0LL;
  v70 = 0;
  v83 = 0LL;
  v84 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v15 = PtiCurrentShared(v12, v11, v13, v14);
  RegionSize[0] = (ULONG_PTR)v15;
  if ( ThreadDesktopWindow )
    v72 = ThreadDesktopWindow[5] - *((_QWORD *)v15 + 59);
  else
    v72 = 0LL;
  v16 = *a3;
  v17 = *(_QWORD *)(v16 + 56);
  if ( v17 && (*(_DWORD *)(v16 + 84) >> 31 != a5 || v17 >= (unsigned __int64)MmSystemRangeStart) )
  {
    v18 = *(_DWORD *)(v16 + 80);
    v6 = v18 + 2;
    if ( (unsigned int)v6 < v18 )
      goto LABEL_76;
    if ( *(int *)(v16 + 84) < 0 && !a5 )
    {
      v6 *= 2LL;
      if ( v6 > 0xFFFFFFFF )
        goto LABEL_76;
    }
    v8 = 1;
  }
  v19 = *(_QWORD *)(v16 + 64);
  if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_DWORD *)(v16 + 100) >> 31 != a5 || v19 >= (unsigned __int64)MmSystemRangeStart) )
  {
    v20 = *(_DWORD *)(v16 + 96);
    v7 = v20 + 2;
    if ( (unsigned int)v7 < v20 )
      goto LABEL_76;
    if ( *(int *)(v16 + 100) < 0 && !a5 )
    {
      v7 *= 2LL;
      if ( v7 > 0xFFFFFFFF )
        goto LABEL_76;
    }
    ++v8;
  }
  if ( (int)v7 + (int)v6 >= (unsigned int)v6 )
  {
    if ( v8 )
    {
      result = AllocCallbackMessage(168, v8, (unsigned int)(v7 + v6), v91, 1, 0x200uLL);
      v10 = (int *)result;
      v68 = (int *)result;
      if ( !result )
        return result;
    }
    else
    {
      v10 = &v89;
      v68 = &v89;
      memset_0(v90, 0, 0xA4uLL);
      v89 = 168;
    }
    PtiCurrentShared(v23, v22, v24, v25);
    v80 = 0LL;
    v81 = 0LL;
    if ( v10 != &v89 && v10 != (int *)v91 )
      PushW32ThreadLock((__int64)v10, &v80, (__int64)Win32FreePool);
    *((_QWORD *)v10 + 5) = v72;
    v10[12] = v67;
    *((_QWORD *)v10 + 7) = v75;
    v26 = v76;
    *(_DWORD *)(*v76 + 52LL) = 0;
    *(_DWORD *)(*v26 + 76LL) = 0;
    v27 = (_OWORD *)*v26;
    *((_OWORD *)v10 + 4) = *(_OWORD *)*v26;
    *((_OWORD *)v10 + 5) = v27[1];
    *((_OWORD *)v10 + 6) = v27[2];
    *((_OWORD *)v10 + 7) = v27[3];
    *((_OWORD *)v10 + 8) = v27[4];
    if ( !(_DWORD)v6 )
      goto LABEL_48;
    if ( *(int *)(v16 + 84) < 0 )
    {
      v34 = *(CHAR **)(v16 + 56);
      v69 = *v34;
      if ( v69 == -1 )
      {
        if ( a5 )
        {
          v31 = 3;
          v28 = v34;
        }
        else
        {
          v67 = 0;
          v67 = ((unsigned __int16)(*(_DWORD *)v34 >> 8) << 16) | 0xFFFF;
          v31 = 4;
          v28 = (CHAR *)&v67;
        }
        v29 = (void **)(v10 + 30);
        v30 = (struct _CAPTUREBUF *)v10;
      }
      else
      {
        v29 = (void **)(v10 + 30);
        v35 = *(_DWORD *)(v16 + 80);
        v28 = *(CHAR **)(v16 + 88);
        v30 = (struct _CAPTUREBUF *)v10;
        if ( !a5 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v28, 2 * v35 + 2, v29) < 0 )
            goto LABEL_76;
          goto LABEL_48;
        }
        v31 = v35 + 1;
      }
    }
    else
    {
      v28 = *(CHAR **)(v16 + 56);
      v71 = *(_WORD *)v28;
      v29 = (void **)(v10 + 30);
      v30 = (struct _CAPTUREBUF *)v10;
      if ( v71 == -1 )
      {
        if ( a5 )
        {
          ++v28;
          v31 = 3;
        }
        else
        {
          v31 = 4;
        }
      }
      else
      {
        v32 = *(_DWORD *)(v16 + 80);
        v28 = *(CHAR **)(v16 + 88);
        if ( a5 )
        {
          v33 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v28, (v32 >> 1) + 1, v29, 0);
          goto LABEL_45;
        }
        v31 = v32 + 2;
      }
    }
    v33 = CaptureCallbackData(v30, v28, v31, v29);
LABEL_45:
    if ( v33 < 0 )
      goto LABEL_76;
LABEL_48:
    if ( !(_DWORD)v7 )
    {
LABEL_58:
      *((_QWORD *)v10 + 18) = v26[1];
      *((_QWORD *)v10 + 19) = v77;
      v10[40] = a5;
      ThreadLock(ThreadDesktopWindow, &v83);
      v44 = RegionSize[0];
      v45 = *(_QWORD *)(RegionSize[0] + 480);
      *(_OWORD *)RegionSize = *(_OWORD *)(v45 + 64);
      v78 = *(_OWORD *)RegionSize;
      v79 = *(_QWORD *)(v45 + 80);
      *(_QWORD *)(v45 + 72) = v72;
      if ( ThreadDesktopWindow )
        v46 = *ThreadDesktopWindow;
      else
        v46 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v44 + 480) + 64LL) = v46;
      if ( ThreadDesktopWindow )
        v47 = *(_QWORD *)(ThreadDesktopWindow[5] + 224);
      else
        v47 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v44 + 480) + 80LL) = v47;
      LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
        (LeaveEnterCritProperDisposition *)v66,
        v41,
        v42,
        v43);
      EtwTraceBeginCallback(42LL);
      *((_QWORD *)v10 + 2) = 0LL;
      v48 = KeUserModeCallback(42LL, v10, (unsigned int)*v10, &v73, &v70);
      EtwTraceEndCallback(42LL);
      LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition(
        (LeaveEnterCritProperDisposition *)v66,
        v49,
        v50);
      ThreadUnlock1(v52, v51, v53);
      v56 = *(_QWORD *)(v44 + 480);
      *(_OWORD *)(v56 + 64) = *(_OWORD *)RegionSize;
      *(_QWORD *)(v56 + 80) = v79;
      if ( v48 >= 0 && v70 == 24 )
      {
        v57 = (__int64 *)v73;
        v58 = v73 + 8;
        if ( v73 + 8 < v73 || v58 > MmUserProbeAddress )
          v57 = (__int64 *)MmUserProbeAddress;
        v59 = *v57;
        v82 = *v57;
        v60 = *((_QWORD *)PtiCurrentShared((__int64)v57, v58, v54, v55) + 64);
        if ( !v60 || (*(_DWORD *)(v60 + 84) & 1) == 0 || *(_OWORD **)(v60 + 96) != v85 )
        {
          v61 = *(_QWORD *)(v73 + 16);
          if ( v61 + 88 < v61 || v61 + 88 > MmUserProbeAddress )
            v61 = MmUserProbeAddress;
          v62 = *(_OWORD *)v61;
          v63 = *(_OWORD *)(v61 + 16);
          v87 = *(_OWORD *)(v61 + 32);
          v64 = *(_OWORD *)(v61 + 48);
          v65 = *(_OWORD *)(v61 + 64);
          v88 = *(_QWORD *)(v61 + 80);
          v85[0] = v62;
          v85[1] = v63;
          v85[2] = v87;
          v85[3] = v64;
          v85[4] = v65;
          v86 = v88;
          v26[1] = v88;
          *(_OWORD *)(*v26 + 32LL) = v87;
          goto LABEL_77;
        }
      }
      goto LABEL_76;
    }
    v36 = (void **)(v10 + 32);
    v37 = *(_DWORD *)(v16 + 96);
    v38 = *(CHAR **)(v16 + 104);
    if ( *(int *)(v16 + 100) < 0 )
    {
      if ( !a5 )
      {
        v39 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v38, 2 * v37 + 2, v36);
LABEL_57:
        if ( v39 < 0 )
          goto LABEL_76;
        goto LABEL_58;
      }
      v40 = v37 + 1;
    }
    else
    {
      if ( a5 )
      {
        v39 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v38, (v37 >> 1) + 1, v36, 0);
        goto LABEL_57;
      }
      v40 = v37 + 2;
    }
    v39 = CaptureCallbackData((struct _CAPTUREBUF *)v10, v38, v40, v36);
    goto LABEL_57;
  }
LABEL_76:
  v59 = 0LL;
LABEL_77:
  if ( v10 != &v89 && v10 != (int *)v91 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v80);
  }
  return (unsigned __int8 *)v59;
}
