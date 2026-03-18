/*
 * XREFs of SfnPOUTLPINT @ 0x1402BAED0
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
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x140198814 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x140250FE8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
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
  struct tagTHREADINFO *v14; // rax
  struct tagTHREADINFO *v15; // r15
  __int64 v16; // r14
  unsigned __int64 v17; // rdi
  unsigned __int8 *result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rax
  void *v24; // r13
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // esi
  __int64 v31; // rdx
  __int64 v32; // rcx
  void *v33; // rsi
  PVOID *v34; // rdx
  int v35; // [rsp+30h] [rbp-398h] BYREF
  void *Src[5]; // [rsp+38h] [rbp-390h] BYREF
  void *v37; // [rsp+60h] [rbp-368h] BYREF
  SIZE_T Length; // [rsp+68h] [rbp-360h] BYREF
  __int128 v39; // [rsp+70h] [rbp-358h] BYREF
  volatile void *Address; // [rsp+80h] [rbp-348h]
  __int128 v41; // [rsp+88h] [rbp-340h] BYREF
  void (*v42)(void *); // [rsp+98h] [rbp-330h]
  _BYTE v43[8]; // [rsp+B0h] [rbp-318h] BYREF
  __int128 v44; // [rsp+B8h] [rbp-310h]
  __int64 v45; // [rsp+C8h] [rbp-300h]
  ULONG_PTR BugCheckParameter3[7]; // [rsp+D0h] [rbp-2F8h] BYREF
  __int128 v47; // [rsp+108h] [rbp-2C0h]
  volatile void *v48; // [rsp+118h] [rbp-2B0h]
  unsigned __int8 v49[96]; // [rsp+120h] [rbp-2A8h] BYREF
  unsigned __int8 v50[512]; // [rsp+180h] [rbp-248h] BYREF

  Src[0] = a4;
  memset_0(v49, 0, sizeof(v49));
  v11 = v49;
  v37 = 0LL;
  v35 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v14 = PtiCurrent(v13, v12);
  v15 = v14;
  if ( a1 )
    v16 = a1[5] - *((_QWORD *)v14 + 64);
  else
    v16 = 0LL;
  v17 = 4LL * (unsigned int)a3;
  if ( v17 > 0xFFFFFFFF )
    goto LABEL_27;
  Length = (unsigned int)v17;
  result = AllocCallbackMessage(96, 1u, (unsigned int)v17, v50, 0, 0x200uLL);
  v11 = result;
  Src[1] = result;
  if ( !result )
    return result;
  PtiCurrent(v20, v19);
  v41 = 0LL;
  v42 = 0LL;
  if ( v11 != v49 && v11 != v50 )
  {
    v23 = PtiCurrent(v22, v21);
    *(_QWORD *)&v41 = *((_QWORD *)v23 + 48);
    *((_QWORD *)v23 + 48) = &v41;
    *((_QWORD *)&v41 + 1) = v11;
    v42 = Win32FreePool;
  }
  *((_QWORD *)v11 + 5) = v16;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = a3;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (a7 & 2) != 0 )
  {
    *((_DWORD *)v11 + 22) = v17;
    v24 = Src[0];
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, (char *)Src[0], (unsigned int)v17, (void **)v11 + 10) < 0 )
      goto LABEL_27;
  }
  else
  {
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v17, (void **)v11 + 10) < 0 )
      goto LABEL_27;
    *((_DWORD *)v11 + 22) = v17;
    v24 = Src[0];
  }
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v27 = *((_QWORD *)v15 + 65);
  v44 = *(_OWORD *)(v27 + 64);
  v45 = *(_QWORD *)(v27 + 80);
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 72LL) = v16;
  if ( a1 )
    v28 = *a1;
  else
    v28 = 0LL;
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 64LL) = v28;
  if ( a1 )
    v29 = *(_QWORD *)(a1[5] + 224);
  else
    v29 = 0LL;
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 80LL) = v29;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v43, v25, v26);
  EtwTraceBeginCallback(37LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v30 = KeUserModeCallback(37LL, v11, *(unsigned int *)v11, &v37, &v35);
  EtwTraceEndCallback(37LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v43);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v31);
  v32 = *((_QWORD *)v15 + 65);
  *(_OWORD *)(v32 + 64) = v44;
  *(_QWORD *)(v32 + 80) = v45;
  if ( v30 >= 0 && v35 == 24 )
  {
    Src[0] = 0LL;
    RtlCopyFromUser(Src, v37, 8uLL);
    v33 = Src[0];
    BugCheckParameter3[2] = (ULONG_PTR)Src[0];
    if ( (_DWORD)v17 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v39 = 0LL;
      Address = 0LL;
      RtlCopyFromUser(&v39, v37, 0x18uLL);
      v47 = v39;
      v48 = Address;
      ProbeForRead(Address, Length, 4u);
      memmove(v24, (const void *)Address, Length);
    }
    goto LABEL_28;
  }
LABEL_27:
  v33 = 0LL;
LABEL_28:
  if ( v11 != v49 && v11 != v50 )
  {
    v34 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      Length = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v34, &Length, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v41, (__int64)v34);
  }
  return (unsigned __int8 *)v33;
}
