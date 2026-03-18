/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x1402510A0
 * Callers:
 *     xxxDefWindowProc @ 0x14007E7C0 (xxxDefWindowProc.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x14007F440 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x140080630 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140119C04 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140280A70 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14011349C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1401753E8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x140186C18 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x140250FE8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1402B8154 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     ?GetMultiByteSizeFromUnicodeString@@YAHU_LARGE_STRING@@PEAK@Z @ 0x1402B82F0 (-GetMultiByteSizeFromUnicodeString@@YAHU_LARGE_STRING@@PEAK@Z.c)
 *     ?GetProcessACP@@YAGPEAUtagPROCESSINFO@@@Z @ 0x1402B8348 (-GetProcessACP@@YAGPEAUtagPROCESSINFO@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnINLPCREATESTRUCT(
        ULONG_PTR a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v9; // r14d
  int v10; // esi
  unsigned __int16 ProcessACP; // r15
  int *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // r13
  unsigned __int64 v16; // rdx
  unsigned __int64 *v17; // r8
  int v18; // r10d
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  unsigned __int64 v21; // rcx
  int v22; // eax
  unsigned __int64 v23; // rcx
  int v24; // r9d
  unsigned int v25; // ecx
  unsigned int v26; // r8d
  unsigned __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // r8
  unsigned __int8 *result; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct tagTHREADINFO *v35; // rax
  __int64 v36; // r15
  CHAR *v37; // rdx
  void **v38; // r9
  struct _CAPTUREBUF *v39; // rcx
  size_t v40; // r8
  unsigned int v41; // r8d
  int v42; // r14d
  int v43; // r8d
  void **v44; // r9
  unsigned int v45; // r8d
  CHAR *v46; // rdx
  int v47; // eax
  size_t v48; // r8
  _QWORD *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  ULONG_PTR v53; // rdi
  PVOID *v54; // rdx
  BOOL v55; // [rsp+30h] [rbp-408h]
  unsigned int v56; // [rsp+34h] [rbp-404h] BYREF
  unsigned int v57; // [rsp+38h] [rbp-400h] BYREF
  int v58; // [rsp+3Ch] [rbp-3FCh] BYREF
  CHAR v59; // [rsp+40h] [rbp-3F8h]
  int *v60; // [rsp+48h] [rbp-3F0h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-3E8h] BYREF
  int v62; // [rsp+58h] [rbp-3E0h] BYREF
  __int16 v63; // [rsp+5Ch] [rbp-3DCh]
  __int64 v64; // [rsp+88h] [rbp-3B0h] BYREF
  void *Src; // [rsp+90h] [rbp-3A8h] BYREF
  __int128 v66; // [rsp+98h] [rbp-3A0h] BYREF
  void (*v67)(void *); // [rsp+A8h] [rbp-390h]
  __int128 v68; // [rsp+C8h] [rbp-370h]
  __int64 v69; // [rsp+D8h] [rbp-360h]
  ULONG_PTR BugCheckParameter3[10]; // [rsp+E0h] [rbp-358h] BYREF
  __int128 v71; // [rsp+130h] [rbp-308h] BYREF
  __int128 v72; // [rsp+140h] [rbp-2F8h] BYREF
  int v73; // [rsp+150h] [rbp-2E8h] BYREF
  _BYTE v74[172]; // [rsp+154h] [rbp-2E4h] BYREF
  unsigned __int8 v75[512]; // [rsp+200h] [rbp-238h] BYREF

  v58 = a2;
  RegionSize = a1;
  v57 = 0;
  v56 = 0;
  v9 = 0;
  v10 = a7 & 1;
  ProcessACP = GetProcessACP(*(struct tagPROCESSINFO **)(*(_QWORD *)(a1 + 16) + 464LL));
  v55 = ProcessACP == 0xFDE9;
  memset_0(&v73, 0, 0xA8uLL);
  v12 = &v73;
  Src = 0LL;
  v62 = 0;
  v68 = 0LL;
  v69 = 0LL;
  v15 = PtiCurrent(v14, v13);
  v64 = *(_QWORD *)(RegionSize + 40) - *((_QWORD *)v15 + 64);
  if ( a4 )
  {
    v16 = *(_QWORD *)(a4 + 56);
    v17 = (unsigned __int64 *)MmSystemRangeStart;
    if ( v16 )
    {
      v18 = *(_DWORD *)(a4 + 84);
      if ( (unsigned int)v18 >> 31 != v10 || v16 >= (unsigned __int64)MmSystemRangeStart )
      {
        if ( (a7 & 1) != 0 && *(int *)(a4 + 84) >= 0 && ProcessACP == 0xFDE9 )
        {
          v71 = *(_OWORD *)(a4 + 80);
          if ( !(unsigned int)GetMultiByteSizeFromUnicodeString(&v71, &v57, MmSystemRangeStart) )
            goto LABEL_80;
          v17 = (unsigned __int64 *)MmSystemRangeStart;
        }
        else
        {
          v19 = *(_DWORD *)(a4 + 80);
          v20 = -1;
          if ( v19 + 2 >= v19 )
            v20 = v19 + 2;
          v57 = v20;
          if ( v19 + 2 < v19 )
            goto LABEL_80;
          if ( v18 < 0 && (a7 & 1) == 0 )
          {
            v21 = 2LL * v20;
            v22 = -1;
            if ( v21 <= 0xFFFFFFFF )
              v22 = 2 * v20;
            v57 = v22;
            if ( v21 > 0xFFFFFFFF )
              goto LABEL_80;
          }
        }
        v9 = 1;
      }
    }
    v23 = *(_QWORD *)(a4 + 64);
    if ( (v23 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v24 = *(_DWORD *)(a4 + 100);
      if ( (unsigned int)v24 >> 31 != v10 || v23 >= *v17 )
      {
        if ( (a7 & 1) != 0 && *(int *)(a4 + 100) >= 0 && ProcessACP == 0xFDE9 )
        {
          v72 = *(_OWORD *)(a4 + 96);
          if ( !(unsigned int)GetMultiByteSizeFromUnicodeString(&v72, &v56, v17) )
            goto LABEL_80;
        }
        else
        {
          v25 = *(_DWORD *)(a4 + 96);
          v26 = -1;
          if ( v25 + 2 >= v25 )
            v26 = v25 + 2;
          v56 = v26;
          if ( v25 + 2 < v25 )
            goto LABEL_80;
          if ( v24 < 0 && (a7 & 1) == 0 )
          {
            v27 = 2LL * v26;
            v28 = -1;
            if ( v27 <= 0xFFFFFFFF )
              v28 = 2 * v26;
            v56 = v28;
            if ( v27 > 0xFFFFFFFF )
              goto LABEL_80;
          }
        }
        ++v9;
      }
    }
  }
  v29 = v57 + v56;
  if ( (unsigned int)v29 < v57 || (unsigned int)v29 >= 0x7FFFFFFF )
    goto LABEL_80;
  if ( v9 )
  {
    result = AllocCallbackMessage(168, v9, v29, v75, 1, 0x200uLL);
    v12 = (int *)result;
    v60 = (int *)result;
    if ( !result )
      return result;
  }
  else
  {
    v12 = &v73;
    v60 = &v73;
    memset_0(v74, 0, 0xA4uLL);
    v73 = 168;
  }
  PtiCurrent(v32, v31);
  v66 = 0LL;
  v67 = 0LL;
  if ( v12 != &v73 && v12 != (int *)v75 )
  {
    v35 = PtiCurrent(v34, v33);
    *(_QWORD *)&v66 = *((_QWORD *)v35 + 48);
    *((_QWORD *)v35 + 48) = &v66;
    *((_QWORD *)&v66 + 1) = v12;
    v67 = Win32FreePool;
  }
  v36 = v64;
  *((_QWORD *)v12 + 5) = v64;
  v12[12] = v58;
  *((_QWORD *)v12 + 7) = a3;
  *((_QWORD *)v12 + 8) = a4 != 0;
  if ( !a4 )
    goto LABEL_77;
  *(_DWORD *)(a4 + 52) = 0;
  *(_DWORD *)(a4 + 76) = 0;
  *(_OWORD *)(v12 + 18) = *(_OWORD *)a4;
  *(_OWORD *)(v12 + 22) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(v12 + 26) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(v12 + 30) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(v12 + 34) = *(_OWORD *)(a4 + 64);
  if ( !v57 )
    goto LABEL_66;
  if ( *(int *)(a4 + 84) < 0 )
  {
    v37 = *(CHAR **)(a4 + 56);
    v59 = *v37;
    if ( v59 == -1 )
    {
      if ( (a7 & 1) != 0 )
      {
        v40 = 3LL;
      }
      else
      {
        v58 = 0;
        v58 = ((unsigned __int16)(*(_DWORD *)v37 >> 8) << 16) | 0xFFFF;
        v40 = 4LL;
        v37 = (CHAR *)&v58;
      }
      v38 = (void **)(v12 + 32);
      v39 = (struct _CAPTUREBUF *)v12;
    }
    else
    {
      v38 = (void **)(v12 + 32);
      v43 = *(_DWORD *)(a4 + 80);
      v37 = *(CHAR **)(a4 + 88);
      v39 = (struct _CAPTUREBUF *)v12;
      if ( (a7 & 1) == 0 )
      {
        if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v37, 2 * v43 + 2, v38) < 0 )
          goto LABEL_80;
LABEL_66:
        v42 = v55;
        goto LABEL_67;
      }
      v40 = (unsigned int)(v43 + 1);
    }
LABEL_51:
    if ( (int)CaptureCallbackData(v39, v37, v40, v38) < 0 )
      goto LABEL_80;
    goto LABEL_66;
  }
  v37 = *(CHAR **)(a4 + 56);
  v63 = *(_WORD *)v37;
  v38 = (void **)(v12 + 32);
  v39 = (struct _CAPTUREBUF *)v12;
  if ( v63 == -1 )
  {
    if ( (a7 & 1) != 0 )
    {
      ++v37;
      v40 = 3LL;
    }
    else
    {
      v40 = 4LL;
    }
    goto LABEL_51;
  }
  v41 = *(_DWORD *)(a4 + 80);
  v37 = *(CHAR **)(a4 + 88);
  if ( (a7 & 1) == 0 )
  {
    v40 = v41 + 2;
    goto LABEL_51;
  }
  v42 = v55;
  if ( (int)CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v37, (PCWCH)((v41 >> 1) + 1), v38, v55) < 0 )
    goto LABEL_80;
LABEL_67:
  if ( v56 )
  {
    v44 = (void **)(v12 + 34);
    v45 = *(_DWORD *)(a4 + 96);
    v46 = *(CHAR **)(a4 + 104);
    if ( *(int *)(a4 + 100) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v47 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v46, 2 * v45 + 2, v44);
LABEL_76:
        if ( v47 < 0 )
          goto LABEL_80;
        goto LABEL_77;
      }
      v48 = v45 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v47 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v46, (PCWCH)((v45 >> 1) + 1), v44, v42);
        goto LABEL_76;
      }
      v48 = v45 + 2;
    }
    v47 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v46, v48, v44);
    goto LABEL_76;
  }
