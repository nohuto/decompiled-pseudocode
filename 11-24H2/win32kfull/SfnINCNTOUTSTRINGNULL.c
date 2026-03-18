/*
 * XREFs of SfnINCNTOUTSTRINGNULL @ 0x1402B8A10
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

unsigned __int8 *__fastcall SfnINCNTOUTSTRINGNULL(
        _QWORD *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
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
  unsigned int v17; // eax
  unsigned __int64 v18; // rdi
  unsigned __int8 *result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct tagTHREADINFO *v24; // rax
  ULONG_PTR v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  PVOID *v38; // rdx
  int v39; // [rsp+30h] [rbp-388h] BYREF
  int v40; // [rsp+34h] [rbp-384h]
  unsigned __int8 *v41; // [rsp+38h] [rbp-380h]
  ULONG_PTR RegionSize[3]; // [rsp+40h] [rbp-378h] BYREF
  void *Src; // [rsp+58h] [rbp-360h] BYREF
  unsigned int v44[2]; // [rsp+60h] [rbp-358h] BYREF
  __int64 v45; // [rsp+68h] [rbp-350h]
  __int128 v46; // [rsp+70h] [rbp-348h] BYREF
  void (*v47)(void *); // [rsp+80h] [rbp-338h]
  _BYTE v48[8]; // [rsp+90h] [rbp-328h] BYREF
  __int128 v49; // [rsp+98h] [rbp-320h]
  __int64 v50; // [rsp+A8h] [rbp-310h]
  __m128i v51; // [rsp+B0h] [rbp-308h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-2F8h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+C8h] [rbp-2F0h] BYREF
  __m128i v54; // [rsp+D8h] [rbp-2E0h] BYREF
  __int64 v55; // [rsp+E8h] [rbp-2D0h]
  unsigned __int8 v56[96]; // [rsp+110h] [rbp-2A8h] BYREF
  unsigned __int8 v57[512]; // [rsp+170h] [rbp-248h] BYREF

  RegionSize[0] = a3;
  v40 = a7 & 1;
  memset_0(v56, 0, sizeof(v56));
  v11 = v56;
  Src = 0LL;
  v39 = 0;
  v45 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v14 = PtiCurrent(v13, v12);
  v15 = v14;
  if ( a1 )
    v16 = a1[5] - *((_QWORD *)v14 + 64);
  else
    v16 = 0LL;
  v17 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v18 = v17 + 2;
  if ( (unsigned int)v18 < v17 )
    goto LABEL_31;
  if ( *(int *)(a4 + 4) < 0 && !v40 )
  {
    v18 *= 2LL;
    if ( v18 > 0xFFFFFFFF )
      goto LABEL_31;
  }
  result = AllocCallbackMessage(96, 1u, (unsigned int)v18, v57, 0, 0x200uLL);
  v11 = result;
  v41 = result;
  if ( !result )
    return result;
  PtiCurrent(v21, v20);
  v46 = 0LL;
  v47 = 0LL;
  if ( v11 != v56 && v11 != v57 )
  {
    v24 = PtiCurrent(v23, v22);
    *(_QWORD *)&v46 = *((_QWORD *)v24 + 48);
    *((_QWORD *)v24 + 48) = &v46;
    *((_QWORD *)&v46 + 1) = v11;
    v47 = Win32FreePool;
  }
  v25 = RegionSize[0];
  if ( RegionSize[0] < 2 )
    goto LABEL_31;
  *((_QWORD *)v11 + 5) = v16;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = v25;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v18, (void **)v11 + 10) < 0 )
    goto LABEL_31;
  *((_DWORD *)v11 + 22) = v18;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v28 = *((_QWORD *)v15 + 65);
  v49 = *(_OWORD *)(v28 + 64);
  v50 = *(_QWORD *)(v28 + 80);
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 72LL) = v16;
  v29 = a1 ? *a1 : 0LL;
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 64LL) = v29;
  v30 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 80LL) = v30;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v48, v26, v27);
  EtwTraceBeginCallback(8LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v31 = KeUserModeCallback(8LL, v11, *(unsigned int *)v11, &Src, &v39);
  EtwTraceEndCallback(8LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v48);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v32);
  v33 = *((_QWORD *)v15 + 65);
  *(_OWORD *)(v33 + 64) = v49;
  *(_QWORD *)(v33 + 80) = v50;
  if ( v31 < 0 || v39 != 24 )
    goto LABEL_31;
  *(_QWORD *)v44 = 0LL;
  RtlCopyFromUser(v44, Src, 8uLL);
  v34 = *(_QWORD *)v44;
  v45 = *(_QWORD *)v44;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 )
    goto LABEL_32;
  if ( (a7 & 2) != 0 )
    goto LABEL_32;
  v51 = 0LL;
  v52 = 0LL;
  RtlCopyFromUser(&v51, Src, 0x18uLL);
  v54 = v51;
  v55 = v52;
  if ( !_mm_cvtsi128_si32(_mm_srli_si128(v51, 8)) )
    goto LABEL_32;
  v37 = *((_QWORD *)PtiCurrent(v36, v35) + 69);
  if ( v37 && (*(_DWORD *)(v37 + 84) & 1) != 0 && *(_QWORD *)(v37 + 96) == a4 )
  {
LABEL_31:
    v34 = 0LL;
  }
  else
  {
    v34 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v54, v34, *(_DWORD *)(a4 + 4) >> 31, v40);
    v45 = v34;
    CopyOutputString((volatile void **)&v54, (struct _LARGE_STRING *)a4, RegionSize[0], v40);
  }
LABEL_32:
  if ( v11 != v56 && v11 != v57 )
  {
    v38 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v38, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v46, (__int64)v38);
  }
  return (unsigned __int8 *)v34;
}
