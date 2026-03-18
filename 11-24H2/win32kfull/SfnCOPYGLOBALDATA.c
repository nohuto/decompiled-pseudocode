/*
 * XREFs of SfnCOPYGLOBALDATA @ 0x140203210
 * Callers:
 *     xxxDefWindowProc @ 0x14007E7C0 (xxxDefWindowProc.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x14007F440 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x140080630 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140119C04 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140280A70 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14011349C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1401753E8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x140250FE8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall SfnCOPYGLOBALDATA(_QWORD *a1, __int64 a2, __int64 a3, void *a4)
{
  struct tagTHREADINFO *v7; // rax
  struct tagTHREADINFO *v8; // rsi
  __int64 v9; // r14
  unsigned __int8 *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG_PTR v23; // rdi
  PVOID *v24; // rdx
  int v25; // [rsp+30h] [rbp-328h] BYREF
  ULONG_PTR RegionSize[4]; // [rsp+38h] [rbp-320h] BYREF
  void *Src; // [rsp+58h] [rbp-300h] BYREF
  __int128 v28; // [rsp+60h] [rbp-2F8h] BYREF
  void (*v29)(void *); // [rsp+70h] [rbp-2E8h]
  _BYTE v30[8]; // [rsp+80h] [rbp-2D8h] BYREF
  __int128 v31; // [rsp+88h] [rbp-2D0h]
  __int64 v32; // [rsp+98h] [rbp-2C0h]
  ULONG_PTR BugCheckParameter3[6]; // [rsp+A0h] [rbp-2B8h] BYREF
  _OWORD v34[3]; // [rsp+D0h] [rbp-288h] BYREF
  __int64 v35; // [rsp+100h] [rbp-258h]
  unsigned __int8 v36[512]; // [rsp+110h] [rbp-248h] BYREF

  memset(v34, 0, sizeof(v34));
  v35 = 0LL;
  Src = 0LL;
  v25 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v7 = PtiCurrent((__int64)a1, a2);
  v8 = v7;
  if ( a1 )
    v9 = a1[5] - *((_QWORD *)v7 + 64);
  else
    v9 = 0LL;
  result = AllocCallbackMessage(56, 1u, a3, v36, 1, 0x200uLL);
  v13 = result;
  RegionSize[3] = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrent(v12, v11);
    v28 = 0LL;
    v29 = 0LL;
    if ( v13 != (unsigned __int8 *)v34 && v13 != v36 )
    {
      v16 = PtiCurrent(v15, v14);
      *(_QWORD *)&v28 = *((_QWORD *)v16 + 48);
      *((_QWORD *)v16 + 48) = &v28;
      *((_QWORD *)&v28 + 1) = v13;
      v29 = Win32FreePool;
    }
    if ( !a4 )
      goto LABEL_19;
    *((_DWORD *)v13 + 10) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v13, a4, (unsigned int)a3, (void **)v13 + 6) < 0 )
      goto LABEL_19;
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
    v17 = *((_QWORD *)v8 + 65);
    v31 = *(_OWORD *)(v17 + 64);
    v32 = *(_QWORD *)(v17 + 80);
    *(_QWORD *)(*((_QWORD *)v8 + 65) + 72LL) = v9;
    v18 = a1 ? *a1 : 0LL;
    *(_QWORD *)(*((_QWORD *)v8 + 65) + 64LL) = v18;
    v19 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
    *(_QWORD *)(*((_QWORD *)v8 + 65) + 80LL) = v19;
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v30);
    EtwTraceBeginCallback(1LL);
    *((_QWORD *)v13 + 2) = 0LL;
    v20 = KeUserModeCallback(1LL, v13, *(unsigned int *)v13, &Src, &v25);
    EtwTraceEndCallback(1LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v30);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v21);
    v22 = *((_QWORD *)v8 + 65);
    *(_OWORD *)(v22 + 64) = v31;
    *(_QWORD *)(v22 + 80) = v32;
    if ( v20 < 0 )
      goto LABEL_19;
    if ( v25 == 24 )
    {
      RegionSize[0] = 0LL;
      RtlCopyFromUser(RegionSize, Src, 8uLL);
      v23 = RegionSize[0];
      BugCheckParameter3[2] = RegionSize[0];
    }
    else
    {
LABEL_19:
      v23 = 0LL;
    }
    if ( v13 != (unsigned __int8 *)v34 && v13 != v36 )
    {
      v24 = (PVOID *)(v13 + 32);
      if ( *((_QWORD *)v13 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v24, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v28, (__int64)v24);
    }
    return (unsigned __int8 *)v23;
  }
  return result;
}