LABEL_77:
  *((_QWORD *)v12 + 19) = a5;
  *((_QWORD *)v12 + 20) = a6;
  v49 = (_QWORD *)RegionSize;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, RegionSize);
  v50 = *((_QWORD *)v15 + 65);
  v68 = *(_OWORD *)(v50 + 64);
  v69 = *(_QWORD *)(v50 + 80);
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 72LL) = v36;
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 64LL) = *v49;
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 80LL) = *(_QWORD *)(v49[5] + 224LL);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v64);
  EtwTraceBeginCallback(10LL);
  *((_QWORD *)v12 + 2) = 0LL;
  LODWORD(v49) = KeUserModeCallback(10LL, v12, (unsigned int)*v12, &Src, &v62);
  EtwTraceEndCallback(10LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v64);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v51);
  v52 = *((_QWORD *)v15 + 65);
  *(_OWORD *)(v52 + 64) = v68;
  *(_QWORD *)(v52 + 80) = v69;
  if ( (int)v49 >= 0 && v62 == 24 )
  {
    RegionSize = 0LL;
    RtlCopyFromUser(&RegionSize, Src, 8uLL);
    v53 = RegionSize;
    BugCheckParameter3[5] = RegionSize;
    goto LABEL_81;
  }
LABEL_80:
  v53 = 0LL;
LABEL_81:
  if ( v12 != &v73 && v12 != (int *)v75 )
  {
    v54 = (PVOID *)(v12 + 8);
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v54, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v66, (__int64)v54);
  }
  return (unsigned __int8 *)v53;
}
