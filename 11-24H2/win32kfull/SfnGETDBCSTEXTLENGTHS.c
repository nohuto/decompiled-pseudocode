/*
 * XREFs of SfnGETDBCSTEXTLENGTHS @ 0x140184A70
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
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14011349C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1401753E8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x140196E58 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x140198814 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall SfnGETDBCSTEXTLENGTHS(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v9; // r13d
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // rsi
  __int64 *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v21; // rcx
  int v22; // ecx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct tagTHREADINFO *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int8 *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct tagTHREADINFO *v37; // rax
  __int64 v38; // rax
  int v39; // r10d
  __int64 v40; // rax
  int v41; // r14d
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // esi
  __int64 v47; // rsi
  PVOID *v48; // rdx
  __int64 v49; // [rsp+30h] [rbp-438h]
  int v50; // [rsp+38h] [rbp-430h]
  int v51; // [rsp+3Ch] [rbp-42Ch] BYREF
  int v52; // [rsp+40h] [rbp-428h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+48h] [rbp-420h] BYREF
  __int64 v54; // [rsp+58h] [rbp-410h]
  unsigned int v55[2]; // [rsp+60h] [rbp-408h] BYREF
  unsigned int v56; // [rsp+68h] [rbp-400h]
  void *v57; // [rsp+90h] [rbp-3D8h] BYREF
  __int64 v58; // [rsp+98h] [rbp-3D0h]
  __int64 v59; // [rsp+A0h] [rbp-3C8h] BYREF
  void *Src; // [rsp+A8h] [rbp-3C0h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-3B8h] BYREF
  __int128 v62; // [rsp+B8h] [rbp-3B0h] BYREF
  void (*v63)(void *); // [rsp+C8h] [rbp-3A0h]
  char v64[8]; // [rsp+E0h] [rbp-388h] BYREF
  unsigned int v65[2]; // [rsp+E8h] [rbp-380h]
  __int128 v66; // [rsp+F0h] [rbp-378h]
  __int64 v67; // [rsp+100h] [rbp-368h]
  __int128 v68; // [rsp+108h] [rbp-360h]
  __int64 v69; // [rsp+118h] [rbp-350h]
  __int128 v70; // [rsp+120h] [rbp-348h] BYREF
  __int64 v71; // [rsp+130h] [rbp-338h]
  ULONG_PTR v72[2]; // [rsp+138h] [rbp-330h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+148h] [rbp-320h] BYREF
  __int64 v74; // [rsp+158h] [rbp-310h] BYREF
  int v75; // [rsp+160h] [rbp-308h]
  int v76; // [rsp+164h] [rbp-304h]
  __int64 v77; // [rsp+168h] [rbp-300h]
  __int64 v78; // [rsp+170h] [rbp-2F8h]
  __int64 v79; // [rsp+178h] [rbp-2F0h]
  __int128 v80; // [rsp+1B0h] [rbp-2B8h] BYREF
  __int64 v81; // [rsp+1C0h] [rbp-2A8h]
  unsigned __int8 v82[96]; // [rsp+1D0h] [rbp-298h] BYREF
  unsigned __int8 v83[512]; // [rsp+230h] [rbp-238h] BYREF

  v54 = a4;
  v59 = a3;
  v9 = a2;
  LODWORD(RegionSize[0]) = a4 != 0;
  v50 = a7 & 1;
  Src = 0LL;
  v51 = 0;
  v66 = 0LL;
  v67 = 0LL;
  v11 = PtiCurrent((_DWORD)a4 != 0, a2);
  v12 = v11;
  v13 = a1 + 5;
  if ( a1 )
    v14 = *v13 - *((_QWORD *)v11 + 64);
  else
    v14 = 0LL;
  if ( !a1 )
    return 0LL;
  *(_QWORD *)v55 = *(_QWORD *)(*v13 + 120);
  v76 = 0;
  v74 = v14;
  v75 = v9;
  v77 = a3;
  v78 = a5;
  v79 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v15 = *((_QWORD *)v12 + 65);
  v66 = *(_OWORD *)(v15 + 64);
  v67 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 72LL) = v14;
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 64LL) = *a1;
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 80LL) = *(_QWORD *)(*v13 + 224);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v64);
  EtwTraceBeginCallback(6LL);
  v16 = KeUserModeCallback(6LL, &v74, 40LL, &Src, &v51);
  EtwTraceEndCallback(6LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v64);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v17);
  v18 = *((_QWORD *)v12 + 65);
  *(_OWORD *)(v18 + 64) = v66;
  *(_QWORD *)(v18 + 80) = v67;
  if ( v16 < 0 || v51 != 24 )
    return 0LL;
  v61 = 0LL;
  RtlCopyFromUser(&v61, Src, 8uLL);
  v19 = v61;
  v49 = v61;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 || (int)v61 <= 0 || LODWORD(RegionSize[0]) == v50 )
    return v49;
  if ( *(_QWORD *)(*v13 + 120) != *(_QWORD *)v55 )
    return 2 * v61;
  v21 = 0LL;
  if ( v9 != 14 )
  {
    LOBYTE(v19) = 1;
    if ( HMValidateHandleNoSecure(*a1, v19) )
    {
      v22 = *(_DWORD *)(*v13 + 28);
      if ( v9 == 394 )
      {
        v23 = (v22 & 0x40) == 0;
        goto LABEL_20;
      }
      if ( v9 == 329 )
      {
        v23 = (*(_DWORD *)(*v13 + 28) & 0x200) == 0;
LABEL_20:
        if ( !v23 || (v23 = (v22 & 0x30) == 0, v21 = 1LL, v23) )
          v21 = 0LL;
        v24 = v49;
        if ( (_DWORD)v21 )
          v24 = 8LL;
        v49 = v24;
        goto LABEL_26;
      }
    }
    return 0LL;
  }
LABEL_26:
  if ( (_DWORD)v21 )
    return v49;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v21, v19) + 132, 0, 0) & 0x4000000) != 0 )
  {
    if ( (_DWORD)v54 )
      return 2 * v49;
    return v49;
  }
  v56 = v49 + 1;
  memset_0(v82, 0, sizeof(v82));
  v57 = 0LL;
  v52 = 0;
  v58 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v28 = PtiCurrent(v27, v26);
  v54 = *v13 - *((_QWORD *)v28 + 64);
  _InterlockedOr((volatile signed __int32 *)PtiCurrent(v30, v29) + 132, 0x4000000u);
  v31 = (unsigned int)(2 * (v49 + 1));
  if ( (a7 & 1) != 0 )
    v31 = (unsigned int)(v49 + 1);
  *(_QWORD *)v65 = (unsigned int)v31;
  v34 = AllocCallbackMessage(96, 1u, v31, v83, 0, 0x200uLL);
  RegionSize[1] = (ULONG_PTR)v34;
  if ( !v34 )
    return 0LL;
  PtiCurrent(v33, v32);
  v62 = 0LL;
  v63 = 0LL;
  if ( v34 != v82 && v34 != v83 )
  {
    v37 = PtiCurrent(v36, v35);
    *(_QWORD *)&v62 = *((_QWORD *)v37 + 48);
    *((_QWORD *)v37 + 48) = &v62;
    *((_QWORD *)&v62 + 1) = v34;
    v63 = Win32FreePool;
  }
  *((_QWORD *)v34 + 5) = v54;
  *((_DWORD *)v34 + 12) = v9 - 1;
  v38 = v56;
  if ( v9 != 14 )
    v38 = v59;
  *((_QWORD *)v34 + 7) = v38;
  *((_QWORD *)v34 + 8) = a5;
  *((_QWORD *)v34 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v34, v65[0], (void **)v34 + 10) < 0 )
    goto LABEL_48;
  *((_DWORD *)v34 + 22) = v39;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v72, (__int64)a1);
  v40 = *((_QWORD *)v28 + 65);
  v68 = *(_OWORD *)(v40 + 64);
  v69 = *(_QWORD *)(v40 + 80);
  *(_QWORD *)(*((_QWORD *)v28 + 65) + 72LL) = v54;
  *(_QWORD *)(*((_QWORD *)v28 + 65) + 64LL) = *a1;
  *(_QWORD *)(*((_QWORD *)v28 + 65) + 80LL) = *(_QWORD *)(*v13 + 224);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v59);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v34 + 2) = 0LL;
  v41 = KeUserModeCallback(35LL, v34, *(unsigned int *)v34, &v57, &v52);
  EtwTraceEndCallback(35LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v59);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v72, v42);
  v43 = *((_QWORD *)v28 + 65);
  *(_OWORD *)(v43 + 64) = v68;
  *(_QWORD *)(v43 + 80) = v69;
  if ( v41 < 0 )
    goto LABEL_48;
  if ( v52 == 24 )
  {
    *(_QWORD *)v55 = 0LL;
    RtlCopyFromUser(v55, v57, 8uLL);
    v46 = v55[0];
    v58 = *(_QWORD *)v55;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (int)v55[0] > 0 )
    {
      v70 = 0LL;
      v71 = 0LL;
      RtlCopyFromUser(&v70, v57, 0x18uLL);
      v80 = v70;
      v81 = v71;
      v58 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v80, v46, RegionSize[0], v50);
    }
    _InterlockedAnd((volatile signed __int32 *)PtiCurrent(v45, v44) + 132, 0xFBFFFFFF);
    v47 = v58;
  }
  else
  {
LABEL_48:
    v47 = 0LL;
  }
  if ( v34 != v82 && v34 != v83 )
  {
    v48 = (PVOID *)(v34 + 32);
    if ( *((_QWORD *)v34 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v48, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v62, (__int64)v48);
  }
  return v47;
}
