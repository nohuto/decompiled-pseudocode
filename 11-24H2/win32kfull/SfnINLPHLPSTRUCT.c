/*
 * XREFs of SfnINLPHLPSTRUCT @ 0x1402B8E90
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
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x140250FE8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnINLPHLPSTRUCT(_QWORD *a1, unsigned int a2, __int64 a3, char *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // r14
  unsigned __int8 *result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int8 *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagTHREADINFO *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  ULONG_PTR v30; // rdi
  PVOID *v31; // rdx
  int v32; // [rsp+30h] [rbp-338h] BYREF
  ULONG_PTR RegionSize[4]; // [rsp+38h] [rbp-330h] BYREF
  void *Src; // [rsp+58h] [rbp-310h] BYREF
  __int128 v35; // [rsp+60h] [rbp-308h] BYREF
  void (*v36)(void *); // [rsp+70h] [rbp-2F8h]
  _BYTE v37[8]; // [rsp+80h] [rbp-2E8h] BYREF
  __int128 v38; // [rsp+88h] [rbp-2E0h]
  __int64 v39; // [rsp+98h] [rbp-2D0h]
  ULONG_PTR BugCheckParameter3[6]; // [rsp+A0h] [rbp-2C8h] BYREF
  unsigned __int8 v41[96]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v42[512]; // [rsp+130h] [rbp-238h] BYREF

  memset_0(v41, 0, 0x58uLL);
  Src = 0LL;
  v32 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v12 = PtiCurrent(v11, v10);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 64);
  else
    v14 = 0LL;
  result = AllocCallbackMessage(88, 1u, *(unsigned __int16 *)a4, v42, 1, 0x200uLL);
  v18 = result;
  RegionSize[3] = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrent(v17, v16);
    v35 = 0LL;
    v36 = 0LL;
    if ( v18 != v41 && v18 != v42 )
    {
      v21 = PtiCurrent(v20, v19);
      *(_QWORD *)&v35 = *((_QWORD *)v21 + 48);
      *((_QWORD *)v21 + 48) = &v35;
      *((_QWORD *)&v35 + 1) = v18;
      v36 = Win32FreePool;
    }
    *((_QWORD *)v18 + 5) = v14;
    *((_DWORD *)v18 + 12) = a2;
    *((_QWORD *)v18 + 7) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v18, a4, *(unsigned __int16 *)a4, (void **)v18 + 8) < 0 )
      goto LABEL_18;
    *((_QWORD *)v18 + 9) = a5;
    *((_QWORD *)v18 + 10) = a6;
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
    v24 = *((_QWORD *)v13 + 65);
    v38 = *(_OWORD *)(v24 + 64);
    v39 = *(_QWORD *)(v24 + 80);
    *(_QWORD *)(*((_QWORD *)v13 + 65) + 72LL) = v14;
    v25 = a1 ? *a1 : 0LL;
    *(_QWORD *)(*((_QWORD *)v13 + 65) + 64LL) = v25;
    v26 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
    *(_QWORD *)(*((_QWORD *)v13 + 65) + 80LL) = v26;
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v37, v22, v23);
    EtwTraceBeginCallback(14LL);
    *((_QWORD *)v18 + 2) = 0LL;
    v27 = KeUserModeCallback(14LL, v18, *(unsigned int *)v18, &Src, &v32);
    EtwTraceEndCallback(14LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v37);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v28);
    v29 = *((_QWORD *)v13 + 65);
    *(_OWORD *)(v29 + 64) = v38;
    *(_QWORD *)(v29 + 80) = v39;
    if ( v27 < 0 )
      goto LABEL_18;
    if ( v32 == 24 )
    {
      RegionSize[0] = 0LL;
      RtlCopyFromUser(RegionSize, Src, 8uLL);
      v30 = RegionSize[0];
      BugCheckParameter3[2] = RegionSize[0];
    }
    else
    {
LABEL_18:
      v30 = 0LL;
    }
    if ( v18 != v41 && v18 != v42 )
    {
      v31 = (PVOID *)(v18 + 32);
      if ( *((_QWORD *)v18 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v31, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v35, (__int64)v31);
    }
    return (unsigned __int8 *)v30;
  }
  return result;
}
