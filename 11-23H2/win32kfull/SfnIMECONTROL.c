/*
 * XREFs of SfnIMECONTROL @ 0x1C0206190
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00E01D4 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E7F58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00E7FF8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?THREAD_CODEPAGE@@YAGXZ @ 0x1C0204B1C (-THREAD_CODEPAGE@@YAGXZ.c)
 *     MBToWCSEx @ 0x1C024B444 (MBToWCSEx.c)
 *     WCSToMBEx @ 0x1C024B744 (WCSToMBEx.c)
 */

__int64 __fastcall SfnIMECONTROL(
        __int64 *a1,
        int a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagTHREADINFO *v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rdx
  unsigned int v21; // esi
  char v23; // r15
  unsigned __int8 *v24; // rdi
  unsigned int v25; // r8d
  char *v26; // rdx
  int *v27; // rbx
  _DWORD *v28; // rax
  char *v29; // r13
  int v30; // r15d
  int v31; // r15d
  _WORD *v32; // r14
  signed __int64 v33; // r12
  unsigned __int16 v34; // ax
  __int16 v35; // ax
  __int16 v36; // cx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  struct tagTHREADINFO *v40; // r15
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // r14d
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 *v51; // r15
  __int64 v52; // r15
  ULONG64 v53; // rcx
  char *v54; // xmm0_8
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  struct tagTHREADINFO *v59; // r15
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // esi
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rcx
  __int64 *v70; // rcx
  _BYTE v71[4]; // [rsp+30h] [rbp-438h] BYREF
  int v72; // [rsp+34h] [rbp-434h] BYREF
  unsigned __int8 *v73; // [rsp+38h] [rbp-430h]
  int v74; // [rsp+40h] [rbp-428h] BYREF
  unsigned __int64 v75; // [rsp+48h] [rbp-420h] BYREF
  unsigned __int8 *v76; // [rsp+50h] [rbp-418h] BYREF
  ULONG_PTR RegionSize[7]; // [rsp+58h] [rbp-410h] BYREF
  __int64 v78; // [rsp+90h] [rbp-3D8h]
  struct tagTHREADINFO *v79; // [rsp+98h] [rbp-3D0h]
  __int128 v80; // [rsp+A0h] [rbp-3C8h]
  __int64 v81; // [rsp+B0h] [rbp-3B8h]
  __int64 *v82; // [rsp+C8h] [rbp-3A0h]
  __int64 v83; // [rsp+D8h] [rbp-390h]
  __int128 v84; // [rsp+E8h] [rbp-380h] BYREF
  __int64 v85; // [rsp+F8h] [rbp-370h]
  __int128 v86; // [rsp+100h] [rbp-368h] BYREF
  __int64 v87; // [rsp+110h] [rbp-358h]
  __int128 v88; // [rsp+150h] [rbp-318h]
  volatile void *Address; // [rsp+160h] [rbp-308h]
  __int128 v90; // [rsp+168h] [rbp-300h]
  char *v91; // [rsp+178h] [rbp-2F0h]
  _DWORD v92[28]; // [rsp+180h] [rbp-2E8h] BYREF
  _OWORD v93[4]; // [rsp+1F0h] [rbp-278h] BYREF
  unsigned __int8 v94[512]; // [rsp+230h] [rbp-238h] BYREF

  v74 = a2;
  v10 = a1;
  v82 = a1;
  memset_0(v92, 0, 0x68uLL);
  v75 = 0LL;
  v72 = 0;
  v84 = 0LL;
  v85 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v15 = PtiCurrentShared(v12, v11, v13, v14);
  v79 = v15;
  if ( v10 )
    v19 = v10[5] - *((_QWORD *)v15 + 59);
  else
    v19 = 0LL;
  v78 = v19;
  if ( a3 > 0x18 )
  {
LABEL_19:
    v20 = 0LL;
    v21 = 0;
    goto LABEL_20;
  }
  switch ( (_DWORD)a3 )
  {
    case 7:
    case 8:
      v20 = 1LL;
      v21 = 32;
      break;
    case 9:
    case 0xA:
      goto LABEL_17;
    case 0xB:
    case 0xC:
      v20 = 1LL;
      v21 = 28;
      break;
    case 0x11:
LABEL_17:
      v20 = 1LL;
      v23 = a7;
      v21 = 32 * ((a7 & 1) == 0) + 60;
      goto LABEL_21;
    case 0x18:
      v20 = 1LL;
      v16 = (unsigned __int64)*a4 << 9;
      if ( v16 > 0xFFFFFFFF )
        return 0LL;
      v21 = v16 + 4;
      if ( (int)v16 + 4 < (unsigned int)v16 )
        return 0LL;
      break;
    default:
      goto LABEL_19;
  }
LABEL_20:
  v23 = a7;
LABEL_21:
  if ( (_DWORD)v20 )
  {
    v24 = AllocCallbackMessage(104, v20, v21, v94, 1, 0x200uLL);
    v73 = v24;
    if ( !v24 )
      return 0LL;
  }
  else
  {
    v24 = (unsigned __int8 *)v92;
    v73 = (unsigned __int8 *)v92;
    v92[0] = 104;
  }
  PtiCurrentShared(v16, v20, v17, v18);
  v86 = 0LL;
  v87 = 0LL;
  if ( v24 != (unsigned __int8 *)v92 && v24 != v94 )
    PushW32ThreadLock((__int64)v24, &v86, (__int64)Win32FreePool);
  *((_QWORD *)v24 + 5) = v19;
  *((_DWORD *)v24 + 12) = v74;
  *((_QWORD *)v24 + 7) = a3;
  *((_QWORD *)v24 + 8) = a4;
  *((_QWORD *)v24 + 9) = a5;
  *((_QWORD *)v24 + 10) = a6;
  if ( a3 > 0x18 )
    goto LABEL_83;
  if ( (_DWORD)a3 == 7 )
    goto LABEL_60;
  if ( (_DWORD)a3 != 8 )
  {
    if ( (_DWORD)a3 == 9 )
      goto LABEL_60;
    if ( (_DWORD)a3 != 10 )
    {
      if ( (_DWORD)a3 == 11 )
        goto LABEL_60;
      if ( (_DWORD)a3 != 12 )
      {
        if ( (_DWORD)a3 != 17 )
        {
          if ( (_DWORD)a3 != 24 )
            goto LABEL_83;
          goto LABEL_37;
        }
LABEL_60:
        if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v24, v21, (void **)v24 + 11) >= 0 )
        {
          *((_DWORD *)v24 + 24) = v21;
          ThreadLock(v10, &v84);
          v40 = v79;
          v41 = *((_QWORD *)v79 + 60);
          *(_OWORD *)RegionSize = *(_OWORD *)(v41 + 64);
          v80 = *(_OWORD *)RegionSize;
          v81 = *(_QWORD *)(v41 + 80);
          *(_QWORD *)(v41 + 72) = v78;
          v42 = v10 ? *v10 : 0LL;
          *(_QWORD *)(*((_QWORD *)v40 + 60) + 64LL) = v42;
          v43 = v10 ? *(_QWORD *)(v10[5] + 224) : 0LL;
          *(_QWORD *)(*((_QWORD *)v40 + 60) + 80LL) = v43;
          LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
            (LeaveEnterCritProperDisposition *)v71,
            v37,
            v38,
            v39);
          EtwTraceBeginCallback(94LL);
          *((_QWORD *)v24 + 2) = 0LL;
          v44 = KeUserModeCallback(94LL, v24, *(unsigned int *)v24, &v75, &v72);
          EtwTraceEndCallback(94LL);
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition(
            (LeaveEnterCritProperDisposition *)v71,
            v45,
            v46);
          ThreadUnlock1(v48, v47, v49);
          v50 = *((_QWORD *)v40 + 60);
          *(_OWORD *)(v50 + 64) = *(_OWORD *)RegionSize;
          *(_QWORD *)(v50 + 80) = v81;
          if ( v44 >= 0 && v72 == 24 )
          {
            v51 = (__int64 *)v75;
            if ( v75 + 8 < v75 || v75 + 8 > MmUserProbeAddress )
              v51 = (__int64 *)MmUserProbeAddress;
            v52 = *v51;
            v83 = v52;
            if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
            {
              v53 = v75;
              if ( v75 + 24 < v75 || v75 + 24 > MmUserProbeAddress )
                v53 = MmUserProbeAddress;
              v88 = *(_OWORD *)v53;
              v54 = *(char **)(v53 + 16);
              Address = v54;
              v90 = v88;
              v91 = v54;
              ProbeForRead(v54, v21, 4u);
              if ( (_DWORD)a3 == 7 || (_DWORD)a3 == 11 || (a7 & 1) == 0 )
              {
                memmove(a4, v54, v21);
              }
              else
              {
                v54[v21 - 1] = 0;
                RegionSize[0] = (ULONG_PTR)(a4 + 7);
                *(_OWORD *)a4 = *(_OWORD *)v54;
                *((_QWORD *)a4 + 2) = *((_QWORD *)v54 + 2);
                a4[6] = *((_DWORD *)v54 + 6);
                memset_0(a4 + 7, 0, 0x40uLL);
                MBToWCSEx(v55, v54 + 28, 0xFFFFFFFFLL, RegionSize, 32);
              }
            }
            goto LABEL_96;
          }
        }
        goto LABEL_95;
      }
    }
  }
