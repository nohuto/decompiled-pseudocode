/*
 * XREFs of SfnINOUTMENUGETOBJECT @ 0x1402B9A10
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
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

ULONG_PTR __fastcall SfnINOUTMENUGETOBJECT(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        ULONG_PTR a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG_PTR v23; // rdi
  _QWORD *v24; // rbx
  __int128 v26; // [rsp+58h] [rbp-100h]
  __int64 v27; // [rsp+68h] [rbp-F0h]
  __m128i v28; // [rsp+70h] [rbp-E8h] BYREF
  volatile void *Address; // [rsp+80h] [rbp-D8h]
  ULONG_PTR BugCheckParameter3[7]; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-98h] BYREF
  int v32; // [rsp+C8h] [rbp-90h]
  __int64 v33; // [rsp+D0h] [rbp-88h]
  __int128 v34; // [rsp+D8h] [rbp-80h]
  __int128 v35; // [rsp+E8h] [rbp-70h]
  ULONG_PTR v36; // [rsp+F8h] [rbp-60h]
  __int64 v37; // [rsp+100h] [rbp-58h]
  __m128i v38; // [rsp+110h] [rbp-48h]
  volatile void *v39; // [rsp+120h] [rbp-38h]
  void *Src; // [rsp+160h] [rbp+8h] BYREF
  int v41; // [rsp+168h] [rbp+10h] BYREF

  v10 = a2;
  Src = 0LL;
  v41 = 0;
  v12 = PtiCurrent((__int64)a1, a2);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 64);
  else
    v14 = 0LL;
  memset_0(&v31, 0, 0x48uLL);
  v31 = v14;
  v32 = v10;
  v33 = a3;
  v34 = *a4;
  v35 = a4[1];
  v36 = a5;
  v37 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v17 = *((_QWORD *)v13 + 65);
  v26 = *(_OWORD *)(v17 + 64);
  v27 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 80LL) = v19;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a6, v15, v16);
  EtwTraceBeginCallback(102LL);
  v20 = KeUserModeCallback(102LL, &v31, 72LL, &Src, &v41);
  EtwTraceEndCallback(102LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a6);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v21);
  v22 = *((_QWORD *)v13 + 65);
  *(_OWORD *)(v22 + 64) = v26;
  *(_QWORD *)(v22 + 80) = v27;
  if ( v20 >= 0 && v41 == 24 )
  {
    a5 = 0LL;
    RtlCopyFromUser(&a5, Src, 8uLL);
    v23 = a5;
    BugCheckParameter3[2] = a5;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v23;
    v28 = 0LL;
    Address = 0LL;
    RtlCopyFromUser(&v28, Src, 0x18uLL);
    v38 = v28;
    v39 = Address;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v28, 8)) == 8 )
    {
      v24 = Address;
      ProbeForRead(Address, 8uLL, 4u);
      *((_QWORD *)a4 + 3) = *v24;
      return v23;
    }
  }
  return 0LL;
}
