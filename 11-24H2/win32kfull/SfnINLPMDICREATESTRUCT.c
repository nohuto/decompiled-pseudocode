/*
 * XREFs of SfnINLPMDICREATESTRUCT @ 0x1402B91E0
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
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnINLPMDICREATESTRUCT(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r12
  unsigned int v10; // r13d
  int v11; // r15d
  int *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned __int8 *result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct tagTHREADINFO *v24; // rax
  ULONG_PTR v25; // r13
  void **v26; // r9
  unsigned int v27; // r8d
  CHAR *v28; // rdx
  int v29; // eax
  size_t v30; // r8
  void **v31; // r9
  unsigned int v32; // r8d
  CHAR *v33; // rdx
  int v34; // eax
  size_t v35; // r8
  __int64 *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r8
  struct tagTHREADINFO *v39; // r14
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // esi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rsi
  PVOID *v47; // rdx
  int v48; // [rsp+30h] [rbp-378h] BYREF
  __int64 *v49; // [rsp+38h] [rbp-370h] BYREF
  int *v50; // [rsp+40h] [rbp-368h]
  int v51; // [rsp+48h] [rbp-360h]
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-348h] BYREF
  struct tagTHREADINFO *v53; // [rsp+68h] [rbp-340h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-338h] BYREF
  void *Src; // [rsp+80h] [rbp-328h] BYREF
  __int128 v56; // [rsp+88h] [rbp-320h] BYREF
  void (*v57)(void *); // [rsp+98h] [rbp-310h]
  __int128 v58; // [rsp+A8h] [rbp-300h]
  __int64 v59; // [rsp+B8h] [rbp-2F0h]
  __int64 v60; // [rsp+C0h] [rbp-2E8h]
  int v61; // [rsp+E0h] [rbp-2C8h] BYREF
  char v62[140]; // [rsp+E4h] [rbp-2C4h] BYREF
  unsigned __int8 v63[512]; // [rsp+170h] [rbp-238h] BYREF

  RegionSize = a3;
  v51 = a2;
  v49 = (__int64 *)a1;
  LODWORD(v8) = 0;
  LODWORD(v9) = 0;
  v10 = 0;
  v11 = a7 & 1;
  memset_0(&v61, 0, 0x90uLL);
  v12 = &v61;
  Src = 0LL;
  v48 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v15 = PtiCurrent(v14, v13);
  v53 = v15;
  if ( v49 )
    BugCheckParameter3[0] = v49[5] - *((_QWORD *)v15 + 64);
  else
    BugCheckParameter3[0] = 0LL;
  v16 = *(_QWORD *)(a4 + 8);
  if ( v16 && (v16 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 60) >> 31 != v11) )
  {
    v17 = *(_DWORD *)(a4 + 56);
    v8 = v17 + 2;
    if ( (unsigned int)v8 < v17 )
      goto LABEL_57;
    if ( *(int *)(a4 + 60) < 0 && (a7 & 1) == 0 )
    {
      v8 *= 2LL;
      if ( v8 > 0xFFFFFFFF )
        goto LABEL_57;
    }
    v10 = 1;
  }
  if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_QWORD *)a4 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 76) >> 31 != v11) )
  {
    v18 = *(_DWORD *)(a4 + 72);
    v9 = v18 + 2;
    if ( (unsigned int)v9 < v18 )
      goto LABEL_57;
    if ( *(int *)(a4 + 76) < 0 && (a7 & 1) == 0 )
    {
      v9 *= 2LL;
      if ( v9 > 0xFFFFFFFF )
        goto LABEL_57;
    }
    ++v10;
  }
  if ( (int)v9 + (int)v8 >= (unsigned int)v8 )
  {
    if ( v10 )
    {
      result = AllocCallbackMessage(144, v10, (unsigned int)(v9 + v8), v63, 1, 0x200uLL);
      v12 = (int *)result;
      v50 = (int *)result;
      if ( !result )
        return result;
    }
    else
    {
      v12 = &v61;
      v50 = &v61;
      memset_0(v62, 0, sizeof(v62));
      v61 = 144;
    }
    PtiCurrent(v21, v20);
    v56 = 0LL;
    v57 = 0LL;
    if ( v12 != &v61 && v12 != (int *)v63 )
    {
      v24 = PtiCurrent(v23, v22);
      *(_QWORD *)&v56 = *((_QWORD *)v24 + 48);
      *((_QWORD *)v24 + 48) = &v56;
      *((_QWORD *)&v56 + 1) = v12;
      v57 = Win32FreePool;
    }
    v25 = BugCheckParameter3[0];
    *((_QWORD *)v12 + 5) = BugCheckParameter3[0];
    v12[12] = v51;
    *((_QWORD *)v12 + 7) = RegionSize;
    *(_DWORD *)(a4 + 44) = 0;
    *((_OWORD *)v12 + 4) = *(_OWORD *)a4;
    *((_OWORD *)v12 + 5) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)v12 + 6) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)v12 + 14) = *(_QWORD *)(a4 + 48);
    if ( !(_DWORD)v8 )
      goto LABEL_38;
    v26 = (void **)(v12 + 18);
    v27 = *(_DWORD *)(a4 + 56);
    v28 = *(CHAR **)(a4 + 64);
    if ( *(int *)(a4 + 60) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v29 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v28, 2 * v27 + 2, v26);
LABEL_37:
        if ( v29 < 0 )
          goto LABEL_57;
LABEL_38:
        if ( !(_DWORD)v9 )
        {
LABEL_48:
          *((_QWORD *)v12 + 15) = a5;
          *((_QWORD *)v12 + 16) = a6;
          v36 = v49;
          Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v49);
          v39 = v53;
          v40 = *((_QWORD *)v53 + 65);
          v58 = *(_OWORD *)(v40 + 64);
          v59 = *(_QWORD *)(v40 + 80);
          *(_QWORD *)(*((_QWORD *)v53 + 65) + 72LL) = v25;
          if ( v36 )
            v41 = *v36;
          else
            v41 = 0LL;
          *(_QWORD *)(*((_QWORD *)v39 + 65) + 64LL) = v41;
          if ( v36 )
            v42 = *(_QWORD *)(v36[5] + 224);
          else
            v42 = 0LL;
          *(_QWORD *)(*((_QWORD *)v39 + 65) + 80LL) = v42;
          LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v53, v37, v38);
          EtwTraceBeginCallback(15LL);
          *((_QWORD *)v12 + 2) = 0LL;
          v43 = KeUserModeCallback(15LL, v12, (unsigned int)*v12, &Src, &v48);
          EtwTraceEndCallback(15LL);
          LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v53);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v44);
          v45 = *((_QWORD *)v39 + 65);
          *(_OWORD *)(v45 + 64) = v58;
          *(_QWORD *)(v45 + 80) = v59;
          if ( v43 >= 0 && v48 == 24 )
          {
            v49 = 0LL;
            RtlCopyFromUser(&v49, Src, 8uLL);
            v46 = (__int64)v49;
            v60 = (__int64)v49;
            goto LABEL_58;
          }
          goto LABEL_57;
        }
        v31 = (void **)(v12 + 16);
        v32 = *(_DWORD *)(a4 + 72);
        v33 = *(CHAR **)(a4 + 80);
        if ( *(int *)(a4 + 76) < 0 )
        {
          if ( (a7 & 1) == 0 )
          {
            v34 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v33, 2 * v32 + 2, v31);
LABEL_47:
            if ( v34 < 0 )
              goto LABEL_57;
            goto LABEL_48;
          }
          v35 = v32 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v34 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v33, (PCWCH)((v32 >> 1) + 1), v31, 0);
            goto LABEL_47;
          }
          v35 = v32 + 2;
        }
        v34 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v33, v35, v31);
        goto LABEL_47;
      }
      v30 = v27 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v29 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v28, (PCWCH)((v27 >> 1) + 1), v26, 0);
        goto LABEL_37;
      }
      v30 = v27 + 2;
    }
    v29 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v28, v30, v26);
    goto LABEL_37;
  }
LABEL_57:
  v46 = 0LL;
LABEL_58:
  if ( v12 != &v61 && v12 != (int *)v63 )
  {
    v47 = (PVOID *)(v12 + 8);
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v47, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v56, (__int64)v47);
  }
  return (unsigned __int8 *)v46;
}
