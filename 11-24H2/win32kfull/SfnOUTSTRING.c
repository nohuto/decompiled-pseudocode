/*
 * XREFs of SfnOUTSTRING @ 0x140176180
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
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x140196E58 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall SfnOUTSTRING(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  ULONG_PTR v8; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  unsigned int v16; // eax
  unsigned __int64 v17; // r14
  ULONG_PTR v18; // rsi
  __int64 v19; // rax
  _DWORD *v20; // rdi
  _QWORD *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  _DWORD *v24; // rax
  __int128 *v26; // rcx
  struct tagTHREADINFO *v27; // rax
  struct tagTHREADINFO *v28; // rcx
  _QWORD *v29; // r8
  __int64 v30; // rcx
  struct tagTHREADINFO *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // edi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  _WORD *v42; // rax
  _BYTE *v43; // rcx
  PVOID *v44; // rdx
  int v45; // [rsp+30h] [rbp-3A8h] BYREF
  int v46; // [rsp+34h] [rbp-3A4h]
  int v47; // [rsp+38h] [rbp-3A0h]
  unsigned int v48[2]; // [rsp+40h] [rbp-398h]
  unsigned int v49[2]; // [rsp+48h] [rbp-390h] BYREF
  __int64 v50; // [rsp+50h] [rbp-388h]
  void *Src; // [rsp+68h] [rbp-370h] BYREF
  ULONG_PTR v52; // [rsp+70h] [rbp-368h] BYREF
  struct tagTHREADINFO *v53; // [rsp+78h] [rbp-360h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-358h] BYREF
  _BYTE *v55; // [rsp+88h] [rbp-350h]
  __int128 v56; // [rsp+90h] [rbp-348h] BYREF
  void (*v57)(void *); // [rsp+A0h] [rbp-338h]
  __int128 v58; // [rsp+B0h] [rbp-328h]
  __int64 v59; // [rsp+C0h] [rbp-318h]
  __int128 v60; // [rsp+C8h] [rbp-310h] BYREF
  __int64 v61; // [rsp+D8h] [rbp-300h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+E0h] [rbp-2F8h] BYREF
  __int128 v63; // [rsp+F0h] [rbp-2E8h] BYREF
  __int64 v64; // [rsp+100h] [rbp-2D8h]
  _BYTE v65[96]; // [rsp+130h] [rbp-2A8h] BYREF
  _BYTE v66[512]; // [rsp+190h] [rbp-248h] BYREF

  v8 = a4;
  v52 = a4;
  *(_QWORD *)v48 = a3;
  v49[0] = a2;
  v46 = a7 & 1;
  v47 = 0;
  memset_0(v65, 0, sizeof(v65));
  v55 = v65;
  Src = 0LL;
  v45 = 0;
  v50 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v12 = PtiCurrent(v11, v10);
  v53 = v12;
  if ( a1 )
    v15 = a1[5] - *((_QWORD *)v12 + 64);
  else
    v15 = 0LL;
  v16 = *(_DWORD *)(v8 + 4) & 0x7FFFFFFF;
  v17 = v16 + 2;
  if ( (unsigned int)v17 < v16 )
    goto LABEL_52;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v14, v13) + 132, 0, 0) & 0x8000000) == 0
    && *(int *)(v8 + 4) < 0
    && (a7 & 1) == 0 )
  {
    v17 *= 2LL;
    if ( v17 > 0xFFFFFFFF )
      goto LABEL_52;
  }
  v18 = ((unsigned int)v17 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  RegionSize = v18;
  if ( v18 <= 0x800 )
  {
    if ( v18 + 104 <= 0x200 )
    {
      v20 = v66;
      memset_0(v66, 0, sizeof(v66));
    }
    else
    {
      v20 = (_DWORD *)Win32AllocPoolWithQuotaZInit((unsigned int)(v18 + 104), 1667461973LL);
      if ( !v20 )
        return 0LL;
    }
    v24 = v20 + 26;
    *((_QWORD *)v20 + 4) = 0LL;
  }
  else
  {
    v19 = Win32AllocPoolWithQuotaZInit(104LL, 1667461973LL);
    v20 = (_DWORD *)v19;
    if ( !v19 )
      return 0LL;
    v21 = (_QWORD *)(v19 + 32);
    *(_QWORD *)(v19 + 32) = 0LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v19 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    {
      Win32FreePool(v20);
      return 0LL;
    }
    v24 = (_DWORD *)*v21;
    v8 = v52;
  }
  *v20 = 104;
  *((_QWORD *)v20 + 2) = v24;
  v20[1] = RegionSize;
  v20[2] = 0;
  v20[6] = 96;
  v55 = v20;
  PtiCurrent(v23, v22);
  v56 = 0LL;
  v57 = 0LL;
  if ( v20 != (_DWORD *)v65 && v20 != (_DWORD *)v66 )
  {
    v27 = PtiCurrent((__int64)v26, v13);
    *(_QWORD *)&v56 = *((_QWORD *)v27 + 48);
    v26 = &v56;
    *((_QWORD *)v27 + 48) = &v56;
    *((_QWORD *)&v56 + 1) = v20;
    v57 = Win32FreePool;
  }
  *((_QWORD *)v20 + 5) = v15;
  v20[12] = v49[0];
  if ( v46 )
  {
    if ( *(int *)(v8 + 4) >= 0 )
    {
      *((_QWORD *)v20 + 7) = 2LL * *(_QWORD *)v48;
      _InterlockedOr((volatile signed __int32 *)PtiCurrent((__int64)v26, v13) + 132, 0x8000000u);
      v47 = 1;
      goto LABEL_29;
    }
  }
  else
  {
    v28 = PtiCurrent((__int64)v26, v13);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v28 + 132, 0, 0) & 0x8000000) != 0 )
    {
      *((_QWORD *)v20 + 7) = *(_QWORD *)v48 >> 1;
      _InterlockedAnd((volatile signed __int32 *)PtiCurrent((__int64)v28, v13) + 132, 0xF7FFFFFF);
      goto LABEL_29;
    }
  }
  *((_QWORD *)v20 + 7) = *(_QWORD *)v48;
LABEL_29:
  *((_QWORD *)v20 + 8) = a5;
  *((_QWORD *)v20 + 9) = a6;
  v29 = v20 + 20;
  if ( (unsigned int)v17 <= v20[1] )
  {
    v30 = *((_QWORD *)v20 + 2);
    *((_QWORD *)v20 + 2) = v18 + v30;
    if ( *((_QWORD *)v20 + 4) )
    {
      *v29 = v30;
    }
    else
    {
      *v29 = v30 - (_QWORD)v20;
      *(_DWORD *)((char *)&v20[v20[2]++] + (unsigned int)v20[6]) = 80;
    }
    v20[22] = v17;
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
    v31 = v53;
    v32 = *((_QWORD *)v53 + 65);
    v58 = *(_OWORD *)(v32 + 64);
    v59 = *(_QWORD *)(v32 + 80);
    *(_QWORD *)(*((_QWORD *)v53 + 65) + 72LL) = v15;
    v33 = 0LL;
    if ( a1 )
      v33 = *a1;
    *(_QWORD *)(*((_QWORD *)v31 + 65) + 64LL) = v33;
    v34 = a1 ? *(_QWORD *)(a1[5] + 224) : 0LL;
    *(_QWORD *)(*((_QWORD *)v31 + 65) + 80LL) = v34;
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v53);
    EtwTraceBeginCallback(35LL);
    *((_QWORD *)v20 + 2) = 0LL;
    v35 = KeUserModeCallback(35LL, v20, (unsigned int)*v20, &Src, &v45);
    EtwTraceEndCallback(35LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v53);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v36);
    v37 = *((_QWORD *)v31 + 65);
    *(_OWORD *)(v37 + 64) = v58;
    *(_QWORD *)(v37 + 80) = v59;
    if ( v35 >= 0 && v45 == 24 )
    {
      *(_QWORD *)v49 = 0LL;
      RtlCopyFromUser(v49, Src, 8uLL);
      v38 = *(_QWORD *)v49;
      v50 = *(_QWORD *)v49;
      if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
        goto LABEL_53;
      if ( !*(_QWORD *)v49 )
      {
        if ( *(_QWORD *)v48 )
        {
          v42 = *(_WORD **)(v8 + 8);
          if ( *(int *)(v8 + 4) >= 0 )
            *v42 = 0;
          else
            *(_BYTE *)v42 = 0;
        }
        goto LABEL_53;
      }
      v60 = 0LL;
      v61 = 0LL;
      RtlCopyFromUser(&v60, Src, 0x18uLL);
      v63 = v60;
      v64 = v61;
      v41 = *((_QWORD *)PtiCurrent(v40, v39) + 69);
      if ( !v41 || (*(_DWORD *)(v41 + 84) & 1) == 0 || *(_QWORD *)(v41 + 96) != v8 )
      {
        v38 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v63, v38, *(_DWORD *)(v8 + 4) >> 31, v46);
        v50 = v38;
        CopyOutputString((volatile void **)&v63, (struct _LARGE_STRING *)v8, v48[0], v46);
        goto LABEL_53;
      }
    }
  }
LABEL_52:
  v38 = 0LL;
  v50 = 0LL;
LABEL_53:
  v43 = v65;
  if ( v55 != v65 )
  {
    v43 = v66;
    if ( v55 != v66 )
    {
      v44 = (PVOID *)(v55 + 32);
      if ( *((_QWORD *)v55 + 4) )
      {
        v52 = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v44, &v52, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v56, (__int64)v44);
    }
  }
  if ( v47 )
  {
    _InterlockedAnd((volatile signed __int32 *)PtiCurrent((__int64)v43, v13) + 132, 0xF7FFFFFF);
    return v50;
  }
  return v38;
}
