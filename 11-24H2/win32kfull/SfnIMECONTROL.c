/*
 * XREFs of SfnIMECONTROL @ 0x1401E57B0
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
 *     WCSToMBEx @ 0x14011C884 (WCSToMBEx.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1401753E8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x140198814 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?THREAD_CODEPAGE@@YAGXZ @ 0x14021CB70 (-THREAD_CODEPAGE@@YAGXZ.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x140250FE8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?CopyLogFontAtoW@@YAXPEAUtagLOGFONTW@@PEAUtagLOGFONTA@@@Z @ 0x1402B8290 (-CopyLogFontAtoW@@YAXPEAUtagLOGFONTW@@PEAUtagLOGFONTA@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

PCHAR __fastcall SfnIMECONTROL(
        ULONG_PTR a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  unsigned __int64 v14; // rcx
  struct tagTHREADINFO *v15; // r13
  CHAR *v16; // rbx
  __int64 v17; // rdx
  unsigned int v18; // esi
  unsigned __int8 *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rax
  size_t v24; // r8
  _OWORD *v25; // rdx
  __int64 v26; // rax
  _DWORD *v27; // rbx
  _WORD *v28; // rax
  int v29; // r12d
  int v30; // r12d
  _WORD *v31; // r13
  char *v32; // r15
  unsigned __int8 *v33; // r14
  unsigned __int16 v34; // ax
  __int16 v35; // ax
  __int16 v36; // cx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // esi
  __int64 v41; // rdx
  __int64 v42; // rcx
  PCHAR v43; // r14
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // r14d
  __int64 v48; // rdx
  __int64 v49; // rcx
  struct tagLOGFONTA *v50; // rbx
  struct tagLOGFONTA *v51; // rdx
  void *v52; // rcx
  PVOID *v53; // rdx
  ULONG v54; // [rsp+28h] [rbp-440h]
  int v55; // [rsp+30h] [rbp-438h] BYREF
  unsigned __int8 *v56; // [rsp+38h] [rbp-430h]
  int v57; // [rsp+40h] [rbp-428h] BYREF
  unsigned __int8 *v58; // [rsp+48h] [rbp-420h] BYREF
  CHAR *v59; // [rsp+50h] [rbp-418h] BYREF
  void *Src[6]; // [rsp+58h] [rbp-410h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-3E0h] BYREF
  struct tagTHREADINFO *v62; // [rsp+90h] [rbp-3D8h] BYREF
  _DWORD *v63; // [rsp+98h] [rbp-3D0h] BYREF
  __int128 v64; // [rsp+A0h] [rbp-3C8h]
  __int64 v65; // [rsp+B0h] [rbp-3B8h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B8h] [rbp-3B0h] BYREF
  __int128 v67; // [rsp+C8h] [rbp-3A0h] BYREF
  void (*v68)(void *); // [rsp+D8h] [rbp-390h]
  PCHAR v69; // [rsp+F8h] [rbp-370h]
  __int128 v70; // [rsp+100h] [rbp-368h] BYREF
  volatile void *Address; // [rsp+110h] [rbp-358h]
  ULONG_PTR v72[9]; // [rsp+118h] [rbp-350h] BYREF
  __int128 v73; // [rsp+160h] [rbp-308h]
  volatile void *v74; // [rsp+170h] [rbp-2F8h]
  _DWORD v75[28]; // [rsp+180h] [rbp-2E8h] BYREF
  _OWORD v76[4]; // [rsp+1F0h] [rbp-278h] BYREF
  unsigned __int8 v77[512]; // [rsp+230h] [rbp-238h] BYREF

  v57 = a2;
  v10 = (__int64 *)a1;
  RegionSize = a1;
  memset_0(v75, 0, 0x68uLL);
  Src[0] = 0LL;
  v55 = 0;
  v64 = 0LL;
  v65 = 0LL;
  v13 = PtiCurrent(v12, v11);
  v15 = v13;
  v62 = v13;
  if ( v10 )
    v16 = (CHAR *)(v10[5] - *((_QWORD *)v13 + 64));
  else
    v16 = 0LL;
  v59 = v16;
  switch ( a3 )
  {
    case 7LL:
    case 8LL:
      v18 = 32;
      goto LABEL_19;
    case 9LL:
    case 10LL:
      goto LABEL_17;
    case 11LL:
    case 12LL:
      v18 = 28;
LABEL_19:
      v17 = 1LL;
      break;
    case 17LL:
LABEL_17:
      v17 = 1LL;
      v18 = 32 * ((a7 & 1) == 0) + 60;
      break;
    case 24LL:
      v17 = 1LL;
      v14 = (unsigned __int64)*a4 << 9;
      if ( v14 > 0xFFFFFFFF )
        return 0LL;
      v18 = v14 + 4;
      if ( (int)v14 + 4 < (unsigned int)v14 )
        return 0LL;
      break;
    default:
      v17 = 0LL;
      v18 = 0;
      break;
  }
  if ( (_DWORD)v17 )
  {
    v20 = AllocCallbackMessage(104, v17, v18, v77, 1, 0x200uLL);
    v56 = v20;
    if ( !v20 )
      return 0LL;
  }
  else
  {
    v20 = (unsigned __int8 *)v75;
    v56 = (unsigned __int8 *)v75;
    v75[0] = 104;
  }
  PtiCurrent(v14, v17);
  v67 = 0LL;
  v68 = 0LL;
  if ( v20 != (unsigned __int8 *)v75 && v20 != v77 )
  {
    v23 = PtiCurrent(v22, v21);
    *(_QWORD *)&v67 = *((_QWORD *)v23 + 48);
    *((_QWORD *)v23 + 48) = &v67;
    *((_QWORD *)&v67 + 1) = v20;
    v68 = Win32FreePool;
  }
  *((_QWORD *)v20 + 5) = v16;
  *((_DWORD *)v20 + 12) = v57;
  *((_QWORD *)v20 + 7) = a3;
  *((_QWORD *)v20 + 8) = a4;
  *((_QWORD *)v20 + 9) = a5;
  *((_QWORD *)v20 + 10) = a6;
  if ( a3 != 7 )
  {
    if ( a3 == 8 )
      goto LABEL_35;
    if ( a3 != 9 )
    {
      if ( a3 == 10 )
        goto LABEL_35;
      if ( a3 != 11 )
      {
        if ( a3 == 12 )
          goto LABEL_35;
        if ( a3 != 17 )
        {
          if ( a3 != 24 )
            goto LABEL_56;
LABEL_35:
          switch ( a3 )
          {
            case 8LL:
              v24 = 32LL;
              break;
            case 12LL:
              v24 = 28LL;
              break;
            case 10LL:
              if ( (a7 & 1) != 0 )
              {
                memset(&v76[1], 0, 44);
                v58 = (unsigned __int8 *)&v76[1] + 12;
                v76[0] = *(_OWORD *)a4;
                *(_QWORD *)&v76[1] = *((_QWORD *)a4 + 2);
                DWORD2(v76[1]) = a4[6];
                WCSToMBEx(0, (WCHAR *)a4 + 14, -1, (PCHAR *)&v58, 32, v54);
                v24 = 60LL;
                v25 = v76;
                goto LABEL_55;
              }
              v24 = 92LL;
              break;
            default:
              if ( (a7 & 1) != 0 )
              {
                v58 = (unsigned __int8 *)&v57;
                v26 = Win32AllocPoolZInit(v18, 1835627349LL);
                v27 = (_DWORD *)v26;
                v63 = (_DWORD *)v26;
                if ( v26 )
                {
                  v28 = (_WORD *)(v26 + 4);
                  v29 = *a4;
                  *v27 = *a4;
                  v30 = v29 << 8;
                  if ( v30 )
                  {
                    v31 = v28;
                    v32 = (char *)((char *)a4 - (char *)v28);
                    v33 = (unsigned __int8 *)&v57;
                    do
                    {
                      --v30;
                      v33[1] = 0;
                      v34 = THREAD_CODEPAGE();
                      WCSToMBEx(v34, (WCHAR *)((char *)v31 + (_QWORD)(v32 + 4)), 1, (PCHAR *)&v58, 2, v54);
                      v33 = v58;
                      v35 = v58[1];
                      v36 = *v58;
                      if ( (_BYTE)v35 )
                        v36 = v35 | (v36 << 8);
                      *v31++ = v36;
                    }
                    while ( v30 );
                    v20 = v56;
                    v10 = (__int64 *)RegionSize;
                    v15 = v62;
                    v27 = v63;
                  }
                  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v20, v27, v18, (void **)v20 + 8) >= 0 )
                  {
                    Win32FreePool(v27);
                    goto LABEL_56;
                  }
                }
LABEL_83:
                v43 = 0LL;
                goto LABEL_84;
              }
              v24 = v18;
              break;
          }
          v25 = a4;
LABEL_55:
          if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v20, v25, v24, (void **)v20 + 8) >= 0 )
          {
LABEL_56:
            Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v10);
            v37 = *((_QWORD *)v15 + 65);
            v64 = *(_OWORD *)(v37 + 64);
            v65 = *(_QWORD *)(v37 + 80);
            *(_QWORD *)(*((_QWORD *)v15 + 65) + 72LL) = v59;
            if ( v10 )
              v38 = *v10;
            else
              v38 = 0LL;
            *(_QWORD *)(*((_QWORD *)v15 + 65) + 64LL) = v38;
            if ( v10 )
              v39 = *(_QWORD *)(v10[5] + 224);
            else
              v39 = 0LL;
            *(_QWORD *)(*((_QWORD *)v15 + 65) + 80LL) = v39;
            LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v63);
            EtwTraceBeginCallback(94LL);
            *((_QWORD *)v20 + 2) = 0LL;
            v40 = KeUserModeCallback(94LL, v20, *(unsigned int *)v20, Src, &v55);
            EtwTraceEndCallback(94LL);
            LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v63);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v41);
            v42 = *((_QWORD *)v15 + 65);
            *(_OWORD *)(v42 + 64) = v64;
            *(_QWORD *)(v42 + 80) = v65;
            if ( v40 >= 0 && v55 == 24 )
            {
              v58 = 0LL;
              RtlCopyFromUser(&v58, Src[0], 8uLL);
              v43 = (PCHAR)v58;
              v69 = (PCHAR)v58;
              goto LABEL_84;
            }
            goto LABEL_83;
          }
          goto LABEL_83;
        }
      }
    }
  }
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v20, v18, (void **)v20 + 11) < 0 )
    goto LABEL_83;
  *((_DWORD *)v20 + 24) = v18;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v72, (__int64)v10);
  v44 = *((_QWORD *)v15 + 65);
  v64 = *(_OWORD *)(v44 + 64);
  v65 = *(_QWORD *)(v44 + 80);
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 72LL) = v59;
  v45 = v10 ? *v10 : 0LL;
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 64LL) = v45;
  v46 = v10 ? *(_QWORD *)(v10[5] + 224) : 0LL;
  *(_QWORD *)(*((_QWORD *)v15 + 65) + 80LL) = v46;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v62);
  EtwTraceBeginCallback(94LL);
  *((_QWORD *)v20 + 2) = 0LL;
  v47 = KeUserModeCallback(94LL, v20, *(unsigned int *)v20, Src, &v55);
  EtwTraceEndCallback(94LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v62);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v72, v48);
  v49 = *((_QWORD *)v15 + 65);
  *(_OWORD *)(v49 + 64) = v64;
  *(_QWORD *)(v49 + 80) = v65;
  if ( v47 < 0 || v55 != 24 )
    goto LABEL_83;
  v59 = 0LL;
  RtlCopyFromUser(&v59, Src[0], 8uLL);
  v43 = v59;
  v69 = v59;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_84;
  v70 = 0LL;
  Address = 0LL;
  RtlCopyFromUser(&v70, Src[0], 0x18uLL);
  v73 = v70;
  v74 = Address;
  v50 = (struct tagLOGFONTA *)Address;
  ProbeForRead(Address, v18, 4u);
  if ( a3 == 7 || a3 == 11 )
  {
    v51 = v50;
    v52 = a4;
  }
  else
  {
    v51 = v50;
    v52 = a4;
    if ( (a7 & 1) != 0 )
    {
      *((_BYTE *)v50 + v18 - 1) = 0;
      CopyLogFontAtoW((struct tagLOGFONTW *)a4, v50);
      goto LABEL_84;
    }
  }
  memmove(v52, v51, v18);
LABEL_84:
  if ( v20 != (unsigned __int8 *)v75 && v20 != v77 )
  {
    v53 = (PVOID *)(v20 + 32);
    if ( *((_QWORD *)v20 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v53, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v67, (__int64)v53);
  }
  return v43;
}