LABEL_37:
  switch ( a3 )
  {
    case 8uLL:
      v25 = 32;
      goto LABEL_45;
    case 0xCuLL:
      v25 = 28;
      goto LABEL_45;
    case 0xAuLL:
      if ( (v23 & 1) != 0 )
      {
        memset(&v93[1], 0, 44);
        v76 = (unsigned __int8 *)&v93[1] + 12;
        v93[0] = *(_OWORD *)a4;
        *(_QWORD *)&v93[1] = *((_QWORD *)a4 + 2);
        DWORD2(v93[1]) = a4[6];
        WCSToMBEx(0LL, a4 + 7, 0xFFFFFFFFLL, &v76, 32);
        v25 = 60;
        v26 = (char *)v93;
        goto LABEL_46;
      }
      v25 = 92;
LABEL_45:
      v26 = (char *)a4;
LABEL_46:
      if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v24, v26, v25, (void **)v24 + 8) < 0 )
        goto LABEL_95;
      goto LABEL_83;
  }
  if ( (v23 & 1) != 0 )
  {
    v27 = &v74;
    v76 = (unsigned __int8 *)&v74;
    v28 = (_DWORD *)Win32AllocPoolZInit(v21, 1835627349LL);
    v29 = (char *)v28;
    RegionSize[0] = (ULONG_PTR)v28;
    if ( !v28 )
      goto LABEL_95;
    v30 = *a4;
    *v28 = *a4;
    v31 = v30 << 8;
    if ( v31 )
    {
      v32 = v28 + 1;
      v33 = (char *)a4 - (char *)(v28 + 1);
      do
      {
        --v31;
        *((_BYTE *)v27 + 1) = 0;
        v34 = THREAD_CODEPAGE();
        WCSToMBEx(v34, (char *)v32 + v33 + 4, 1LL, &v76, 2);
        v27 = (int *)v76;
        v35 = v76[1];
        v36 = *v76;
        if ( (_BYTE)v35 )
          v36 = v35 | (v36 << 8);
        *v32++ = v36;
      }
      while ( v31 );
      v10 = v82;
      v29 = (char *)RegionSize[0];
    }
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v24, v29, v21, (void **)v24 + 8) < 0 )
      goto LABEL_95;
    Win32FreePool(v29);
  }
  else if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v24, (char *)a4, v21, (void **)v24 + 8) < 0 )
  {
    goto LABEL_95;
  }
