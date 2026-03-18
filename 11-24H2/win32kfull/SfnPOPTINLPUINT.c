/*
 * XREFs of SfnPOPTINLPUINT @ 0x1402BAB30
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

unsigned __int8 *__fastcall SfnPOPTINLPUINT(__int64 *a1, int a2, __int64 a3, char *a4, __int64 a5, __int64 a6)
{
  int *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // r14
  unsigned int v15; // edx
  unsigned __int64 v16; // r15
  unsigned __int8 *result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagTHREADINFO *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // rcx
  ULONG_PTR v31; // rdi
  PVOID *v32; // rdx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-348h] BYREF
  int v34; // [rsp+38h] [rbp-340h] BYREF
  ULONG_PTR v35[3]; // [rsp+40h] [rbp-338h] BYREF
  void *Src; // [rsp+58h] [rbp-320h] BYREF
  __int128 v37; // [rsp+60h] [rbp-318h] BYREF
  void (*v38)(void *); // [rsp+70h] [rbp-308h]
  _BYTE v39[8]; // [rsp+80h] [rbp-2F8h] BYREF
  __int128 v40; // [rsp+88h] [rbp-2F0h]
  __int64 v41; // [rsp+98h] [rbp-2E0h]
  ULONG_PTR BugCheckParameter3[6]; // [rsp+A0h] [rbp-2D8h] BYREF
  int v43; // [rsp+D0h] [rbp-2A8h] BYREF
  _BYTE v44[92]; // [rsp+D4h] [rbp-2A4h] BYREF
  unsigned __int8 v45[512]; // [rsp+130h] [rbp-248h] BYREF

  LODWORD(v35[0]) = a2;
  memset_0(&v43, 0, 0x58uLL);
  v9 = &v43;
  Src = 0LL;
  v34 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v12 = PtiCurrent(v11, v10);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 64);
  else
    v14 = 0LL;
  if ( a4 )
  {
    v15 = 1;
    v16 = 4LL * (unsigned int)a3;
    if ( v16 > 0xFFFFFFFF )
      goto LABEL_28;
  }
  else
  {
    LODWORD(v16) = 0;
    v15 = 0;
  }
  if ( v15 )
  {
    result = AllocCallbackMessage(88, v15, (unsigned int)v16, v45, 1, 0x200uLL);
    v9 = (int *)result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = &v43;
    RegionSize = (ULONG_PTR)&v43;
    memset_0(v44, 0, 0x54uLL);
    v43 = 88;
  }
  PtiCurrent(v19, v18);
  v37 = 0LL;
  v38 = 0LL;
  if ( v9 != &v43 && v9 != (int *)v45 )
  {
    v22 = PtiCurrent(v21, v20);
    *(_QWORD *)&v37 = *((_QWORD *)v22 + 48);
    *((_QWORD *)v22 + 48) = &v37;
    *((_QWORD *)&v37 + 1) = v9;
    v38 = Win32FreePool;
  }
  *((_QWORD *)v9 + 5) = v14;
  v9[12] = v35[0];
  *((_QWORD *)v9 + 7) = a3;
  if ( a4 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v9, a4, (unsigned int)v16, (void **)v9 + 8) < 0 )
      goto LABEL_28;
  }
  else
  {
    *((_QWORD *)v9 + 8) = 0LL;
  }
  *((_QWORD *)v9 + 9) = a5;
  *((_QWORD *)v9 + 10) = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v25 = *((_QWORD *)v13 + 65);
  v40 = *(_OWORD *)(v25 + 64);
  v41 = *(_QWORD *)(v25 + 80);
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 72LL) = v14;
  if ( a1 )
    v26 = *a1;
  else
    v26 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 64LL) = v26;
  if ( a1 )
    v27 = *(_QWORD *)(a1[5] + 224);
  else
    v27 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 80LL) = v27;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v39, v23, v24);
  EtwTraceBeginCallback(36LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v28 = KeUserModeCallback(36LL, v9, (unsigned int)*v9, &Src, &v34);
  EtwTraceEndCallback(36LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v39);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v29);
  v30 = *((_QWORD *)v13 + 65);
  *(_OWORD *)(v30 + 64) = v40;
  *(_QWORD *)(v30 + 80) = v41;
  if ( v28 >= 0 && v34 == 24 )
  {
    v35[0] = 0LL;
    RtlCopyFromUser(v35, Src, 8uLL);
    v31 = v35[0];
    BugCheckParameter3[2] = v35[0];
    goto LABEL_29;
  }
LABEL_28:
  v31 = 0LL;
LABEL_29:
  if ( v9 != &v43 && v9 != (int *)v45 )
  {
    v32 = (PVOID *)(v9 + 8);
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v32, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v37, (__int64)v32);
  }
  return (unsigned __int8 *)v31;
}
