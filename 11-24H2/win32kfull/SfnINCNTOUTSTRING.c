/*
 * XREFs of SfnINCNTOUTSTRING @ 0x1401F4340
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
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x14011C730 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1401753E8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x140196E58 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x140198814 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRING(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  struct tagTHREADINFO *v14; // r13
  __int64 v15; // r15
  unsigned int v16; // eax
  unsigned __int64 v17; // rsi
  unsigned __int8 *result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rax
  __int16 v24; // dx
  __int16 v25; // ax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // esi
  __int64 v30; // rdx
  __int64 v31; // rcx
  ULONG_PTR v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _WORD *v36; // rax
  PVOID *v37; // rdx
  unsigned __int16 v39; // [rsp+30h] [rbp-398h]
  int v40; // [rsp+34h] [rbp-394h] BYREF
  int v41; // [rsp+38h] [rbp-390h]
  unsigned __int8 *v42; // [rsp+40h] [rbp-388h]
  unsigned int v43[2]; // [rsp+48h] [rbp-380h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+50h] [rbp-378h] BYREF
  void *Src; // [rsp+68h] [rbp-360h] BYREF
  __int128 v46; // [rsp+70h] [rbp-358h] BYREF
  void (*v47)(void *); // [rsp+80h] [rbp-348h]
  char v48[8]; // [rsp+90h] [rbp-338h] BYREF
  __int128 v49; // [rsp+98h] [rbp-330h]
  __int64 v50; // [rsp+A8h] [rbp-320h]
  __int128 v51; // [rsp+B0h] [rbp-318h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-308h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+C8h] [rbp-300h] BYREF
  __int128 v54; // [rsp+D8h] [rbp-2F0h] BYREF
  __int64 v55; // [rsp+E8h] [rbp-2E0h]
  unsigned __int8 v56[112]; // [rsp+120h] [rbp-2A8h] BYREF
  unsigned __int8 v57[512]; // [rsp+190h] [rbp-238h] BYREF

  *(_QWORD *)v43 = a3;
  v41 = a7 & 1;
  memset_0(v56, 0, 0x68uLL);
  v10 = v56;
  Src = 0LL;
  v40 = 0;
  RegionSize[0] = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v13 = PtiCurrent(v12, v11);
  v14 = v13;
  if ( a1 )
    v15 = a1[5] - *((_QWORD *)v13 + 64);
  else
    v15 = 0LL;
  v16 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v17 = v16 + 2;
  if ( (unsigned int)v17 < v16 )
    goto LABEL_35;
  if ( *(int *)(a4 + 4) < 0 && !v41 )
  {
    v17 *= 2LL;
    if ( v17 > 0xFFFFFFFF )
      goto LABEL_35;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v17, v57, 0, 0x200uLL);
  v10 = result;
  v42 = result;
  if ( !result )
    return result;
  PtiCurrent(v20, v19);
  v46 = 0LL;
  v47 = 0LL;
  if ( v10 != v56 && v10 != v57 )
  {
    v23 = PtiCurrent(v22, v21);
    *(_QWORD *)&v46 = *((_QWORD *)v23 + 48);
    *((_QWORD *)v23 + 48) = &v46;
    *((_QWORD *)&v46 + 1) = v10;
    v47 = Win32FreePool;
  }
  *((_QWORD *)v10 + 5) = v15;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = *(_QWORD *)v43;
  v24 = *(_WORD *)(a4 + 4) >> 1;
  if ( *(int *)(a4 + 4) < 0 )
    v24 = *(_WORD *)(a4 + 4);
  v39 = v24;
  v25 = -1;
  if ( v24 != -1 )
    v25 = v24;
  *((_WORD *)v10 + 40) = v25;
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v10, v17, (void **)v10 + 11) < 0 )
    goto LABEL_35;
  *((_DWORD *)v10 + 24) = v17;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v26 = *((_QWORD *)v14 + 65);
  v49 = *(_OWORD *)(v26 + 64);
  v50 = *(_QWORD *)(v26 + 80);
  *(_QWORD *)(*((_QWORD *)v14 + 65) + 72LL) = v15;
  v27 = 0LL;
  if ( a1 )
    v27 = *a1;
  *(_QWORD *)(*((_QWORD *)v14 + 65) + 64LL) = v27;
  v28 = a1 ? *(_QWORD *)(a1[5] + 224) : 0LL;
  *(_QWORD *)(*((_QWORD *)v14 + 65) + 80LL) = v28;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v48);
  EtwTraceBeginCallback(7LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v29 = KeUserModeCallback(7LL, v10, *(unsigned int *)v10, &Src, &v40);
  EtwTraceEndCallback(7LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v48);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v30);
  v31 = *((_QWORD *)v14 + 65);
  *(_OWORD *)(v31 + 64) = v49;
  *(_QWORD *)(v31 + 80) = v50;
  if ( v29 < 0 || v40 != 24 )
    goto LABEL_35;
  *(_QWORD *)v43 = 0LL;
  RtlCopyFromUser(v43, Src, 8uLL);
  v32 = *(_QWORD *)v43;
  RegionSize[0] = *(_QWORD *)v43;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_36;
  if ( !*(_QWORD *)v43 )
  {
    v36 = *(_WORD **)(a4 + 8);
    if ( *(int *)(a4 + 4) >= 0 )
      *v36 = 0;
    else
      *(_BYTE *)v36 = 0;
    goto LABEL_36;
  }
  v51 = 0LL;
  v52 = 0LL;
  RtlCopyFromUser(&v51, Src, 0x18uLL);
  v54 = v51;
  v55 = v52;
  v35 = *((_QWORD *)PtiCurrent(v34, v33) + 69);
  if ( v35 && (*(_DWORD *)(v35 + 84) & 1) != 0 && *(_QWORD *)(v35 + 96) == a4 )
  {
LABEL_35:
    v32 = 0LL;
  }
  else
  {
    v32 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v54, v32, *(_DWORD *)(a4 + 4) >> 31, v41);
    RegionSize[0] = v32;
    CopyOutputString((volatile void **)&v54, (struct _LARGE_STRING *)a4, v39, v41);
  }
LABEL_36:
  if ( v10 != v56 && v10 != v57 )
  {
    v37 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v37, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v46, (__int64)v37);
  }
  return (unsigned __int8 *)v32;
}
