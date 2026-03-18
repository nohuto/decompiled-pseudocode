/*
 * XREFs of SfnINOUTNCCALCSIZE @ 0x14017DAE0
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
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x14019A344 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

ULONG_PTR __fastcall SfnINOUTNCCALCSIZE(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r12d
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // rdi
  unsigned int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int Count; // eax
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG_PTR v23; // rdi
  _OWORD *v24; // rbx
  __int128 v25; // xmm0
  __int64 v26; // rax
  int v28[8]; // [rsp+30h] [rbp-198h] BYREF
  void *Src; // [rsp+50h] [rbp-178h] BYREF
  ULONG_PTR v30[3]; // [rsp+58h] [rbp-170h] BYREF
  char v31[8]; // [rsp+70h] [rbp-158h] BYREF
  __int128 v32; // [rsp+78h] [rbp-150h]
  __int64 v33; // [rsp+88h] [rbp-140h]
  __int128 v34; // [rsp+90h] [rbp-138h] BYREF
  volatile void *Address; // [rsp+A0h] [rbp-128h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+A8h] [rbp-120h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-108h]
  __int128 v38; // [rsp+E8h] [rbp-E0h]
  volatile void *v39; // [rsp+F8h] [rbp-D0h]
  __int64 v40; // [rsp+100h] [rbp-C8h] BYREF
  int v41; // [rsp+108h] [rbp-C0h]
  __int64 v42; // [rsp+110h] [rbp-B8h]
  __int64 v43; // [rsp+118h] [rbp-B0h]
  __int64 v44; // [rsp+120h] [rbp-A8h]
  __int128 v45; // [rsp+128h] [rbp-A0h]
  __int128 v46; // [rsp+138h] [rbp-90h]
  __int128 v47; // [rsp+148h] [rbp-80h]
  __int128 *v48; // [rsp+158h] [rbp-70h]
  __int128 v49; // [rsp+160h] [rbp-68h]
  __int128 v50; // [rsp+170h] [rbp-58h]
  __int64 v51; // [rsp+180h] [rbp-48h]

  v10 = a2;
  Src = 0LL;
  v28[0] = 0;
  v32 = 0LL;
  v33 = 0LL;
  v12 = PtiCurrent((__int64)a1, a2);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 64);
  else
    v14 = 0LL;
  v15 = 136;
  memset_0(&v40, 0, 0x88uLL);
  v40 = v14;
  v41 = v10;
  v42 = a3;
  v43 = a5;
  v44 = a6;
  v45 = *a4;
  if ( a3 )
  {
    v46 = a4[1];
    v47 = a4[2];
    v48 = (__int128 *)*((_QWORD *)a4 + 6);
    *((_DWORD *)v48 + 9) = 0;
    v49 = *v48;
    v50 = v48[1];
    v51 = *((_QWORD *)v48 + 4);
    v48 = 0LL;
  }
  else
  {
    v15 = 56;
  }
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v16 = *((_QWORD *)v13 + 65);
  v32 = *(_OWORD *)(v16 + 64);
  v33 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 72LL) = v14;
  v17 = 0LL;
  if ( a1 )
    v17 = *a1;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 80LL) = v18;
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
    KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v31);
  EtwTraceBeginCallback(21LL);
  v20 = KeUserModeCallback(21LL, &v40, v15, &Src, v28);
  EtwTraceEndCallback(21LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v31);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v21);
  v22 = *((_QWORD *)v13 + 65);
  *(_OWORD *)(v22 + 64) = v32;
  *(_QWORD *)(v22 + 80) = v33;
  if ( v20 < 0 || v28[0] != 24 )
    return 0LL;
  v30[0] = 0LL;
  RtlCopyFromUser(v30, Src, 8uLL);
  v23 = v30[0];
  BugCheckParameter3[2] = v30[0];
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v34 = 0LL;
    Address = 0LL;
    RtlCopyFromUser(&v34, Src, 0x18uLL);
    v38 = v34;
    v39 = Address;
    v24 = Address;
    ProbeForRead(Address, 0x60uLL, 4u);
    v25 = *v24;
    if ( a3 )
    {
      v37 = *((_QWORD *)a4 + 6);
      v26 = v37;
      *a4 = v25;
      a4[1] = v24[1];
      a4[2] = v24[2];
      *((_QWORD *)a4 + 6) = *((_QWORD *)v24 + 6);
      *(_OWORD *)v26 = *(_OWORD *)((char *)v24 + 56);
      *(_OWORD *)(v26 + 16) = *(_OWORD *)((char *)v24 + 72);
      *(_QWORD *)(v26 + 32) = *((_QWORD *)v24 + 11);
      *((_QWORD *)a4 + 6) = v26;
    }
    else
    {
      *a4 = v25;
    }
  }
  return v23;
}