LABEL_83:
  ThreadLock(v10, &v84);
  v59 = v79;
  v60 = *((_QWORD *)v79 + 60);
  *(_OWORD *)RegionSize = *(_OWORD *)(v60 + 64);
  v80 = *(_OWORD *)RegionSize;
  v81 = *(_QWORD *)(v60 + 80);
  *(_QWORD *)(v60 + 72) = v78;
  if ( v10 )
    v61 = *v10;
  else
    v61 = 0LL;
  *(_QWORD *)(*((_QWORD *)v59 + 60) + 64LL) = v61;
  if ( v10 )
    v62 = *(_QWORD *)(v10[5] + 224);
  else
    v62 = 0LL;
  *(_QWORD *)(*((_QWORD *)v59 + 60) + 80LL) = v62;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v71,
    v56,
    v57,
    v58);
  EtwTraceBeginCallback(94LL);
  *((_QWORD *)v24 + 2) = 0LL;
  v63 = KeUserModeCallback(94LL, v24, *(unsigned int *)v24, &v75, &v72);
  EtwTraceEndCallback(94LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v71, v64, v65);
  ThreadUnlock1(v67, v66, v68);
  v69 = *((_QWORD *)v59 + 60);
  *(_OWORD *)(v69 + 64) = *(_OWORD *)RegionSize;
  *(_QWORD *)(v69 + 80) = v81;
  if ( v63 >= 0 && v72 == 24 )
  {
    v70 = (__int64 *)v75;
    if ( v75 + 8 < v75 || v75 + 8 > MmUserProbeAddress )
      v70 = (__int64 *)MmUserProbeAddress;
    v52 = *v70;
    v83 = *v70;
    goto LABEL_96;
  }
LABEL_95:
  v52 = 0LL;
LABEL_96:
  if ( v24 != (unsigned __int8 *)v92 && v24 != v94 )
  {
    if ( *((_QWORD *)v24 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v24 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v86);
  }
  return v52;
}
